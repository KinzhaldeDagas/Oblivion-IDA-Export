0x76CFA0: mov     eax, [ecx+4]
0x76CFA3: test    eax, eax
0x76CFA5: mov     dword ptr [ecx], offset ??_7?$NiTArray@V?$NiPointer@VNiD3DPass@@@@@@6B@; const NiTArray<NiPointer<NiD3DPass>>::`vftable'
0x76CFAB: jz      short locret_76CFE6
0x76CFAD: push    ebx
0x76CFAE: push    esi
0x76CFAF: push    edi
0x76CFB0: mov     edi, [eax-4]
0x76CFB3: lea     ebx, [eax-4]
0x76CFB6: lea     esi, [eax+edi*4]
0x76CFB9: sub     edi, 1
0x76CFBC: js      short loc_76CFDA
0x76CFBE: mov     edi, edi
0x76CFC0: mov     ecx, [esi-4]
0x76CFC3: sub     esi, 4
0x76CFC6: test    ecx, ecx
0x76CFC8: jz      short loc_76CFD5
0x76CFCA: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x76CFCE: jnz     short loc_76CFD5
0x76CFD0: call    sub_7604D0
0x76CFD5: sub     edi, 1
0x76CFD8: jns     short loc_76CFC0
0x76CFDA: push    ebx
0x76CFDB: call    FormHeapFree
0x76CFE0: add     esp, 4
0x76CFE3: pop     edi
0x76CFE4: pop     esi
0x76CFE5: pop     ebx
0x76CFE6: retn
