0x6EC8C0: mov     eax, [ecx+40h]
0x6EC8C3: test    eax, eax
0x6EC8C5: jz      short loc_6EC8E8
0x6EC8C7: mov     ecx, [eax+8]
0x6EC8CA: mov     edx, [esp+arg_0]
0x6EC8CE: mov     [edx], ecx
0x6EC8D0: mov     ecx, [eax+10h]
0x6EC8D3: mov     edx, [esp+arg_4]
0x6EC8D7: mov     [edx], ecx
0x6EC8D9: mov     cl, [eax+14h]
0x6EC8DC: mov     edx, [esp+arg_8]
0x6EC8E0: mov     [edx], cl
0x6EC8E2: mov     eax, [eax+0Ch]
0x6EC8E5: retn    0Ch
0x6EC8E8: mov     eax, [esp+arg_0]
0x6EC8EC: mov     ecx, [esp+arg_4]
0x6EC8F0: mov     edx, [esp+arg_8]
0x6EC8F4: mov     dword ptr [eax], 0
0x6EC8FA: mov     dword ptr [ecx], 0
0x6EC900: mov     byte ptr [edx], 0
0x6EC903: xor     eax, eax
0x6EC905: retn    0Ch
