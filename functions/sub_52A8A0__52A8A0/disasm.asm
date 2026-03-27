0x52A8A0: push    ebp
0x52A8A1: mov     ebp, esp
0x52A8A3: and     esp, 0FFFFFFF8h
0x52A8A6: mov     ecx, [ebp+arg_0]
0x52A8A9: sub     esp, 0Ch
0x52A8AC: push    ebx
0x52A8AD: push    esi
0x52A8AE: xor     esi, esi
0x52A8B0: cmp     ecx, esi
0x52A8B2: push    edi
0x52A8B3: jz      loc_52A94D
0x52A8B9: call    BSSimpleList_Clear
0x52A8BE: mov     ebx, ds:0B333C4h
0x52A8C4: add     ebx, 5ECh
0x52A8CA: cmp     ebx, esi
0x52A8CC: mov     [esp+18h+var_8], esi
0x52A8D0: mov     [esp+18h+var_4], esi
0x52A8D4: jz      short loc_52A944
0x52A8D6: mov     edi, [ebx]
0x52A8D8: test    edi, edi
0x52A8DA: jz      short loc_52A944
0x52A8DC: mov     esi, [edi+68h]
0x52A8DF: test    esi, esi
0x52A8E1: mov     ebx, [ebx+4]
0x52A8E4: jz      short loc_52A940
0x52A8E6: mov     eax, [ebp+arg_4]
0x52A8E9: test    eax, eax
0x52A8EB: jz      short loc_52A8F3
0x52A8ED: cmp     esi, eax
0x52A8EF: jnz     short loc_52A940
0x52A8F1: jmp     short loc_52A918
0x52A8F3: mov     al, [esi+3Ch]
0x52A8F6: shr     al, 1
0x52A8F8: and     al, 1
0x52A8FA: cmp     [ebp+arg_8], al
0x52A8FD: jnz     short loc_52A940
0x52A8FF: lea     eax, [esp+18h+var_8]
0x52A903: cmp     [eax], esi
0x52A905: jz      short loc_52A940
0x52A907: mov     eax, [eax+4]
0x52A90A: test    eax, eax
0x52A90C: jnz     short loc_52A903
0x52A90E: push    esi
0x52A90F: lea     ecx, [esp+1Ch+var_8]
0x52A913: call    BSSimpleList_PushFront
0x52A918: cmp     dword ptr [edi+64h], 0
0x52A91C: jz      short loc_52A940
0x52A91E: push    esi
0x52A91F: mov     ecx, edi
0x52A921: call    QuestStageItem_GetLogText
0x52A926: test    eax, eax
0x52A928: jz      short loc_52A940
0x52A92A: cmp     [ebp+arg_C], 0
0x52A92E: mov     ecx, [ebp+arg_0]
0x52A931: push    edi
0x52A932: jz      short loc_52A93B
0x52A934: call    BSSimpleList_PushBack
0x52A939: jmp     short loc_52A940
0x52A93B: call    BSSimpleList_PushFront
0x52A940: test    ebx, ebx
0x52A942: jnz     short loc_52A8D6
0x52A944: lea     ecx, [esp+18h+var_8]
0x52A948: call    BSSimpleList_Clear
0x52A94D: pop     edi
0x52A94E: pop     esi
0x52A94F: pop     ebx
0x52A950: mov     esp, ebp
0x52A952: pop     ebp
0x52A953: retn
