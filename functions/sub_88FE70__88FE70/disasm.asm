0x88FE70: mov     eax, [esp+arg_0]
0x88FE74: mov     edx, [eax+28h]
0x88FE77: mov     eax, [edx+1Ch]
0x88FE7A: and     eax, 3Fh
0x88FE7D: cmp     al, 14h
0x88FE7F: jnz     short locret_88FE9E
0x88FE81: add     dword ptr [ecx+64h], 1
0x88FE85: cmp     byte ptr [ecx+61h], 0
0x88FE89: jz      short locret_88FE9E
0x88FE8B: add     ecx, 0FFFFFE10h
0x88FE91: mov     [esp+arg_0], offset Vector3_InitValue?
0x88FE99: jmp     sub_64B3A0
0x88FE9E: retn    4
