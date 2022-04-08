#include <iostream>
using namespace std;

int main() 
{
    printf("hello!");
    return 0;
}

/*

Owners-MacBook-Pro:Basics owner$ valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20  -v ./hello
==84513== Memcheck, a memory error detector
==84513== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==84513== Using Valgrind-3.14.0-353a3587bb-20181007X and LibVEX; rerun with -h for copyright info
==84513== Command: ./hello
==84513== 
--84513-- Valgrind options:
--84513--    --tool=memcheck
--84513--    --leak-check=yes
--84513--    --show-reachable=yes
--84513--    --num-callers=20
--84513--    -v
--84513-- Output from sysctl({CTL_KERN,KERN_VERSION}):
--84513--   Darwin Kernel Version 17.7.0: Thu Jun 21 22:53:14 PDT 2018; root:xnu-4570.71.2~1/RELEASE_X86_64
--84513-- Arch and hwcaps: AMD64, LittleEndian, amd64-cx16-lzcnt-rdtscp-sse3-avx-avx2-bmi
--84513-- Page sizes: currently 4096, max supported 4096
--84513-- Valgrind library directory: /usr/local/Cellar/valgrind/3.14.0/lib/valgrind
--84513-- ./hello (rx at 0x100000000, rw at 0x100001000)
--84513--    reading syms   from primary file (2 0)
--84513--    dSYM= ./hello.dSYM/Contents/Resources/DWARF/hello
--84513-- /usr/lib/dyld (rx at 0x100003000, rw at 0x10004e000)
--84513--    reading syms   from primary file (5 1487)
--84513-- Scheduler: using generic scheduler lock implementation.
--84513-- Reading suppressions file: /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/default.supp
==84513== embedded gdbserver: reading from /var/folders/08/6drrxkw13_d4s1361c04dd300000gn/T//vgdb-pipe-from-vgdb-to-84513-by-owner-on-???
==84513== embedded gdbserver: writing to   /var/folders/08/6drrxkw13_d4s1361c04dd300000gn/T//vgdb-pipe-to-vgdb-from-84513-by-owner-on-???
==84513== embedded gdbserver: shared mem   /var/folders/08/6drrxkw13_d4s1361c04dd300000gn/T//vgdb-pipe-shared-mem-vgdb-84513-by-owner-on-???
==84513== 
==84513== TO CONTROL THIS PROCESS USING vgdb (which you probably
==84513== don't want to do, unless you know exactly what you're doing,
==84513== or are doing some strange experiment):
==84513==   /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/../../bin/vgdb --pid=84513 ...command...
==84513== 
==84513== TO DEBUG THIS PROCESS USING GDB: start GDB like this
==84513==   /path/to/gdb ./hello
==84513== and then give GDB the following command
==84513==   target remote | /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/../../bin/vgdb --pid=84513
==84513== --pid is optional if only one valgrind process is running
==84513== 
--84513-- REDIR: 0x100030ac0 (dyld:strcmp) redirected to 0x258056ffa (???)
--84513-- REDIR: 0x10002abac (dyld:arc4random) redirected to 0x258057098 (???)
--84513-- REDIR: 0x10002aa60 (dyld:strlen) redirected to 0x258056fc9 (???)
--84513-- REDIR: 0x10002a9c0 (dyld:strcpy) redirected to 0x258057016 (???)
--84513-- REDIR: 0x10002e0e6 (dyld:strcat) redirected to 0x258056fda (???)
--84513-- REDIR: 0x10002e124 (dyld:strlcat) redirected to 0x258057033 (???)
--84513-- /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/vgpreload_core-amd64-darwin.so (rx at 0x1000a1000, rw at 0x1000a7000)
--84513--    reading syms   from primary file (3 93)
--84513--    dSYM= /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/vgpreload_core-amd64-darwin.so.dSYM/Contents/Resources/DWARF/vgpreload_core-amd64-darwin.so
--84513-- /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/vgpreload_memcheck-amd64-darwin.so (rx at 0x1000ab000, rw at 0x1000b3000)
--84513--    reading syms   from primary file (72 102)
--84513--    dSYM= /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/vgpreload_memcheck-amd64-darwin.so.dSYM/Contents/Resources/DWARF/vgpreload_memcheck-amd64-darwin.so
--84513-- /usr/lib/libc++.1.dylib (rx at 0x1000b9000, rw at 0x100110000)
--84513--    reading syms   from primary file (2023 1681)
--84513-- /usr/lib/libSystem.B.dylib (rx at 0x100170000, rw at 0x100172000)
--84513--    reading syms   from primary file (31 5)
--84513-- /usr/lib/libc++abi.dylib (rx at 0x100178000, rw at 0x10019d000)
--84513--    reading syms   from primary file (369 212)
--84513-- /usr/lib/system/libcache.dylib (rx at 0x1001ac000, rw at 0x1001b1000)
--84513--    reading syms   from primary file (32 29)
--84513-- /usr/lib/system/libcommonCrypto.dylib (rx at 0x1001b6000, rw at 0x1001c1000)
--84513--    reading syms   from primary file (221 169)
--84513-- /usr/lib/system/libcompiler_rt.dylib (rx at 0x1001ce000, rw at 0x1001d6000)
--84513--    reading syms   from primary file (510 8)
--84513-- /usr/lib/system/libcopyfile.dylib (rx at 0x1001e3000, rw at 0x1001ed000)
--84513--    reading syms   from primary file (13 35)
--84513-- /usr/lib/system/libcorecrypto.dylib (rx at 0x1001f3000, rw at 0x100279000)
--84513--    reading syms   from primary file (511 677)
--84513-- /usr/lib/system/libdispatch.dylib (rx at 0x100295000, rw at 0x1002cf000)
--84513--    reading syms   from primary file (271 945)
--84513-- /usr/lib/system/libdyld.dylib (rx at 0x100309000, rw at 0x100327000)
--84513--    reading syms   from primary file (97 992)
--84513-- /usr/lib/system/libkeymgr.dylib (rx at 0x100341000, rw at 0x100342000)
--84513--    reading syms   from primary file (12 3)
--84513-- /usr/lib/system/libmacho.dylib (rx at 0x10034d000, rw at 0x100352000)
--84513--    reading syms   from primary file (105 1)
--84513-- /usr/lib/system/libquarantine.dylib (rx at 0x100358000, rw at 0x10035b000)
--84513--    reading syms   from primary file (67 32)
--84513-- /usr/lib/system/libremovefile.dylib (rx at 0x100361000, rw at 0x100363000)
--84513--    reading syms   from primary file (15 4)
--84513-- /usr/lib/system/libsystem_asl.dylib (rx at 0x100368000, rw at 0x100380000)
--84513--    reading syms   from primary file (222 225)
--84513-- /usr/lib/system/libsystem_blocks.dylib (rx at 0x10038d000, rw at 0x10038e000)
--84513--    reading syms   from primary file (21 6)
--84513-- /usr/lib/system/libsystem_c.dylib (rx at 0x100392000, rw at 0x10041c000)
--84513--    reading syms   from primary file (1342 806)
--84513-- /usr/lib/system/libsystem_configuration.dylib (rx at 0x100444000, rw at 0x100448000)
--84513--    reading syms   from primary file (38 66)
--84513-- /usr/lib/system/libsystem_coreservices.dylib (rx at 0x10044e000, rw at 0x100452000)
--84513--    reading syms   from primary file (14 37)
--84513-- /usr/lib/system/libsystem_darwin.dylib (rx at 0x100457000, rw at 0x100459000)
--84513--    reading syms   from primary file (12 105)
--84513-- /usr/lib/system/libsystem_dnssd.dylib (rx at 0x10045e000, rw at 0x100465000)
--84513--    reading syms   from primary file (49 24)
--84513-- /usr/lib/system/libsystem_info.dylib (rx at 0x10046b000, rw at 0x1004b5000)
--84513--    reading syms   from primary file (525 650)
--84513-- /usr/lib/system/libsystem_m.dylib (rx at 0x1004cc000, rw at 0x100518000)
--84513--    reading syms   from primary file (805 1)
--84513-- /usr/lib/system/libsystem_malloc.dylib (rx at 0x100526000, rw at 0x100546000)
--84513--    reading syms   from primary file (127 265)
--84513-- /usr/lib/system/libsystem_network.dylib (rx at 0x100552000, rw at 0x100683000)
--84513--    reading syms   from primary file (1126 1216)
--84513-- /usr/lib/system/libsystem_networkextension.dylib (rx at 0x1006c3000, rw at 0x1006ce000)
--84513--    reading syms   from primary file (98 229)
--84513-- /usr/lib/system/libsystem_notify.dylib (rx at 0x1006da000, rw at 0x1006e4000)
--84513--    reading syms   from primary file (113 54)
--84513-- /usr/lib/system/libsystem_sandbox.dylib (rx at 0x1006eb000, rw at 0x1006ef000)
--84513--    reading syms   from primary file (93 8)
--84513-- /usr/lib/system/libsystem_secinit.dylib (rx at 0x1006f5000, rw at 0x1006f7000)
--84513--    reading syms   from primary file (1 7)
--84513-- /usr/lib/system/libsystem_kernel.dylib (rx at 0x1006fc000, rw at 0x100723000)
--84513--    reading syms   from primary file (1282 100)
--84513-- /usr/lib/system/libsystem_platform.dylib (rx at 0x10073c000, rw at 0x100744000)
--84513--    reading syms   from primary file (157 101)
--84513-- /usr/lib/system/libsystem_pthread.dylib (rx at 0x10074c000, rw at 0x100758000)
--84513--    reading syms   from primary file (178 77)
--84513-- /usr/lib/system/libsystem_symptoms.dylib (rx at 0x100764000, rw at 0x10076c000)
--84513--    reading syms   from primary file (10 93)
--84513-- /usr/lib/system/libsystem_trace.dylib (rx at 0x100772000, rw at 0x100786000)
--84513--    reading syms   from primary file (114 245)
--84513-- /usr/lib/system/libunwind.dylib (rx at 0x100794000, rw at 0x10079a000)
--84513--    reading syms   from primary file (102 52)
--84513-- /usr/lib/system/libxpc.dylib (rx at 0x1007a1000, rw at 0x1007cf000)
--84513--    reading syms   from primary file (567 915)
--84513-- /usr/lib/closure/libclosured.dylib (rx at 0x1007f1000, rw at 0x100825000)
--84513--    reading syms   from primary file (1 966)
--84513-- /usr/lib/libobjc.A.dylib (rx at 0x100840000, rw at 0x100c2f000)
--84513--    reading syms   from primary file (369 902)
--84513-- REDIR: 0x10073cac0 (libsystem_platform.dylib:_platform_memchr$VARIANT$Haswell) redirected to 0x1000adbc5 (_platform_memchr$VARIANT$Haswell)
--84513-- REDIR: 0x10073cba0 (libsystem_platform.dylib:_platform_memcmp) redirected to 0x1000ae2b2 (_platform_memcmp)
--84513-- REDIR: 0x10073d0e0 (libsystem_platform.dylib:_platform_strncmp) redirected to 0x1000adaca (_platform_strncmp)
--84513-- REDIR: 0x100393220 (libsystem_c.dylib:strlen) redirected to 0x1000ad75b (strlen)
--84513-- REDIR: 0x10073d6a0 (libsystem_platform.dylib:_platform_strcmp) redirected to 0x1000adb44 (_platform_strcmp)
--84513-- REDIR: 0x10052a570 (libsystem_malloc.dylib:calloc) redirected to 0x1000ac62f (calloc)
--84513-- REDIR: 0x100529c1c (libsystem_malloc.dylib:malloc_default_zone) redirected to 0x1000ad36c (malloc_default_zone)
--84513-- REDIR: 0x100528156 (libsystem_malloc.dylib:malloc_zone_malloc) redirected to 0x1000ac27b (malloc_zone_malloc)
--84513-- REDIR: 0x100529c25 (libsystem_malloc.dylib:malloc_zone_calloc) redirected to 0x1000ac81d (malloc_zone_calloc)
--84513-- REDIR: 0x1005274af (libsystem_malloc.dylib:malloc) redirected to 0x1000ac010 (malloc)
--84513-- REDIR: 0x100529ced (libsystem_malloc.dylib:malloc_zone_from_ptr) redirected to 0x1000ad3ad (malloc_zone_from_ptr)
--84513-- REDIR: 0x100529619 (libsystem_malloc.dylib:free) redirected to 0x1000ac3f1 (free)
--84513-- REDIR: 0x10052a723 (libsystem_malloc.dylib:realloc) redirected to 0x1000ac9b1 (realloc)
--84513-- REDIR: 0x10073d2c0 (libsystem_platform.dylib:_platform_strchr$VARIANT$Haswell) redirected to 0x1000ad61f (_platform_strchr$VARIANT$Haswell)
hello!==84513== 
==84513== HEAP SUMMARY:
==84513==     in use at exit: 22,298 bytes in 163 blocks
==84513==   total heap usage: 184 allocs, 21 frees, 30,746 bytes allocated
==84513== 
==84513== Searching for pointers to 163 not-freed blocks
==84513== Checked 10,812,112 bytes
==84513== 
==84513== 72 bytes in 3 blocks are possibly lost in loss record 25 of 42
==84513==    at 0x1000AC6EA: calloc (in /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/vgpreload_memcheck-amd64-darwin.so)
==84513==    by 0x1008417E2: map_images_nolock (in /usr/lib/libobjc.A.dylib)
==84513==    by 0x1008547DA: objc_object::sidetable_retainCount() (in /usr/lib/libobjc.A.dylib)
==84513==    by 0x100007C64: dyld::notifyBatchPartial(dyld_image_states, bool, char const* (*)(dyld_image_states, unsigned int, dyld_image_info const*), bool, bool) (in /usr/lib/dyld)
==84513==    by 0x100007E39: dyld::registerObjCNotifiers(void (*)(unsigned int, char const* const*, mach_header const* const*), void (*)(char const*, mach_header const*), void (*)(char const*, mach_header const*)) (in /usr/lib/dyld)
==84513==    by 0x10030C71D: _dyld_objc_notify_register (in /usr/lib/system/libdyld.dylib)
==84513==    by 0x100841075: _objc_init (in /usr/lib/libobjc.A.dylib)
==84513==    by 0x100296B34: _os_object_init (in /usr/lib/system/libdispatch.dylib)
==84513==    by 0x100296B1B: libdispatch_init (in /usr/lib/system/libdispatch.dylib)
==84513==    by 0x1001719C2: libSystem_initializer (in /usr/lib/libSystem.B.dylib)
==84513==    by 0x100019AC5: ImageLoaderMachO::doModInitFunctions(ImageLoader::LinkContext const&) (in /usr/lib/dyld)
==84513==    by 0x100019CF5: ImageLoaderMachO::doInitialization(ImageLoader::LinkContext const&) (in /usr/lib/dyld)
==84513==    by 0x100015217: ImageLoader::recursiveInitialization(ImageLoader::LinkContext const&, unsigned int, char const*, ImageLoader::InitializerTimingList&, ImageLoader::UninitedUpwards&) (in /usr/lib/dyld)
==84513==    by 0x1000151AA: ImageLoader::recursiveInitialization(ImageLoader::LinkContext const&, unsigned int, char const*, ImageLoader::InitializerTimingList&, ImageLoader::UninitedUpwards&) (in /usr/lib/dyld)
==84513==    by 0x10001434D: ImageLoader::processInitializers(ImageLoader::LinkContext const&, unsigned int, ImageLoader::InitializerTimingList&, ImageLoader::UninitedUpwards&) (in /usr/lib/dyld)
==84513==    by 0x1000143E1: ImageLoader::runInitializers(ImageLoader::LinkContext const&, ImageLoader::InitializerTimingList&) (in /usr/lib/dyld)
==84513==    by 0x100005520: dyld::initializeMainExecutable() (in /usr/lib/dyld)
==84513==    by 0x10000A238: dyld::_main(macho_header const*, unsigned long, int, char const**, char const**, char const**, unsigned long*) (in /usr/lib/dyld)
==84513==    by 0x1000043D3: dyldbootstrap::start(macho_header const*, int, char const**, long, macho_header const*, unsigned long*) (in /usr/lib/dyld)
==84513==    by 0x1000041D1: _dyld_start (in /usr/lib/dyld)
==84513== 
==84513== LEAK SUMMARY:
==84513==    definitely lost: 0 bytes in 0 blocks
==84513==    indirectly lost: 0 bytes in 0 blocks
==84513==      possibly lost: 72 bytes in 3 blocks
==84513==    still reachable: 0 bytes in 0 blocks
==84513==         suppressed: 22,226 bytes in 160 blocks
==84513== 
==84513== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 8 from 8)
--84513-- 
--84513-- used_suppression:      4 OSX1013:19-Leak /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/default.supp:924 suppressed: 8,768 bytes in 4 blocks
--84513-- used_suppression:      1 OSX1013:15-Leak /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/default.supp:886 suppressed: 4,096 bytes in 1 blocks
--84513-- used_suppression:     25 OSX1013:10-Leak /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/default.supp:839 suppressed: 5,906 bytes in 97 blocks
--84513-- used_suppression:      3 OSX1013:16-Leak /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/default.supp:897 suppressed: 3,200 bytes in 50 blocks
--84513-- used_suppression:      1 OSX1013:18-Leak /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/default.supp:915 suppressed: 48 bytes in 1 blocks
--84513-- used_suppression:      7 OSX1013:9-Leak /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/default.supp:829 suppressed: 208 bytes in 7 blocks
--84513-- used_suppression:      1 OSX1013:dyld-3 /usr/local/Cellar/valgrind/3.14.0/lib/valgrind/default.supp:1267
==84513== 
==84513== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 8 from 8)
Owners-MacBook-Pro:Basics owner$ 

*/