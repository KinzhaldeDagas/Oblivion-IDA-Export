0x78FB00: mov     ecx, [esp+arg_0]
0x78FB04: sub     esp, 0Ch
0x78FB07: test    ecx, ecx
0x78FB09: ja      short loc_78FB23
0x78FB0B: xor     ecx, ecx
0x78FB0D: lea     edx, [ecx+ecx*2]
0x78FB10: add     edx, edx
0x78FB12: add     edx, edx
0x78FB14: add     edx, edx
0x78FB16: push    edx; Size
0x78FB17: call    FormHeapAlloc
0x78FB1C: add     esp, 4
0x78FB1F: add     esp, 0Ch
0x78FB22: retn
0x78FB23: or      eax, 0FFFFFFFFh
0x78FB26: xor     edx, edx
0x78FB28: div     ecx
0x78FB2A: cmp     eax, 18h
0x78FB2D: jnb     short loc_78FB0D
0x78FB2F: lea     eax, [esp+0Ch+arg_0]
0x78FB33: push    eax; char **
0x78FB34: lea     ecx, [esp+10h+var_C]; this
0x78FB38: mov     [esp+10h+arg_0], 0
0x78FB40: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x78FB45: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x78FB4A: lea     ecx, [esp+10h+var_C]
0x78FB4E: push    ecx
0x78FB4F: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x78FB57: call    ThrowException??
