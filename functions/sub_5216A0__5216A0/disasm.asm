0x5216A0: push    0FFFFFFFFh
0x5216A2: push    offset SEH_5DC520
0x5216A7: mov     eax, large fs:0
0x5216AD: push    eax
0x5216AE: sub     esp, 8
0x5216B1: push    esi
0x5216B2: push    edi
0x5216B3: mov     eax, ds:0B30AACh
0x5216B8: xor     eax, esp
0x5216BA: push    eax
0x5216BB: lea     eax, [esp+20h+var_C]
0x5216BF: mov     large fs:0, eax
0x5216C5: mov     edi, ecx
0x5216C7: mov     ecx, [esp+20h+arg_0]
0x5216CB: xor     eax, eax
0x5216CD: cmp     ecx, eax
0x5216CF: jz      short loc_521713
0x5216D1: mov     [esp+20h+var_14], eax
0x5216D5: mov     [esp+20h+var_10], ax
0x5216DA: mov     [esp+20h+var_E], ax
0x5216DF: mov     [esp+20h+var_4], eax
0x5216E3: lea     eax, [esp+20h+var_14]
0x5216E7: push    eax
0x5216E8: push    ecx
0x5216E9: call    GetFormModelPAth
0x5216EE: add     esp, 4
0x5216F1: push    eax
0x5216F2: call    sub_521370
0x5216F7: mov     esi, [esp+28h+var_14]
0x5216FB: add     esp, 8
0x5216FE: push    esi; char *
0x5216FF: mov     ecx, edi
0x521701: call    sub_5215C0
0x521706: push    esi
0x521707: mov     edi, eax
0x521709: call    FormHeapFree
0x52170E: add     esp, 4
0x521711: mov     eax, edi
0x521713: mov     ecx, [esp+20h+var_C]
0x521717: mov     large fs:0, ecx
0x52171E: pop     ecx
0x52171F: pop     edi
0x521720: pop     esi
0x521721: add     esp, 14h
0x521724: retn    4
