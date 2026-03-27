0x420780: push    0FFFFFFFFh
0x420782: push    offset SEH_6E3250
0x420787: mov     eax, large fs:0
0x42078D: push    eax
0x42078E: push    esi
0x42078F: push    edi
0x420790: mov     eax, ___security_cookie
0x420795: xor     eax, esp
0x420797: push    eax
0x420798: lea     eax, [esp+18h+var_C]
0x42079C: mov     large fs:0, eax
0x4207A2: mov     esi, ecx
0x4207A4: mov     edi, [esp+18h+arg_0]
0x4207A8: test    edi, edi
0x4207AA: push    24h ; '$'; a2
0x4207AC: jz      short loc_42081A
0x4207AE: call    BaseExtraList_GetExtraData
0x4207B3: test    eax, eax
0x4207B5: jz      short loc_4207CE
0x4207B7: mov     [eax+0Ch], edi
0x4207BA: mov     ecx, [esp+18h+var_C]
0x4207BE: mov     large fs:0, ecx
0x4207C5: pop     ecx
0x4207C6: pop     edi
0x4207C7: pop     esi
0x4207C8: add     esp, 0Ch
0x4207CB: retn    4
0x4207CE: push    10h; Size
0x4207D0: call    FormHeapAlloc
0x4207D5: add     esp, 4
0x4207D8: mov     [esp+18h+arg_0], eax
0x4207DC: test    eax, eax
0x4207DE: mov     [esp+18h+var_4], 0
0x4207E6: jz      short loc_4207F1
0x4207E8: mov     ecx, eax
0x4207EA: call    sub_42A6C0
0x4207EF: jmp     short loc_4207F3
0x4207F1: xor     eax, eax
0x4207F3: push    eax; BSExtraData *
0x4207F4: mov     ecx, esi; ExtraDataList *
0x4207F6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4207FE: mov     [eax+0Ch], edi
0x420801: call    BaseExtraList_AddExtra
0x420806: mov     ecx, [esp+18h+var_C]
0x42080A: mov     large fs:0, ecx
0x420811: pop     ecx
0x420812: pop     edi
0x420813: pop     esi
0x420814: add     esp, 0Ch
0x420817: retn    4
0x42081A: call    BaseExtraList_RemoveExtraByType
0x42081F: mov     ecx, [esp+18h+var_C]
0x420823: mov     large fs:0, ecx
0x42082A: pop     ecx
0x42082B: pop     edi
0x42082C: pop     esi
0x42082D: add     esp, 0Ch
0x420830: retn    4
