0x4268B0: push    0FFFFFFFFh
0x4268B2: push    offset SEH_6E3250
0x4268B7: mov     eax, large fs:0
0x4268BD: push    eax
0x4268BE: push    esi
0x4268BF: push    edi
0x4268C0: mov     eax, ___security_cookie
0x4268C5: xor     eax, esp
0x4268C7: push    eax
0x4268C8: lea     eax, [esp+18h+var_C]
0x4268CC: mov     large fs:0, eax
0x4268D2: mov     edi, ecx
0x4268D4: mov     esi, [esp+18h+arg_0]
0x4268D8: test    esi, esi
0x4268DA: jz      short loc_426913
0x4268DC: mov     ecx, esi
0x4268DE: call    sub_5660A0
0x4268E3: test    al, al
0x4268E5: jz      short loc_4268F1
0x4268E7: cmp     byte ptr [esi+20h], 1
0x4268EB: jnz     loc_4269C6
0x4268F1: mov     ecx, esi
0x4268F3: call    sub_5660E0
0x4268F8: test    al, al
0x4268FA: jnz     loc_4269C6
0x426900: mov     al, [esi+20h]
0x426903: cmp     al, 13h
0x426905: jz      loc_4269C6
0x42690B: cmp     al, 11h
0x42690D: jz      loc_4269C6
0x426913: push    1Fh; a2
0x426915: mov     ecx, edi; this
0x426917: call    BaseExtraList_GetExtraData
0x42691C: test    esi, esi
0x42691E: jz      loc_4269AB
0x426924: test    eax, eax
0x426926: jnz     short loc_426986
0x426928: push    1Ch; Size
0x42692A: call    FormHeapAlloc
0x42692F: add     esp, 4
0x426932: mov     [esp+18h+arg_0], eax
0x426936: test    eax, eax
0x426938: mov     [esp+18h+var_4], 0
0x426940: jz      short loc_426960
0x426942: mov     ecx, [esp+18h+arg_10]
0x426946: mov     edx, [esp+18h+arg_C]
0x42694A: push    ecx
0x42694B: mov     ecx, [esp+1Ch+arg_8]
0x42694F: push    edx
0x426950: mov     edx, [esp+20h+arg_4]
0x426954: push    ecx
0x426955: push    edx
0x426956: push    esi
0x426957: mov     ecx, eax
0x426959: call    sub_42A1A0
0x42695E: jmp     short loc_426962
0x426960: xor     eax, eax
0x426962: push    eax; BSExtraData *
0x426963: mov     ecx, edi; ExtraDataList *
0x426965: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42696D: call    BaseExtraList_AddExtra
0x426972: mov     ecx, [esp+18h+var_C]
0x426976: mov     large fs:0, ecx
0x42697D: pop     ecx
0x42697E: pop     edi
0x42697F: pop     esi
0x426980: add     esp, 0Ch
0x426983: retn    14h
0x426986: mov     ecx, [esp+18h+arg_4]
0x42698A: mov     edx, [esp+18h+arg_8]
0x42698E: mov     [eax+0Ch], esi
0x426991: mov     [eax+10h], ecx
0x426994: mov     [eax+14h], edx
0x426997: mov     ecx, [esp+18h+var_C]
0x42699B: mov     large fs:0, ecx
0x4269A2: pop     ecx
0x4269A3: pop     edi
0x4269A4: pop     esi
0x4269A5: add     esp, 0Ch
0x4269A8: retn    14h
0x4269AB: test    eax, eax
0x4269AD: jz      short loc_4269C6
0x4269AF: push    1Fh; a2
0x4269B1: mov     ecx, edi; this
0x4269B3: call    BaseExtraList_GetExtraData
0x4269B8: test    eax, eax
0x4269BA: jz      short loc_4269C6
0x4269BC: push    1
0x4269BE: push    eax
0x4269BF: mov     ecx, edi
0x4269C1: call    BaseExtraList_RemoveExtraByPtr
0x4269C6: mov     ecx, [esp+18h+var_C]
0x4269CA: mov     large fs:0, ecx
0x4269D1: pop     ecx
0x4269D2: pop     edi
0x4269D3: pop     esi
0x4269D4: add     esp, 0Ch
0x4269D7: retn    14h
