0x6ED370: push    esi
0x6ED371: mov     esi, [esp+4+arg_0]
0x6ED375: push    edi
0x6ED376: push    esi
0x6ED377: mov     edi, ecx
0x6ED379: call    sub_89D6F0
0x6ED37E: test    al, al
0x6ED380: jz      short loc_6ED3F7
0x6ED382: fld     dword ptr [edi+0Ch]
0x6ED385: fld     dword ptr [esi+0Ch]
0x6ED388: fucompp
0x6ED38A: fnstsw  ax
0x6ED38C: test    ah, 44h
0x6ED38F: jp      short loc_6ED3A7
0x6ED391: fld     dword ptr [edi+10h]
0x6ED394: fld     dword ptr [esi+10h]
0x6ED397: fucompp
0x6ED399: fnstsw  ax
0x6ED39B: test    ah, 44h
0x6ED39E: jp      short loc_6ED3A7
0x6ED3A0: pop     edi
0x6ED3A1: mov     al, 1
0x6ED3A3: pop     esi
0x6ED3A4: retn    4
0x6ED3A7: mov     ecx, [edi+14h]
0x6ED3AA: test    ecx, ecx
0x6ED3AC: jz      short loc_6ED3B8
0x6ED3AE: cmp     dword ptr [esi+14h], 0
0x6ED3B2: jz      short loc_6ED3F7
0x6ED3B4: test    ecx, ecx
0x6ED3B6: jnz     short loc_6ED3C2
0x6ED3B8: cmp     dword ptr [esi+14h], 0
0x6ED3BC: jnz     short loc_6ED3F7
0x6ED3BE: test    ecx, ecx
0x6ED3C0: jz      short loc_6ED3D1
0x6ED3C2: mov     eax, [esi+14h]
0x6ED3C5: mov     edx, [ecx]
0x6ED3C7: push    eax
0x6ED3C8: mov     eax, [edx+2Ch]
0x6ED3CB: call    eax
0x6ED3CD: test    al, al
0x6ED3CF: jz      short loc_6ED3F7
0x6ED3D1: mov     ecx, [edi+18h]
0x6ED3D4: test    ecx, ecx
0x6ED3D6: jz      short loc_6ED3E2
0x6ED3D8: cmp     dword ptr [esi+18h], 0
0x6ED3DC: jz      short loc_6ED3F7
0x6ED3DE: test    ecx, ecx
0x6ED3E0: jnz     short loc_6ED3EC
0x6ED3E2: cmp     dword ptr [esi+18h], 0
0x6ED3E6: jnz     short loc_6ED3F7
0x6ED3E8: test    ecx, ecx
0x6ED3EA: jz      short loc_6ED3F7
0x6ED3EC: mov     esi, [esi+18h]
0x6ED3EF: mov     edx, [ecx]
0x6ED3F1: mov     eax, [edx+2Ch]
0x6ED3F4: push    esi
0x6ED3F5: call    eax
0x6ED3F7: pop     edi
0x6ED3F8: xor     al, al
0x6ED3FA: pop     esi
0x6ED3FB: retn    4
