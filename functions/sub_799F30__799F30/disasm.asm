0x799F30: mov     ecx, [esp+arg_0]
0x799F34: sub     esp, 0Ch
0x799F37: test    ecx, ecx
0x799F39: ja      short loc_799F59
0x799F3B: xor     ecx, ecx
0x799F3D: lea     edx, ds:0[ecx*8]
0x799F44: sub     edx, ecx
0x799F46: add     edx, edx
0x799F48: add     edx, edx
0x799F4A: add     edx, edx
0x799F4C: push    edx; Size
0x799F4D: call    FormHeapAlloc
0x799F52: add     esp, 4
0x799F55: add     esp, 0Ch
0x799F58: retn
0x799F59: or      eax, 0FFFFFFFFh
0x799F5C: xor     edx, edx
0x799F5E: div     ecx
0x799F60: cmp     eax, 38h ; '8'
0x799F63: jnb     short loc_799F3D
0x799F65: lea     eax, [esp+0Ch+arg_0]
0x799F69: push    eax; char **
0x799F6A: lea     ecx, [esp+10h+var_C]; this
0x799F6E: mov     [esp+10h+arg_0], 0
0x799F76: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x799F7B: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x799F80: lea     ecx, [esp+10h+var_C]
0x799F84: push    ecx
0x799F85: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x799F8D: call    ThrowException??
