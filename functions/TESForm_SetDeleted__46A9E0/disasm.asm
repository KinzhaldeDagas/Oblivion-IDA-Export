0x46A9E0: cmp     [esp+arg_0], 0
0x46A9E5: jz      short loc_46A9ED
0x46A9E7: or      dword ptr [ecx+8], 20h
0x46A9EB: jmp     short loc_46A9F1
0x46A9ED: and     dword ptr [ecx+8], 0FFFFFFDFh
0x46A9F1: mov     eax, [ecx]
0x46A9F3: mov     edx, [eax+40h]
0x46A9F6: mov     dword ptr [esp+arg_0], 40000001h
0x46A9FE: jmp     edx
