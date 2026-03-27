0x6C5CC0: push    0FFFFFFFFh
0x6C5CC2: push    offset SEH_8C8970
0x6C5CC7: mov     eax, large fs:0
0x6C5CCD: push    eax
0x6C5CCE: push    ecx
0x6C5CCF: push    esi
0x6C5CD0: push    edi
0x6C5CD1: mov     eax, ds:0B30AACh
0x6C5CD6: xor     eax, esp
0x6C5CD8: push    eax
0x6C5CD9: lea     eax, [esp+1Ch+var_C]
0x6C5CDD: mov     large fs:0, eax
0x6C5CE3: mov     edi, ecx
0x6C5CE5: push    80h ; '€'; Size
0x6C5CEA: call    FormHeapAlloc
0x6C5CEF: add     esp, 4
0x6C5CF2: mov     [esp+1Ch+var_10], eax
0x6C5CF6: xor     esi, esi
0x6C5CF8: cmp     eax, esi
0x6C5CFA: mov     [esp+1Ch+var_4], esi
0x6C5CFE: jz      short loc_6C5D09
0x6C5D00: mov     ecx, eax
0x6C5D02: call    sub_6C5520
0x6C5D07: mov     esi, eax
0x6C5D09: mov     eax, [esp+1Ch+arg_0]
0x6C5D0D: push    eax
0x6C5D0E: push    esi
0x6C5D0F: mov     ecx, edi
0x6C5D11: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6C5D19: call    sub_6C5A10
0x6C5D1E: mov     eax, esi
0x6C5D20: mov     ecx, [esp+1Ch+var_C]
0x6C5D24: mov     large fs:0, ecx
0x6C5D2B: pop     ecx
0x6C5D2C: pop     edi
0x6C5D2D: pop     esi
0x6C5D2E: add     esp, 10h
0x6C5D31: retn    4
