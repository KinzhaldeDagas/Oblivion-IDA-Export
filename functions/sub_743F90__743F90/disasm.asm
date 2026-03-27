0x743F90: sub     esp, 14h
0x743F93: mov     ecx, [edi+74h]
0x743F96: mov     edx, [edi+64h]
0x743F99: push    ebx
0x743F9A: push    ebp
0x743F9B: mov     ebp, [edi+70h]
0x743F9E: push    esi
0x743F9F: mov     esi, [edi+88h]
0x743FA5: mov     [esp+20h+var_10], ecx
0x743FA9: mov     ecx, [edi+30h]
0x743FAC: mov     [esp+20h+var_C], esi
0x743FB0: mov     esi, [edi+24h]
0x743FB3: lea     ebx, [esi-106h]
0x743FB9: add     ecx, edx
0x743FBB: cmp     edx, ebx
0x743FBD: jbe     short loc_743FCD
0x743FBF: sub     edx, esi
0x743FC1: add     edx, 106h
0x743FC7: mov     [esp+20h+var_8], edx
0x743FCB: jmp     short loc_743FD5
0x743FCD: mov     [esp+20h+var_8], 0
0x743FD5: cmp     ebp, [edi+84h]
0x743FDB: movzx   edx, byte ptr [ecx+ebp-1]
0x743FE0: mov     [esp+20h+var_12], dl
0x743FE4: movzx   edx, byte ptr [ecx+ebp]
0x743FE8: lea     esi, [ecx+102h]
0x743FEE: mov     [esp+20h+var_11], dl
0x743FF2: jb      short loc_743FF9
0x743FF4: shr     [esp+20h+var_10], 2
0x743FF9: mov     edx, [edi+6Ch]
0x743FFC: cmp     [esp+20h+var_C], edx
0x744000: jbe     short loc_744006
0x744002: mov     [esp+20h+var_C], edx
0x744006: mov     edx, [edi+30h]
0x744009: mov     bl, [esp+20h+var_11]
0x74400D: add     edx, eax
0x74400F: cmp     [edx+ebp], bl
0x744012: jnz     loc_7440DF
0x744018: mov     bl, [esp+20h+var_12]
0x74401C: cmp     [edx+ebp-1], bl
0x744020: jnz     loc_7440DF
0x744026: mov     bl, [edx]
0x744028: cmp     bl, [ecx]
0x74402A: jnz     loc_7440DF
0x744030: mov     bl, [edx+1]
0x744033: add     edx, 1
0x744036: cmp     bl, [ecx+1]
0x744039: jnz     loc_7440DF
0x74403F: add     ecx, 2
0x744042: add     edx, 1
0x744045: mov     bl, [ecx+1]
0x744048: add     ecx, 1
0x74404B: add     edx, 1
0x74404E: cmp     bl, [edx]
0x744050: jnz     short loc_7440B1
0x744052: mov     bl, [ecx+1]
0x744055: add     ecx, 1
0x744058: add     edx, 1
0x74405B: cmp     bl, [edx]
0x74405D: jnz     short loc_7440B1
0x74405F: mov     bl, [ecx+1]
0x744062: add     ecx, 1
0x744065: add     edx, 1
0x744068: cmp     bl, [edx]
0x74406A: jnz     short loc_7440B1
0x74406C: mov     bl, [ecx+1]
0x74406F: add     ecx, 1
0x744072: add     edx, 1
0x744075: cmp     bl, [edx]
0x744077: jnz     short loc_7440B1
0x744079: mov     bl, [ecx+1]
0x74407C: add     ecx, 1
0x74407F: add     edx, 1
0x744082: cmp     bl, [edx]
0x744084: jnz     short loc_7440B1
0x744086: mov     bl, [ecx+1]
0x744089: add     ecx, 1
0x74408C: add     edx, 1
0x74408F: cmp     bl, [edx]
0x744091: jnz     short loc_7440B1
0x744093: mov     bl, [ecx+1]
0x744096: add     ecx, 1
0x744099: add     edx, 1
0x74409C: cmp     bl, [edx]
0x74409E: jnz     short loc_7440B1
0x7440A0: mov     bl, [ecx+1]
0x7440A3: add     ecx, 1
0x7440A6: add     edx, 1
0x7440A9: cmp     bl, [edx]
0x7440AB: jnz     short loc_7440B1
0x7440AD: cmp     ecx, esi
0x7440AF: jb      short loc_744045
0x7440B1: mov     edx, ecx
0x7440B3: sub     edx, esi
0x7440B5: add     edx, 102h
0x7440BB: cmp     edx, ebp
0x7440BD: lea     ecx, [esi-102h]
0x7440C3: jle     short loc_7440DF
0x7440C5: cmp     edx, [esp+20h+var_C]
0x7440C9: mov     [edi+68h], eax
0x7440CC: mov     ebp, edx
0x7440CE: jge     short loc_7440FC
0x7440D0: mov     bl, [edx+ecx-1]
0x7440D4: mov     dl, [edx+ecx]
0x7440D7: mov     [esp+20h+var_12], bl
0x7440DB: mov     [esp+20h+var_11], dl
0x7440DF: mov     edx, [edi+2Ch]
0x7440E2: and     edx, eax
0x7440E4: mov     eax, [edi+38h]
0x7440E7: movzx   eax, word ptr [eax+edx*2]
0x7440EB: cmp     eax, [esp+20h+var_8]
0x7440EF: jbe     short loc_7440FC
0x7440F1: sub     [esp+20h+var_10], 1
0x7440F6: jnz     loc_744006
0x7440FC: mov     eax, [edi+6Ch]
0x7440FF: cmp     ebp, eax
0x744101: ja      short loc_744105
0x744103: mov     eax, ebp
0x744105: pop     esi
0x744106: pop     ebp
0x744107: pop     ebx
0x744108: add     esp, 14h
0x74410B: retn
