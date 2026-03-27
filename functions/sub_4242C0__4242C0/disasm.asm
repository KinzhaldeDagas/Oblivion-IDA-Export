0x4242C0: push    0FFFFFFFFh
0x4242C2: push    offset SEH_6E3250
0x4242C7: mov     eax, large fs:0
0x4242CD: push    eax
0x4242CE: push    ebx
0x4242CF: push    esi
0x4242D0: mov     eax, ___security_cookie
0x4242D5: xor     eax, esp
0x4242D7: push    eax
0x4242D8: lea     eax, [esp+18h+var_C]
0x4242DC: mov     large fs:0, eax
0x4242E2: mov     esi, ecx
0x4242E4: push    0Bh; a2
0x4242E6: call    BaseExtraList_GetExtraData
0x4242EB: mov     ebx, [esp+18h+arg_0]
0x4242EF: test    ebx, ebx
0x4242F1: jnz     short loc_424315
0x4242F3: test    eax, eax
0x4242F5: jz      short loc_424366
0x4242F7: push    1
0x4242F9: push    eax
0x4242FA: mov     ecx, esi
0x4242FC: call    BaseExtraList_RemoveExtraByPtr
0x424301: mov     ecx, [esp+18h+var_C]
0x424305: mov     large fs:0, ecx
0x42430C: pop     ecx
0x42430D: pop     esi
0x42430E: pop     ebx
0x42430F: add     esp, 0Ch
0x424312: retn    4
0x424315: test    eax, eax
0x424317: jnz     short loc_424363
0x424319: push    10h; Size
0x42431B: call    FormHeapAlloc
0x424320: add     esp, 4
0x424323: mov     [esp+18h+arg_0], eax
0x424327: test    eax, eax
0x424329: mov     [esp+18h+var_4], 0
0x424331: jz      short loc_42433D
0x424333: push    ebx
0x424334: mov     ecx, eax
0x424336: call    ExtraCellMusicType_Constructor
0x42433B: jmp     short loc_42433F
0x42433D: xor     eax, eax
0x42433F: push    eax; BSExtraData *
0x424340: mov     ecx, esi; ExtraDataList *
0x424342: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42434A: call    BaseExtraList_AddExtra
0x42434F: mov     ecx, [esp+18h+var_C]
0x424353: mov     large fs:0, ecx
0x42435A: pop     ecx
0x42435B: pop     esi
0x42435C: pop     ebx
0x42435D: add     esp, 0Ch
0x424360: retn    4
0x424363: mov     [eax+0Ch], bl
0x424366: mov     ecx, [esp+18h+var_C]
0x42436A: mov     large fs:0, ecx
0x424371: pop     ecx
0x424372: pop     esi
0x424373: pop     ebx
0x424374: add     esp, 0Ch
0x424377: retn    4
