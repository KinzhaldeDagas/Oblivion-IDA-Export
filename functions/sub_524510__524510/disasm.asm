0x524510: push    ecx
0x524511: push    ebx
0x524512: mov     ebx, [esp+8+arg_0]
0x524516: push    esi
0x524517: mov     esi, [esp+0Ch+a1]
0x52451B: test    esi, esi
0x52451D: mov     [esp+0Ch+var_4], ecx
0x524521: jnz     short loc_52452E
0x524523: mov     esi, [ebx+3Ch]
0x524526: test    esi, esi
0x524528: jz      loc_52464B
0x52452E: push    edi
0x52452F: push    offset aBsfacegenninod; "BSFaceGenNiNodeBiped"
0x524534: push    esi; a1
0x524535: call    NiObjectNET_LookupObjectByName
0x52453A: mov     edi, eax
0x52453C: push    offset aBsfacegennin_0; "BSFaceGenNiNodeSkinned"
0x524541: push    esi; a1
0x524542: mov     [esp+20h+a1], edi
0x524546: call    NiObjectNET_LookupObjectByName
0x52454B: add     esp, 10h
0x52454E: test    edi, edi
0x524550: mov     [esp+10h+arg_0], eax
0x524554: jz      loc_52464A
0x52455A: test    eax, eax
0x52455C: jz      loc_52464A
0x524562: push    ebp
0x524563: push    offset aFacegenhair; "FaceGenHair"
0x524568: push    esi; a1
0x524569: call    NiObjectNET_LookupObjectByName
0x52456E: mov     ebp, eax
0x524570: mov     eax, ds:0B10CACh
0x524575: push    eax; a2
0x524576: push    esi; a1
0x524577: call    NiObjectNET_LookupObjectByName
0x52457C: mov     edi, eax
0x52457E: add     esp, 10h
0x524581: test    edi, edi
0x524583: jnz     short loc_524597
0x524585: mov     ecx, ds:0B10CB0h
0x52458B: push    ecx; a2
0x52458C: push    esi; a1
0x52458D: call    NiObjectNET_LookupObjectByName
0x524592: add     esp, 8
0x524595: mov     edi, eax
0x524597: mov     eax, [esp+14h+var_4]
0x52459B: test    eax, eax
0x52459D: jz      short loc_5245A4
0x52459F: add     eax, 44h ; 'D'
0x5245A2: jmp     short loc_5245A6
0x5245A4: xor     eax, eax
0x5245A6: push    eax
0x5245A7: push    ebx; a1
0x5245A8: call    ContainerExtraData_GetContainerExtraDataForRef
0x5245AD: add     esp, 8
0x5245B0: mov     ebx, eax
0x5245B2: push    0
0x5245B4: push    1
0x5245B6: mov     ecx, ebx
0x5245B8: call    ContainerExtraData_GetEquippedInstance
0x5245BD: mov     esi, eax
0x5245BF: test    esi, esi
0x5245C1: jz      short loc_5245E7
0x5245C3: test    edi, edi
0x5245C5: jz      short loc_5245CC
0x5245C7: or      word ptr [edi+18h], 1
0x5245CC: test    ebp, ebp
0x5245CE: jz      short loc_5245D5
0x5245D0: or      word ptr [ebp+18h], 1
0x5245D5: mov     ecx, esi
0x5245D7: call    ContainerEntryExtraData_DestroyDataTable
0x5245DC: push    esi
0x5245DD: call    FormHeapFree
0x5245E2: add     esp, 4
0x5245E5: jmp     short loc_5245FB
0x5245E7: test    edi, edi
0x5245E9: jz      short loc_5245F1
0x5245EB: and     word ptr [edi+18h], 0FFFEh
0x5245F1: test    ebp, ebp
0x5245F3: jz      short loc_5245FB
0x5245F5: and     word ptr [ebp+18h], 0FFFEh
0x5245FB: push    0
0x5245FD: push    0
0x5245FF: mov     ecx, ebx
0x524601: call    ContainerExtraData_GetEquippedInstance
0x524606: mov     esi, eax
0x524608: test    esi, esi
0x52460A: mov     eax, [esp+14h+a1]
0x52460E: pop     ebp
0x52460F: jz      short loc_524639
0x524611: mov     ecx, 1
0x524616: or      [eax+18h], cx
0x52461A: mov     eax, [esp+10h+arg_0]
0x52461E: or      [eax+18h], cx
0x524622: mov     ecx, esi
0x524624: call    ContainerEntryExtraData_DestroyDataTable
0x524629: push    esi
0x52462A: call    FormHeapFree
0x52462F: add     esp, 4
0x524632: pop     edi
0x524633: pop     esi
0x524634: pop     ebx
0x524635: pop     ecx
0x524636: retn    8
0x524639: mov     ecx, 0FFFEh
0x52463E: and     [eax+18h], cx
0x524642: mov     eax, [esp+10h+arg_0]
0x524646: and     [eax+18h], cx
0x52464A: pop     edi
0x52464B: pop     esi
0x52464C: pop     ebx
0x52464D: pop     ecx
0x52464E: retn    8
