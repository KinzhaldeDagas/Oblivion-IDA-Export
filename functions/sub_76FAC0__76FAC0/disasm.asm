0x76FAC0: push    10h; Size
0x76FAC2: call    FormHeapAlloc
0x76FAC7: xor     ecx, ecx
0x76FAC9: add     esp, 4
0x76FACC: cmp     eax, ecx
0x76FACE: jz      short loc_76FAF5
0x76FAD0: mov     dword ptr [eax], offset ??_7?$NiTArray@PAVNiPackerEntry@NiD3DShaderDeclaration@@@@6B@; const NiTArray<NiD3DShaderDeclaration::NiPackerEntry *>::`vftable'
0x76FAD6: mov     [eax+8], cx
0x76FADA: mov     word ptr [eax+0Eh], 1
0x76FAE0: mov     [eax+0Ah], cx
0x76FAE4: mov     [eax+0Ch], cx
0x76FAE8: mov     [eax+4], ecx
0x76FAEB: mov     ds:0B42700h, eax
0x76FAF0: jmp     loc_76F9B0
0x76FAF5: mov     ds:0B42700h, ecx
0x76FAFB: jmp     loc_76F9B0
0x76F9B0: push    ecx
0x76F9B1: mov     eax, ds:0B42700h
0x76F9B6: cmp     word ptr [eax+0Ah], 12h
0x76F9BB: jz      loc_76FAAE
0x76F9C1: mov     eax, 4
0x76F9C6: mov     ecx, 8
0x76F9CB: push    esi
0x76F9CC: push    edi
0x76F9CD: mov     ds:0B42708h, eax
0x76F9D2: mov     ds:0B4270Ch, ecx
0x76F9D8: mov     dword ptr ds:0B42710h, 0Ch
0x76F9E2: mov     dword ptr ds:0B42714h, 10h
0x76F9EC: mov     ds:0B42718h, eax
0x76F9F1: mov     ds:0B4271Ch, eax
0x76F9F6: mov     ds:0B42720h, eax
0x76F9FB: mov     ds:0B42724h, ecx
0x76FA01: mov     ds:0B42728h, eax
0x76FA06: mov     ds:0B4272Ch, eax
0x76FA0B: mov     ds:0B42730h, ecx
0x76FA11: mov     ds:0B42734h, eax
0x76FA16: mov     ds:0B42738h, ecx
0x76FA1C: mov     ds:0B4273Ch, eax
0x76FA21: mov     ds:0B42740h, eax
0x76FA26: mov     ds:0B42744h, eax
0x76FA2B: mov     ds:0B42748h, ecx
0x76FA31: xor     esi, esi
0x76FA33: push    14h; Size
0x76FA35: call    FormHeapAlloc
0x76FA3A: add     esp, 4
0x76FA3D: test    eax, eax
0x76FA3F: jz      short loc_76FA4A
0x76FA41: mov     ecx, eax
0x76FA43: call    sub_76F520
0x76FA48: jmp     short loc_76FA4C
0x76FA4A: xor     eax, eax
0x76FA4C: push    26h ; '&'
0x76FA4E: lea     ecx, [eax+4]
0x76FA51: mov     [esp+10h+var_4], eax
0x76FA55: mov     [eax], esi
0x76FA57: call    NiTArray_SetSize
0x76FA5C: mov     ecx, ds:0B42700h
0x76FA62: movzx   edx, word ptr [ecx+8]
0x76FA66: cmp     esi, edx
0x76FA68: mov     edi, ecx
0x76FA6A: jb      short loc_76FA78
0x76FA6C: movzx   eax, word ptr [ecx+0Eh]
0x76FA70: add     eax, esi
0x76FA72: push    eax
0x76FA73: call    NiTArray_SetSize
0x76FA78: lea     ecx, [esp+0Ch+var_4]
0x76FA7C: push    ecx
0x76FA7D: push    esi
0x76FA7E: mov     ecx, edi
0x76FA80: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x76FA85: add     esi, 1
0x76FA88: cmp     esi, 12h
0x76FA8B: jb      short loc_76FA33
0x76FA8D: xor     edi, edi
0x76FA8F: nop
0x76FA90: xor     esi, esi
0x76FA92: push    esi
0x76FA93: push    edi
0x76FA94: call    sub_771300
0x76FA99: add     esi, 1
0x76FA9C: add     esp, 8
0x76FA9F: cmp     esi, 21h ; '!'
0x76FAA2: jb      short loc_76FA92
0x76FAA4: add     edi, 1
0x76FAA7: cmp     edi, 12h
0x76FAAA: jb      short loc_76FA90
0x76FAAC: pop     edi
0x76FAAD: pop     esi
0x76FAAE: mov     al, 1
0x76FAB0: pop     ecx
0x76FAB1: retn
