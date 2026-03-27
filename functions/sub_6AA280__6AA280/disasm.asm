0x6AA280: sub     esp, 0Ch
0x6AA283: push    esi
0x6AA284: mov     esi, ecx
0x6AA286: mov     byte ptr [esi+0A4h], 0
0x6AA28D: cmp     byte ptr ds:0B16178h, 0
0x6AA294: mov     [esp+10h+var_C], 0
0x6AA29C: jz      short loc_6AA301
0x6AA29E: mov     ecx, [esi+300h]
0x6AA2A4: mov     edx, [ecx+4]
0x6AA2A7: xor     eax, eax
0x6AA2A9: test    edx, edx
0x6AA2AB: push    edi
0x6AA2AC: jbe     short loc_6AA2C2
0x6AA2AE: mov     edi, [ecx+8]
0x6AA2B1: mov     ecx, edi
0x6AA2B3: cmp     dword ptr [ecx], 0
0x6AA2B6: jnz     short loc_6AA319
0x6AA2B8: add     eax, 1
0x6AA2BB: add     ecx, 4
0x6AA2BE: cmp     eax, edx
0x6AA2C0: jb      short loc_6AA2B3
0x6AA2C2: xor     eax, eax
0x6AA2C4: test    eax, eax
0x6AA2C6: mov     [esp+14h+var_8], eax
0x6AA2CA: pop     edi
0x6AA2CB: jz      short loc_6AA301
0x6AA2CD: lea     ecx, [ecx+0]
0x6AA2D0: lea     eax, [esp+10h+var_C]
0x6AA2D4: push    eax
0x6AA2D5: lea     ecx, [esp+14h+var_4]
0x6AA2D9: push    ecx
0x6AA2DA: mov     ecx, [esi+300h]
0x6AA2E0: lea     edx, [esp+18h+var_8]
0x6AA2E4: push    edx
0x6AA2E5: call    sub_452600
0x6AA2EA: push    ecx
0x6AA2EB: mov     ecx, [esp+14h+var_C]
0x6AA2EF: fld     dword ptr [ecx+3Ch]
0x6AA2F2: fstp    [esp+14h+var_14]; float
0x6AA2F5: call    sub_6B6F20
0x6AA2FA: cmp     [esp+10h+var_8], 0
0x6AA2FF: jnz     short loc_6AA2D0
0x6AA301: fld     dword ptr [esi+2F0h]
0x6AA307: push    1; int
0x6AA309: push    ecx
0x6AA30A: mov     ecx, esi
0x6AA30C: fstp    [esp+18h+var_18]; float
0x6AA30F: call    SoundManager_SetMusicVolume
0x6AA314: pop     esi
0x6AA315: add     esp, 0Ch
0x6AA318: retn
0x6AA319: mov     eax, [edi+eax*4]
0x6AA31C: jmp     short loc_6AA2C4
