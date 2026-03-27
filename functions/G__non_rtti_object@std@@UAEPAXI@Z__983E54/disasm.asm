0x983E54: push    esi
0x983E55: mov     esi, ecx
0x983E57: mov     dword ptr [esi], offset ??_7bad_typeid@std@@6B@
0x983E5D: call    ??1exception@std@@UAE@XZ
0x983E62: test    byte ptr [esp+4+arg_0], 1
0x983E67: jz      short loc_983E70
0x983E69: push    esi
0x983E6A: call    FormHeapFree
0x983E6F: pop     ecx
0x983E70: mov     eax, esi
0x983E72: pop     esi
0x983E73: retn    4
