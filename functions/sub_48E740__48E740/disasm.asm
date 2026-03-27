0x48E740: sub     esp, 1Ch
0x48E743: push    ebx
0x48E744: push    ebp
0x48E745: push    esi
0x48E746: mov     esi, [esp+28h+arg_0]
0x48E74A: test    esi, esi
0x48E74C: push    edi
0x48E74D: mov     edi, ecx
0x48E74F: mov     [esp+2Ch+var_4], edi
0x48E753: jnz     short loc_48E761
0x48E755: xor     al, al
0x48E757: pop     edi
0x48E758: pop     esi
0x48E759: pop     ebp
0x48E75A: pop     ebx
0x48E75B: add     esp, 1Ch
0x48E75E: retn    4
0x48E761: mov     ecx, esi; this
0x48E763: call    TESObjectREFR_GetParentCell
0x48E768: mov     edi, [edi]
0x48E76A: mov     ecx, edi
0x48E76C: xor     edx, edx
0x48E76E: test    ecx, ecx
0x48E770: mov     [esp+2Ch+var_10], edi
0x48E774: jz      short loc_48E785
0x48E776: cmp     dword ptr [ecx], 0
0x48E779: jz      short loc_48E77E
0x48E77B: add     edx, 1
0x48E77E: mov     ecx, [ecx+4]
0x48E781: test    ecx, ecx
0x48E783: jnz     short loc_48E776
0x48E785: mov     [esp+2Ch+var_18], edx
0x48E789: mov     ecx, edi
0x48E78B: xor     edx, edx
0x48E78D: test    ecx, ecx
0x48E78F: jz      short loc_48E7A0
0x48E791: cmp     dword ptr [ecx], 0
0x48E794: jz      short loc_48E799
0x48E796: add     edx, 1
0x48E799: mov     ecx, [ecx+4]
0x48E79C: test    ecx, ecx
0x48E79E: jnz     short loc_48E791
0x48E7A0: test    eax, eax
0x48E7A2: mov     [esp+2Ch+var_14], edx
0x48E7A6: jz      short loc_48E755
0x48E7A8: mov     ecx, ds:0B34428h
0x48E7AE: mov     edx, [ecx]
0x48E7B0: push    eax; a4
0x48E7B1: mov     eax, [edx+194h]
0x48E7B7: mov     [esp+30h+var_19], 0
0x48E7BC: call    eax
0x48E7BE: mov     edx, [esi+2Ch]
0x48E7C1: lea     ecx, [esi+2Ch]
0x48E7C4: sub     esp, 0Ch
0x48E7C7: mov     eax, esp
0x48E7C9: mov     [eax], edx
0x48E7CB: mov     edx, [ecx+4]
0x48E7CE: mov     ecx, [ecx+8]
0x48E7D1: mov     [eax+4], edx
0x48E7D4: mov     [eax+8], ecx
0x48E7D7: mov     ecx, ds:0B34428h; this
0x48E7DD: call    TESObjectREFR_SetPosition
0x48E7E2: test    edi, edi
0x48E7E4: jz      loc_48E96F
0x48E7EA: lea     ebx, [ebx+0]
0x48E7F0: mov     eax, [esp+2Ch+var_10]
0x48E7F4: mov     ebp, [eax]
0x48E7F6: test    ebp, ebp
0x48E7F8: jz      loc_48E96F
0x48E7FE: mov     ecx, [ebp+0]
0x48E801: xor     edx, edx
0x48E803: mov     eax, ecx
0x48E805: test    eax, eax
0x48E807: mov     [esp+2Ch+var_C], ecx
0x48E80B: mov     [esp+2Ch+var_8], edx
0x48E80F: jz      short loc_48E824
0x48E811: cmp     dword ptr [eax], 0
0x48E814: jz      short loc_48E819
0x48E816: add     edx, 1
0x48E819: mov     eax, [eax+4]
0x48E81C: test    eax, eax
0x48E81E: jnz     short loc_48E811
0x48E820: mov     [esp+2Ch+var_8], edx
0x48E824: xor     ebx, ebx
0x48E826: test    ecx, ecx
0x48E828: jz      loc_48E92B
0x48E82E: jmp     short loc_48E834
0x48E830: mov     ecx, [esp+2Ch+var_C]
0x48E834: mov     esi, [ecx]
0x48E836: test    esi, esi
0x48E838: jz      loc_48E92B
0x48E83E: mov     ecx, esi
0x48E840: call    ExtraDataList_GetExtraScript
0x48E845: mov     edi, eax
0x48E847: test    edi, edi
0x48E849: jz      loc_48E918
0x48E84F: mov     edx, [edi+8]
0x48E852: shr     edx, 3
0x48E855: test    dl, 1
0x48E858: jz      loc_48E918
0x48E85E: cmp     byte ptr [edi+4], 0Dh
0x48E862: jnz     loc_48E908
0x48E868: mov     ecx, ds:0B34428h; a1
0x48E86E: push    esi; a1
0x48E86F: call    sub_4D7620
0x48E874: mov     eax, [ebp+8]
0x48E877: mov     ecx, ds:0B34428h; this
0x48E87D: push    eax; a2
0x48E87E: call    TESObjectREFR_SetBaseForm
0x48E883: mov     ecx, [esp+2Ch+arg_0]
0x48E887: push    0; ArgList
0x48E889: push    ecx; int
0x48E88A: mov     ecx, esi; this
0x48E88C: call    ExtraDataList_GetExtraScriptEventList
0x48E891: mov     edx, ds:0B34428h
0x48E897: push    eax; int
0x48E898: push    edx; int
0x48E899: mov     ecx, edi; int
0x48E89B: call    Script_Run
0x48E8A0: test    al, al
0x48E8A2: jz      short loc_48E8A9
0x48E8A4: mov     [esp+2Ch+var_19], 1
0x48E8A9: mov     eax, [esp+2Ch+var_4]
0x48E8AD: mov     eax, [eax]
0x48E8AF: xor     ecx, ecx
0x48E8B1: test    eax, eax
0x48E8B3: jz      short loc_48E8C4
0x48E8B5: cmp     dword ptr [eax], 0
0x48E8B8: jz      short loc_48E8BD
0x48E8BA: add     ecx, 1
0x48E8BD: mov     eax, [eax+4]
0x48E8C0: test    eax, eax
0x48E8C2: jnz     short loc_48E8B5
0x48E8C4: cmp     [esp+2Ch+var_18], ecx
0x48E8C8: mov     [esp+2Ch+var_14], ecx
0x48E8CC: jnz     short loc_48E8E8
0x48E8CE: mov     eax, [ebp+0]
0x48E8D1: xor     ecx, ecx
0x48E8D3: test    eax, eax
0x48E8D5: jz      short loc_48E8E6
0x48E8D7: cmp     dword ptr [eax], 0
0x48E8DA: jz      short loc_48E8DF
0x48E8DC: add     ecx, 1
0x48E8DF: mov     eax, [eax+4]
0x48E8E2: test    eax, eax
0x48E8E4: jnz     short loc_48E8D7
0x48E8E6: mov     ebx, ecx
0x48E8E8: mov     ecx, ds:0B34428h
0x48E8EE: push    0
0x48E8F0: add     ecx, 44h ; 'D'
0x48E8F3: call    ExtraDataList_SetScriptEventList
0x48E8F8: mov     ecx, ds:0B34428h
0x48E8FE: push    1
0x48E900: add     ecx, 44h ; 'D'
0x48E903: call    ExtraDataList_RemoveAllCopyableExtraData
0x48E908: cmp     ebx, [esp+2Ch+var_8]
0x48E90C: jnz     short loc_48E92B
0x48E90E: mov     ecx, [esp+2Ch+var_14]
0x48E912: cmp     [esp+2Ch+var_18], ecx
0x48E916: jnz     short loc_48E935
0x48E918: mov     edx, [esp+2Ch+var_C]
0x48E91C: mov     eax, [edx+4]
0x48E91F: test    eax, eax
0x48E921: mov     [esp+2Ch+var_C], eax
0x48E925: jnz     loc_48E830
0x48E92B: mov     eax, [esp+2Ch+var_14]
0x48E92F: cmp     [esp+2Ch+var_18], eax
0x48E933: jz      short loc_48E95C
0x48E935: mov     ecx, [esp+2Ch+var_4]
0x48E939: mov     eax, [ecx]
0x48E93B: xor     ecx, ecx
0x48E93D: test    eax, eax
0x48E93F: mov     [esp+2Ch+var_10], eax
0x48E943: jz      short loc_48E954
0x48E945: cmp     dword ptr [eax], 0
0x48E948: jz      short loc_48E94D
0x48E94A: add     ecx, 1
0x48E94D: mov     eax, [eax+4]
0x48E950: test    eax, eax
0x48E952: jnz     short loc_48E945
0x48E954: mov     [esp+2Ch+var_18], ecx
0x48E958: mov     [esp+2Ch+var_14], ecx
0x48E95C: mov     edx, [esp+2Ch+var_10]
0x48E960: mov     eax, [edx+4]
0x48E963: test    eax, eax
0x48E965: mov     [esp+2Ch+var_10], eax
0x48E969: jnz     loc_48E7F0
0x48E96F: mov     ecx, ds:0B34428h
0x48E975: mov     eax, [ecx]
0x48E977: mov     edx, [eax+194h]
0x48E97D: push    0
0x48E97F: call    edx
0x48E981: mov     ecx, ds:0B34428h; this
0x48E987: push    0; a2
0x48E989: call    TESObjectREFR_SetBaseForm
0x48E98E: mov     al, [esp+2Ch+var_19]
0x48E992: pop     edi
0x48E993: pop     esi
0x48E994: pop     ebp
0x48E995: pop     ebx
0x48E996: add     esp, 1Ch
0x48E999: retn    4
