0x6E2CB0: push    0FFFFFFFFh
0x6E2CB2: push    offset SEH_8C8970
0x6E2CB7: mov     eax, large fs:0
0x6E2CBD: push    eax
0x6E2CBE: push    ecx
0x6E2CBF: push    esi
0x6E2CC0: push    edi
0x6E2CC1: mov     eax, ds:0B30AACh
0x6E2CC6: xor     eax, esp
0x6E2CC8: push    eax
0x6E2CC9: lea     eax, [esp+1Ch+var_C]
0x6E2CCD: mov     large fs:0, eax
0x6E2CD3: mov     esi, ecx
0x6E2CD5: push    18h; Size
0x6E2CD7: call    FormHeapAlloc
0x6E2CDC: mov     edi, eax
0x6E2CDE: add     esp, 4
0x6E2CE1: mov     [esp+1Ch+var_10], edi
0x6E2CE5: xor     eax, eax
0x6E2CE7: cmp     edi, eax
0x6E2CE9: mov     [esp+1Ch+var_4], eax
0x6E2CED: jz      short loc_6E2D06
0x6E2CEF: mov     eax, [esi+48h]
0x6E2CF2: mov     ecx, [esi+44h]
0x6E2CF5: push    eax
0x6E2CF6: call    sub_7300B0
0x6E2CFB: push    ecx
0x6E2CFC: mov     ecx, edi
0x6E2CFE: fstp    [esp+20h+var_20]; float
0x6E2D01: call    sub_6D29E0
0x6E2D06: mov     ecx, [esp+1Ch+var_C]
0x6E2D0A: mov     large fs:0, ecx
0x6E2D11: pop     ecx
0x6E2D12: pop     edi
0x6E2D13: pop     esi
0x6E2D14: add     esp, 10h
0x6E2D17: retn    4
