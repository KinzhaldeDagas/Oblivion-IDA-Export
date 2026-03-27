0x531200: push    esi
0x531201: push    edi
0x531202: mov     edi, [esp+8+arg_0]
0x531206: mov     eax, [edi]
0x531208: push    eax
0x531209: mov     esi, ecx
0x53120B: call    FormHeapFree
0x531210: add     esp, 4
0x531213: mov     ecx, esi
0x531215: mov     dword ptr [edi], 0
0x53121B: mov     word ptr [edi+6], 0
0x531221: mov     word ptr [edi+4], 0
0x531227: call    sub_530C40
0x53122C: mov     esi, eax
0x53122E: test    esi, esi
0x531230: jz      short loc_531268
0x531232: mov     ecx, [esi]
0x531234: test    ecx, ecx
0x531236: mov     esi, [esi+4]
0x531239: jz      short loc_53125D
0x53123B: call    sub_52E100; ?what@runtime_error@@UBEPBDXZ
0x531240: push    eax
0x531241: mov     ecx, edi
0x531243: call    BSStringT_Append
0x531248: test    esi, esi
0x53124A: jz      short loc_53125D
0x53124C: cmp     dword ptr [esi], 0
0x53124F: jz      short loc_53125D
0x531251: push    offset asc_A5580C; " | "
0x531256: mov     ecx, edi
0x531258: call    BSStringT_Append
0x53125D: cmp     [esp+8+arg_4], 0
0x531262: jnz     short loc_531268
0x531264: test    esi, esi
0x531266: jnz     short loc_531232
0x531268: pop     edi
0x531269: pop     esi
0x53126A: retn    8
