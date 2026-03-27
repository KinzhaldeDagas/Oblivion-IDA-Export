0x68BE80: push    esi
0x68BE81: mov     esi, [esp+4+arg_0]
0x68BE85: test    esi, esi
0x68BE87: push    edi
0x68BE88: mov     edi, ecx
0x68BE8A: jz      short loc_68BECA
0x68BE8C: push    ebx
0x68BE8D: mov     ebx, [esp+0Ch+arg_4]
0x68BE91: test    ebx, ebx
0x68BE93: jz      short loc_68BEA4
0x68BE95: mov     ecx, esi
0x68BE97: call    NiDX92DBufferData__GetSurfaceData
0x68BE9C: push    eax
0x68BE9D: mov     ecx, ebx
0x68BE9F: call    sub_6A2FD0
0x68BEA4: cmp     esi, [edi]
0x68BEA6: jnz     short loc_68BEB1
0x68BEA8: mov     ecx, esi
0x68BEAA: call    NiDX92DBufferData__GetSurfaceData
0x68BEAF: mov     [edi], eax
0x68BEB1: cmp     esi, [edi+4]
0x68BEB4: jnz     short loc_68BEB9
0x68BEB6: mov     [edi+4], ebx
0x68BEB9: mov     ecx, esi; void *
0x68BEBB: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x68BEC0: push    esi
0x68BEC1: call    FormHeapFree
0x68BEC6: add     esp, 4
0x68BEC9: pop     ebx
0x68BECA: pop     edi
0x68BECB: pop     esi
0x68BECC: retn    8
