0x784AC0: push    ebp
0x784AC1: push    esi
0x784AC2: mov     esi, [esp+8+arg_4]
0x784AC6: test    esi, esi
0x784AC8: mov     ebp, ecx
0x784ACA: jz      short loc_784AD2
0x784ACC: cmp     esi, [esp+8+arg_C]
0x784AD0: jz      short loc_784AD7
0x784AD2: call    __invalid_parameter_noinfo
0x784AD7: mov     eax, [esp+8+arg_10]
0x784ADB: mov     ecx, [esp+8+arg_8]
0x784ADF: cmp     ecx, eax
0x784AE1: jz      short loc_784B1B
0x784AE3: push    ebx
0x784AE4: push    edi
0x784AE5: push    ecx
0x784AE6: mov     ecx, [ebp+8]
0x784AE9: push    ecx
0x784AEA: push    eax
0x784AEB: call    sub_784880
0x784AF0: mov     edi, [ebp+8]
0x784AF3: mov     ebx, eax
0x784AF5: add     esp, 0Ch
0x784AF8: cmp     ebx, edi
0x784AFA: mov     esi, ebx
0x784AFC: jz      short loc_784B0E
0x784AFE: mov     edi, edi
0x784B00: mov     ecx, esi; void *
0x784B02: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x784B07: add     esi, 18h
0x784B0A: cmp     esi, edi
0x784B0C: jnz     short loc_784B00
0x784B0E: mov     ecx, [esp+10h+arg_8]
0x784B12: mov     esi, [esp+10h+arg_4]
0x784B16: pop     edi
0x784B17: mov     [ebp+8], ebx
0x784B1A: pop     ebx
0x784B1B: mov     eax, [esp+8+arg_0]
0x784B1F: mov     [eax], esi
0x784B21: pop     esi
0x784B22: mov     [eax+4], ecx
0x784B25: pop     ebp
0x784B26: retn    14h
