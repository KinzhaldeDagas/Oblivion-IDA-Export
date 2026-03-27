0x473C40: push    ecx
0x473C41: push    esi
0x473C42: mov     esi, [esp+8+arg_0]
0x473C46: push    edi
0x473C47: mov     edi, [esp+0Ch+arg_4]
0x473C4B: test    edi, edi
0x473C4D: mov     [esp+0Ch+Src], 0
0x473C55: jz      short loc_473C78
0x473C57: mov     eax, [esi]
0x473C59: mov     edx, [eax+198h]
0x473C5F: push    0
0x473C61: mov     ecx, esi
0x473C63: call    edx
0x473C65: test    al, al
0x473C67: jnz     short loc_473C78
0x473C69: push    esi
0x473C6A: mov     ecx, edi
0x473C6C: call    sub_473420
0x473C71: movzx   eax, ax
0x473C74: mov     [esp+0Ch+Src], eax
0x473C78: push    2; Size
0x473C7A: lea     ecx, [esp+10h+Src]
0x473C7E: push    ecx; Src
0x473C7F: mov     ecx, ds:0B33B00h
0x473C85: call    SaveLoad_SaveData
0x473C8A: test    edi, edi
0x473C8C: jz      short loc_473CA8
0x473C8E: mov     edx, [esi]
0x473C90: mov     eax, [edx+198h]
0x473C96: push    0
0x473C98: mov     ecx, esi
0x473C9A: call    eax
0x473C9C: test    al, al
0x473C9E: jnz     short loc_473CA8
0x473CA0: push    esi; int
0x473CA1: mov     ecx, edi; int
0x473CA3: call    sub_473600
0x473CA8: pop     edi
0x473CA9: pop     esi
0x473CAA: pop     ecx
0x473CAB: retn
