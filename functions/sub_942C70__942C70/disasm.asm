0x942C70: mov     ecx, [esp+arg_0]
0x942C74: mov     edx, [esp+arg_4]
0x942C78: mov     eax, [ecx]
0x942C7A: push    esi
0x942C7B: mov     esi, [esp+4+arg_8]
0x942C7F: push    esi
0x942C80: push    edx
0x942C81: call    dword ptr [eax+0Ch]
0x942C84: xor     ecx, ecx
0x942C86: cmp     eax, esi
0x942C88: setnz   cl
0x942C8B: pop     esi
0x942C8C: mov     eax, ecx
0x942C8E: retn    0Ch
