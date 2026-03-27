0x5E4FC0: push    ebx
0x5E4FC1: mov     ebx, ecx
0x5E4FC3: mov     eax, [ebx]
0x5E4FC5: mov     edx, [eax+170h]
0x5E4FCB: push    esi
0x5E4FCC: push    edi
0x5E4FCD: xor     esi, esi
0x5E4FCF: call    edx
0x5E4FD1: mov     edi, eax
0x5E4FD3: test    edi, edi
0x5E4FD5: jz      short loc_5E4FE9
0x5E4FD7: mov     eax, [ebx]
0x5E4FD9: mov     edx, [eax+190h]
0x5E4FDF: mov     ecx, ebx
0x5E4FE1: call    edx
0x5E4FE3: test    al, al
0x5E4FE5: jz      short loc_5E4FE9
0x5E4FE7: mov     esi, edi
0x5E4FE9: lea     edi, [esi+58h]
0x5E4FEC: test    edi, edi
0x5E4FEE: jz      short loc_5E5025
0x5E4FF0: mov     eax, [edi]
0x5E4FF2: test    eax, eax
0x5E4FF4: jz      short loc_5E501E
0x5E4FF6: lea     esi, [eax+18h]
0x5E4FF9: mov     eax, [esi]
0x5E4FFB: mov     edx, [eax+18h]
0x5E4FFE: mov     ecx, esi
0x5E5000: call    edx
0x5E5002: cmp     eax, 4
0x5E5005: jz      short loc_5E5015
0x5E5007: mov     eax, [esi]
0x5E5009: mov     edx, [eax+18h]
0x5E500C: mov     ecx, esi
0x5E500E: call    edx
0x5E5010: cmp     eax, 1
0x5E5013: jnz     short loc_5E501E
0x5E5015: push    1
0x5E5017: mov     ecx, esi
0x5E5019: call    sub_419F10
0x5E501E: mov     edi, [edi+4]
0x5E5021: test    edi, edi
0x5E5023: jnz     short loc_5E4FF0
0x5E5025: mov     eax, [ebx]
0x5E5027: mov     edx, [eax+268h]
0x5E502D: mov     ecx, ebx
0x5E502F: call    edx
0x5E5031: test    eax, eax
0x5E5033: jz      short loc_5E507D
0x5E5035: mov     eax, [ebx]
0x5E5037: mov     edx, [eax+268h]
0x5E503D: mov     ecx, ebx
0x5E503F: call    edx
0x5E5041: mov     edi, eax
0x5E5043: add     edi, 3Ch ; '<'
0x5E5046: jz      short loc_5E507D
0x5E5048: mov     eax, [edi]
0x5E504A: test    eax, eax
0x5E504C: jz      short loc_5E5076
0x5E504E: lea     esi, [eax+18h]
0x5E5051: mov     eax, [esi]
0x5E5053: mov     edx, [eax+18h]
0x5E5056: mov     ecx, esi
0x5E5058: call    edx
0x5E505A: cmp     eax, 4
0x5E505D: jz      short loc_5E506D
0x5E505F: mov     eax, [esi]
0x5E5061: mov     edx, [eax+18h]
0x5E5064: mov     ecx, esi
0x5E5066: call    edx
0x5E5068: cmp     eax, 1
0x5E506B: jnz     short loc_5E5076
0x5E506D: push    1
0x5E506F: mov     ecx, esi
0x5E5071: call    sub_419F10
0x5E5076: mov     edi, [edi+4]
0x5E5079: test    edi, edi
0x5E507B: jnz     short loc_5E5048
0x5E507D: mov     ecx, ebx; this
0x5E507F: call    Actor_IsNPC
0x5E5084: test    al, al
0x5E5086: jz      short loc_5E5105
0x5E5088: mov     eax, [ebx]
0x5E508A: mov     edx, [eax+170h]
0x5E5090: mov     ecx, ebx
0x5E5092: call    edx
0x5E5094: test    eax, eax
0x5E5096: jz      short loc_5E5105
0x5E5098: cmp     dword ptr [eax+0E8h], 0
0x5E509F: jz      short loc_5E5105
0x5E50A1: mov     ecx, ebx; this
0x5E50A3: call    Actor_IsNPC
0x5E50A8: test    al, al
0x5E50AA: jz      short loc_5E50C4
0x5E50AC: mov     eax, [ebx]
0x5E50AE: mov     edx, [eax+170h]
0x5E50B4: mov     ecx, ebx
0x5E50B6: call    edx
0x5E50B8: test    eax, eax
0x5E50BA: jz      short loc_5E50C4
0x5E50BC: mov     eax, [eax+0E8h]
0x5E50C2: jmp     short loc_5E50C6
0x5E50C4: xor     eax, eax
0x5E50C6: lea     edi, [eax+30h]
0x5E50C9: test    edi, edi
0x5E50CB: jz      short loc_5E5105
0x5E50CD: lea     ecx, [ecx+0]
0x5E50D0: mov     eax, [edi]
0x5E50D2: test    eax, eax
0x5E50D4: jz      short loc_5E50FE
0x5E50D6: lea     esi, [eax+18h]
0x5E50D9: mov     eax, [esi]
0x5E50DB: mov     edx, [eax+18h]
0x5E50DE: mov     ecx, esi
0x5E50E0: call    edx
0x5E50E2: cmp     eax, 4
0x5E50E5: jz      short loc_5E50F5
0x5E50E7: mov     eax, [esi]
0x5E50E9: mov     edx, [eax+18h]
0x5E50EC: mov     ecx, esi
0x5E50EE: call    edx
0x5E50F0: cmp     eax, 1
0x5E50F3: jnz     short loc_5E50FE
0x5E50F5: push    1
0x5E50F7: mov     ecx, esi
0x5E50F9: call    sub_419F10
0x5E50FE: mov     edi, [edi+4]
0x5E5101: test    edi, edi
0x5E5103: jnz     short loc_5E50D0
0x5E5105: mov     eax, [ebx]
0x5E5107: mov     edx, [eax+170h]
0x5E510D: mov     ecx, ebx
0x5E510F: call    edx
0x5E5111: mov     esi, eax
0x5E5113: test    esi, esi
0x5E5115: jz      short loc_5E512C
0x5E5117: mov     eax, [ebx]
0x5E5119: mov     edx, [eax+190h]
0x5E511F: mov     ecx, ebx
0x5E5121: call    edx
0x5E5123: test    al, al
0x5E5125: jz      short loc_5E512C
0x5E5127: lea     eax, [esi+44h]
0x5E512A: jmp     short loc_5E512E
0x5E512C: xor     eax, eax
0x5E512E: push    eax
0x5E512F: push    ebx; a1
0x5E5130: call    ContainerExtraData_GetContainerExtraDataForRef
0x5E5135: add     esp, 8
0x5E5138: mov     ebx, eax
0x5E513A: xor     edi, edi
0x5E513C: lea     esp, [esp+0]
0x5E5140: mov     eax, ds:dword_B1489C[edi]
0x5E5146: push    0
0x5E5148: push    eax
0x5E5149: mov     ecx, ebx
0x5E514B: call    ContainerExtraData_GetEquippedInstance
0x5E5150: mov     esi, eax
0x5E5152: test    esi, esi
0x5E5154: jz      short loc_5E5179
0x5E5156: mov     eax, [esi+8]
0x5E5159: push    0; int
0x5E515B: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5E5160: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5E5165: push    0; int
0x5E5167: push    eax; void *
0x5E5168: call    OblivionDynamicCast
0x5E516D: add     esp, 14h
0x5E5170: test    eax, eax
0x5E5172: jz      short loc_5E5179
0x5E5174: mov     eax, [eax+4]
0x5E5177: jmp     short loc_5E517B
0x5E5179: xor     eax, eax
0x5E517B: test    eax, eax
0x5E517D: jz      short loc_5E5189
0x5E517F: push    1
0x5E5181: lea     ecx, [eax+18h]
0x5E5184: call    sub_419F10
0x5E5189: test    esi, esi
0x5E518B: jz      short loc_5E519D
0x5E518D: mov     ecx, esi
0x5E518F: call    ContainerEntryExtraData_DestroyDataTable
0x5E5194: push    esi
0x5E5195: call    FormHeapFree
0x5E519A: add     esp, 4
0x5E519D: add     edi, 4
0x5E51A0: cmp     edi, 28h ; '('
0x5E51A3: jb      short loc_5E5140
0x5E51A5: pop     edi
0x5E51A6: pop     esi
0x5E51A7: pop     ebx
0x5E51A8: retn
