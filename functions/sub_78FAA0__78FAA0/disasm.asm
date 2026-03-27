0x78FAA0: mov     ecx, [esp+arg_0]
0x78FAA4: sub     esp, 0Ch
0x78FAA7: test    ecx, ecx
0x78FAA9: ja      short loc_78FAC1
0x78FAAB: xor     ecx, ecx
0x78FAAD: lea     edx, [ecx+ecx*2]
0x78FAB0: add     edx, edx
0x78FAB2: add     edx, edx
0x78FAB4: push    edx; Size
0x78FAB5: call    FormHeapAlloc
0x78FABA: add     esp, 4
0x78FABD: add     esp, 0Ch
0x78FAC0: retn
0x78FAC1: or      eax, 0FFFFFFFFh
0x78FAC4: xor     edx, edx
0x78FAC6: div     ecx
0x78FAC8: cmp     eax, 0Ch
0x78FACB: jnb     short loc_78FAAD
0x78FACD: lea     eax, [esp+0Ch+arg_0]
0x78FAD1: push    eax; char **
0x78FAD2: lea     ecx, [esp+10h+var_C]; this
0x78FAD6: mov     [esp+10h+arg_0], 0
0x78FADE: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x78FAE3: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x78FAE8: lea     ecx, [esp+10h+var_C]
0x78FAEC: push    ecx
0x78FAED: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x78FAF5: call    ThrowException??
