0x910A40: push    ebp
0x910A41: mov     ebp, esp
0x910A43: and     esp, 0FFFFFFF0h
0x910A46: sub     esp, 0D4h
0x910A4C: push    ebx
0x910A4D: mov     ebx, [ebp+arg_4]
0x910A50: push    esi
0x910A51: mov     esi, [ebp+arg_0]
0x910A54: mov     eax, [esi+28h]
0x910A57: push    edi
0x910A58: push    8
0x910A5A: push    eax
0x910A5B: push    ebx
0x910A5C: push    esi
0x910A5D: mov     edi, ecx
0x910A5F: call    sub_8F0F70
0x910A64: mov     ecx, [esi+1Ch]
0x910A67: movaps  xmm1, xmmword ptr [ecx]
0x910A6A: movaps  xmm2, xmmword ptr [ecx+10h]
0x910A6E: movaps  xmm3, xmmword ptr [ecx+20h]
0x910A72: lea     eax, [edi+10h]
0x910A75: lea     edx, [esp+0F0h+var_80]
0x910A79: add     esp, 10h
0x910A7C: sub     edx, eax
0x910A7E: mov     [esp+0E0h+var_C8], edx
0x910A82: mov     [esp+0E0h+var_C4], 2
0x910A8A: lea     ebx, [ebx+0]
0x910A90: movaps  xmm0, xmmword ptr [eax]
0x910A93: mov     edx, [esp+0E0h+var_C8]
0x910A97: movaps  xmm4, xmm0
0x910A9A: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x910A9E: movaps  xmm5, xmm3
0x910AA1: mulps   xmm5, xmm4
0x910AA4: movaps  xmm4, xmm0
0x910AA7: shufps  xmm4, xmm0, 55h ; 'U'
0x910AAB: movaps  xmm6, xmm2
0x910AAE: mulps   xmm6, xmm4
0x910AB1: movaps  xmm4, xmm0
0x910AB4: shufps  xmm4, xmm0, 0
0x910AB8: movaps  xmm0, xmm1
0x910ABB: mulps   xmm0, xmm4
0x910ABE: addps   xmm0, xmm6
0x910AC1: addps   xmm0, xmm5
0x910AC4: movaps  xmmword ptr [edx+eax], xmm0
0x910AC8: mov     edx, [esp+0E0h+var_C4]
0x910ACC: add     eax, 10h
0x910ACF: dec     edx
0x910AD0: mov     [esp+0E0h+var_C4], edx
0x910AD4: jnz     short loc_910A90
0x910AD6: movaps  xmm1, xmmword ptr [ecx+30h]
0x910ADA: mov     ecx, [esi+20h]
0x910ADD: movaps  xmm0, [esp+0E0h+var_80]
0x910AE2: movaps  xmm2, xmmword ptr [ecx+10h]
0x910AE6: movaps  xmm3, xmmword ptr [ecx+20h]
0x910AEA: lea     eax, [edi+30h]
0x910AED: lea     edx, [esp+0E0h+var_60]
0x910AF4: addps   xmm0, xmm1
0x910AF7: movaps  xmm1, xmmword ptr [ecx]
0x910AFA: sub     edx, eax
0x910AFC: movaps  [esp+0E0h+var_80], xmm0
0x910B01: mov     [esp+0E0h+var_C8], edx
0x910B05: mov     [esp+0E0h+var_C4], 6
0x910B0D: lea     ecx, [ecx+0]
0x910B10: movaps  xmm0, xmmword ptr [eax]
0x910B13: mov     edx, [esp+0E0h+var_C8]
0x910B17: movaps  xmm4, xmm0
0x910B1A: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x910B1E: movaps  xmm5, xmm3
0x910B21: mulps   xmm5, xmm4
0x910B24: movaps  xmm4, xmm0
0x910B27: shufps  xmm4, xmm0, 55h ; 'U'
0x910B2B: movaps  xmm6, xmm2
0x910B2E: mulps   xmm6, xmm4
0x910B31: movaps  xmm4, xmm0
0x910B34: shufps  xmm4, xmm0, 0
0x910B38: movaps  xmm0, xmm1
0x910B3B: mulps   xmm0, xmm4
0x910B3E: addps   xmm0, xmm6
0x910B41: addps   xmm0, xmm5
0x910B44: movaps  xmmword ptr [edx+eax], xmm0
0x910B48: mov     edx, [esp+0E0h+var_C4]
0x910B4C: add     eax, 10h
0x910B4F: dec     edx
0x910B50: mov     [esp+0E0h+var_C4], edx
0x910B54: jnz     short loc_910B10
0x910B56: movaps  xmm1, xmmword ptr [ecx+30h]
0x910B5A: movaps  xmm0, [esp+0E0h+var_60]
0x910B62: addps   xmm0, xmm1
0x910B65: movaps  [esp+0E0h+var_60], xmm0
0x910B6D: movaps  xmm0, [esp+0E0h+var_50]
0x910B75: movaps  xmm1, xmm0
0x910B78: shufps  xmm1, xmm0, 0C9h ; 'É'
0x910B7C: movaps  xmm2, xmm1
0x910B7F: movaps  xmm1, [esp+0E0h+var_70]
0x910B84: movaps  xmm3, xmm1
0x910B87: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x910B8B: mulps   xmm3, xmm2
0x910B8E: push    ebx
0x910B8F: movaps  xmm2, xmm0
0x910B92: movaps  xmm4, xmm1
0x910B95: shufps  xmm4, xmm1, 0C9h ; 'É'
0x910B99: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x910B9D: lea     eax, [esp+0E4h+var_C0]
0x910BA1: mulps   xmm4, xmm2
0x910BA4: push    esi
0x910BA5: subps   xmm4, xmm3
0x910BA8: push    eax
0x910BA9: movaps  [esp+0ECh+var_B0], xmm4
0x910BAE: movaps  [esp+0ECh+var_C0], xmm1
0x910BB3: movaps  [esp+0ECh+var_A0], xmm0
0x910BB8: call    sub_8F1310
0x910BBD: movaps  xmm1, xmmword ptr ds:0A965C0h
0x910BC4: movaps  xmm0, [esp+0ECh+var_50]
0x910BCC: xorps   xmm0, xmm1
0x910BCF: movaps  [esp+0ECh+var_B0], xmm0
0x910BD4: movaps  xmm0, [esp+0ECh+var_70]
0x910BD9: push    ebx
0x910BDA: lea     ecx, [esp+0F0h+var_C0]
0x910BDE: movaps  [esp+0F0h+var_C0], xmm0
0x910BE3: movaps  xmm0, [esp+0F0h+var_40]
0x910BEB: push    esi
0x910BEC: push    ecx
0x910BED: movaps  [esp+0F8h+var_A0], xmm0
0x910BF2: call    sub_8F1310
0x910BF7: movaps  xmm3, [esp+0F8h+var_80]
0x910BFC: movaps  xmm1, [esp+0F8h+var_60]
0x910C04: movaps  xmm2, [esp+0F8h+var_30]
0x910C0C: movaps  xmm0, xmm3
0x910C0F: subps   xmm0, xmm1
0x910C12: mulps   xmm0, xmm2
0x910C15: movaps  xmm4, xmm0
0x910C18: shufps  xmm4, xmm0, 55h ; 'U'
0x910C1C: movaps  xmm5, xmm0
0x910C1F: addss   xmm4, xmm0
0x910C23: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x910C27: lea     edx, [esp+0F8h+var_C8]
0x910C2B: addss   xmm5, xmm4
0x910C2F: movss   dword ptr [edx], xmm5
0x910C33: mov     eax, [esp+0F8h+var_C8]
0x910C37: movaps  [esp+0F8h+var_C0], xmm3
0x910C3C: mov     [esp+0F8h+var_C8], eax
0x910C40: movss   xmm0, [esp+0F8h+var_C8]
0x910C46: movaps  xmm3, xmm0
0x910C49: push    ebx
0x910C4A: shufps  xmm3, xmm0, 0
0x910C4E: movaps  xmm0, [esp+0FCh+var_20]
0x910C56: lea     ecx, [esp+0FCh+var_C0]
0x910C5A: mulps   xmm3, xmm2
0x910C5D: push    esi
0x910C5E: addps   xmm1, xmm3
0x910C61: push    ecx
0x910C62: movaps  [esp+104h+var_B0], xmm1
0x910C67: movaps  [esp+104h+var_A0], xmm0
0x910C6C: call    sub_8F1790
0x910C71: movaps  xmm1, [esp+104h+var_A0]
0x910C76: movaps  xmm0, xmm1
0x910C79: shufps  xmm0, xmm1, 0C9h ; 'É'
0x910C7D: movaps  xmm2, xmm0
0x910C80: movaps  xmm0, [esp+104h+var_30]
0x910C88: movaps  xmm3, xmm0
0x910C8B: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x910C8F: mulps   xmm3, xmm2
0x910C92: movaps  xmm2, xmm1
0x910C95: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x910C99: movaps  xmm1, xmm0
0x910C9C: shufps  xmm1, xmm0, 0C9h ; 'É'
0x910CA0: push    ebx
0x910CA1: lea     edx, [esp+108h+var_C0]
0x910CA5: mulps   xmm1, xmm2
0x910CA8: push    esi
0x910CA9: subps   xmm1, xmm3
0x910CAC: push    edx
0x910CAD: movaps  [esp+110h+var_A0], xmm1
0x910CB2: call    sub_8F1790
0x910CB7: movaps  xmm0, [esp+110h+var_80]
0x910CBF: mov     eax, [edi+90h]
0x910CC5: mov     ecx, [edi+94h]
0x910CCB: movaps  [esp+110h+var_C0], xmm0
0x910CD0: movaps  xmm0, [esp+110h+var_60]
0x910CD8: push    ebx
0x910CD9: lea     edx, [esp+114h+var_C0]
0x910CDD: movaps  [esp+114h+var_B0], xmm0
0x910CE2: movaps  xmm0, [esp+114h+var_30]
0x910CEA: push    esi
0x910CEB: push    edx
0x910CEC: mov     [esp+11Ch+var_90], eax
0x910CF3: mov     [esp+11Ch+var_8C], ecx
0x910CFA: movaps  [esp+11Ch+var_A0], xmm0
0x910CFF: call    sub_8F1970
0x910D04: mov     eax, [edi+9Ch]
0x910D0A: mov     ecx, [edi+98h]
0x910D10: push    ebx
0x910D11: push    eax
0x910D12: push    ecx
0x910D13: call    sub_8F0F20
0x910D18: movaps  xmm0, [esp+128h+var_80]
0x910D20: add     esp, 48h
0x910D23: movaps  [esp+0E0h+var_C0], xmm0
0x910D28: movaps  xmm0, [esp+0E0h+var_60]
0x910D30: push    ebx
0x910D31: lea     edx, [esp+0E4h+var_C0]
0x910D35: movaps  [esp+0E4h+var_B0], xmm0
0x910D3A: movaps  xmm0, [esp+0E4h+var_30]
0x910D42: push    esi
0x910D43: push    edx
0x910D44: movaps  [esp+0ECh+var_A0], xmm0
0x910D49: call    sub_8F1790
0x910D4E: push    ebx
0x910D4F: call    sub_8F0F50
0x910D54: add     esp, 10h
0x910D57: pop     edi
0x910D58: pop     esi
0x910D59: pop     ebx
0x910D5A: mov     esp, ebp
0x910D5C: pop     ebp
0x910D5D: retn    8
