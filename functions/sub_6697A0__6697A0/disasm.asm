0x6697A0: push    0FFFFFFFFh
0x6697A2: push    offset SEH_6697A0
0x6697A7: mov     eax, large fs:0
0x6697AD: push    eax
0x6697AE: sub     esp, 230h
0x6697B4: mov     eax, ds:0B30AACh
0x6697B9: xor     eax, esp
0x6697BB: mov     [esp+23Ch+var_10], eax
0x6697C2: push    ebx
0x6697C3: push    ebp
0x6697C4: push    esi
0x6697C5: push    edi
0x6697C6: mov     eax, ds:0B30AACh
0x6697CB: xor     eax, esp
0x6697CD: push    eax
0x6697CE: lea     eax, [esp+250h+var_C]
0x6697D5: mov     large fs:0, eax
0x6697DB: mov     esi, [esp+250h+arg_0]
0x6697E2: xor     edi, edi
0x6697E4: cmp     esi, edi
0x6697E6: mov     ebp, ecx
0x6697E8: mov     [esp+250h+var_238.m_data], ebp
0x6697EC: jnz     short loc_6697F5
0x6697EE: xor     al, al
0x6697F0: jmp     loc_669D00
0x6697F5: lea     ecx, [ebp+5ECh]
0x6697FB: xor     bl, bl
0x6697FD: mov     edx, ecx
0x6697FF: cmp     edx, edi
0x669801: mov     [esp+250h+var_239], bl
0x669805: jz      short loc_669840
0x669807: mov     bl, 8
0x669809: lea     esp, [esp+0]
0x669810: mov     eax, [edx]
0x669812: cmp     eax, edi
0x669814: jz      short loc_66983C
0x669816: cmp     eax, esi
0x669818: mov     edx, [edx+4]
0x66981B: jnz     short loc_669829
0x66981D: mov     ebp, [eax+68h]
0x669820: test    [ebp+3Ch], bl
0x669823: jz      short loc_6697EE
0x669825: mov     ebp, [esp+250h+var_238.m_data]
0x669829: mov     eax, [eax+68h]
0x66982C: cmp     eax, [esi+68h]
0x66982F: jnz     short loc_669838
0x669831: mov     [esp+250h+var_239], 1
0x669836: xor     edi, edi
0x669838: cmp     edx, edi
0x66983A: jnz     short loc_669810
0x66983C: mov     bl, [esp+250h+var_239]
0x669840: push    esi
0x669841: call    BSSimpleList_PushFront
0x669846: call    sub_4F9FA0
0x66984B: test    al, al
0x66984D: jz      loc_669CFE
0x669853: push    edi
0x669854: push    3F1h
0x669859: call    sub_5790E0
0x66985E: add     esp, 8
0x669861: test    al, al
0x669863: jz      loc_6699FC
0x669869: mov     [esp+250h+var_230], edi
0x66986D: mov     [esp+250h+var_22C], di
0x669872: mov     [esp+250h+var_22A], di
0x669877: push    edi; a3
0x669878: push    offset EmptyString; a2
0x66987D: lea     ecx, [esp+258h+var_238]; this
0x669881: mov     [esp+258h+var_4], edi
0x669888: mov     [esp+258h+var_238.m_data], edi
0x66988C: mov     [esp+258h+var_238.m_dataLen], di
0x669891: mov     [esp+258h+var_238.m_bufLen], di
0x669896: call    BSStringT_Set
0x66989B: test    byte ptr [esi], 1
0x66989E: mov     eax, [esi+68h]
0x6698A1: mov     eax, [eax+34h]
0x6698A4: mov     byte ptr [esp+250h+var_4], 1
0x6698AC: jz      short loc_6698EC
0x6698AE: cmp     eax, edi
0x6698B0: jnz     short loc_6698B7
0x6698B2: mov     eax, offset EmptyString
0x6698B7: push    eax
0x6698B8: mov     eax, ds:0B382D0h
0x6698BD: push    eax; ArgList
0x6698BE: lea     ecx, [esp+258h+var_230]
0x6698C2: push    offset aSS_5; "%s: %s"
0x6698C7: push    ecx; int
0x6698C8: call    BSStringT_Static_Format
0x6698CD: add     esp, 10h
0x6698D0: push    edi; a3
0x6698D1: push    offset aUiquestupdate; "UIQuestUpdate"
0x6698D6: lea     ecx, [esp+258h+var_238]; this
0x6698DA: call    BSStringT_Set
0x6698DF: push    edi
0x6698E0: mov     ecx, ebp
0x6698E2: call    sub_660450
0x6698E7: jmp     loc_66996F
0x6698EC: test    bl, bl
0x6698EE: jnz     short loc_66993D
0x6698F0: cmp     eax, edi
0x6698F2: jnz     short loc_6698F9
0x6698F4: mov     eax, offset EmptyString
0x6698F9: mov     edx, ds:0B382C8h
0x6698FF: push    eax
0x669900: push    edx; ArgList
0x669901: lea     eax, [esp+258h+var_230]
0x669905: push    offset aSS_5; "%s: %s"
0x66990A: push    eax; int
0x66990B: call    BSStringT_Static_Format
0x669910: add     esp, 10h
0x669913: push    edi; a3
0x669914: push    offset aUiquestnew; "UIQuestNew"
0x669919: lea     ecx, [esp+258h+var_238]; this
0x66991D: call    BSStringT_Set
0x669922: mov     ecx, ds:0B333C4h
0x669928: cmp     [ecx+5F4h], edi
0x66992E: jnz     short loc_66996F
0x669930: mov     eax, [esi+68h]
0x669933: push    eax
0x669934: mov     ecx, ebp
0x669936: call    sub_660450
0x66993B: jmp     short loc_66996F
0x66993D: cmp     eax, edi
0x66993F: jnz     short loc_669946
0x669941: mov     eax, offset EmptyString
0x669946: mov     edx, ds:0B382D8h
0x66994C: push    eax
0x66994D: push    edx; ArgList
0x66994E: lea     eax, [esp+258h+var_230]
0x669952: push    offset aSS_5; "%s: %s"
0x669957: push    eax; int
0x669958: call    BSStringT_Static_Format
0x66995D: add     esp, 10h
0x669960: push    edi; a3
0x669961: push    offset aUiquestupdate; "UIQuestUpdate"
0x669966: lea     ecx, [esp+258h+var_238]; this
0x66996A: call    BSStringT_Set
0x66996F: mov     eax, [esi+68h]
0x669972: mov     eax, [eax+28h]
0x669975: cmp     eax, edi
0x669977: jnz     short loc_66997E
0x669979: mov     eax, offset EmptyString
0x66997E: push    eax
0x66997F: lea     ecx, [esp+254h+var_218]
0x669983: push    offset aS; "%s"
0x669988: push    ecx
0x669989: call    __sprintf
0x66998E: add     esp, 0Ch
0x669991: cmp     [esp+250h+var_218], 0
0x669996: mov     byte ptr [esp+250h+var_114], 0
0x66999E: jz      short loc_6699BF
0x6699A0: lea     edx, [esp+250h+var_218]
0x6699A4: push    edx
0x6699A5: push    offset aIcons; "Icons"
0x6699AA: lea     eax, [esp+258h+var_114]
0x6699B1: push    offset aSS_2; "%s\\%s"
0x6699B6: push    eax
0x6699B7: call    __sprintf
0x6699BC: add     esp, 10h
0x6699BF: mov     edi, [esp+250h+var_238.m_data]
0x6699C3: fld     dword ptr ds:0A31C80h
0x6699C9: mov     ebp, [esp+250h+var_230]
0x6699CD: push    edi; int
0x6699CE: lea     ecx, [esp+254h+var_114]
0x6699D5: push    ecx; int
0x6699D6: push    ecx
0x6699D7: fstp    [esp+25Ch+var_25C]; float
0x6699DA: push    ebp; int
0x6699DB: call    QueueUIMessage
0x6699E0: push    edi
0x6699E1: call    FormHeapFree
0x6699E6: push    ebp
0x6699E7: mov     [esp+268h+var_4], 0FFFFFFFFh
0x6699F2: call    FormHeapFree
0x6699F7: add     esp, 18h
0x6699FA: xor     edi, edi
0x6699FC: push    edi
0x6699FD: push    3F1h
0x669A02: call    sub_5790E0
0x669A07: add     esp, 8
0x669A0A: test    al, al
0x669A0C: jz      short loc_669A34
0x669A0E: push    edi
0x669A0F: call    InterfaceManager_MenuModeHasFocus
0x669A14: add     esp, 4
0x669A17: test    al, al
0x669A19: jnz     loc_669CFE
0x669A1F: push    3F1h
0x669A24: call    InterfaceManager_MenuModeHasFocus
0x669A29: add     esp, 4
0x669A2C: test    al, al
0x669A2E: jnz     loc_669CFE
0x669A34: test    byte ptr [esi], 1
0x669A37: jnz     short loc_669A41
0x669A39: test    bl, bl
0x669A3B: jnz     short loc_669A41
0x669A3D: push    9
0x669A3F: jmp     short loc_669A43
0x669A41: push    0Ah; int
0x669A43: call    sub_57DE50
0x669A48: mov     eax, [esi+68h]
0x669A4B: mov     eax, [eax+28h]
0x669A4E: add     esp, 4
0x669A51: cmp     eax, edi
0x669A53: jnz     short loc_669A5A
0x669A55: mov     eax, offset EmptyString
0x669A5A: push    eax
0x669A5B: lea     edx, [esp+254h+var_114]
0x669A62: push    offset aS; "%s"
0x669A67: push    edx
0x669A68: call    __sprintf
0x669A6D: add     esp, 0Ch
0x669A70: cmp     byte ptr [esp+250h+var_114], 0
0x669A78: mov     [esp+250h+var_218], 0
0x669A7D: jz      short loc_669A9E
0x669A7F: lea     eax, [esp+250h+var_114]
0x669A86: push    eax
0x669A87: push    offset aIcons; "Icons"
0x669A8C: lea     ecx, [esp+258h+var_218]
0x669A90: push    offset aSS_2; "%s\\%s"
0x669A95: push    ecx
0x669A96: call    __sprintf
0x669A9B: add     esp, 10h
0x669A9E: mov     ecx, [esi+68h]
0x669AA1: mov     al, [ecx+3Ch]
0x669AA4: mov     edx, ds:0B333C4h
0x669AAA: mov     edx, [edx+5F4h]
0x669AB0: shr     al, 1
0x669AB2: and     al, 1
0x669AB4: cmp     edx, edi
0x669AB6: jz      loc_669BC6
0x669ABC: cmp     ecx, edx
0x669ABE: jz      loc_669BBE
0x669AC4: test    al, al
0x669AC6: jnz     loc_669BBE
0x669ACC: mov     [esp+250h+var_228], edi
0x669AD0: mov     [esp+250h+var_224], di
0x669AD5: mov     [esp+250h+var_222], di
0x669ADA: mov     ecx, [ecx+0Ch]
0x669ADD: push    ecx; ArgList
0x669ADE: lea     eax, [esp+254h+var_228]
0x669AE2: push    offset aU_1; "%u"
0x669AE7: push    eax; int
0x669AE8: mov     [esp+25Ch+var_4], 2
0x669AF3: call    BSStringT_Static_Format
0x669AF8: add     esp, 0Ch
0x669AFB: test    bl, bl
0x669AFD: jz      short loc_669B0B
0x669AFF: mov     ecx, ds:0B382D8h
0x669B05: mov     [esp+250h+var_238.m_data], ecx
0x669B09: jmp     short loc_669B15
0x669B0B: mov     edx, ds:0B382C8h
0x669B11: mov     [esp+250h+var_238.m_data], edx
0x669B15: mov     ecx, [esi+64h]
0x669B18: lea     eax, [esp+250h+var_220]
0x669B1C: push    eax
0x669B1D: call    sub_47D400
0x669B22: mov     ecx, [esi+68h]
0x669B25: mov     ebx, [eax]
0x669B27: mov     eax, [ecx+34h]
0x669B2A: test    eax, eax
0x669B2C: mov     edx, ds:0B382E8h
0x669B32: mov     ebp, ds:0B382F0h
0x669B38: mov     byte ptr [esp+250h+var_4], 3
0x669B40: mov     [esp+250h+var_230], eax
0x669B44: jnz     short loc_669B4E
0x669B46: mov     [esp+250h+var_230], offset EmptyString
0x669B4E: push    3
0x669B50: push    edx
0x669B51: push    2
0x669B53: push    2
0x669B55: push    0
0x669B57: push    ebp
0x669B58: push    2
0x669B5A: lea     edx, [esp+26Ch+var_218]
0x669B5E: push    edx
0x669B5F: push    2
0x669B61: mov     edi, ecx
0x669B63: push    ecx
0x669B64: mov     ecx, esi
0x669B66: call    QuestStageItem_GetLogText
0x669B6B: mov     ecx, [esp+274h+var_238.m_data]
0x669B6F: push    eax
0x669B70: mov     eax, [esp+278h+var_230]
0x669B74: push    2
0x669B76: push    ebx
0x669B77: push    2
0x669B79: push    eax
0x669B7A: push    2
0x669B7C: push    ecx
0x669B7D: push    2
0x669B7F: push    edi
0x669B80: push    1
0x669B82: push    offset sub_665220
0x669B87: push    offset aQuest_added_xm; "quest_added.xml"
0x669B8C: call    sub_57B370
0x669B91: add     esp, 54h
0x669B94: lea     ecx, [esp+250h+var_220]; void *
0x669B98: mov     byte ptr [esp+250h+var_4], 2
0x669BA0: call    BSStringT_Clear
0x669BA5: lea     ecx, [esp+250h+var_228]; void *
0x669BA9: mov     [esp+250h+var_4], 0FFFFFFFFh
0x669BB4: call    BSStringT_Clear
0x669BB9: jmp     loc_669CFE
0x669BBE: cmp     edx, edi
0x669BC0: jnz     loc_669C70
0x669BC6: test    al, al
0x669BC8: jnz     loc_669C74
0x669BCE: test    bl, bl
0x669BD0: jz      short loc_669BDE
0x669BD2: mov     edx, ds:0B382D8h
0x669BD8: mov     [esp+250h+var_238.m_data], edx
0x669BDC: jmp     short loc_669BE7
0x669BDE: mov     eax, ds:0B382C8h
0x669BE3: mov     [esp+250h+var_238.m_data], eax
0x669BE7: mov     ecx, [esi+64h]
0x669BEA: lea     edx, [esp+250h+var_220]
0x669BEE: push    edx
0x669BEF: call    sub_47D400
0x669BF4: mov     ecx, [esi+68h]
0x669BF7: mov     ebx, [eax]
0x669BF9: mov     eax, [ecx+34h]
0x669BFC: test    eax, eax
0x669BFE: mov     edx, ds:0B382F0h
0x669C04: mov     [esp+250h+var_4], 4
0x669C0F: mov     ebp, eax
0x669C11: jnz     short loc_669C18
0x669C13: mov     ebp, offset EmptyString
0x669C18: push    3
0x669C1A: push    1
0x669C1C: push    0
0x669C1E: push    edx
0x669C1F: push    2
0x669C21: lea     eax, [esp+264h+var_218]
0x669C25: push    eax
0x669C26: push    2
0x669C28: mov     edi, ecx
0x669C2A: push    ecx
0x669C2B: mov     ecx, esi
0x669C2D: call    QuestStageItem_GetLogText
0x669C32: mov     ecx, [esp+26Ch+var_238.m_data]
0x669C36: push    eax
0x669C37: push    2
0x669C39: push    ebx
0x669C3A: push    2
0x669C3C: push    ebp
0x669C3D: push    2
0x669C3F: push    ecx
0x669C40: push    2
0x669C42: push    edi
0x669C43: push    1
0x669C45: push    offset sub_665240
0x669C4A: push    offset aQuest_added_xm; "quest_added.xml"
0x669C4F: call    sub_57B370
0x669C54: add     esp, 4Ch
0x669C57: lea     ecx, [esp+250h+var_220]; void *
0x669C5B: mov     [esp+250h+var_4], 0FFFFFFFFh
0x669C66: call    BSStringT_Clear
0x669C6B: jmp     loc_669CFE
0x669C70: test    al, al
0x669C72: jz      short loc_669C7C
0x669C74: mov     edi, ds:0B382D0h
0x669C7A: jmp     short loc_669C8C
0x669C7C: test    bl, bl
0x669C7E: mov     edi, ds:0B382D8h
0x669C84: jnz     short loc_669C8C
0x669C86: mov     edi, ds:0B382C8h
0x669C8C: mov     ecx, [esi+64h]
0x669C8F: lea     edx, [esp+250h+var_238]
0x669C93: push    edx
0x669C94: call    sub_47D400
0x669C99: mov     ecx, [esi+68h]
0x669C9C: mov     ebx, [eax]
0x669C9E: mov     eax, [ecx+34h]
0x669CA1: test    eax, eax
0x669CA3: mov     edx, ds:0B382F0h
0x669CA9: mov     [esp+250h+var_4], 5
0x669CB4: mov     ebp, eax
0x669CB6: jnz     short loc_669CBD
0x669CB8: mov     ebp, offset EmptyString
0x669CBD: push    3
0x669CBF: push    1
0x669CC1: push    0
0x669CC3: push    edx
0x669CC4: push    2
0x669CC6: lea     eax, [esp+264h+var_218]
0x669CCA: push    eax
0x669CCB: push    2
0x669CCD: push    ecx
0x669CCE: mov     ecx, esi
0x669CD0: call    QuestStageItem_GetLogText
0x669CD5: push    eax
0x669CD6: push    2
0x669CD8: push    ebx
0x669CD9: push    2
0x669CDB: push    ebp
0x669CDC: push    2
0x669CDE: push    edi
0x669CDF: push    2
0x669CE1: push    0
0x669CE3: push    1
0x669CE5: push    0
0x669CE7: push    offset aQuest_added_xm; "quest_added.xml"
0x669CEC: call    sub_57B370
0x669CF1: mov     ecx, [esp+29Ch+var_238.m_data]
0x669CF5: push    ecx
0x669CF6: call    FormHeapFree
0x669CFB: add     esp, 50h
0x669CFE: mov     al, 1
0x669D00: mov     ecx, [esp+250h+var_C]
0x669D07: mov     large fs:0, ecx
0x669D0E: pop     ecx
0x669D0F: pop     edi
0x669D10: pop     esi
0x669D11: pop     ebp
0x669D12: pop     ebx
0x669D13: mov     ecx, [esp+23Ch+var_10]
0x669D1A: xor     ecx, esp
0x669D1C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x669D21: add     esp, 23Ch
0x669D27: retn    4
