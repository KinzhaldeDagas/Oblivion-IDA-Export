0x4245E0: push    0FFFFFFFFh
0x4245E2: push    offset SEH_6E3250
0x4245E7: mov     eax, large fs:0
0x4245ED: push    eax
0x4245EE: push    esi
0x4245EF: push    edi
0x4245F0: mov     eax, ___security_cookie
0x4245F5: xor     eax, esp
0x4245F7: push    eax
0x4245F8: lea     eax, [esp+18h+var_C]
0x4245FC: mov     large fs:0, eax
0x424602: mov     edi, ecx
0x424604: push    0Ah; a2
0x424606: call    BaseExtraList_GetExtraData
0x42460B: mov     esi, [esp+18h+a2]
0x42460F: test    esi, esi
0x424611: jnz     short loc_424635
0x424613: test    eax, eax
0x424615: jz      short loc_42468E
0x424617: push    1
0x424619: push    eax
0x42461A: mov     ecx, edi
0x42461C: call    BaseExtraList_RemoveExtraByPtr
0x424621: mov     ecx, [esp+18h+var_C]
0x424625: mov     large fs:0, ecx
0x42462C: pop     ecx
0x42462D: pop     edi
0x42462E: pop     esi
0x42462F: add     esp, 0Ch
0x424632: retn    4
0x424635: test    eax, eax
0x424637: jnz     short loc_424683
0x424639: push    14h; Size
0x42463B: call    FormHeapAlloc
0x424640: add     esp, 4
0x424643: mov     [esp+18h+a2], eax
0x424647: test    eax, eax
0x424649: mov     [esp+18h+var_4], 0
0x424651: jz      short loc_42465D
0x424653: push    esi
0x424654: mov     ecx, eax
0x424656: call    sub_424510
0x42465B: jmp     short loc_42465F
0x42465D: xor     eax, eax
0x42465F: push    eax; BSExtraData *
0x424660: mov     ecx, edi; ExtraDataList *
0x424662: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42466A: call    BaseExtraList_AddExtra
0x42466F: mov     ecx, [esp+18h+var_C]
0x424673: mov     large fs:0, ecx
0x42467A: pop     ecx
0x42467B: pop     edi
0x42467C: pop     esi
0x42467D: add     esp, 0Ch
0x424680: retn    4
0x424683: push    0; a3
0x424685: push    esi; a2
0x424686: lea     ecx, [eax+0Ch]; this
0x424689: call    BSStringT_Set
0x42468E: mov     ecx, [esp+18h+var_C]
0x424692: mov     large fs:0, ecx
0x424699: pop     ecx
0x42469A: pop     edi
0x42469B: pop     esi
0x42469C: add     esp, 0Ch
0x42469F: retn    4
