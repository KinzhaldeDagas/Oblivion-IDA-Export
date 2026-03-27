0x680D30: push    esi
0x680D31: mov     esi, ecx
0x680D33: mov     ecx, [esp+4+arg_0]
0x680D37: test    ecx, ecx
0x680D39: jz      short loc_680D4C
0x680D3B: mov     eax, [ecx]
0x680D3D: mov     edx, [eax+1E0h]
0x680D43: call    edx
0x680D45: fstp    dword ptr [esi+14h]
0x680D48: pop     esi
0x680D49: retn    4
0x680D4C: fldz
0x680D4E: fstp    dword ptr [esi+14h]
0x680D51: pop     esi
0x680D52: retn    4
