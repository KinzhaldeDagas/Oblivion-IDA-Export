0x954830: mov     eax, [esp+arg_4]
0x954834: cmp     dword ptr [eax+8], 16h
0x954838: jge     short loc_954844
0x95483A: mov     eax, [esp+arg_0]
0x95483E: mov     byte ptr [eax], 1
0x954841: retn    0Ch
0x954844: mov     edx, [esp+arg_8]
0x954848: mov     eax, [edx]
0x95484A: cmp     eax, [ecx+14h]
0x95484D: mov     eax, [esp+arg_0]
0x954851: jg      short loc_95483E
0x954853: mov     byte ptr [eax], 0
0x954856: retn    0Ch
