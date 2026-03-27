0x9809EE: push    esi
0x9809EF: mov     esi, ecx
0x9809F1: call    ??1_Locimp@locale@std@@UAE@XZ
0x9809F6: test    byte ptr [esp+4+arg_0], 1
0x9809FB: jz      short loc_980A04
0x9809FD: push    esi
0x9809FE: call    FormHeapFree
0x980A03: pop     ecx
0x980A04: mov     eax, esi
0x980A06: pop     esi
0x980A07: retn    4
