0x88FE70: mov     eax, [esp+arg_0]; TES4 authoritative: listener callback used by 0x894E80 swept integration path. Reads hit collidable/filter at entry+0x28 -> +0x1C, checks low 6 bits for layer 0x14.
0x88FE74: mov     edx, [eax+28h]
0x88FE77: mov     eax, [edx+1Ch]
0x88FE7A: and     eax, 3Fh; Extracts collision layer from hit entry+0x28 collidable filter info low 6 bits.
0x88FE7D: cmp     al, 14h
0x88FE7F: jnz     short locret_88FE9E
0x88FE81: add     dword ptr [ecx+64h], 1; For layer 0x14 hits, increments controller listener counter at proxy+0x254 (this is proxy+0x1F0 here).
0x88FE85: cmp     byte ptr [ecx+61h], 0
0x88FE89: jz      short locret_88FE9E
0x88FE8B: add     ecx, 0FFFFFE10h
0x88FE91: mov     [esp+arg_0], offset g_zeroNiPoint3
0x88FE99: jmp     bhkCharacterController_SetObjectVelocityFromWorldVector; For layer 0x14 swept hits, optional proxy+0x251 path writes zero velocity to the low-level collision object through 0x64B3A0; it does not alter the candidate position written by 0x894E80.
0x88FE9E: retn    4
