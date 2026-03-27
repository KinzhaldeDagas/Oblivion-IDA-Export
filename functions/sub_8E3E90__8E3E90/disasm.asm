0x8E3E90: mov     eax, [esp+arg_0]
0x8E3E94: mov     ecx, [eax+58h]
0x8E3E97: push    ebx
0x8E3E98: push    ebp
0x8E3E99: push    esi
0x8E3E9A: mov     esi, [esp+0Ch+arg_8]
0x8E3E9E: movzx   ebp, word ptr [esi]
0x8E3EA1: movzx   eax, word ptr [ecx+ebp*4-4]
0x8E3EA6: lea     ebx, [ecx+ebp*4]
0x8E3EA9: cmp     [esp+0Ch+arg_10], eax
0x8E3EAD: push    edi
0x8E3EAE: jnb     loc_8E3F60
0x8E3EB4: movzx   ecx, word ptr [ebx-2]
0x8E3EB8: mov     edx, [esp+10h+arg_4]
0x8E3EBC: mov     edi, ecx
0x8E3EBE: shl     edi, 4
0x8E3EC1: add     edi, edx
0x8E3EC3: test    al, 1
0x8E3EC5: mov     [ebx], ax
0x8E3EC8: mov     [ebx+2], cx
0x8E3ECC: jz      short loc_8E3F40
0x8E3ECE: xor     edx, edx
0x8E3ED0: mov     dx, [esi+6]
0x8E3ED4: sub     dx, [edi+2]
0x8E3ED8: xor     eax, eax
0x8E3EDA: mov     ax, [esi+0Ah]
0x8E3EDE: sub     ax, [edi+8]
0x8E3EE2: xor     ecx, ecx
0x8E3EE4: mov     cx, [edi+0Ah]
0x8E3EE8: sub     cx, [esi+8]
0x8E3EEC: or      eax, edx
0x8E3EEE: xor     edx, edx
0x8E3EF0: mov     dx, [edi+6]
0x8E3EF4: sub     dx, [esi+2]
0x8E3EF8: or      eax, ecx
0x8E3EFA: mov     [edi+4], bp
0x8E3EFE: or      eax, edx
0x8E3F00: test    ah, ah
0x8E3F02: js      short loc_8E3F43
0x8E3F04: mov     eax, [esp+10h+arg_18]
0x8E3F08: mov     ecx, [eax+8]
0x8E3F0B: mov     edx, [eax+4]
0x8E3F0E: and     ecx, 3FFFFFFFh
0x8E3F14: cmp     edx, ecx
0x8E3F16: jnz     short loc_8E3F27
0x8E3F18: push    8
0x8E3F1A: push    eax
0x8E3F1B: call    sub_8A6EE0
0x8E3F20: mov     eax, [esp+18h+arg_18]
0x8E3F24: add     esp, 8
0x8E3F27: mov     ecx, [eax+4]
0x8E3F2A: mov     edx, [eax]
0x8E3F2C: lea     edx, [edx+ecx*8]
0x8E3F2F: inc     ecx
0x8E3F30: mov     [eax+4], ecx
0x8E3F33: mov     eax, [esi+0Ch]
0x8E3F36: mov     [edx], eax
0x8E3F38: mov     ecx, [edi+0Ch]
0x8E3F3B: mov     [edx+4], ecx
0x8E3F3E: jmp     short loc_8E3F43
0x8E3F40: mov     [edi], bp
0x8E3F43: mov     dx, [esp+10h+arg_C]
0x8E3F48: mov     ecx, [esp+10h+arg_10]
0x8E3F4C: add     ebx, 0FFFFFFFCh
0x8E3F4F: mov     [ebx+2], dx
0x8E3F53: movzx   eax, word ptr [ebx-4]
0x8E3F57: dec     ebp
0x8E3F58: cmp     ecx, eax
0x8E3F5A: jb      loc_8E3EB4
0x8E3F60: mov     ax, word ptr [esp+10h+arg_10]
0x8E3F65: mov     edx, [esp+10h+arg_0]
0x8E3F69: mov     [esi], bp
0x8E3F6C: mov     [ebx], ax
0x8E3F6F: movzx   ecx, word ptr [esi+4]
0x8E3F73: mov     eax, [edx+58h]
0x8E3F76: mov     edx, [esp+10h+arg_14]
0x8E3F7A: lea     ebx, [eax+ecx*4]
0x8E3F7D: movzx   eax, word ptr [ebx+4]
0x8E3F81: add     ebx, 4
0x8E3F84: cmp     edx, eax
0x8E3F86: mov     [esp+10h+arg_8], 0
0x8E3F8E: jbe     loc_8E4040
0x8E3F94: mov     edi, [esp+10h+arg_8]
0x8E3F98: mov     ecx, [ebx]
0x8E3F9A: mov     ebp, [esp+10h+arg_4]
0x8E3F9E: inc     edi
0x8E3F9F: mov     [esp+10h+arg_8], edi
0x8E3FA3: movzx   edi, word ptr [ebx+2]
0x8E3FA7: shl     edi, 4
0x8E3FAA: mov     [ebx-4], ecx
0x8E3FAD: mov     cx, [esp+10h+arg_C]
0x8E3FB2: add     edi, ebp
0x8E3FB4: test    al, 1
0x8E3FB6: mov     [ebx+2], cx
0x8E3FBA: jnz     short loc_8E402D
0x8E3FBC: xor     ecx, ecx
0x8E3FBE: mov     cx, [esi+6]
0x8E3FC2: sub     cx, [edi+2]
0x8E3FC6: xor     eax, eax
0x8E3FC8: mov     ax, [esi+0Ah]
0x8E3FCC: sub     ax, [edi+8]
0x8E3FD0: or      eax, ecx
0x8E3FD2: xor     ecx, ecx
0x8E3FD4: mov     cx, [edi+0Ah]
0x8E3FD8: sub     cx, [esi+8]
0x8E3FDC: or      eax, ecx
0x8E3FDE: xor     ecx, ecx
0x8E3FE0: mov     cx, [edi+6]
0x8E3FE4: sub     cx, [esi+2]
0x8E3FE8: or      eax, ecx
0x8E3FEA: dec     word ptr [edi]
0x8E3FED: test    ah, ah
0x8E3FEF: js      short loc_8E4031
0x8E3FF1: mov     ebp, [esp+10h+arg_18]
0x8E3FF5: mov     eax, [ebp+8]
0x8E3FF8: mov     ecx, [ebp+4]
0x8E3FFB: and     eax, 3FFFFFFFh
0x8E4000: cmp     ecx, eax
0x8E4002: jnz     short loc_8E4013
0x8E4004: push    8
0x8E4006: push    ebp
0x8E4007: call    sub_8A6EE0
0x8E400C: mov     edx, [esp+18h+arg_14]
0x8E4010: add     esp, 8
0x8E4013: mov     eax, [ebp+4]
0x8E4016: mov     ecx, [ebp+0]
0x8E4019: lea     ecx, [ecx+eax*8]
0x8E401C: inc     eax
0x8E401D: mov     [ebp+4], eax
0x8E4020: mov     eax, [esi+0Ch]
0x8E4023: mov     [ecx], eax
0x8E4025: mov     eax, [edi+0Ch]
0x8E4028: mov     [ecx+4], eax
0x8E402B: jmp     short loc_8E4031
0x8E402D: dec     word ptr [edi+4]
0x8E4031: movzx   eax, word ptr [ebx+4]
0x8E4035: add     ebx, 4
0x8E4038: cmp     edx, eax
0x8E403A: ja      loc_8E3F94
0x8E4040: mov     cx, word ptr [esp+10h+arg_8]
0x8E4045: add     [esi+4], cx
0x8E4049: movzx   eax, word ptr [esi+4]
0x8E404D: mov     ecx, [esp+10h+arg_0]
0x8E4051: mov     ecx, [ecx+58h]
0x8E4054: mov     ebp, [esp+10h+arg_1C]
0x8E4058: lea     ebx, [ecx+eax*4]
0x8E405B: movzx   eax, word ptr [ebx-4]
0x8E405F: cmp     edx, eax
0x8E4061: mov     [esp+10h+arg_8], 0
0x8E4069: jnb     loc_8E4118
0x8E406F: nop
0x8E4070: mov     edi, [esp+10h+arg_8]
0x8E4074: mov     ecx, [esp+10h+arg_4]
0x8E4078: add     ebx, 0FFFFFFFCh
0x8E407B: dec     edi
0x8E407C: mov     [esp+10h+arg_8], edi
0x8E4080: movzx   edi, word ptr [ebx+2]
0x8E4084: shl     edi, 4
0x8E4087: add     edi, ecx
0x8E4089: test    al, 1
0x8E408B: mov     ecx, [ebx]
0x8E408D: mov     [ebx+4], ecx
0x8E4090: mov     cx, [esp+10h+arg_C]
0x8E4095: mov     [ebx+2], cx
0x8E4099: jnz     short loc_8E4108
0x8E409B: xor     ecx, ecx
0x8E409D: mov     cx, [esi+6]
0x8E40A1: sub     cx, [edi+2]
0x8E40A5: xor     eax, eax
0x8E40A7: mov     ax, [esi+0Ah]
0x8E40AB: sub     ax, [edi+8]
0x8E40AF: or      eax, ecx
0x8E40B1: xor     ecx, ecx
0x8E40B3: mov     cx, [edi+0Ah]
0x8E40B7: sub     cx, [esi+8]
0x8E40BB: or      eax, ecx
0x8E40BD: xor     ecx, ecx
0x8E40BF: mov     cx, [edi+6]
0x8E40C3: sub     cx, [esi+2]
0x8E40C7: or      eax, ecx
0x8E40C9: inc     word ptr [edi]
0x8E40CC: test    ah, ah
0x8E40CE: js      short loc_8E410C
0x8E40D0: mov     eax, [ebp+8]
0x8E40D3: mov     ecx, [ebp+4]
0x8E40D6: and     eax, 3FFFFFFFh
0x8E40DB: cmp     ecx, eax
0x8E40DD: jnz     short loc_8E40EE
0x8E40DF: push    8
0x8E40E1: push    ebp
0x8E40E2: call    sub_8A6EE0
0x8E40E7: mov     edx, [esp+18h+arg_14]
0x8E40EB: add     esp, 8
0x8E40EE: mov     eax, [ebp+4]
0x8E40F1: mov     ecx, [ebp+0]
0x8E40F4: lea     ecx, [ecx+eax*8]
0x8E40F7: inc     eax
0x8E40F8: mov     [ebp+4], eax
0x8E40FB: mov     eax, [esi+0Ch]
0x8E40FE: mov     [ecx], eax
0x8E4100: mov     eax, [edi+0Ch]
0x8E4103: mov     [ecx+4], eax
0x8E4106: jmp     short loc_8E410C
0x8E4108: inc     word ptr [edi+4]
0x8E410C: movzx   eax, word ptr [ebx-4]
0x8E4110: cmp     edx, eax
0x8E4112: jb      loc_8E4070
0x8E4118: mov     cx, word ptr [esp+10h+arg_8]
0x8E411D: add     [esi+4], cx
0x8E4121: mov     eax, [esp+10h+arg_0]
0x8E4125: mov     [ebx], dx
0x8E4128: movzx   edx, word ptr [esi]
0x8E412B: mov     ecx, [eax+58h]
0x8E412E: mov     ebx, [esp+10h+arg_10]
0x8E4132: lea     edi, [ecx+edx*4]
0x8E4135: movzx   ecx, word ptr [edi+4]
0x8E4139: lea     eax, [edi+4]
0x8E413C: xor     edx, edx
0x8E413E: cmp     ebx, ecx
0x8E4140: jbe     loc_8E41FF
0x8E4146: mov     ebx, eax
0x8E4148: movzx   edi, word ptr [ebx+2]
0x8E414C: mov     eax, [esp+10h+arg_4]
0x8E4150: shl     edi, 4
0x8E4153: add     edi, eax
0x8E4155: mov     eax, [ebx]
0x8E4157: inc     edx
0x8E4158: test    cl, 1
0x8E415B: mov     [ebx-4], eax
0x8E415E: mov     ax, [esp+10h+arg_C]
0x8E4163: mov     [esp+10h+arg_0], edx
0x8E4167: mov     [ebx+2], ax
0x8E416B: jz      short loc_8E41DB
0x8E416D: xor     ecx, ecx
0x8E416F: mov     cx, [esi+6]
0x8E4173: sub     cx, [edi+2]
0x8E4177: xor     eax, eax
0x8E4179: mov     ax, [esi+0Ah]
0x8E417D: sub     ax, [edi+8]
0x8E4181: or      eax, ecx
0x8E4183: xor     ecx, ecx
0x8E4185: mov     cx, [edi+0Ah]
0x8E4189: sub     cx, [esi+8]
0x8E418D: or      eax, ecx
0x8E418F: xor     ecx, ecx
0x8E4191: mov     cx, [edi+6]
0x8E4195: sub     cx, [esi+2]
0x8E4199: or      eax, ecx
0x8E419B: dec     word ptr [edi+4]
0x8E419F: test    ah, ah
0x8E41A1: js      short loc_8E41DE
0x8E41A3: mov     eax, [ebp+8]
0x8E41A6: mov     ecx, [ebp+4]
0x8E41A9: and     eax, 3FFFFFFFh
0x8E41AE: cmp     ecx, eax
0x8E41B0: jnz     short loc_8E41C1
0x8E41B2: push    8
0x8E41B4: push    ebp
0x8E41B5: call    sub_8A6EE0
0x8E41BA: mov     edx, [esp+18h+arg_0]
0x8E41BE: add     esp, 8
0x8E41C1: mov     eax, [ebp+4]
0x8E41C4: mov     ecx, [ebp+0]
0x8E41C7: lea     ecx, [ecx+eax*8]
0x8E41CA: inc     eax
0x8E41CB: mov     [ebp+4], eax
0x8E41CE: mov     eax, [esi+0Ch]
0x8E41D1: mov     [ecx], eax
0x8E41D3: mov     eax, [edi+0Ch]
0x8E41D6: mov     [ecx+4], eax
0x8E41D9: jmp     short loc_8E41DE
0x8E41DB: dec     word ptr [edi]
0x8E41DE: movzx   ecx, word ptr [ebx+4]
0x8E41E2: mov     edi, [esp+10h+arg_10]
0x8E41E6: cmp     edi, ecx
0x8E41E8: lea     eax, [ebx+4]
0x8E41EB: ja      loc_8E4146
0x8E41F1: add     [esi], dx
0x8E41F4: mov     cx, di
0x8E41F7: pop     edi
0x8E41F8: pop     esi
0x8E41F9: pop     ebp
0x8E41FA: mov     [ebx], cx
0x8E41FD: pop     ebx
0x8E41FE: retn
0x8E41FF: add     [esi], dx
0x8E4202: mov     [edi], bx
0x8E4205: pop     edi
0x8E4206: pop     esi
0x8E4207: pop     ebp
0x8E4208: pop     ebx
0x8E4209: retn
