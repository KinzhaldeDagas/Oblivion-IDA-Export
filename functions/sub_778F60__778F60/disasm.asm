0x778F60: push    esi
0x778F61: mov     esi, [esp+4+arg_0]
0x778F65: push    edi
0x778F66: mov     edi, [esi+8ACh]
0x778F6C: push    esi
0x778F6D: call    sub_75FB30
0x778F72: push    esi
0x778F73: call    sub_772060
0x778F78: push    esi
0x778F79: mov     ds:0B42834h, edi
0x778F7F: call    sub_77EBB0
0x778F84: push    esi
0x778F85: call    sub_77F7E0
0x778F8A: push    esi
0x778F8B: call    sub_772940
0x778F90: mov     eax, [edi]
0x778F92: mov     edx, [eax+104h]
0x778F98: add     esp, 14h
0x778F9B: mov     ecx, edi
0x778F9D: call    edx
0x778F9F: call    sub_77C0F0
0x778FA4: test    eax, eax
0x778FA6: jz      short loc_778FB2
0x778FA8: mov     edx, [eax]
0x778FAA: mov     ecx, eax
0x778FAC: mov     eax, [edx+6Ch]
0x778FAF: push    esi
0x778FB0: call    eax
0x778FB2: cmp     dword ptr ds:0B428A8h, 0
0x778FB9: pop     edi
0x778FBA: pop     esi
0x778FBB: jnz     short loc_778FE8
0x778FBD: push    20h ; ' '; Size
0x778FBF: call    FormHeapAlloc
0x778FC4: add     esp, 4
0x778FC7: test    eax, eax
0x778FC9: jz      short loc_778FEB
0x778FCB: mov     ecx, eax; this
0x778FCD: call    ??0NiD3DShaderProgramFactory@@QAE@XZ; NiD3DShaderProgramFactory::NiD3DShaderProgramFactory(void)
0x778FD2: test    eax, eax
0x778FD4: mov     ds:0B428A8h, eax
0x778FD9: jnz     short loc_778FE8
0x778FDB: push    offset aFailedToCreate; "Failed to create shader program factory"...
0x778FE0: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x778FE5: add     esp, 4
0x778FE8: xor     eax, eax
0x778FEA: retn
0x778FEB: push    offset aFailedToCreate; "Failed to create shader program factory"...
0x778FF0: mov     dword ptr ds:0B428A8h, 0
0x778FFA: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x778FFF: add     esp, 4
0x779002: xor     eax, eax
0x779004: retn
