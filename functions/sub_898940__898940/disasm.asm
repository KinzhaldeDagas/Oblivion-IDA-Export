0x898940: push    esi
0x898941: mov     esi, [ecx+0C8h]
0x898947: xor     eax, eax
0x898949: test    esi, esi
0x89894B: push    edi
0x89894C: jle     short loc_898964
0x89894E: mov     edx, [ecx+0C4h]
0x898954: mov     edi, [esp+8+arg_0]
0x898958: cmp     [edx], edi
0x89895A: jz      short loc_898979
0x89895C: inc     eax
0x89895D: add     edx, 4
0x898960: cmp     eax, esi
0x898962: jl      short loc_898958
0x898964: mov     edx, [ecx+0C4h]
0x89896A: pop     edi
0x89896B: or      eax, 0FFFFFFFFh
0x89896E: pop     esi
0x89896F: mov     dword ptr [edx+eax*4], 0
0x898976: retn    4
0x898979: mov     ecx, [ecx+0C4h]
0x89897F: pop     edi
0x898980: pop     esi
0x898981: mov     dword ptr [ecx+eax*4], 0
0x898988: retn    4
