0x415390: push    0FFFFFFFFh
0x415392: push    offset EffectItemList_SkillReqMsg_SEH
0x415397: mov     eax, large fs:0
0x41539D: push    eax
0x41539E: sub     esp, 78h
0x4153A1: mov     eax, ___security_cookie
0x4153A6: xor     eax, esp
0x4153A8: mov     [esp+84h+var_10], eax
0x4153AC: push    ebx
0x4153AD: push    ebp
0x4153AE: push    esi
0x4153AF: push    edi
0x4153B0: mov     eax, ___security_cookie
0x4153B5: xor     eax, esp
0x4153B7: push    eax
0x4153B8: lea     eax, [esp+98h+var_C]
0x4153BF: mov     large fs:0, eax
0x4153C5: mov     esi, [esp+98h+arg_0]
0x4153CC: xor     ebp, ebp
0x4153CE: mov     [esp+98h+var_80], ebp
0x4153D2: mov     edi, ecx
0x4153D4: mov     [esp+98h+var_78], esi
0x4153D8: mov     [esi], ebp
0x4153DA: mov     [esi+4], bp
0x4153DE: mov     [esi+6], bp
0x4153E2: push    ebp
0x4153E3: mov     [esp+9Ch+var_4], ebp
0x4153EA: mov     [esp+9Ch+var_80], 1
0x4153F2: call    FormHeapFree
0x4153F7: add     esp, 4
0x4153FA: push    ebp
0x4153FB: push    3
0x4153FD: mov     ecx, edi
0x4153FF: mov     [esi], ebp
0x415401: mov     [esi+6], bp
0x415405: mov     [esi+4], bp
0x415409: call    EffectItemList_GetStrongestItem
0x41540E: mov     ebx, eax
0x415410: cmp     ebx, ebp
0x415412: jz      short EffectItemList_SkillReqMsg___Done
0x415414: mov     eax, sMagicCostliestEffectSkillOf
0x415419: mov     ecx, sMagicCostliestEffectRequires
0x41541F: mov     edx, [edi]
0x415421: mov     [esp+98h+var_7C], eax
0x415425: mov     eax, [edx+8]
0x415428: mov     [esp+98h+var_84], ecx
0x41542C: mov     ecx, edi
0x41542E: call    eax
0x415430: push    eax
0x415431: call    ActorValue_GetMasterySkill
0x415436: mov     ecx, [esp+9Ch+var_7C]
0x41543A: add     esp, 4
0x41543D: push    eax
0x41543E: push    ecx
0x41543F: mov     ecx, ebx
0x415441: call    EffectItem_GetSchool
0x415446: push    eax
0x415447: call    Magic_GetSkillAVFromSchool
0x41544C: push    eax
0x41544D: call    ActorValue_GetName
0x415452: mov     edx, [esp+0A8h+var_84]
0x415456: add     esp, 8
0x415459: push    eax
0x41545A: push    edx
0x41545B: lea     eax, [esp+0A8h+a2]
0x41545F: push    offset aSSSD; "%s%s%s%d"
0x415464: push    eax
0x415465: call    __sprintf
0x41546A: add     esp, 18h
0x41546D: push    ebp; a3
0x41546E: lea     ecx, [esp+9Ch+a2]
0x415472: push    ecx; a2
0x415473: mov     ecx, esi; this
0x415475: call    BSStringT_Set
