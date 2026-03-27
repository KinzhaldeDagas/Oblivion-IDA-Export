0x420D40: push    0FFFFFFFFh
0x420D42: push    offset SEH_6E3250
0x420D47: mov     eax, large fs:0
0x420D4D: push    eax
0x420D4E: push    esi
0x420D4F: push    edi
0x420D50: mov     eax, ___security_cookie
0x420D55: xor     eax, esp
0x420D57: push    eax
0x420D58: lea     eax, [esp+18h+var_C]
0x420D5C: mov     large fs:0, eax
0x420D62: mov     esi, ecx
0x420D64: mov     edi, [esp+18h+arg_0]
0x420D68: test    edi, edi
0x420D6A: push    4Dh ; 'M'; a2
0x420D6C: jz      short loc_420DDA
0x420D6E: call    BaseExtraList_GetExtraData
0x420D73: test    eax, eax
0x420D75: jz      short loc_420D8E
0x420D77: mov     [eax+0Ch], edi
0x420D7A: mov     ecx, [esp+18h+var_C]
0x420D7E: mov     large fs:0, ecx
0x420D85: pop     ecx
0x420D86: pop     edi
0x420D87: pop     esi
0x420D88: add     esp, 0Ch
0x420D8B: retn    4
0x420D8E: push    10h; Size
0x420D90: call    FormHeapAlloc
0x420D95: add     esp, 4
0x420D98: mov     [esp+18h+arg_0], eax
0x420D9C: test    eax, eax
0x420D9E: mov     [esp+18h+var_4], 0
0x420DA6: jz      short loc_420DB1
0x420DA8: mov     ecx, eax
0x420DAA: call    sub_42A820
0x420DAF: jmp     short loc_420DB3
0x420DB1: xor     eax, eax
0x420DB3: push    eax; BSExtraData *
0x420DB4: mov     ecx, esi; ExtraDataList *
0x420DB6: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x420DBE: mov     [eax+0Ch], edi
0x420DC1: call    BaseExtraList_AddExtra
0x420DC6: mov     ecx, [esp+18h+var_C]
0x420DCA: mov     large fs:0, ecx
0x420DD1: pop     ecx
0x420DD2: pop     edi
0x420DD3: pop     esi
0x420DD4: add     esp, 0Ch
0x420DD7: retn    4
0x420DDA: call    BaseExtraList_RemoveExtraByType
0x420DDF: mov     ecx, [esp+18h+var_C]
0x420DE3: mov     large fs:0, ecx
0x420DEA: pop     ecx
0x420DEB: pop     edi
0x420DEC: pop     esi
0x420DED: add     esp, 0Ch
0x420DF0: retn    4
