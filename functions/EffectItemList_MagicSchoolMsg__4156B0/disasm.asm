0x4156B0: push    0FFFFFFFFh
0x4156B2: push    offset EffectItemList_MagicSchoolMsg_SEH
0x4156B7: mov     eax, large fs:0
0x4156BD: push    eax
0x4156BE: push    ecx
0x4156BF: push    esi
0x4156C0: push    edi
0x4156C1: mov     eax, ___security_cookie
0x4156C6: xor     eax, esp
0x4156C8: push    eax
0x4156C9: lea     eax, [esp+1Ch+var_C]
0x4156CD: mov     large fs:0, eax
0x4156D3: xor     edi, edi
0x4156D5: mov     [esp+1Ch+var_10], edi
0x4156D9: mov     esi, [esp+1Ch+arg_0]
0x4156DD: mov     [esi], edi
0x4156DF: mov     [esi+4], di
0x4156E3: mov     [esi+6], di
0x4156E7: push    edi
0x4156E8: push    3
0x4156EA: mov     [esp+24h+var_4], edi
0x4156EE: mov     [esp+24h+var_10], 1
0x4156F6: call    EffectItemList_GetStrongestItem
0x4156FB: cmp     eax, edi
0x4156FD: jz      short loc_415728
0x4156FF: mov     edi, sMagicSchool
0x415705: mov     ecx, eax
0x415707: call    EffectItem_GetSchool
0x41570C: push    eax
0x41570D: call    Magic_GetSkillAVFromSchool
0x415712: push    eax
0x415713: call    ActorValue_GetName
0x415718: push    eax
0x415719: push    edi; ArgList
0x41571A: push    offset aSS_5; "%s: %s"
0x41571F: push    esi; int
0x415720: call    BSStringT_Static_Format
0x415725: add     esp, 18h
0x415728: mov     eax, esi
0x41572A: mov     ecx, [esp+1Ch+var_C]
0x41572E: mov     large fs:0, ecx
0x415735: pop     ecx
0x415736: pop     edi
0x415737: pop     esi
0x415738: add     esp, 10h
0x41573B: retn    4
