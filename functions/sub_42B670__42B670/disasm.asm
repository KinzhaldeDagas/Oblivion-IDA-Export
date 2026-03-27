0x42B670: sub     esp, 1Ch
0x42B673: push    esi
0x42B674: push    edi
0x42B675: mov     edi, [esp+24h+a1]
0x42B679: test    edi, edi
0x42B67B: mov     esi, ecx
0x42B67D: jz      short loc_42B6E9
0x42B67F: mov     ecx, edi
0x42B681: call    TESFile_GetChunkType
0x42B686: cmp     eax, 4C455458h
0x42B68B: jnz     short loc_42B6E9
0x42B68D: xor     eax, eax
0x42B68F: mov     dword ptr [esp+24h+Dst], eax
0x42B693: mov     [esp+24h+var_18], eax
0x42B697: mov     [esp+24h+var_14], eax
0x42B69B: mov     [esp+24h+var_10], eax
0x42B69F: mov     [esp+24h+var_C], eax
0x42B6A3: mov     [esp+24h+var_8], eax
0x42B6A7: mov     [esp+24h+var_4], eax
0x42B6AB: push    1Ch; a4
0x42B6AD: lea     eax, [esp+28h+Dst]
0x42B6B1: push    eax; Dst
0x42B6B2: mov     ecx, edi; a1
0x42B6B4: call    TESFile_GetChunkData
0x42B6B9: mov     ecx, dword ptr [esp+24h+Dst]
0x42B6BD: mov     edx, [esp+24h+var_18]
0x42B6C1: mov     eax, [esp+24h+var_14]
0x42B6C5: mov     [esi], ecx
0x42B6C7: mov     ecx, [esp+24h+var_10]
0x42B6CB: mov     [esi+4], edx
0x42B6CE: mov     edx, [esp+24h+var_C]
0x42B6D2: mov     [esi+8], eax
0x42B6D5: mov     eax, [esp+24h+var_8]
0x42B6D9: mov     [esi+0Ch], ecx
0x42B6DC: mov     ecx, [esp+24h+var_4]
0x42B6E0: mov     [esi+10h], edx
0x42B6E3: mov     [esi+14h], eax
0x42B6E6: mov     [esi+18h], ecx
0x42B6E9: pop     edi
0x42B6EA: pop     esi
0x42B6EB: add     esp, 1Ch
0x42B6EE: retn    4
