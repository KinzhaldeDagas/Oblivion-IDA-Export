0x588C50: sub     esp, 8
0x588C53: push    esi
0x588C54: push    0FADh
0x588C59: mov     esi, ecx
0x588C5B: call    Tile_GetFloat
0x588C60: fstp    [esp+0Ch+var_8]
0x588C64: mov     esi, [esi+10h]
0x588C67: test    esi, esi
0x588C69: jz      short loc_588CDD
0x588C6B: fldz
0x588C6D: push    edi
0x588C6E: mov     edi, [esi+18h]
0x588C71: mov     eax, edi
0x588C73: test    eax, eax
0x588C75: jz      short loc_588CD3
0x588C77: mov     edx, [eax+8]
0x588C7A: lea     ecx, [eax+8]
0x588C7D: movzx   ecx, word ptr [edx+18h]
0x588C81: cmp     cx, 0FA6h
0x588C86: mov     eax, [eax]
0x588C88: jz      short loc_588C92
0x588C8A: ja      short loc_588CD3
0x588C8C: test    eax, eax
0x588C8E: jnz     short loc_588C77
0x588C90: jmp     short loc_588CD3
0x588C92: fld     dword ptr [edx+4]
0x588C95: fstp    [esp+10h+var_4]
0x588C99: fcom    [esp+10h+var_4]
0x588C9D: fnstsw  ax
0x588C9F: test    ah, 44h
0x588CA2: jnp     short loc_588CD3
0x588CA4: mov     eax, edi
0x588CA6: test    eax, eax
0x588CA8: jz      short loc_588CC3
0x588CAA: mov     edx, [eax+8]
0x588CAD: lea     ecx, [eax+8]
0x588CB0: movzx   ecx, word ptr [edx+18h]
0x588CB4: cmp     cx, 0FADh
0x588CB9: mov     eax, [eax]
0x588CBB: jz      short loc_588CE6
0x588CBD: ja      short loc_588CC3
0x588CBF: test    eax, eax
0x588CC1: jnz     short loc_588CAA
0x588CC3: fst     [esp+10h+var_4]
0x588CC7: fld     [esp+10h+var_4]
0x588CCB: fadd    [esp+10h+var_8]
0x588CCF: fstp    [esp+10h+var_8]
0x588CD3: mov     esi, [esi+10h]
0x588CD6: test    esi, esi
0x588CD8: jnz     short loc_588C6E
0x588CDA: fstp    st
0x588CDC: pop     edi
0x588CDD: fld     [esp+0Ch+var_8]
0x588CE1: pop     esi
0x588CE2: add     esp, 8
0x588CE5: retn
0x588CE6: fld     dword ptr [edx+4]
0x588CE9: fstp    [esp+10h+var_4]
0x588CED: jmp     short loc_588CC7
