0x76F900: mov     ecx, ds:0B42700h
0x76F906: push    ebx
0x76F907: push    ebp
0x76F908: push    esi
0x76F909: push    edi
0x76F90A: xor     ebx, ebx
0x76F90C: xor     edi, edi
0x76F90E: cmp     [ecx+0Ah], bx
0x76F912: jbe     short loc_76F972
0x76F914: mov     ebp, offset ??_7?$NiTArray@P6AIAAVPackingParameters@NiD3DShaderDeclaration@@@Z@@6B@; const NiTArray<uint (*)(NiD3DShaderDeclaration::PackingParameters &)>::`vftable'
0x76F919: lea     esp, [esp+0]
0x76F920: mov     eax, [ecx+4]
0x76F923: mov     esi, [eax+edi*4]
0x76F926: cmp     esi, ebx
0x76F928: jz      short loc_76F967
0x76F92A: xor     eax, eax
0x76F92C: cmp     [esi+0Eh], bx
0x76F930: jbe     short loc_76F944
0x76F932: mov     edx, [esi+8]
0x76F935: movzx   ecx, ax
0x76F938: add     eax, 1
0x76F93B: mov     [edx+ecx*4], ebx
0x76F93E: cmp     ax, [esi+0Eh]
0x76F942: jb      short loc_76F932
0x76F944: mov     [esi+0Eh], bx
0x76F948: mov     [esi+10h], bx
0x76F94C: mov     eax, [esi+8]
0x76F94F: push    eax
0x76F950: mov     [esi+4], ebp
0x76F953: call    FormHeapFree
0x76F958: push    esi
0x76F959: call    FormHeapFree
0x76F95E: mov     ecx, ds:0B42700h
0x76F964: add     esp, 8
0x76F967: movzx   edx, word ptr [ecx+0Ah]
0x76F96B: add     edi, 1
0x76F96E: cmp     edi, edx
0x76F970: jb      short loc_76F920
0x76F972: lea     edx, [ecx+0Ah]
0x76F975: xor     eax, eax
0x76F977: cmp     [edx], bx
0x76F97A: mov     esi, ecx
0x76F97C: jbe     short loc_76F992
0x76F97E: add     ecx, 4
0x76F981: mov     ebp, [ecx]
0x76F983: movzx   edi, ax
0x76F986: add     eax, 1
0x76F989: mov     [ebp+edi*4+0], ebx
0x76F98D: cmp     ax, [edx]
0x76F990: jb      short loc_76F981
0x76F992: pop     edi
0x76F993: mov     [esi+0Ch], bx
0x76F997: mov     [edx], bx
0x76F99A: mov     ecx, ds:0B42700h
0x76F9A0: pop     esi
0x76F9A1: pop     ebp
0x76F9A2: cmp     ecx, ebx
0x76F9A4: pop     ebx
0x76F9A5: jz      short locret_76F9AF
0x76F9A7: mov     eax, [ecx]
0x76F9A9: mov     edx, [eax]
0x76F9AB: push    1
0x76F9AD: call    edx
0x76F9AF: retn
