0x8B7CE0: cmp     [esp+arg_0], 0
0x8B7CE5: push    edi
0x8B7CE6: mov     edi, ecx
0x8B7CE8: jz      short loc_8B7D3E
0x8B7CEA: push    esi
0x8B7CEB: mov     esi, [edi+0Ch]
0x8B7CEE: test    esi, esi
0x8B7CF0: jz      short loc_8B7D36
0x8B7CF2: mov     eax, [esi+0Ch]
0x8B7CF5: test    eax, eax
0x8B7CF7: js      short loc_8B7D2D
0x8B7CF9: mov     ecx, ds:0BA9DE4h
0x8B7CFF: mov     edx, large fs:2Ch
0x8B7D06: mov     ecx, [edx+ecx*4]
0x8B7D09: mov     ecx, [ecx+19Ch]
0x8B7D0F: test    ecx, ecx
0x8B7D11: jnz     short loc_8B7D19
0x8B7D13: mov     ecx, ds:0BA7D9Ch
0x8B7D19: mov     edx, [esi+4]
0x8B7D1C: and     eax, 3FFFFFFFh
0x8B7D21: push    14h
0x8B7D23: shl     eax, 4
0x8B7D26: push    eax
0x8B7D27: push    edx
0x8B7D28: call    sub_8A75D0
0x8B7D2D: push    esi
0x8B7D2E: call    FormHeapFree
0x8B7D33: add     esp, 4
0x8B7D36: mov     dword ptr [edi+0Ch], 0
0x8B7D3D: pop     esi
0x8B7D3E: pop     edi
0x8B7D3F: retn    4
