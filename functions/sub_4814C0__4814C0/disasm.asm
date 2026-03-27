0x4814C0: call    InitBSShaderAccumulator
0x4814C5: test    eax, eax
0x4814C7: jz      locret_481560
0x4814CD: cmp     dword ptr [eax+2228h], 0
0x4814D4: jnz     locret_481560
0x4814DA: cmp     dword ptr ds:0B33A1Ch, 0
0x4814E1: jz      short locret_481560
0x4814E3: mov     ecx, ds:0B33A04h
0x4814E9: test    ecx, ecx
0x4814EB: jz      short locret_481560
0x4814ED: mov     eax, [ecx]
0x4814EF: mov     edx, [eax+4]
0x4814F2: push    0FFFFFFFFh
0x4814F4: push    0
0x4814F6: push    0
0x4814F8: push    offset aMeshesTestsphe; "Meshes\\TestSphere.NIF"
0x4814FD: call    edx
0x4814FF: test    eax, eax
0x481501: jz      short locret_481560
0x481503: mov     ecx, ds:0B33A1Ch
0x481509: push    esi
0x48150A: push    1
0x48150C: push    0
0x48150E: push    0
0x481510: push    offset aMeshesTestsphe; "Meshes\\TestSphere.NIF"
0x481515: call    sub_439EB0
0x48151A: mov     esi, eax
0x48151C: test    esi, esi
0x48151E: jz      short loc_48155F
0x481520: push    0
0x481522: mov     ecx, esi
0x481524: call    sub_405790
0x481529: test    eax, eax
0x48152B: jz      short loc_481557
0x48152D: lea     ecx, [ecx+0]
0x481530: mov     edx, [eax]
0x481532: mov     ecx, eax
0x481534: mov     eax, [edx+8]
0x481537: call    eax
0x481539: test    eax, eax
0x48153B: jz      short loc_481551
0x48153D: cmp     word ptr [eax+0B6h], 0
0x481545: jbe     short loc_481551
0x481547: mov     ecx, [eax+0B0h]
0x48154D: mov     eax, [ecx]
0x48154F: jmp     short loc_481553
0x481551: xor     eax, eax
0x481553: test    eax, eax
0x481555: jnz     short loc_481530
0x481557: mov     ecx, esi
0x481559: pop     esi
0x48155A: jmp     NiAVObject_InitializePropertyState
0x48155F: pop     esi
0x481560: retn
