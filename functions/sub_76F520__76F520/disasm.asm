0x76F520: mov     eax, ecx
0x76F522: xor     edx, edx
0x76F524: mov     dword ptr [eax+4], offset ??_7?$NiTArray@P6AIAAVPackingParameters@NiD3DShaderDeclaration@@@Z@@6B@; const NiTArray<uint (*)(NiD3DShaderDeclaration::PackingParameters &)>::`vftable'
0x76F52B: mov     [eax+0Ch], dx
0x76F52F: mov     word ptr [eax+12h], 1
0x76F535: mov     [eax+0Eh], dx
0x76F539: mov     [eax+10h], dx
0x76F53D: mov     [eax+8], edx
0x76F540: mov     dword ptr [eax], 11h
0x76F546: xor     ecx, ecx
0x76F548: cmp     [eax+0Eh], dx
0x76F54C: jbe     short loc_76F564
0x76F54E: push    esi
0x76F54F: push    edi
0x76F550: mov     edi, [eax+8]
0x76F553: movzx   esi, cx
0x76F556: add     ecx, 1
0x76F559: mov     [edi+esi*4], edx
0x76F55C: cmp     cx, [eax+0Eh]
0x76F560: jb      short loc_76F550
0x76F562: pop     edi
0x76F563: pop     esi
0x76F564: mov     [eax+0Eh], dx
0x76F568: mov     [eax+10h], dx
0x76F56C: retn
