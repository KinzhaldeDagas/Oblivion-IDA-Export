0x5563E0: mov     ecx, [esp+arg_0]
0x5563E4: sub     esp, 0Ch
0x5563E7: test    ecx, ecx
0x5563E9: ja      short loc_5563FD
0x5563EB: xor     ecx, ecx
0x5563ED: shl     ecx, 5
0x5563F0: push    ecx; Size
0x5563F1: call    FormHeapAlloc
0x5563F6: add     esp, 4
0x5563F9: add     esp, 0Ch
0x5563FC: retn
0x5563FD: or      eax, 0FFFFFFFFh
0x556400: xor     edx, edx
0x556402: div     ecx
0x556404: cmp     eax, 20h ; ' '
0x556407: jnb     short loc_5563ED
0x556409: lea     eax, [esp+0Ch+arg_0]
0x55640D: push    eax; char **
0x55640E: lea     ecx, [esp+10h+var_C]; this
0x556412: mov     [esp+10h+arg_0], 0
0x55641A: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x55641F: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x556424: lea     ecx, [esp+10h+var_C]
0x556428: push    ecx
0x556429: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x556431: call    ThrowException??
