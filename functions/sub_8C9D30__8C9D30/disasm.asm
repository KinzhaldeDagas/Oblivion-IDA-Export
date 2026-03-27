0x8C9D30: push    esi
0x8C9D31: mov     esi, ecx
0x8C9D33: cmp     dword ptr [esi+0Ch], 0
0x8C9D37: jnz     short loc_8C9D93
0x8C9D39: push    14h; Size
0x8C9D3B: call    FormHeapAlloc
0x8C9D40: add     esp, 4
0x8C9D43: test    eax, eax
0x8C9D45: jz      short loc_8C9D80
0x8C9D47: mov     dword ptr [eax], 0
0x8C9D4D: fld     dword ptr ds:0B2EFC4h
0x8C9D53: fstp    dword ptr [eax+4]
0x8C9D56: mov     dword ptr [eax+8], 0
0x8C9D5D: fld     dword ptr ds:0A417B4h
0x8C9D63: fstp    dword ptr [eax+0Ch]
0x8C9D66: fld     dword ptr ds:0A31E2Ch
0x8C9D6C: fstp    dword ptr [eax+10h]
0x8C9D6F: mov     [esi+0Ch], eax
0x8C9D72: mov     eax, [esp+4+arg_0]
0x8C9D76: mov     byte ptr [eax], 1
0x8C9D79: mov     eax, [esi+0Ch]
0x8C9D7C: pop     esi
0x8C9D7D: retn    4
0x8C9D80: xor     eax, eax
0x8C9D82: mov     [esi+0Ch], eax
0x8C9D85: mov     eax, [esp+4+arg_0]
0x8C9D89: mov     byte ptr [eax], 1
0x8C9D8C: mov     eax, [esi+0Ch]
0x8C9D8F: pop     esi
0x8C9D90: retn    4
0x8C9D93: mov     ecx, [esp+4+arg_0]
0x8C9D97: mov     byte ptr [ecx], 0
0x8C9D9A: mov     eax, [esi+0Ch]
0x8C9D9D: pop     esi
0x8C9D9E: retn    4
