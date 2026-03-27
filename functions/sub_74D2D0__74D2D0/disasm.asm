0x74D2D0: push    esi
0x74D2D1: push    60h ; '`'; Size
0x74D2D3: call    FormHeapAlloc
0x74D2D8: mov     esi, eax
0x74D2DA: add     esp, 4
0x74D2DD: test    esi, esi
0x74D2DF: jz      short loc_74D2FD
0x74D2E1: mov     ecx, esi
0x74D2E3: call    sub_752FD0
0x74D2E8: fldz
0x74D2EA: fst     dword ptr [esi+54h]
0x74D2ED: mov     dword ptr [esi], offset ??_7NiPSysBoxEmitter@@6B@; const NiPSysBoxEmitter::`vftable'
0x74D2F3: fst     dword ptr [esi+58h]
0x74D2F6: mov     eax, esi
0x74D2F8: fstp    dword ptr [esi+5Ch]
0x74D2FB: pop     esi
0x74D2FC: retn
0x74D2FD: xor     eax, eax
0x74D2FF: pop     esi
0x74D300: retn
