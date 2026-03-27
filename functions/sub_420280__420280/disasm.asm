0x420280: push    0FFFFFFFFh
0x420282: push    offset SEH_6E3250
0x420287: mov     eax, large fs:0
0x42028D: push    eax
0x42028E: push    esi
0x42028F: push    edi
0x420290: mov     eax, ___security_cookie
0x420295: xor     eax, esp
0x420297: push    eax
0x420298: lea     eax, [esp+18h+var_C]
0x42029C: mov     large fs:0, eax
0x4202A2: mov     esi, ecx
0x4202A4: mov     edi, [esp+18h+arg_0]
0x4202A8: test    edi, edi
0x4202AA: push    3Fh ; '?'; a2
0x4202AC: jz      short loc_42031A
0x4202AE: call    BaseExtraList_GetExtraData
0x4202B3: test    eax, eax
0x4202B5: jz      short loc_4202CE
0x4202B7: mov     [eax+0Ch], edi
0x4202BA: mov     ecx, [esp+18h+var_C]
0x4202BE: mov     large fs:0, ecx
0x4202C5: pop     ecx
0x4202C6: pop     edi
0x4202C7: pop     esi
0x4202C8: add     esp, 0Ch
0x4202CB: retn    4
0x4202CE: push    14h; Size
0x4202D0: call    FormHeapAlloc
0x4202D5: add     esp, 4
0x4202D8: mov     [esp+18h+arg_0], eax
0x4202DC: test    eax, eax
0x4202DE: mov     [esp+18h+var_4], 0
0x4202E6: jz      short loc_4202F1
0x4202E8: mov     ecx, eax
0x4202EA: call    sub_42A5E0
0x4202EF: jmp     short loc_4202F3
0x4202F1: xor     eax, eax
0x4202F3: push    eax; BSExtraData *
0x4202F4: mov     ecx, esi; ExtraDataList *
0x4202F6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x4202FE: mov     [eax+0Ch], edi
0x420301: call    BaseExtraList_AddExtra
0x420306: mov     ecx, [esp+18h+var_C]
0x42030A: mov     large fs:0, ecx
0x420311: pop     ecx
0x420312: pop     edi
0x420313: pop     esi
0x420314: add     esp, 0Ch
0x420317: retn    4
0x42031A: call    BaseExtraList_RemoveExtraByType
0x42031F: mov     ecx, [esp+18h+var_C]
0x420323: mov     large fs:0, ecx
0x42032A: pop     ecx
0x42032B: pop     edi
0x42032C: pop     esi
0x42032D: add     esp, 0Ch
0x420330: retn    4
