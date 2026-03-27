0x6DA320: sub     esp, 14h
0x6DA323: push    ebx
0x6DA324: mov     ebx, ecx
0x6DA326: mov     eax, [ebx+18h]
0x6DA329: test    eax, eax
0x6DA32B: mov     [esp+18h+var_10], ebx
0x6DA32F: jz      loc_6DA43B
0x6DA335: mov     cl, [eax+14h]
0x6DA338: push    ebp
0x6DA339: mov     ebp, [eax+8]
0x6DA33C: test    ebp, ebp
0x6DA33E: push    esi
0x6DA33F: mov     esi, [eax+10h]
0x6DA342: push    edi
0x6DA343: mov     edi, [eax+0Ch]
0x6DA346: mov     [esp+24h+var_11], cl
0x6DA34A: jnz     short loc_6DA397
0x6DA34C: mov     esi, eax
0x6DA34E: test    esi, esi
0x6DA350: jz      short loc_6DA375
0x6DA352: lea     edx, [esi+4]
0x6DA355: push    edx; lpAddend
0x6DA356: call    dword ptr ds:0A2807Ch
0x6DA35C: test    eax, eax
0x6DA35E: jnz     short loc_6DA36E
0x6DA360: test    esi, esi
0x6DA362: jz      short loc_6DA36E
0x6DA364: mov     eax, [esi]
0x6DA366: mov     edx, [eax]
0x6DA368: push    1
0x6DA36A: mov     ecx, esi
0x6DA36C: call    edx
0x6DA36E: mov     dword ptr [ebx+18h], 0
0x6DA375: mov     eax, ds:0B24FC8h
0x6DA37A: mov     [ebx+0Ch], eax
0x6DA37D: mov     ecx, ds:0B24FCCh
0x6DA383: pop     edi
0x6DA384: mov     [ebx+10h], ecx
0x6DA387: mov     edx, ds:0B24FD0h
0x6DA38D: pop     esi
0x6DA38E: pop     ebp
0x6DA38F: mov     [ebx+14h], edx
0x6DA392: pop     ebx
0x6DA393: add     esp, 14h
0x6DA396: retn
0x6DA397: cmp     ebp, 1
0x6DA39A: mov     eax, [edi+4]
0x6DA39D: mov     ecx, [edi+8]
0x6DA3A0: mov     edx, [edi+0Ch]
0x6DA3A3: mov     [esp+24h+var_C], eax
0x6DA3A7: mov     [esp+24h+var_8], ecx
0x6DA3AB: mov     [esp+24h+var_4], edx
0x6DA3AF: jz      short loc_6DA3F9
0x6DA3B1: cmp     esi, 1
0x6DA3B4: jz      short loc_6DA3BB
0x6DA3B6: cmp     esi, 5
0x6DA3B9: jnz     short loc_6DA438
0x6DA3BB: mov     bl, 1
0x6DA3BD: mov     esi, 1
0x6DA3C2: cmp     esi, ebp
0x6DA3C4: jnb     short loc_6DA3F1
0x6DA3C6: movzx   ecx, [esp+24h+var_11]
0x6DA3CB: imul    ecx, esi
0x6DA3CE: lea     eax, [esp+24h+var_C]
0x6DA3D2: push    eax
0x6DA3D3: lea     ecx, [ecx+edi+4]
0x6DA3D7: call    sub_8AA390
0x6DA3DC: test    al, al
0x6DA3DE: jz      short loc_6DA3E2
0x6DA3E0: xor     bl, bl
0x6DA3E2: add     esi, 1
0x6DA3E5: test    bl, bl
0x6DA3E7: jnz     short loc_6DA3C2
0x6DA3E9: pop     edi
0x6DA3EA: pop     esi
0x6DA3EB: pop     ebp
0x6DA3EC: pop     ebx
0x6DA3ED: add     esp, 14h
0x6DA3F0: retn
0x6DA3F1: test    bl, bl
0x6DA3F3: jz      short loc_6DA438
0x6DA3F5: mov     ebx, [esp+24h+var_10]
0x6DA3F9: mov     esi, [ebx+18h]
0x6DA3FC: test    esi, esi
0x6DA3FE: jz      short loc_6DA423
0x6DA400: lea     edx, [esi+4]
0x6DA403: push    edx; lpAddend
0x6DA404: call    dword ptr ds:0A2807Ch
0x6DA40A: test    eax, eax
0x6DA40C: jnz     short loc_6DA41C
0x6DA40E: test    esi, esi
0x6DA410: jz      short loc_6DA41C
0x6DA412: mov     eax, [esi]
0x6DA414: mov     edx, [eax]
0x6DA416: push    1
0x6DA418: mov     ecx, esi
0x6DA41A: call    edx
0x6DA41C: mov     dword ptr [ebx+18h], 0
0x6DA423: mov     eax, [esp+24h+var_C]
0x6DA427: mov     ecx, [esp+24h+var_8]
0x6DA42B: mov     edx, [esp+24h+var_4]
0x6DA42F: mov     [ebx+0Ch], eax
0x6DA432: mov     [ebx+10h], ecx
0x6DA435: mov     [ebx+14h], edx
0x6DA438: pop     edi
0x6DA439: pop     esi
0x6DA43A: pop     ebp
0x6DA43B: pop     ebx
0x6DA43C: add     esp, 14h
0x6DA43F: retn
