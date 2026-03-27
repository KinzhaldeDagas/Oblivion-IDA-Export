0x78EB10: push    esi
0x78EB11: mov     esi, ecx
0x78EB13: mov     ecx, [esi+8]
0x78EB16: test    ecx, ecx
0x78EB18: push    edi
0x78EB19: mov     edi, [esi]
0x78EB1B: jz      short loc_78EB26
0x78EB1D: mov     eax, [esi+0Ch]
0x78EB20: sub     eax, ecx
0x78EB22: cmp     edi, eax
0x78EB24: jb      short loc_78EB2B
0x78EB26: call    __invalid_parameter_noinfo
0x78EB2B: mov     eax, [esi+8]
0x78EB2E: add     dword ptr [esi], 4
0x78EB31: fld     dword ptr [eax+edi]
0x78EB34: add     eax, edi
0x78EB36: pop     edi
0x78EB37: pop     esi
0x78EB38: retn
