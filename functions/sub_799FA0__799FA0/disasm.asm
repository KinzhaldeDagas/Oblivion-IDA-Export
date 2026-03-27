0x799FA0: mov     ecx, [esp+arg_0]
0x799FA4: sub     esp, 0Ch
0x799FA7: test    ecx, ecx
0x799FA9: ja      short loc_799FC0
0x799FAB: xor     ecx, ecx
0x799FAD: lea     edx, [ecx+ecx*2]
0x799FB0: shl     edx, 4
0x799FB3: push    edx; Size
0x799FB4: call    FormHeapAlloc
0x799FB9: add     esp, 4
0x799FBC: add     esp, 0Ch
0x799FBF: retn
0x799FC0: or      eax, 0FFFFFFFFh
0x799FC3: xor     edx, edx
0x799FC5: div     ecx
0x799FC7: cmp     eax, 30h ; '0'
0x799FCA: jnb     short loc_799FAD
0x799FCC: lea     eax, [esp+0Ch+arg_0]
0x799FD0: push    eax; char **
0x799FD1: lea     ecx, [esp+10h+var_C]; this
0x799FD5: mov     [esp+10h+arg_0], 0
0x799FDD: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x799FE2: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x799FE7: lea     ecx, [esp+10h+var_C]
0x799FEB: push    ecx
0x799FEC: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x799FF4: call    ThrowException??
