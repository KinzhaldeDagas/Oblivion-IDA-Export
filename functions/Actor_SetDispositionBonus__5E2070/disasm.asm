0x5E2070: push    ebx
0x5E2071: push    ebp
0x5E2072: push    esi
0x5E2073: mov     ebx, ecx
0x5E2075: mov     eax, [ebx]
0x5E2077: mov     edx, [eax+40h]
0x5E207A: push    edi
0x5E207B: lea     ebp, [ebx+0A4h]
0x5E2081: push    8000h
0x5E2086: mov     esi, ebp
0x5E2088: call    edx
0x5E208A: test    esi, esi
0x5E208C: jz      short Actor_SetDispositionBonus___NewDispositionEntry
0x5E208E: mov     edi, edi
