0x983071: mov     edx, [eax+4]
0x983074: xor     ecx, ecx
0x983076: test    edx, edx
0x983078: jl      short loc_98308B
0x98307A: mov     ecx, edx
0x98307C: mov     edx, [esp+arg_0]
0x983080: mov     edx, [ecx+edx]
0x983083: push    esi
0x983084: mov     esi, [eax+8]
0x983087: add     ecx, [edx+esi]
0x98308A: pop     esi
0x98308B: mov     eax, [eax]
0x98308D: add     eax, ecx
0x98308F: retn
