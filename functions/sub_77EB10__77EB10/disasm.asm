0x77EB10: cmp     dword ptr ds:0B428A8h, 0
0x77EB17: push    esi
0x77EB18: jz      short loc_77EB4C
0x77EB1A: mov     esi, [esp+4+arg_0]
0x77EB1E: test    esi, esi
0x77EB20: jz      short loc_77EB4C
0x77EB22: mov     eax, [esi]
0x77EB24: mov     edx, [eax+40h]
0x77EB27: mov     ecx, esi
0x77EB29: call    edx
0x77EB2B: test    eax, eax
0x77EB2D: jz      short loc_77EB33
0x77EB2F: mov     al, 1
0x77EB31: pop     esi
0x77EB32: retn
0x77EB33: mov     eax, [esi]
0x77EB35: mov     edx, [eax+20h]
0x77EB38: mov     ecx, esi
0x77EB3A: call    edx
0x77EB3C: test    eax, eax
0x77EB3E: jz      short loc_77EB4C
0x77EB40: mov     edx, [eax]
0x77EB42: mov     ecx, eax
0x77EB44: mov     eax, [edx+1Ch]
0x77EB47: push    esi
0x77EB48: call    eax
0x77EB4A: pop     esi
0x77EB4B: retn
0x77EB4C: xor     al, al
0x77EB4E: pop     esi
0x77EB4F: retn
