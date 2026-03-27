0x983E32: push    esi
0x983E33: mov     esi, ecx
0x983E35: mov     dword ptr [esi], offset ??_7bad_cast@std@@6B@
0x983E3B: call    ??1exception@std@@UAE@XZ
0x983E40: test    byte ptr [esp+4+arg_0], 1
0x983E45: jz      short loc_983E4E
0x983E47: push    esi
0x983E48: call    FormHeapFree
0x983E4D: pop     ecx
0x983E4E: mov     eax, esi
0x983E50: pop     esi
0x983E51: retn    4
