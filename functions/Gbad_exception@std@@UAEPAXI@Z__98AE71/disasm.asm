0x98AE71: push    esi
0x98AE72: mov     esi, ecx
0x98AE74: mov     dword ptr [esi], offset ??_7bad_exception@std@@6B@
0x98AE7A: call    ??1exception@std@@UAE@XZ
0x98AE7F: test    byte ptr [esp+4+arg_0], 1
0x98AE84: jz      short loc_98AE8D
0x98AE86: push    esi
0x98AE87: call    FormHeapFree
0x98AE8C: pop     ecx
0x98AE8D: mov     eax, esi
0x98AE8F: pop     esi
0x98AE90: retn    4
