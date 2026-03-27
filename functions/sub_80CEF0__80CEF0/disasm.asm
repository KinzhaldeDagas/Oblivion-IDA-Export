0x80CEF0: push    esi
0x80CEF1: push    edi
0x80CEF2: mov     edi, ecx
0x80CEF4: mov     esi, offset dword_B455A0
0x80CEF9: lea     esp, [esp+0]
0x80CF00: mov     ecx, [esi]
0x80CF02: mov     eax, [edi]
0x80CF04: mov     edx, [eax+94h]
0x80CF0A: push    ecx
0x80CF0B: mov     ecx, edi
0x80CF0D: call    edx
0x80CF0F: add     esi, 4
0x80CF12: cmp     esi, offset dword_B455A8
0x80CF18: jl      short loc_80CF00
0x80CF1A: pop     edi
0x80CF1B: pop     esi
0x80CF1C: retn
