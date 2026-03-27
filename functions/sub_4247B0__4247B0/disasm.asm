0x4247B0: push    0FFFFFFFFh
0x4247B2: push    offset SEH_6E3250
0x4247B7: mov     eax, large fs:0
0x4247BD: push    eax
0x4247BE: push    esi
0x4247BF: push    edi
0x4247C0: mov     eax, ___security_cookie
0x4247C5: xor     eax, esp
0x4247C7: push    eax
0x4247C8: lea     eax, [esp+18h+var_C]
0x4247CC: mov     large fs:0, eax
0x4247D2: mov     esi, ecx
0x4247D4: push    11h; a2
0x4247D6: call    BaseExtraList_GetExtraData
0x4247DB: test    eax, eax
0x4247DD: jz      short loc_42481C
0x4247DF: mov     ecx, [esp+18h+arg_0]
0x4247E3: test    ecx, ecx
0x4247E5: jnz     short loc_424805
0x4247E7: push    1
0x4247E9: push    eax
0x4247EA: mov     ecx, esi
0x4247EC: call    BaseExtraList_RemoveExtraByPtr
0x4247F1: mov     ecx, [esp+18h+var_C]
0x4247F5: mov     large fs:0, ecx
0x4247FC: pop     ecx
0x4247FD: pop     edi
0x4247FE: pop     esi
0x4247FF: add     esp, 0Ch
0x424802: retn    4
0x424805: mov     [eax+0Ch], ecx
0x424808: mov     ecx, [esp+18h+var_C]
0x42480C: mov     large fs:0, ecx
0x424813: pop     ecx
0x424814: pop     edi
0x424815: pop     esi
0x424816: add     esp, 0Ch
0x424819: retn    4
0x42481C: mov     edi, [esp+18h+arg_0]
0x424820: test    edi, edi
0x424822: jz      short loc_42485A
0x424824: push    10h; Size
0x424826: call    FormHeapAlloc
0x42482B: add     esp, 4
0x42482E: mov     [esp+18h+arg_0], eax
0x424832: test    eax, eax
0x424834: mov     [esp+18h+var_4], 0
0x42483C: jz      short loc_424848
0x42483E: push    edi
0x42483F: mov     ecx, eax
0x424841: call    sub_42A2E0
0x424846: jmp     short loc_42484A
0x424848: xor     eax, eax
0x42484A: push    eax; BSExtraData *
0x42484B: mov     ecx, esi; ExtraDataList *
0x42484D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x424855: call    BaseExtraList_AddExtra
0x42485A: mov     ecx, [esp+18h+var_C]
0x42485E: mov     large fs:0, ecx
0x424865: pop     ecx
0x424866: pop     edi
0x424867: pop     esi
0x424868: add     esp, 0Ch
0x42486B: retn    4
