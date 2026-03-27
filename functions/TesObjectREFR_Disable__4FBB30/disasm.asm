0x4FBB30: mov     ecx, [esp+arg_0]
0x4FBB34: test    ecx, ecx
0x4FBB36: jz      short locret_4FBB56
0x4FBB38: mov     eax, offset dword_B361CC
0x4FBB3D: lea     ecx, [ecx+0]
0x4FBB40: cmp     [eax], ecx
0x4FBB42: jz      short locret_4FBB56
0x4FBB44: mov     eax, [eax+4]
0x4FBB47: test    eax, eax
0x4FBB49: jnz     short loc_4FBB40
0x4FBB4B: push    ecx
0x4FBB4C: mov     ecx, offset dword_B361CC
0x4FBB51: call    BSSimpleList_PushFront
0x4FBB56: retn
