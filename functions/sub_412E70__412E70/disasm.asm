0x412E70: mov     ecx, [esp+arg_0]
0x412E74: sub     esp, 0Ch
0x412E77: test    ecx, ecx
0x412E79: ja      short loc_412E8A
0x412E7B: xor     ecx, ecx
0x412E7D: push    ecx; Size
0x412E7E: call    FormHeapAlloc
0x412E83: add     esp, 4
0x412E86: add     esp, 0Ch
0x412E89: retn
0x412E8A: or      eax, 0FFFFFFFFh
0x412E8D: xor     edx, edx
0x412E8F: div     ecx
0x412E91: cmp     eax, 1
0x412E94: jnb     short loc_412E7D
0x412E96: lea     eax, [esp+0Ch+arg_0]
0x412E9A: push    eax; char **
0x412E9B: lea     ecx, [esp+10h+var_C]; this
0x412E9F: mov     [esp+10h+arg_0], 0
0x412EA7: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x412EAC: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x412EB1: lea     ecx, [esp+10h+var_C]
0x412EB5: push    ecx
0x412EB6: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x412EBE: call    ThrowException??
