0x74D270: push    esi
0x74D271: push    edi
0x74D272: push    60h ; '`'; Size
0x74D274: mov     edi, ecx
0x74D276: call    FormHeapAlloc
0x74D27B: mov     esi, eax
0x74D27D: add     esp, 4
0x74D280: test    esi, esi
0x74D282: jz      short loc_74D29E
0x74D284: mov     ecx, esi
0x74D286: call    sub_752FD0
0x74D28B: fldz
0x74D28D: fst     dword ptr [esi+54h]
0x74D290: mov     dword ptr [esi], offset ??_7NiPSysBoxEmitter@@6B@; const NiPSysBoxEmitter::`vftable'
0x74D296: fst     dword ptr [esi+58h]
0x74D299: fstp    dword ptr [esi+5Ch]
0x74D29C: jmp     short loc_74D2A0
0x74D29E: xor     esi, esi
0x74D2A0: mov     eax, [esp+8+arg_0]
0x74D2A4: push    eax
0x74D2A5: push    esi
0x74D2A6: mov     ecx, edi
0x74D2A8: call    sub_753000
0x74D2AD: fld     dword ptr [edi+54h]
0x74D2B0: fstp    dword ptr [esi+54h]
0x74D2B3: mov     eax, esi
0x74D2B5: fld     dword ptr [edi+58h]
0x74D2B8: fstp    dword ptr [esi+58h]
0x74D2BB: fld     dword ptr [edi+5Ch]
0x74D2BE: pop     edi
0x74D2BF: fstp    dword ptr [esi+5Ch]
0x74D2C2: pop     esi
0x74D2C3: retn    4
