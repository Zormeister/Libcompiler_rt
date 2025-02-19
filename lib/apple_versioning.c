/* ===-- apple_versioning.c - Adds versioning symbols for ld ---------------===
 *
 *                     The LLVM Compiler Infrastructure
 *
 * This file is dual licensed under the MIT and the University of Illinois Open
 * Source Licenses. See LICENSE.TXT for details.
 *
 * ===----------------------------------------------------------------------===
 */


#if __APPLE__
  #include <Availability.h>
  
  #if __IPHONE_OS_VERSION_MIN_REQUIRED
    #define NOT_HERE_BEFORE_10_6(sym) 
    #define NOT_HERE_IN_10_8_AND_EARLIER(sym) \
        extern const char sym##_tmp61 __asm("$ld$hide$os6.1$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp61 = 0; \
        extern const char sym##_tmp60 __asm("$ld$hide$os6.0$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp60 = 0; \
        extern const char sym##_tmp51 __asm("$ld$hide$os5.1$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp51 = 0; \
        extern const char sym##_tmp50 __asm("$ld$hide$os5.0$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp50 = 0;
    #define NOT_HERE_BEFORE_10_10(sym) // IDK what this would be. iOS 10 libcompiler_rt has nothing.
    #define NOT_HERE_BEFORE_10_14(sym) // IDK what this would be.

  #else
    #define NOT_HERE_BEFORE_10_6(sym) \
         extern const char sym##_tmp4 __asm("$ld$hide$os10.4$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp4 = 0; \
        extern const char sym##_tmp5 __asm("$ld$hide$os10.5$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp5 = 0; 
    #define NOT_HERE_IN_10_8_AND_EARLIER(sym) \
         extern const char sym##_tmp8 __asm("$ld$hide$os10.8$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp8 = 0; \
        extern const char sym##_tmp7 __asm("$ld$hide$os10.7$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp7 = 0; \
        extern const char sym##_tmp6 __asm("$ld$hide$os10.6$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp6 = 0;
    #define NOT_HERE_IN_10_10_AND_EARLIER(sym) \
        extern const char sym##_tmp10 __asm("$ld$hide$os10.10$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp10 = 0; \
        extern const char sym##_tmp9 __asm("$ld$hide$os10.9$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp9 = 0; \
        extern const char sym##_tmp8 __asm("$ld$hide$os10.8$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp8 = 0; \
        extern const char sym##_tmp7 __asm("$ld$hide$os10.7$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp7 = 0; \
        extern const char sym##_tmp6 __asm("$ld$hide$os10.6$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp6 = 0;

    #define NOT_HERE_IN_10_14_AND_EARLIER(sym) \
        extern const char sym##_tmp14 __asm("$ld$hide$os10.14$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp14 = 0; \
        extern const char sym##_tmp13 __asm("$ld$hide$os10.13$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp13 = 0; \
        extern const char sym##_tmp12 __asm("$ld$hide$os10.12$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp12 = 0; \
        extern const char sym##_tmp11 __asm("$ld$hide$os10.11$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp11 = 0; \
        extern const char sym##_tmp10 __asm("$ld$hide$os10.10$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp10 = 0; \
        extern const char sym##_tmp9 __asm("$ld$hide$os10.9$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp9 = 0; \
        extern const char sym##_tmp8 __asm("$ld$hide$os10.8$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp8 = 0; \
        extern const char sym##_tmp7 __asm("$ld$hide$os10.7$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp7 = 0; \
        extern const char sym##_tmp6 __asm("$ld$hide$os10.6$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp6 = 0;

  #endif 


/* Symbols in libSystem.dylib in 10.6 and later, 
 *  but are in libgcc_s.dylib in earlier versions
 */

NOT_HERE_BEFORE_10_6(__absvdi2)
NOT_HERE_BEFORE_10_6(__absvsi2)
NOT_HERE_BEFORE_10_6(__absvti2)
NOT_HERE_BEFORE_10_6(__addvdi3)
NOT_HERE_BEFORE_10_6(__addvsi3)
NOT_HERE_BEFORE_10_6(__addvti3)
NOT_HERE_BEFORE_10_6(__ashldi3)
NOT_HERE_BEFORE_10_6(__ashlti3)
NOT_HERE_BEFORE_10_6(__ashrdi3)
NOT_HERE_BEFORE_10_6(__ashrti3)
NOT_HERE_BEFORE_10_6(__clear_cache)
NOT_HERE_BEFORE_10_6(__clzdi2)
NOT_HERE_BEFORE_10_6(__clzsi2)
NOT_HERE_BEFORE_10_6(__clzti2)
NOT_HERE_BEFORE_10_6(__cmpdi2)
NOT_HERE_BEFORE_10_6(__cmpti2)
NOT_HERE_BEFORE_10_6(__ctzdi2)
NOT_HERE_BEFORE_10_6(__ctzsi2)
NOT_HERE_BEFORE_10_6(__ctzti2)
NOT_HERE_BEFORE_10_6(__divdc3)
NOT_HERE_BEFORE_10_6(__divdi3)
NOT_HERE_BEFORE_10_6(__divsc3)
//NOT_HERE_BEFORE_10_6(__divtc3)
NOT_HERE_BEFORE_10_6(__divti3)
NOT_HERE_BEFORE_10_6(__divxc3)
NOT_HERE_BEFORE_10_6(__enable_execute_stack)
NOT_HERE_BEFORE_10_6(__ffsdi2)
NOT_HERE_BEFORE_10_6(__ffsti2)
NOT_HERE_BEFORE_10_6(__fixdfdi)
NOT_HERE_BEFORE_10_6(__fixdfti)
NOT_HERE_BEFORE_10_6(__fixsfdi)
NOT_HERE_BEFORE_10_6(__fixsfti)
#if defined(CRT_HAS_128BIT) && defined(CRT_LDBL_128BIT)
NOT_HERE_BEFORE_10_6(__fixtfdi)
#endif
NOT_HERE_BEFORE_10_6(__fixunsdfdi)
NOT_HERE_BEFORE_10_6(__fixunsdfsi)
NOT_HERE_BEFORE_10_6(__fixunsdfti)
NOT_HERE_BEFORE_10_6(__fixunssfdi)
NOT_HERE_BEFORE_10_6(__fixunssfsi)
NOT_HERE_BEFORE_10_6(__fixunssfti)
#if defined(CRT_HAS_128BIT) && defined(CRT_LDBL_128BIT)
NOT_HERE_BEFORE_10_6(__fixunstfdi)
#endif
NOT_HERE_BEFORE_10_6(__fixunsxfdi)
NOT_HERE_BEFORE_10_6(__fixunsxfsi)
NOT_HERE_BEFORE_10_6(__fixunsxfti)
NOT_HERE_BEFORE_10_6(__fixxfdi)
NOT_HERE_BEFORE_10_6(__fixxfti)
NOT_HERE_BEFORE_10_6(__floatdidf)
NOT_HERE_BEFORE_10_6(__floatdisf)
#if defined(CRT_HAS_128BIT) && defined(CRT_LDBL_128BIT)
NOT_HERE_BEFORE_10_6(__floatditf)
#endif
NOT_HERE_BEFORE_10_6(__floatdixf)
NOT_HERE_BEFORE_10_6(__floattidf)
NOT_HERE_BEFORE_10_6(__floattisf)
NOT_HERE_BEFORE_10_6(__floattixf)
NOT_HERE_BEFORE_10_6(__floatundidf)
NOT_HERE_BEFORE_10_6(__floatundisf)
#if defined(CRT_HAS_128BIT) && defined(CRT_LDBL_128BIT)
NOT_HERE_BEFORE_10_6(__floatunditf)
#endif
NOT_HERE_BEFORE_10_6(__floatundixf)
NOT_HERE_BEFORE_10_6(__floatuntidf)
NOT_HERE_BEFORE_10_6(__floatuntisf)
NOT_HERE_BEFORE_10_6(__floatuntixf)
NOT_HERE_BEFORE_10_6(__gcc_personality_v0)
NOT_HERE_BEFORE_10_6(__lshrdi3)
NOT_HERE_BEFORE_10_6(__lshrti3)
NOT_HERE_BEFORE_10_6(__moddi3)
NOT_HERE_BEFORE_10_6(__modti3)
NOT_HERE_BEFORE_10_6(__muldc3)
NOT_HERE_BEFORE_10_6(__muldi3)
NOT_HERE_BEFORE_10_6(__mulsc3)
//NOT_HERE_BEFORE_10_6(__multc3)
NOT_HERE_BEFORE_10_6(__multi3)
NOT_HERE_BEFORE_10_6(__mulvdi3)
NOT_HERE_BEFORE_10_6(__mulvsi3)
NOT_HERE_BEFORE_10_6(__mulvti3)
NOT_HERE_BEFORE_10_6(__mulxc3)
NOT_HERE_BEFORE_10_6(__negdi2)
NOT_HERE_BEFORE_10_6(__negti2)
NOT_HERE_BEFORE_10_6(__negvdi2)
NOT_HERE_BEFORE_10_6(__negvsi2)
NOT_HERE_BEFORE_10_6(__negvti2)
NOT_HERE_BEFORE_10_6(__paritydi2)
NOT_HERE_BEFORE_10_6(__paritysi2)
NOT_HERE_BEFORE_10_6(__parityti2)
NOT_HERE_BEFORE_10_6(__popcountdi2)
NOT_HERE_BEFORE_10_6(__popcountsi2)
NOT_HERE_BEFORE_10_6(__popcountti2)
NOT_HERE_BEFORE_10_6(__powidf2)
NOT_HERE_BEFORE_10_6(__powisf2)
#if _ARCH_PPC
NOT_HERE_BEFORE_10_6(__powitf2)
#endif
NOT_HERE_BEFORE_10_6(__powixf2)
NOT_HERE_BEFORE_10_6(__subvdi3)
NOT_HERE_BEFORE_10_6(__subvsi3)
NOT_HERE_BEFORE_10_6(__subvti3)
NOT_HERE_BEFORE_10_6(__ucmpdi2)
NOT_HERE_BEFORE_10_6(__ucmpti2)
NOT_HERE_BEFORE_10_6(__udivdi3)
NOT_HERE_BEFORE_10_6(__udivmoddi4)
NOT_HERE_BEFORE_10_6(__udivmodti4)
NOT_HERE_BEFORE_10_6(__udivti3)
NOT_HERE_BEFORE_10_6(__umoddi3)
NOT_HERE_BEFORE_10_6(__umodti3)


#if __ppc__
NOT_HERE_BEFORE_10_6(__gcc_qadd)
NOT_HERE_BEFORE_10_6(__gcc_qdiv)
NOT_HERE_BEFORE_10_6(__gcc_qmul)
NOT_HERE_BEFORE_10_6(__gcc_qsub)
NOT_HERE_BEFORE_10_6(__trampoline_setup)
#endif /* __ppc__ */

NOT_HERE_IN_10_8_AND_EARLIER(__atomic_compare_exchange)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_compare_exchange_1)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_compare_exchange_2)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_compare_exchange_4)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_compare_exchange_8)

NOT_HERE_IN_10_8_AND_EARLIER(__atomic_exchange)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_exchange_1)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_exchange_2)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_exchange_4)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_exchange_8)

NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_add_1)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_add_2)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_add_4)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_add_8)

NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_and_1)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_and_2)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_and_4)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_and_8)

NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_or_1)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_or_2)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_or_4)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_or_8)

NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_sub_1)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_sub_2)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_sub_4)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_sub_8)

NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_xor_1)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_xor_2)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_xor_4)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_fetch_xor_8)

NOT_HERE_IN_10_8_AND_EARLIER(__atomic_load)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_load_1)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_load_2)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_load_4)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_load_8)

NOT_HERE_IN_10_8_AND_EARLIER(__atomic_store)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_store_1)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_store_2)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_store_4)
NOT_HERE_IN_10_8_AND_EARLIER(__atomic_store_8)

NOT_HERE_IN_10_10_AND_EARLIER(__extendhfsf2)
NOT_HERE_IN_10_10_AND_EARLIER(__truncdfhf2)
NOT_HERE_IN_10_10_AND_EARLIER(__truncsfhf2)

NOT_HERE_IN_10_10_AND_EARLIER(atomic_flag_clear)
NOT_HERE_IN_10_10_AND_EARLIER(atomic_flag_clear_explicit)
NOT_HERE_IN_10_10_AND_EARLIER(atomic_flag_test_and_set)
NOT_HERE_IN_10_10_AND_EARLIER(atomic_flag_test_and_set_explicit)

NOT_HERE_IN_10_10_AND_EARLIER(atomic_signal_fence)
NOT_HERE_IN_10_10_AND_EARLIER(atomic_thread_fence)

// ZORMEISTER: ARM64e/ARM64 macOS builds are showing that the SDK (MacOSX13.1.sdk on my Monterey host) being used has no such symbol. It's 100% there. I checked the TBD. It works just fine for x86_64.
NOT_HERE_IN_10_14_AND_EARLIER(__chkstk_darwin)

// ZORMEISTER: Account for ARM64/ARM64e macOS. (and maybe ARM32 desktop targets? who knows, I get up to some interesting things.)
// iOS 10 seems to have a restricted subset of the functions provided here?
#if __arm__ && __DYNAMIC__ && __IPHONE_OS_VERSION_MIN_REQUIRED
   #define NOT_HERE_UNTIL_AFTER_4_3(sym) \
        extern const char sym##_tmp1 __asm("$ld$hide$os3.0$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp1 = 0; \
        extern const char sym##_tmp2 __asm("$ld$hide$os3.1$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp2 = 0; \
        extern const char sym##_tmp3 __asm("$ld$hide$os3.2$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp3 = 0; \
        extern const char sym##_tmp4 __asm("$ld$hide$os4.0$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp4 = 0; \
        extern const char sym##_tmp5 __asm("$ld$hide$os4.1$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp5 = 0; \
        extern const char sym##_tmp6 __asm("$ld$hide$os4.2$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp6 = 0; \
        extern const char sym##_tmp7 __asm("$ld$hide$os4.3$_" #sym ); \
            __attribute__((visibility("default"))) const char sym##_tmp7 = 0; 
            
NOT_HERE_UNTIL_AFTER_4_3(__absvdi2)
NOT_HERE_UNTIL_AFTER_4_3(__absvsi2)
NOT_HERE_UNTIL_AFTER_4_3(__adddf3)
NOT_HERE_UNTIL_AFTER_4_3(__adddf3vfp)
NOT_HERE_UNTIL_AFTER_4_3(__addsf3)
NOT_HERE_UNTIL_AFTER_4_3(__addsf3vfp)
NOT_HERE_UNTIL_AFTER_4_3(__addvdi3)
NOT_HERE_UNTIL_AFTER_4_3(__addvsi3)
NOT_HERE_UNTIL_AFTER_4_3(__ashldi3)
NOT_HERE_UNTIL_AFTER_4_3(__ashrdi3)
NOT_HERE_UNTIL_AFTER_4_3(__bswapdi2)
NOT_HERE_UNTIL_AFTER_4_3(__bswapsi2)
NOT_HERE_UNTIL_AFTER_4_3(__clzdi2)
NOT_HERE_UNTIL_AFTER_4_3(__clzsi2)
NOT_HERE_UNTIL_AFTER_4_3(__cmpdi2)
NOT_HERE_UNTIL_AFTER_4_3(__ctzdi2)
NOT_HERE_UNTIL_AFTER_4_3(__ctzsi2)
NOT_HERE_UNTIL_AFTER_4_3(__divdc3)
NOT_HERE_UNTIL_AFTER_4_3(__divdf3)
NOT_HERE_UNTIL_AFTER_4_3(__divdf3vfp)
NOT_HERE_UNTIL_AFTER_4_3(__divdi3)
NOT_HERE_UNTIL_AFTER_4_3(__divsc3)
NOT_HERE_UNTIL_AFTER_4_3(__divsf3)
NOT_HERE_UNTIL_AFTER_4_3(__divsf3vfp)
NOT_HERE_UNTIL_AFTER_4_3(__divsi3)
NOT_HERE_UNTIL_AFTER_4_3(__eqdf2)
NOT_HERE_UNTIL_AFTER_4_3(__eqdf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__eqsf2)
NOT_HERE_UNTIL_AFTER_4_3(__eqsf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__extendsfdf2)
NOT_HERE_UNTIL_AFTER_4_3(__extendsfdf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__ffsdi2)
NOT_HERE_UNTIL_AFTER_4_3(__fixdfdi)
NOT_HERE_UNTIL_AFTER_4_3(__fixdfsi)
NOT_HERE_UNTIL_AFTER_4_3(__fixdfsivfp)
NOT_HERE_UNTIL_AFTER_4_3(__fixsfdi)
NOT_HERE_UNTIL_AFTER_4_3(__fixsfsi)
NOT_HERE_UNTIL_AFTER_4_3(__fixsfsivfp)
NOT_HERE_UNTIL_AFTER_4_3(__fixunsdfdi)
NOT_HERE_UNTIL_AFTER_4_3(__fixunsdfsi)
NOT_HERE_UNTIL_AFTER_4_3(__fixunsdfsivfp)
NOT_HERE_UNTIL_AFTER_4_3(__fixunssfdi)
NOT_HERE_UNTIL_AFTER_4_3(__fixunssfsi)
NOT_HERE_UNTIL_AFTER_4_3(__fixunssfsivfp)
NOT_HERE_UNTIL_AFTER_4_3(__floatdidf)
NOT_HERE_UNTIL_AFTER_4_3(__floatdisf)
NOT_HERE_UNTIL_AFTER_4_3(__floatsidf)
NOT_HERE_UNTIL_AFTER_4_3(__floatsidfvfp)
NOT_HERE_UNTIL_AFTER_4_3(__floatsisf)
NOT_HERE_UNTIL_AFTER_4_3(__floatsisfvfp)
NOT_HERE_UNTIL_AFTER_4_3(__floatundidf)
NOT_HERE_UNTIL_AFTER_4_3(__floatundisf)
NOT_HERE_UNTIL_AFTER_4_3(__floatunsidf)
NOT_HERE_UNTIL_AFTER_4_3(__floatunsisf)
NOT_HERE_UNTIL_AFTER_4_3(__floatunssidfvfp)
NOT_HERE_UNTIL_AFTER_4_3(__floatunssisfvfp)
NOT_HERE_UNTIL_AFTER_4_3(__gedf2)
NOT_HERE_UNTIL_AFTER_4_3(__gedf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__gesf2)
NOT_HERE_UNTIL_AFTER_4_3(__gesf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__gtdf2)
NOT_HERE_UNTIL_AFTER_4_3(__gtdf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__gtsf2)
NOT_HERE_UNTIL_AFTER_4_3(__gtsf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__ledf2)
NOT_HERE_UNTIL_AFTER_4_3(__ledf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__lesf2)
NOT_HERE_UNTIL_AFTER_4_3(__lesf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__lshrdi3)
NOT_HERE_UNTIL_AFTER_4_3(__ltdf2)
NOT_HERE_UNTIL_AFTER_4_3(__ltdf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__ltsf2)
NOT_HERE_UNTIL_AFTER_4_3(__ltsf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__moddi3)
NOT_HERE_UNTIL_AFTER_4_3(__modsi3)
NOT_HERE_UNTIL_AFTER_4_3(__muldc3)
NOT_HERE_UNTIL_AFTER_4_3(__muldf3)
NOT_HERE_UNTIL_AFTER_4_3(__muldf3vfp)
NOT_HERE_UNTIL_AFTER_4_3(__muldi3)
NOT_HERE_UNTIL_AFTER_4_3(__mulsc3)
NOT_HERE_UNTIL_AFTER_4_3(__mulsf3)
NOT_HERE_UNTIL_AFTER_4_3(__mulsf3vfp)
NOT_HERE_UNTIL_AFTER_4_3(__mulvdi3)
NOT_HERE_UNTIL_AFTER_4_3(__mulvsi3)
NOT_HERE_UNTIL_AFTER_4_3(__nedf2)
NOT_HERE_UNTIL_AFTER_4_3(__nedf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__negdi2)
NOT_HERE_UNTIL_AFTER_4_3(__negvdi2)
NOT_HERE_UNTIL_AFTER_4_3(__negvsi2)
NOT_HERE_UNTIL_AFTER_4_3(__nesf2)
NOT_HERE_UNTIL_AFTER_4_3(__nesf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__paritydi2)
NOT_HERE_UNTIL_AFTER_4_3(__paritysi2)
NOT_HERE_UNTIL_AFTER_4_3(__popcountdi2)
NOT_HERE_UNTIL_AFTER_4_3(__popcountsi2)
NOT_HERE_UNTIL_AFTER_4_3(__powidf2)
NOT_HERE_UNTIL_AFTER_4_3(__powisf2)
NOT_HERE_UNTIL_AFTER_4_3(__subdf3)
NOT_HERE_UNTIL_AFTER_4_3(__subdf3vfp)
NOT_HERE_UNTIL_AFTER_4_3(__subsf3)
NOT_HERE_UNTIL_AFTER_4_3(__subsf3vfp)
NOT_HERE_UNTIL_AFTER_4_3(__subvdi3)
NOT_HERE_UNTIL_AFTER_4_3(__subvsi3)
NOT_HERE_UNTIL_AFTER_4_3(__truncdfsf2)
NOT_HERE_UNTIL_AFTER_4_3(__truncdfsf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__ucmpdi2)
NOT_HERE_UNTIL_AFTER_4_3(__udivdi3)
NOT_HERE_UNTIL_AFTER_4_3(__udivmoddi4)
NOT_HERE_UNTIL_AFTER_4_3(__udivsi3)
NOT_HERE_UNTIL_AFTER_4_3(__umoddi3)
NOT_HERE_UNTIL_AFTER_4_3(__umodsi3)
NOT_HERE_UNTIL_AFTER_4_3(__unorddf2)
NOT_HERE_UNTIL_AFTER_4_3(__unorddf2vfp)
NOT_HERE_UNTIL_AFTER_4_3(__unordsf2)
NOT_HERE_UNTIL_AFTER_4_3(__unordsf2vfp)

NOT_HERE_UNTIL_AFTER_4_3(__divmodsi4)
NOT_HERE_UNTIL_AFTER_4_3(__udivmodsi4)
#endif // __arm__ && __DYNAMIC__

       
       


#else /* !__APPLE__ */

extern int avoid_empty_file;

#endif /* !__APPLE__*/
