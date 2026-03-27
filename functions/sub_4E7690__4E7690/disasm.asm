0x4E7690: push    esi
0x4E7691: mov     esi, ecx
0x4E7693: cmp     dword ptr [esi+24h], 0
0x4E7697: jz      short loc_4E76CE
0x4E7699: call    sub_4E5400
0x4E769E: push    0FFFFFFFFh; a2
0x4E76A0: mov     ecx, esi; this
0x4E76A2: call    TESForm_GetOverrideFile
0x4E76A7: test    eax, eax
0x4E76A9: jz      short loc_4E76BF
0x4E76AB: push    0; a2
0x4E76AD: mov     ecx, esi; this
0x4E76AF: call    TESForm_GetOverrideFile
0x4E76B4: mov     ecx, eax
0x4E76B6: call    TESFile_IsActive
0x4E76BB: test    al, al
0x4E76BD: jnz     short loc_4E76CE
0x4E76BF: mov     ecx, esi
0x4E76C1: call    sub_4E6CA0
0x4E76C6: mov     ecx, esi
0x4E76C8: pop     esi
0x4E76C9: jmp     sub_4E5280
0x4E76CE: pop     esi
0x4E76CF: retn
