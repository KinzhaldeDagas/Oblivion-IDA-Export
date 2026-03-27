0x6E3960: sub     esp, 18h
0x6E3963: push    ebp
0x6E3964: mov     ebp, ecx
0x6E3966: mov     eax, [ebp+1Ch]
0x6E3969: test    eax, eax
0x6E396B: jz      loc_6E3A97
0x6E3971: mov     ecx, [eax+8]
0x6E3974: test    ecx, ecx
0x6E3976: mov     dl, [eax+14h]
0x6E3979: push    esi
0x6E397A: mov     esi, [eax+0Ch]
0x6E397D: push    edi
0x6E397E: mov     edi, [eax+10h]
0x6E3981: mov     [esp+24h+var_14], ecx
0x6E3985: mov     [esp+24h+var_15], dl
0x6E3989: jnz     short loc_6E39DE
0x6E398B: mov     esi, eax
0x6E398D: test    esi, esi
0x6E398F: jz      short loc_6E39B4
0x6E3991: lea     eax, [esi+4]
0x6E3994: push    eax; lpAddend
0x6E3995: call    dword ptr ds:0A2807Ch
0x6E399B: test    eax, eax
0x6E399D: jnz     short loc_6E39AD
0x6E399F: test    esi, esi
0x6E39A1: jz      short loc_6E39AD
0x6E39A3: mov     edx, [esi]
0x6E39A5: mov     eax, [edx]
0x6E39A7: push    1
0x6E39A9: mov     ecx, esi
0x6E39AB: call    eax
0x6E39AD: mov     dword ptr [ebp+1Ch], 0
0x6E39B4: mov     ecx, ds:0B24FD4h
0x6E39BA: mov     [ebp+0Ch], ecx
0x6E39BD: mov     edx, ds:0B24FD8h
0x6E39C3: mov     [ebp+10h], edx
0x6E39C6: mov     eax, ds:0B24FDCh
0x6E39CB: mov     [ebp+14h], eax
0x6E39CE: mov     ecx, ds:0B24FE0h
0x6E39D4: pop     edi
0x6E39D5: pop     esi
0x6E39D6: mov     [ebp+18h], ecx
0x6E39D9: pop     ebp
0x6E39DA: add     esp, 18h
0x6E39DD: retn
0x6E39DE: cmp     ecx, 1
0x6E39E1: mov     edx, [esi+4]
0x6E39E4: mov     eax, [esi+8]
0x6E39E7: mov     [esp+24h+var_10], edx
0x6E39EB: mov     edx, [esi+0Ch]
0x6E39EE: mov     [esp+24h+var_C], eax
0x6E39F2: mov     eax, [esi+10h]
0x6E39F5: push    ebx
0x6E39F6: mov     [esp+28h+var_8], edx
0x6E39FA: mov     [esp+28h+var_4], eax
0x6E39FE: jz      short loc_6E3A4E
0x6E3A00: cmp     edi, 1
0x6E3A03: jz      short loc_6E3A0E
0x6E3A05: cmp     edi, 5
0x6E3A08: jnz     loc_6E3A94
0x6E3A0E: mov     bl, 1
0x6E3A10: mov     edi, 1
0x6E3A15: jmp     short loc_6E3A1B
0x6E3A17: mov     ecx, [esp+28h+var_14]
0x6E3A1B: cmp     edi, ecx
0x6E3A1D: jnb     short loc_6E3A4A
0x6E3A1F: movzx   edx, [esp+28h+var_15]
0x6E3A24: imul    edx, edi
0x6E3A27: lea     ecx, [esp+28h+var_10]
0x6E3A2B: push    ecx
0x6E3A2C: lea     ecx, [edx+esi+4]
0x6E3A30: call    sub_632310
0x6E3A35: test    al, al
0x6E3A37: jz      short loc_6E3A3B
0x6E3A39: xor     bl, bl
0x6E3A3B: add     edi, 1
0x6E3A3E: test    bl, bl
0x6E3A40: jnz     short loc_6E3A17
0x6E3A42: pop     ebx
0x6E3A43: pop     edi
0x6E3A44: pop     esi
0x6E3A45: pop     ebp
0x6E3A46: add     esp, 18h
0x6E3A49: retn
0x6E3A4A: test    bl, bl
0x6E3A4C: jz      short loc_6E3A94
0x6E3A4E: mov     esi, [ebp+1Ch]
0x6E3A51: test    esi, esi
0x6E3A53: jz      short loc_6E3A78
0x6E3A55: lea     eax, [esi+4]
0x6E3A58: push    eax; lpAddend
0x6E3A59: call    dword ptr ds:0A2807Ch
0x6E3A5F: test    eax, eax
0x6E3A61: jnz     short loc_6E3A71
0x6E3A63: test    esi, esi
0x6E3A65: jz      short loc_6E3A71
0x6E3A67: mov     edx, [esi]
0x6E3A69: mov     eax, [edx]
0x6E3A6B: push    1
0x6E3A6D: mov     ecx, esi
0x6E3A6F: call    eax
0x6E3A71: mov     dword ptr [ebp+1Ch], 0
0x6E3A78: mov     ecx, [esp+28h+var_10]
0x6E3A7C: mov     edx, [esp+28h+var_C]
0x6E3A80: mov     eax, [esp+28h+var_8]
0x6E3A84: mov     [ebp+0Ch], ecx
0x6E3A87: mov     ecx, [esp+28h+var_4]
0x6E3A8B: mov     [ebp+10h], edx
0x6E3A8E: mov     [ebp+14h], eax
0x6E3A91: mov     [ebp+18h], ecx
0x6E3A94: pop     ebx
0x6E3A95: pop     edi
0x6E3A96: pop     esi
0x6E3A97: pop     ebp
0x6E3A98: add     esp, 18h
0x6E3A9B: retn
