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
