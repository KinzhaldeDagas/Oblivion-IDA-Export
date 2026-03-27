0x6F11E0: mov     ecx, [esp+arg_0]
0x6F11E4: mov     edx, [esp+arg_4]
0x6F11E8: cmp     ecx, edx
0x6F11EA: mov     eax, [esp+arg_8]
0x6F11EE: jz      short locret_6F1208
0x6F11F0: test    eax, eax
0x6F11F2: jz      short loc_6F11FE
0x6F11F4: fld     dword ptr [ecx]
0x6F11F6: fstp    dword ptr [eax]
0x6F11F8: fld     dword ptr [ecx+4]
0x6F11FB: fstp    dword ptr [eax+4]
0x6F11FE: add     ecx, 8
0x6F1201: add     eax, 8
0x6F1204: cmp     ecx, edx
0x6F1206: jnz     short loc_6F11F0
0x6F1208: retn
