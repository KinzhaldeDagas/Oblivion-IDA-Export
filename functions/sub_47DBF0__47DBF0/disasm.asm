0x47DBF0: mov     edx, [esp+arg_4]
0x47DBF4: push    esi
0x47DBF5: push    edi
0x47DBF6: mov     edi, [esp+8+arg_0]
0x47DBFA: mov     eax, [edi]
0x47DBFC: mov     esi, ecx
0x47DBFE: mov     ecx, [eax+4]
0x47DC01: mov     [edx], ecx
0x47DC03: mov     edx, [eax+8]
0x47DC06: mov     ecx, [esp+8+arg_8]
0x47DC0A: mov     [ecx], edx
0x47DC0C: mov     edx, [eax+0Ch]
0x47DC0F: mov     [ecx+4], edx
0x47DC12: mov     edx, [eax+10h]
0x47DC15: mov     [ecx+8], edx
0x47DC18: mov     ecx, [eax]
0x47DC1A: test    ecx, ecx
0x47DC1C: jz      short loc_47DC25
0x47DC1E: mov     [edi], ecx
0x47DC20: pop     edi
0x47DC21: pop     esi
0x47DC22: retn    0Ch
0x47DC25: mov     edx, [esi]
0x47DC27: mov     eax, [eax+4]
0x47DC2A: mov     edx, [edx+4]
0x47DC2D: push    eax
0x47DC2E: mov     ecx, esi
0x47DC30: call    edx
0x47DC32: mov     edx, [esi+4]
0x47DC35: add     eax, 1
0x47DC38: cmp     eax, edx
0x47DC3A: jnb     short loc_47DC52
0x47DC3C: mov     ecx, [esi+8]
0x47DC3F: lea     ecx, [ecx+eax*4]
0x47DC42: mov     esi, [ecx]
0x47DC44: test    esi, esi
0x47DC46: jnz     short loc_47DC5D
0x47DC48: add     eax, 1
0x47DC4B: add     ecx, 4
0x47DC4E: cmp     eax, edx
0x47DC50: jb      short loc_47DC42
0x47DC52: mov     dword ptr [edi], 0
0x47DC58: pop     edi
0x47DC59: pop     esi
0x47DC5A: retn    0Ch
0x47DC5D: mov     [edi], esi
0x47DC5F: pop     edi
0x47DC60: pop     esi
0x47DC61: retn    0Ch
