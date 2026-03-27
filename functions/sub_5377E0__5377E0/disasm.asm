0x5377E0: mov     edx, [ecx+20h]
0x5377E3: push    esi
0x5377E4: mov     eax, edx
0x5377E6: imul    eax, [esp+4+arg_4]
0x5377EB: add     eax, [esp+4+arg_0]
0x5377EF: mov     esi, edx
0x5377F1: imul    esi, edx
0x5377F4: cmp     eax, esi
0x5377F6: pop     esi
0x5377F7: jnb     short loc_53780A
0x5377F9: mov     ecx, [ecx+18h]
0x5377FC: fld     dword ptr [ecx+eax*4]
0x5377FF: fstp    [esp+arg_4]
0x537803: fld     [esp+arg_4]
0x537807: retn    8
0x53780A: fld     dword ptr ds:0A3B888h
0x537810: fstp    [esp+arg_4]
0x537814: fld     [esp+arg_4]
0x537818: retn    8
