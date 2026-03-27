0x7849F0: push    esi
0x7849F1: mov     esi, [esp+4+arg_0]
0x7849F5: push    edi
0x7849F6: mov     edi, [esp+8+arg_4]
0x7849FA: cmp     esi, edi
0x7849FC: jz      short loc_784A0E
0x7849FE: mov     edi, edi
0x784A00: mov     ecx, esi; void *
0x784A02: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x784A07: add     esi, 18h
0x784A0A: cmp     esi, edi
0x784A0C: jnz     short loc_784A00
0x784A0E: pop     edi
0x784A0F: pop     esi
0x784A10: retn    8
