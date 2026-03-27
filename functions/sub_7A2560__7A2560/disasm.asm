0x7A2560: mov     ecx, [esp+arg_0]
0x7A2564: sub     esp, 0Ch
0x7A2567: test    ecx, ecx
0x7A2569: ja      short loc_7A257D
0x7A256B: xor     ecx, ecx
0x7A256D: imul    ecx, 54h ; 'T'
0x7A2570: push    ecx; Size
0x7A2571: call    FormHeapAlloc
0x7A2576: add     esp, 4
0x7A2579: add     esp, 0Ch
0x7A257C: retn
0x7A257D: or      eax, 0FFFFFFFFh
0x7A2580: xor     edx, edx
0x7A2582: div     ecx
0x7A2584: cmp     eax, 54h ; 'T'
0x7A2587: jnb     short loc_7A256D
0x7A2589: lea     eax, [esp+0Ch+arg_0]
0x7A258D: push    eax; char **
0x7A258E: lea     ecx, [esp+10h+var_C]; this
0x7A2592: mov     [esp+10h+arg_0], 0
0x7A259A: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x7A259F: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x7A25A4: lea     ecx, [esp+10h+var_C]
0x7A25A8: push    ecx
0x7A25A9: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x7A25B1: call    ThrowException??
