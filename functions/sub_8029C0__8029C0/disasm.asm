0x8029C0: movzx   edx, word ptr [ecx+0Eh]
0x8029C4: mov     ax, [esp+arg_0]
0x8029C9: cmp     ax, dx
0x8029CC: jnb     short loc_802A4A
0x8029CE: add     edx, 0FFFFFFFFh
0x8029D1: push    ebp
0x8029D2: movzx   ebp, dx
0x8029D5: cmp     ax, bp
0x8029D8: movzx   edx, ax
0x8029DB: jz      short loc_802A1C
0x8029DD: push    ebx
0x8029DE: movzx   ebx, ax
0x8029E1: push    esi
0x8029E2: movzx   esi, bp
0x8029E5: push    edi
0x8029E6: mov     edi, [ecx+10h]
0x8029E9: mov     eax, esi
0x8029EB: shl     eax, 4
0x8029EE: add     eax, edi
0x8029F0: mov     edx, ebx
0x8029F2: shl     edx, 4
0x8029F5: add     edx, edi
0x8029F7: mov     edi, [eax]
0x8029F9: mov     [edx], edi
0x8029FB: mov     edi, [eax+4]
0x8029FE: mov     [edx+4], edi
0x802A01: mov     edi, [eax+8]
0x802A04: mov     [edx+8], edi
0x802A07: mov     eax, [eax+0Ch]
0x802A0A: mov     [edx+0Ch], eax
0x802A0D: mov     eax, [ecx+14h]
0x802A10: mov     edx, [eax+esi*4]
0x802A13: pop     edi
0x802A14: mov     [eax+ebx*4], edx
0x802A17: pop     esi
0x802A18: movzx   edx, bp
0x802A1B: pop     ebx
0x802A1C: movzx   eax, dx
0x802A1F: mov     edx, [ecx+10h]
0x802A22: shl     eax, 4
0x802A25: lea     edx, [eax+edx+8]
0x802A29: pop     ebp
0x802A2A: fld     dword ptr [edx]
0x802A2C: fsub    qword ptr ds:0A3F3E8h
0x802A32: fstp    dword ptr [edx]
0x802A34: mov     edx, [ecx+10h]
0x802A37: fldz
0x802A39: fstp    dword ptr [eax+edx+0Ch]
0x802A3D: add     word ptr [ecx+0Eh], 0FFFFh
0x802A43: sub     dword ptr ds:0B42D60h, 1
0x802A4A: movzx   eax, word ptr [ecx+0Eh]
0x802A4E: retn    4
