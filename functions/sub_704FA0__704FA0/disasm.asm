0x704FA0: sub     esp, 8
0x704FA3: push    ebx
0x704FA4: push    ebp
0x704FA5: push    esi
0x704FA6: mov     esi, [esp+14h+arg_0]
0x704FAA: push    edi
0x704FAB: push    esi
0x704FAC: mov     edi, ecx
0x704FAE: call    sub_700A80
0x704FB3: cmp     dword ptr [esi+0D8h], 14010002h
0x704FBD: push    1
0x704FBF: lea     ecx, [esp+1Ch+arg_0]
0x704FC3: push    ecx
0x704FC4: jnb     short loc_704FF0
0x704FC6: movzx   eax, byte ptr [edi+18h]
0x704FCA: shr     eax, 1
0x704FCC: and     eax, 7
0x704FCF: mov     ebx, 4
0x704FD4: mov     [esp+20h+var_4], eax
0x704FD8: mov     eax, [esi+220h]
0x704FDE: push    ebx
0x704FDF: lea     edx, [esp+24h+var_4]
0x704FE3: push    edx
0x704FE4: push    eax
0x704FE5: mov     eax, [eax+8]
0x704FE8: mov     [esp+2Ch+arg_0], ebx
0x704FEC: call    eax
0x704FEE: jmp     short loc_70500F
0x704FF0: mov     eax, [esi+220h]
0x704FF6: push    2
0x704FF8: lea     edx, [edi+18h]
0x704FFB: push    edx
0x704FFC: push    eax
0x704FFD: mov     eax, [eax+8]
0x705000: mov     [esp+2Ch+arg_0], 2
0x705008: call    eax
0x70500A: mov     ebx, 4
0x70500F: movzx   ecx, word ptr [edi+26h]
0x705013: mov     eax, [esi+220h]
0x705019: add     esp, 14h
0x70501C: push    1
0x70501E: lea     edx, [esp+1Ch+arg_0]
0x705022: push    edx
0x705023: mov     [esp+20h+var_8], ecx
0x705027: mov     edx, [eax+8]
0x70502A: push    ebx
0x70502B: lea     ecx, [esp+24h+var_8]
0x70502F: push    ecx
0x705030: push    eax
0x705031: mov     [esp+2Ch+arg_0], ebx
0x705035: call    edx
0x705037: xor     ebp, ebp
0x705039: add     esp, 14h
0x70503C: cmp     [esp+18h+var_8], ebp
0x705040: jbe     short loc_705095
0x705042: mov     eax, [edi+20h]
0x705045: mov     ebx, [eax+ebp*4]
0x705048: mov     eax, [esi+220h]
0x70504E: push    1
0x705050: test    ebx, ebx
0x705052: setnz   cl
0x705055: lea     edx, [esp+1Ch+var_4]
0x705059: push    edx
0x70505A: mov     byte ptr [esp+20h+arg_0], cl
0x70505E: mov     edx, [eax+8]
0x705061: push    1
0x705063: lea     ecx, [esp+24h+arg_0]
0x705067: push    ecx
0x705068: push    eax
0x705069: mov     [esp+2Ch+var_4], 1
0x705071: call    edx
0x705073: add     esp, 14h
0x705076: cmp     byte ptr [esp+18h+arg_0], 0
0x70507B: jz      short loc_705087
0x70507D: mov     eax, [ebx]
0x70507F: mov     edx, [eax+8]
0x705082: push    esi
0x705083: mov     ecx, ebx
0x705085: call    edx
0x705087: add     ebp, 1
0x70508A: cmp     ebp, [esp+18h+var_8]
0x70508E: jb      short loc_705042
0x705090: mov     ebx, 4
0x705095: mov     eax, [edi+2Ch]
0x705098: push    1
0x70509A: lea     ecx, [esp+1Ch+arg_0]
0x70509E: push    ecx
0x70509F: xor     ebp, ebp
0x7050A1: cmp     eax, ebp
0x7050A3: lea     edx, [esp+20h+var_8]
0x7050A7: push    ebx
0x7050A8: mov     [esp+24h+arg_0], ebx
0x7050AC: push    edx
0x7050AD: jz      short loc_70512B
0x7050AF: movzx   eax, word ptr [eax+0Ah]
0x7050B3: mov     [esp+28h+var_8], eax
0x7050B7: mov     eax, [esi+220h]
0x7050BD: push    eax
0x7050BE: mov     eax, [eax+8]
0x7050C1: call    eax
0x7050C3: add     esp, 14h
0x7050C6: cmp     [esp+18h+var_8], ebp
0x7050CA: jbe     short loc_70513E
0x7050CC: lea     esp, [esp+0]
0x7050D0: mov     ecx, [edi+2Ch]
0x7050D3: mov     edx, [ecx+4]
0x7050D6: mov     ebx, [edx+ebp*4]
0x7050D9: push    1
0x7050DB: lea     ecx, [esp+1Ch+var_4]
0x7050DF: push    ecx
0x7050E0: test    ebx, ebx
0x7050E2: setnz   al
0x7050E5: mov     byte ptr [esp+20h+arg_0], al
0x7050E9: mov     eax, [esi+220h]
0x7050EF: push    1
0x7050F1: lea     edx, [esp+24h+arg_0]
0x7050F5: push    edx
0x7050F6: push    eax
0x7050F7: mov     eax, [eax+8]
0x7050FA: mov     [esp+2Ch+var_4], 1
0x705102: call    eax
0x705104: add     esp, 14h
0x705107: cmp     byte ptr [esp+18h+arg_0], 0
0x70510C: jz      short loc_705118
0x70510E: mov     edx, [ebx]
0x705110: mov     eax, [edx+8]
0x705113: push    esi
0x705114: mov     ecx, ebx
0x705116: call    eax
0x705118: add     ebp, 1
0x70511B: cmp     ebp, [esp+18h+var_8]
0x70511F: jb      short loc_7050D0
0x705121: pop     edi
0x705122: pop     esi
0x705123: pop     ebp
0x705124: pop     ebx
0x705125: add     esp, 8
0x705128: retn    4
0x70512B: mov     esi, [esi+220h]
0x705131: mov     [esp+28h+var_8], ebp
0x705135: mov     eax, [esi+8]
0x705138: push    esi
0x705139: call    eax
0x70513B: add     esp, 14h
0x70513E: pop     edi
0x70513F: pop     esi
0x705140: pop     ebp
0x705141: pop     ebx
0x705142: add     esp, 8
0x705145: retn    4
