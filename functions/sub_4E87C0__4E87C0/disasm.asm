0x4E87C0: sub     esp, 1Ch
0x4E87C3: push    ebp
0x4E87C4: push    esi
0x4E87C5: mov     esi, ecx
0x4E87C7: mov     [esp+24h+var_18], esi
0x4E87CB: call    TESForm_InitializeFormRecord
0x4E87D0: mov     eax, [esi+18h]
0x4E87D3: xor     ebp, ebp
0x4E87D5: cmp     eax, ebp
0x4E87D7: jz      loc_4E89DB
0x4E87DD: mov     ecx, [esi+8]
0x4E87E0: shr     ecx, 5
0x4E87E3: test    cl, 1
0x4E87E6: jnz     loc_4E89DB
0x4E87EC: xor     ecx, ecx
0x4E87EE: mov     edx, 10h
0x4E87F3: mul     edx
0x4E87F5: seto    cl
0x4E87F8: push    ebx
0x4E87F9: push    edi
0x4E87FA: neg     ecx
0x4E87FC: or      ecx, eax
0x4E87FE: push    ecx; Size
0x4E87FF: call    FormHeapAlloc
0x4E8804: mov     ebx, eax
0x4E8806: add     esp, 4
0x4E8809: lea     ecx, [esi+1Ch]
0x4E880C: mov     [esp+2Ch+var_8], ebx
0x4E8810: mov     [esp+2Ch+var_10], ebp
0x4E8814: mov     [esp+2Ch+var_14], ebp
0x4E8818: call    sub_6A9030
0x4E881D: cmp     eax, ebp
0x4E881F: mov     [esp+2Ch+var_1C], eax
0x4E8823: jz      loc_4E88D0
0x4E8829: lea     esp, [esp+0]
0x4E8830: lea     eax, [esp+2Ch+var_C]
0x4E8834: push    eax
0x4E8835: lea     ecx, [esp+30h+var_4]
0x4E8839: push    ecx
0x4E883A: lea     edx, [esp+34h+var_1C]
0x4E883E: push    edx
0x4E883F: lea     ecx, [esi+1Ch]
0x4E8842: mov     [esp+38h+var_C], ebp
0x4E8846: call    sub_452600
0x4E884B: mov     edi, [esp+2Ch+var_C]
0x4E884F: cmp     edi, ebp
0x4E8851: jz      short loc_4E88C0
0x4E8853: mov     esi, [esp+2Ch+var_10]
0x4E8857: shl     esi, 4
0x4E885A: add     esi, ebx
0x4E885C: lea     esp, [esp+0]
0x4E8860: cmp     dword ptr [edi+4], 0
0x4E8864: jnz     short loc_4E886B
0x4E8866: cmp     dword ptr [edi], 0
0x4E8869: jz      short loc_4E88BC
0x4E886B: mov     ebp, [edi]
0x4E886D: mov     ecx, ebp
0x4E886F: xor     ebx, ebx
0x4E8871: call    sub_4E7DE0
0x4E8876: test    eax, eax
0x4E8878: jz      short loc_4E888F
0x4E887A: lea     ebx, [ebx+0]
0x4E8880: cmp     dword ptr [eax], 0
0x4E8883: jz      short loc_4E8888
0x4E8885: add     ebx, 1
0x4E8888: mov     eax, [eax+4]
0x4E888B: test    eax, eax
0x4E888D: jnz     short loc_4E8880
0x4E888F: mov     ecx, ebp
0x4E8891: call    sub_4BEF40
0x4E8896: mov     ecx, [eax]
0x4E8898: add     [esp+2Ch+var_14], ebx
0x4E889C: add     [esp+2Ch+var_10], 1
0x4E88A1: mov     [esi], ecx
0x4E88A3: mov     edx, [eax+4]
0x4E88A6: mov     [esi+4], edx
0x4E88A9: mov     eax, [eax+8]
0x4E88AC: mov     [esi+8], eax
0x4E88AF: mov     [esi+0Ch], bl
0x4E88B2: mov     edi, [edi+4]
0x4E88B5: add     esi, 10h
0x4E88B8: test    edi, edi
0x4E88BA: jnz     short loc_4E8860
0x4E88BC: mov     esi, [esp+2Ch+var_18]
0x4E88C0: mov     ebx, [esp+2Ch+var_8]
0x4E88C4: xor     ebp, ebp
0x4E88C6: cmp     [esp+2Ch+var_1C], ebp
0x4E88CA: jnz     loc_4E8830
0x4E88D0: mov     ecx, [esi+18h]
0x4E88D3: shl     ecx, 4
0x4E88D6: push    ecx; Size
0x4E88D7: push    ebx; Src
0x4E88D8: push    50524750h; int
0x4E88DD: call    TESForm_PutFormRecordChunkData
0x4E88E2: push    ebx
0x4E88E3: call    FormHeapFree
0x4E88E8: mov     eax, [esp+3Ch+var_14]
0x4E88EC: xor     ecx, ecx
0x4E88EE: mov     edx, 0Ch
0x4E88F3: mul     edx
0x4E88F5: seto    cl
0x4E88F8: neg     ecx
0x4E88FA: or      ecx, eax
0x4E88FC: push    ecx; Size
0x4E88FD: call    FormHeapAlloc
0x4E8902: mov     edi, eax
0x4E8904: add     esp, 14h
0x4E8907: lea     ecx, [esi+1Ch]
0x4E890A: mov     [esp+2Ch+var_C], edi
0x4E890E: xor     ebx, ebx
0x4E8910: call    sub_6A9030
0x4E8915: cmp     eax, ebp
0x4E8917: mov     [esp+2Ch+var_1C], eax
0x4E891B: jz      loc_4E89B9
0x4E8921: lea     eax, [esp+2Ch+var_8]
0x4E8925: push    eax
0x4E8926: lea     ecx, [esp+30h+var_4]
0x4E892A: push    ecx
0x4E892B: lea     edx, [esp+34h+var_1C]
0x4E892F: push    edx
0x4E8930: lea     ecx, [esi+1Ch]
0x4E8933: mov     [esp+38h+var_8], 0
0x4E893B: call    sub_452600
0x4E8940: mov     ebp, [esp+2Ch+var_8]
0x4E8944: test    ebp, ebp
0x4E8946: jz      short loc_4E89AA
0x4E8948: cmp     dword ptr [ebp+4], 0
0x4E894C: jnz     short loc_4E8954
0x4E894E: cmp     dword ptr [ebp+0], 0
0x4E8952: jz      short loc_4E89AA
0x4E8954: mov     ecx, [ebp+0]
0x4E8957: call    sub_4E7DE0
0x4E895C: mov     esi, eax
0x4E895E: test    esi, esi
0x4E8960: jz      short loc_4E899F
0x4E8962: mov     ecx, [esp+2Ch+var_C]
0x4E8966: lea     eax, [ebx+ebx*2]
0x4E8969: lea     edi, [ecx+eax*4]
0x4E896C: lea     esp, [esp+0]
0x4E8970: cmp     dword ptr [esi+4], 0
0x4E8974: jnz     short loc_4E897B
0x4E8976: cmp     dword ptr [esi], 0
0x4E8979: jz      short loc_4E899F
0x4E897B: mov     ecx, [esi]
0x4E897D: call    sub_4BEF40
0x4E8982: mov     edx, [eax]
0x4E8984: mov     [edi], edx
0x4E8986: mov     ecx, [eax+4]
0x4E8989: mov     [edi+4], ecx
0x4E898C: mov     edx, [eax+8]
0x4E898F: mov     [edi+8], edx
0x4E8992: mov     esi, [esi+4]
0x4E8995: add     ebx, 1
0x4E8998: add     edi, 0Ch
0x4E899B: test    esi, esi
0x4E899D: jnz     short loc_4E8970
0x4E899F: mov     ebp, [ebp+4]
0x4E89A2: test    ebp, ebp
0x4E89A4: mov     esi, [esp+2Ch+var_18]
0x4E89A8: jnz     short loc_4E8948
0x4E89AA: cmp     [esp+2Ch+var_1C], 0
0x4E89AF: jnz     loc_4E8921
0x4E89B5: mov     edi, [esp+2Ch+var_C]
0x4E89B9: mov     eax, [esp+2Ch+var_14]
0x4E89BD: lea     eax, [eax+eax*2]
0x4E89C0: add     eax, eax
0x4E89C2: add     eax, eax
0x4E89C4: push    eax; Size
0x4E89C5: push    edi; Src
0x4E89C6: push    52524750h; int
0x4E89CB: call    TESForm_PutFormRecordChunkData
0x4E89D0: push    edi
0x4E89D1: call    FormHeapFree
0x4E89D6: add     esp, 10h
0x4E89D9: pop     edi
0x4E89DA: pop     ebx
0x4E89DB: mov     ecx, esi
0x4E89DD: pop     esi
0x4E89DE: pop     ebp
0x4E89DF: add     esp, 1Ch
0x4E89E2: jmp     TESForm_FinalizeFormRecord
