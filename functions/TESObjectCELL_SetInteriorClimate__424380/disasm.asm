0x424380: push    0FFFFFFFFh
0x424382: push    offset SEH_6E3250
0x424387: mov     eax, large fs:0
0x42438D: push    eax
0x42438E: push    esi
0x42438F: push    edi
0x424390: mov     eax, ___security_cookie
0x424395: xor     eax, esp
0x424397: push    eax
0x424398: lea     eax, [esp+18h+var_C]
0x42439C: mov     large fs:0, eax
0x4243A2: mov     edi, ecx
0x4243A4: push    0Ch; a2
0x4243A6: call    BaseExtraList_GetExtraData
0x4243AB: mov     esi, [esp+18h+arg_0]
0x4243AF: test    esi, esi
0x4243B1: jnz     short loc_4243D5
0x4243B3: test    eax, eax
0x4243B5: jz      short loc_424426
0x4243B7: push    1
0x4243B9: push    eax
0x4243BA: mov     ecx, edi
0x4243BC: call    BaseExtraList_RemoveExtraByPtr
0x4243C1: mov     ecx, [esp+18h+var_C]
0x4243C5: mov     large fs:0, ecx
0x4243CC: pop     ecx
0x4243CD: pop     edi
0x4243CE: pop     esi
0x4243CF: add     esp, 0Ch
0x4243D2: retn    4
0x4243D5: test    eax, eax
0x4243D7: jnz     short loc_424423
0x4243D9: push    10h; Size
0x4243DB: call    FormHeapAlloc
0x4243E0: add     esp, 4
0x4243E3: mov     [esp+18h+arg_0], eax
0x4243E7: test    eax, eax
0x4243E9: mov     [esp+18h+var_4], 0
0x4243F1: jz      short loc_4243FD
0x4243F3: push    esi
0x4243F4: mov     ecx, eax
0x4243F6: call    ExtraCellClimate_Constructor
0x4243FB: jmp     short loc_4243FF
0x4243FD: xor     eax, eax
0x4243FF: push    eax; BSExtraData *
0x424400: mov     ecx, edi; ExtraDataList *
0x424402: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42440A: call    BaseExtraList_AddExtra
0x42440F: mov     ecx, [esp+18h+var_C]
0x424413: mov     large fs:0, ecx
0x42441A: pop     ecx
0x42441B: pop     edi
0x42441C: pop     esi
0x42441D: add     esp, 0Ch
0x424420: retn    4
0x424423: mov     [eax+0Ch], esi
0x424426: mov     ecx, [esp+18h+var_C]
0x42442A: mov     large fs:0, ecx
0x424431: pop     ecx
0x424432: pop     edi
0x424433: pop     esi
0x424434: add     esp, 0Ch
0x424437: retn    4
