0x4205C0: push    0FFFFFFFFh
0x4205C2: push    offset SEH_6E3250
0x4205C7: mov     eax, large fs:0
0x4205CD: push    eax
0x4205CE: push    esi
0x4205CF: push    edi
0x4205D0: mov     eax, ___security_cookie
0x4205D5: xor     eax, esp
0x4205D7: push    eax
0x4205D8: lea     eax, [esp+18h+var_C]
0x4205DC: mov     large fs:0, eax
0x4205E2: mov     esi, ecx
0x4205E4: mov     edi, [esp+18h+arg_0]
0x4205E8: test    edi, edi
0x4205EA: push    43h ; 'C'; a2
0x4205EC: jz      short loc_42065A
0x4205EE: call    BaseExtraList_GetExtraData
0x4205F3: test    eax, eax
0x4205F5: jz      short loc_42060E
0x4205F7: mov     [eax+0Ch], edi
0x4205FA: mov     ecx, [esp+18h+var_C]
0x4205FE: mov     large fs:0, ecx
0x420605: pop     ecx
0x420606: pop     edi
0x420607: pop     esi
0x420608: add     esp, 0Ch
0x42060B: retn    4
0x42060E: push    10h; Size
0x420610: call    FormHeapAlloc
0x420615: add     esp, 4
0x420618: mov     [esp+18h+arg_0], eax
0x42061C: test    eax, eax
0x42061E: mov     [esp+18h+var_4], 0
0x420626: jz      short loc_420631
0x420628: mov     ecx, eax
0x42062A: call    sub_42A660
0x42062F: jmp     short loc_420633
0x420631: xor     eax, eax
0x420633: push    eax; BSExtraData *
0x420634: mov     ecx, esi; ExtraDataList *
0x420636: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42063E: mov     [eax+0Ch], edi
0x420641: call    BaseExtraList_AddExtra
0x420646: mov     ecx, [esp+18h+var_C]
0x42064A: mov     large fs:0, ecx
0x420651: pop     ecx
0x420652: pop     edi
0x420653: pop     esi
0x420654: add     esp, 0Ch
0x420657: retn    4
0x42065A: call    BaseExtraList_RemoveExtraByType
0x42065F: mov     ecx, [esp+18h+var_C]
0x420663: mov     large fs:0, ecx
0x42066A: pop     ecx
0x42066B: pop     edi
0x42066C: pop     esi
0x42066D: add     esp, 0Ch
0x420670: retn    4
