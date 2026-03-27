0x745EF0: sub     esp, 20h
0x745EF3: mov     edx, [ecx+4]
0x745EF6: push    ebx
0x745EF7: mov     ebx, [ecx]
0x745EF9: mov     ecx, [ecx+8]
0x745EFC: mov     [esp+24h+var_C], edx
0x745F00: mov     edx, [ecx+4]
0x745F03: push    ebp
0x745F04: mov     ebp, [ecx]
0x745F06: mov     [esp+28h+var_4], edx
0x745F0A: mov     edx, [ecx+8]
0x745F0D: push    esi
0x745F0E: mov     esi, [ecx+10h]
0x745F11: xor     ecx, ecx
0x745F13: mov     [eax+0B34h], ecx
0x745F19: mov     [eax+0B38h], ecx
0x745F1F: mov     [eax+0B3Ch], ecx
0x745F25: mov     [eax+0B40h], ecx
0x745F2B: mov     [eax+0B44h], ecx
0x745F31: mov     [eax+0B48h], ecx
0x745F37: mov     [eax+0B4Ch], ecx
0x745F3D: mov     [eax+0B50h], ecx
0x745F43: mov     [esp+2Ch+var_8], edx
0x745F47: mov     edx, [eax+144Ch]
0x745F4D: mov     edx, [eax+edx*4+0B54h]
0x745F54: push    edi
0x745F55: mov     [ebx+edx*4+2], cx
0x745F5A: mov     edi, [eax+144Ch]
0x745F60: add     edi, 1
0x745F63: cmp     edi, 23Dh
0x745F69: mov     [esp+30h+var_14], esi
0x745F6D: mov     [esp+30h+var_18], ecx
0x745F71: jge     loc_7460FF
0x745F77: lea     ecx, [eax+edi*4+0B54h]
0x745F7E: mov     [esp+30h+var_1C], ecx
0x745F82: mov     ecx, 23Dh
0x745F87: sub     ecx, edi
0x745F89: add     edi, ecx
0x745F8B: mov     [esp+30h+var_10], ecx
0x745F8F: mov     [esp+30h+var_20], edi
0x745F93: jmp     short loc_745F99
0x745F95: mov     esi, [esp+30h+var_14]
0x745F99: mov     edx, [esp+30h+var_1C]
0x745F9D: mov     edx, [edx]
0x745F9F: movzx   ecx, word ptr [ebx+edx*4+2]
0x745FA4: movzx   ecx, word ptr [ebx+ecx*4+2]
0x745FA9: add     ecx, 1
0x745FAC: cmp     ecx, esi
0x745FAE: jle     short loc_745FB7
0x745FB0: add     [esp+30h+var_18], 1
0x745FB5: mov     ecx, esi
0x745FB7: cmp     edx, [esp+30h+var_C]
0x745FBB: mov     [ebx+edx*4+2], cx
0x745FC0: jg      short loc_74600A
0x745FC2: mov     edi, [esp+30h+var_8]
0x745FC6: add     word ptr [eax+ecx*2+0B34h], 1
0x745FCF: xor     esi, esi
0x745FD1: cmp     edx, edi
0x745FD3: jl      short loc_745FE0
0x745FD5: mov     esi, edx
0x745FD7: sub     esi, edi
0x745FD9: mov     edi, [esp+30h+var_4]
0x745FDD: mov     esi, [edi+esi*4]
0x745FE0: movzx   edi, word ptr [ebx+edx*4]
0x745FE4: movzx   edi, di
0x745FE7: add     ecx, esi
0x745FE9: imul    ecx, edi
0x745FEC: add     [eax+16A0h], ecx
0x745FF2: test    ebp, ebp
0x745FF4: jz      short loc_746006
0x745FF6: movzx   edx, word ptr [ebp+edx*4+2]
0x745FFB: add     edx, esi
0x745FFD: imul    edx, edi
0x746000: add     [eax+16A4h], edx
0x746006: mov     edi, [esp+30h+var_20]
0x74600A: add     [esp+30h+var_1C], 4
0x74600F: sub     [esp+30h+var_10], 1
0x746014: jnz     loc_745F95
0x74601A: mov     ebp, [esp+30h+var_18]
0x74601E: test    ebp, ebp
0x746020: jz      loc_7460FF
0x746026: mov     ecx, [esp+30h+var_14]
0x74602A: lea     edx, [ecx-1]
0x74602D: mov     [esp+30h+var_4], edx
0x746031: lea     esi, [eax+ecx*2+0B34h]
0x746038: jmp     short loc_746040
0x74603A: align 10h
0x746040: mov     ecx, [esp+30h+var_4]
0x746044: cmp     word ptr [eax+ecx*2+0B34h], 0
0x74604D: lea     edx, [eax+ecx*2+0B34h]
0x746054: jnz     short loc_746062
0x746056: sub     edx, 2
0x746059: sub     ecx, 1
0x74605C: cmp     word ptr [edx], 0
0x746060: jz      short loc_746056
0x746062: add     word ptr [eax+ecx*2+0B34h], 0FFFFh
0x74606C: add     word ptr [eax+ecx*2+0B36h], 2
0x746075: add     word ptr [esi], 0FFFFh
0x74607A: sub     ebp, 2
0x74607D: test    ebp, ebp
0x74607F: jg      short loc_746040
0x746081: mov     edx, [esp+30h+var_14]
0x746085: test    edx, edx
0x746087: jz      short loc_7460FF
0x746089: mov     [esp+30h+var_10], esi
0x74608D: lea     ecx, [ecx+0]
0x746090: movzx   esi, word ptr [esi]
0x746093: test    esi, esi
0x746095: mov     [esp+30h+var_14], esi
0x746099: jz      short loc_7460ED
0x74609B: lea     ebp, [eax+edi*4+0B54h]
0x7460A2: mov     ecx, [ebp-4]
0x7460A5: sub     [esp+30h+var_20], 1
0x7460AA: sub     ebp, 4
0x7460AD: cmp     ecx, [esp+30h+var_C]
0x7460B1: mov     [esp+30h+var_4], ebp
0x7460B5: jg      short loc_7460E5
0x7460B7: movzx   edi, word ptr [ebx+ecx*4+2]
0x7460BC: cmp     edi, edx
0x7460BE: lea     esi, [ebx+ecx*4+2]
0x7460C2: jz      short loc_7460DC
0x7460C4: movzx   ecx, word ptr [ebx+ecx*4]
0x7460C8: mov     ebp, edx
0x7460CA: sub     ebp, edi
0x7460CC: imul    ebp, ecx
0x7460CF: add     [eax+16A0h], ebp
0x7460D5: mov     ebp, [esp+30h+var_4]
0x7460D9: mov     [esi], dx
0x7460DC: sub     [esp+30h+var_14], 1
0x7460E1: mov     esi, [esp+30h+var_14]
0x7460E5: test    esi, esi
0x7460E7: jnz     short loc_7460A2
0x7460E9: mov     edi, [esp+30h+var_20]
0x7460ED: mov     esi, [esp+30h+var_10]
0x7460F1: sub     edx, 1
0x7460F4: sub     esi, 2
0x7460F7: test    edx, edx
0x7460F9: mov     [esp+30h+var_10], esi
0x7460FD: jnz     short loc_746090
0x7460FF: pop     edi
0x746100: pop     esi
0x746101: pop     ebp
0x746102: pop     ebx
0x746103: add     esp, 20h
0x746106: retn
