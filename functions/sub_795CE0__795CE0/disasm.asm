0x795CE0: push    ebx
0x795CE1: mov     ebx, [esp+4+arg_4]
0x795CE5: push    ebp
0x795CE6: mov     ebp, [esp+8+arg_8]
0x795CEA: push    esi
0x795CEB: mov     esi, [esp+0Ch+arg_0]
0x795CEF: push    edi
0x795CF0: mov     edi, ebx
0x795CF2: sub     edi, esi
0x795CF4: sar     edi, 4
0x795CF7: shl     edi, 4
0x795CFA: add     edi, ebp
0x795CFC: cmp     esi, ebx
0x795CFE: jz      short loc_795D12
0x795D00: sub     ebp, esi
0x795D02: push    esi
0x795D03: lea     ecx, [esi+ebp]
0x795D06: call    sub_79B2F0
0x795D0B: add     esi, 10h
0x795D0E: cmp     esi, ebx
0x795D10: jnz     short loc_795D02
0x795D12: mov     eax, edi
0x795D14: pop     edi
0x795D15: pop     esi
0x795D16: pop     ebp
0x795D17: pop     ebx
0x795D18: retn
