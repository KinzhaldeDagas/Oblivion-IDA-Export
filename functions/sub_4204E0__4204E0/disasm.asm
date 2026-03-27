0x4204E0: push    0FFFFFFFFh
0x4204E2: push    offset SEH_6E3250
0x4204E7: mov     eax, large fs:0
0x4204ED: push    eax
0x4204EE: push    esi
0x4204EF: push    edi
0x4204F0: mov     eax, ___security_cookie
0x4204F5: xor     eax, esp
0x4204F7: push    eax
0x4204F8: lea     eax, [esp+18h+var_C]
0x4204FC: mov     large fs:0, eax
0x420502: mov     esi, ecx
0x420504: mov     edi, [esp+18h+arg_0]
0x420508: test    edi, edi
0x42050A: push    5; a2
0x42050C: jz      short loc_42057A
0x42050E: call    BaseExtraList_GetExtraData
0x420513: test    eax, eax
0x420515: jz      short loc_42052E
0x420517: mov     [eax+0Ch], edi
0x42051A: mov     ecx, [esp+18h+var_C]
0x42051E: mov     large fs:0, ecx
0x420525: pop     ecx
0x420526: pop     edi
0x420527: pop     esi
0x420528: add     esp, 0Ch
0x42052B: retn    4
0x42052E: push    10h; Size
0x420530: call    FormHeapAlloc
0x420535: add     esp, 4
0x420538: mov     [esp+18h+arg_0], eax
0x42053C: test    eax, eax
0x42053E: mov     [esp+18h+var_4], 0
0x420546: jz      short loc_420551
0x420548: mov     ecx, eax
0x42054A: call    ExtraCellWaterType_Constructor
0x42054F: jmp     short loc_420553
0x420551: xor     eax, eax
0x420553: push    eax; BSExtraData *
0x420554: mov     ecx, esi; ExtraDataList *
0x420556: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42055E: mov     [eax+0Ch], edi
0x420561: call    BaseExtraList_AddExtra
0x420566: mov     ecx, [esp+18h+var_C]
0x42056A: mov     large fs:0, ecx
0x420571: pop     ecx
0x420572: pop     edi
0x420573: pop     esi
0x420574: add     esp, 0Ch
0x420577: retn    4
0x42057A: call    BaseExtraList_RemoveExtraByType
0x42057F: mov     ecx, [esp+18h+var_C]
0x420583: mov     large fs:0, ecx
0x42058A: pop     ecx
0x42058B: pop     edi
0x42058C: pop     esi
0x42058D: add     esp, 0Ch
0x420590: retn    4
