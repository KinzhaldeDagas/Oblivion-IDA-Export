0x77EB50: cmp     dword ptr ds:0B428A8h, 0
0x77EB57: push    esi
0x77EB58: jz      short loc_77EB8C
0x77EB5A: mov     esi, [esp+4+arg_0]
0x77EB5E: test    esi, esi
0x77EB60: jz      short loc_77EB8C
0x77EB62: mov     eax, [esi]
0x77EB64: mov     edx, [eax+38h]
0x77EB67: mov     ecx, esi
0x77EB69: call    edx
0x77EB6B: test    eax, eax
0x77EB6D: jz      short loc_77EB73
0x77EB6F: mov     al, 1
0x77EB71: pop     esi
0x77EB72: retn
0x77EB73: mov     eax, [esi]
0x77EB75: mov     edx, [eax+20h]
0x77EB78: mov     ecx, esi
0x77EB7A: call    edx
0x77EB7C: test    eax, eax
0x77EB7E: jz      short loc_77EB8C
0x77EB80: mov     edx, [eax]
0x77EB82: mov     ecx, eax
0x77EB84: mov     eax, [edx+20h]
0x77EB87: push    esi
0x77EB88: call    eax
0x77EB8A: pop     esi
0x77EB8B: retn
0x77EB8C: xor     al, al
0x77EB8E: pop     esi
0x77EB8F: retn
