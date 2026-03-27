0x981E65: push    esi
0x981E66: mov     esi, ecx
0x981E68: call    ??1type_info@@UAE@XZ
0x981E6D: test    byte ptr [esp+4+arg_0], 1
0x981E72: jz      short loc_981E7B
0x981E74: push    esi
0x981E75: call    FormHeapFree
0x981E7A: pop     ecx
0x981E7B: mov     eax, esi
0x981E7D: pop     esi
0x981E7E: retn    4
