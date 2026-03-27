0x5A9060: push    0FFFFFFFFh
0x5A9062: push    offset SEH_5A9060
0x5A9067: mov     eax, large fs:0
0x5A906D: push    eax
0x5A906E: push    ecx
0x5A906F: push    esi
0x5A9070: push    edi
0x5A9071: mov     eax, ds:0B30AACh
0x5A9076: xor     eax, esp
0x5A9078: push    eax
0x5A9079: lea     eax, [esp+1Ch+var_C]
0x5A907D: mov     large fs:0, eax
0x5A9083: mov     esi, ecx
0x5A9085: mov     eax, [esi+18h]
0x5A9088: push    eax
0x5A9089: call    FormHeapFree
0x5A908E: xor     edi, edi
0x5A9090: mov     [esi+18h], edi
0x5A9093: mov     [esi+1Eh], di
0x5A9097: mov     [esi+1Ch], di
0x5A909B: mov     eax, [esi+10h]
0x5A909E: push    eax
0x5A909F: call    FormHeapFree
0x5A90A4: mov     [esi+10h], edi
0x5A90A7: mov     [esi+16h], di
0x5A90AB: mov     [esi+14h], di
0x5A90AF: mov     eax, [esi]
0x5A90B1: push    eax
0x5A90B2: call    FormHeapFree
0x5A90B7: add     esp, 0Ch
0x5A90BA: mov     [esi], edi
0x5A90BC: mov     [esi+6], di
0x5A90C0: mov     [esi+4], di
0x5A90C4: mov     ecx, [esp+1Ch+var_C]
0x5A90C8: mov     large fs:0, ecx
0x5A90CF: pop     ecx
0x5A90D0: pop     edi
0x5A90D1: pop     esi
0x5A90D2: add     esp, 10h
0x5A90D5: retn
