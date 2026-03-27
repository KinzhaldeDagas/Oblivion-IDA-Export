0x4DBF90: push    ecx
0x4DBF91: push    ebp
0x4DBF92: mov     ebp, ecx
0x4DBF94: push    edi
0x4DBF95: lea     ecx, [ebp+44h]
0x4DBF98: call    sub_4203A0
0x4DBF9D: mov     edi, eax
0x4DBF9F: test    edi, edi
0x4DBFA1: jz      short loc_4DBFF5
0x4DBFA3: push    ebx
0x4DBFA4: push    esi
0x4DBFA5: mov     esi, [edi]
0x4DBFA7: test    esi, esi
0x4DBFA9: jz      short loc_4DBFEC
0x4DBFAB: mov     ebx, [ebp+8]
0x4DBFAE: shr     ebx, 0Bh
0x4DBFB1: and     bl, 1
0x4DBFB4: lea     ecx, [esi+44h]
0x4DBFB7: mov     [esp+14h+a2], bl
0x4DBFBB: call    sub_420340
0x4DBFC0: test    al, al
0x4DBFC2: jz      short loc_4DBFCD
0x4DBFC4: test    bl, bl
0x4DBFC6: setz    bl
0x4DBFC9: mov     [esp+14h+a2], bl
0x4DBFCD: mov     eax, [esi+8]
0x4DBFD0: shr     eax, 0Bh
0x4DBFD3: and     al, 1
0x4DBFD5: cmp     al, bl
0x4DBFD7: jz      short loc_4DBFEC
0x4DBFD9: mov     ecx, dword ptr [esp+14h+a2]
0x4DBFDD: push    ecx; a2
0x4DBFDE: mov     ecx, esi; this
0x4DBFE0: call    TESForm_SetEnabled?
0x4DBFE5: mov     ecx, esi
0x4DBFE7: call    sub_4DBF90
0x4DBFEC: mov     edi, [edi+4]
0x4DBFEF: test    edi, edi
0x4DBFF1: jnz     short loc_4DBFA5
0x4DBFF3: pop     esi
0x4DBFF4: pop     ebx
0x4DBFF5: pop     edi
0x4DBFF6: pop     ebp
0x4DBFF7: pop     ecx
0x4DBFF8: retn
