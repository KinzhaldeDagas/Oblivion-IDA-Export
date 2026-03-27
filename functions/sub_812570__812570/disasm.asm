0x812570: movzx   eax, word ptr [ecx+0Eh]
0x812574: mov     dx, [esp+arg_0]
0x812579: cmp     dx, ax
0x81257C: jnb     loc_812624
0x812582: movzx   eax, ax
0x812585: push    esi
0x812586: movzx   esi, dx
0x812589: lea     edx, [eax-1]
0x81258C: cmp     esi, edx
0x81258E: jz      short loc_8125C7
0x812590: push    edi
0x812591: mov     edi, [ecx+10h]
0x812594: shl     eax, 4
0x812597: lea     edx, [eax+edi-10h]
0x81259B: mov     eax, esi
0x81259D: shl     eax, 4
0x8125A0: add     eax, edi
0x8125A2: mov     edi, [edx]
0x8125A4: mov     [eax], edi
0x8125A6: mov     edi, [edx+4]
0x8125A9: mov     [eax+4], edi
0x8125AC: mov     edi, [edx+8]
0x8125AF: mov     [eax+8], edi
0x8125B2: mov     edx, [edx+0Ch]
0x8125B5: mov     [eax+0Ch], edx
0x8125B8: movzx   edx, word ptr [ecx+0Eh]
0x8125BC: mov     eax, [ecx+14h]
0x8125BF: mov     edx, [eax+edx*4-4]
0x8125C3: mov     [eax+esi*4], edx
0x8125C6: pop     edi
0x8125C7: movzx   eax, word ptr [ecx+0Eh]
0x8125CB: fldz
0x8125CD: mov     edx, [ecx+10h]
0x8125D0: shl     eax, 4
0x8125D3: pop     esi
0x8125D4: fst     dword ptr [eax+edx-10h]
0x8125D8: movzx   eax, word ptr [ecx+0Eh]
0x8125DC: mov     edx, [ecx+10h]
0x8125DF: shl     eax, 4
0x8125E2: fst     dword ptr [eax+edx-0Ch]
0x8125E6: movzx   eax, word ptr [ecx+0Eh]
0x8125EA: mov     edx, [ecx+10h]
0x8125ED: fld     dword ptr ds:0A418D8h
0x8125F3: shl     eax, 4
0x8125F6: fstp    dword ptr [eax+edx-8]
0x8125FA: movzx   eax, word ptr [ecx+0Eh]
0x8125FE: mov     edx, [ecx+10h]
0x812601: shl     eax, 4
0x812604: fstp    dword ptr [eax+edx-4]
0x812608: movzx   eax, word ptr [ecx+0Eh]
0x81260C: mov     edx, [ecx+14h]
0x81260F: mov     dword ptr [edx+eax*4-4], 0
0x812617: add     word ptr [ecx+0Eh], 0FFFFh
0x81261D: sub     dword ptr ds:0B4334Ch, 1
0x812624: movzx   eax, word ptr [ecx+0Eh]
0x812628: retn    4
