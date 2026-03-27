0x772790: mov     eax, [esp+arg_0]
0x772794: mov     edx, [eax+8]
0x772797: test    edx, edx
0x772799: push    esi
0x77279A: mov     esi, [eax+0Ch]
0x77279D: jz      short loc_7727A2
0x77279F: mov     [edx+0Ch], esi
0x7727A2: test    esi, esi
0x7727A4: jz      short loc_7727A9
0x7727A6: mov     [esi+8], edx
0x7727A9: cmp     eax, [ecx+10h]
0x7727AC: pop     esi
0x7727AD: jnz     short loc_7727B2
0x7727AF: mov     [ecx+10h], edx
0x7727B2: add     dword ptr [ecx+0Ch], 0FFFFFFFFh
0x7727B6: mov     dword ptr [eax+8], 0
0x7727BD: mov     dword ptr [eax+0Ch], 0
0x7727C4: retn    4
