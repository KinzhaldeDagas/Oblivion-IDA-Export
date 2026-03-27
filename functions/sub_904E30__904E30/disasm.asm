0x904E30: push    esi
0x904E31: push    edi
0x904E32: mov     edi, ecx
0x904E34: mov     eax, [edi+10h]
0x904E37: xor     esi, esi
0x904E39: test    eax, eax
0x904E3B: jle     short loc_904E58
0x904E3D: push    ebx
0x904E3E: mov     ebx, [esp+0Ch+arg_0]
0x904E42: mov     eax, [edi+0Ch]
0x904E45: mov     ecx, [eax+esi*8+4]
0x904E49: mov     edx, [ecx]
0x904E4B: push    ebx
0x904E4C: call    dword ptr [edx+20h]
0x904E4F: mov     eax, [edi+10h]
0x904E52: inc     esi
0x904E53: cmp     esi, eax
0x904E55: jl      short loc_904E42
0x904E57: pop     ebx
0x904E58: pop     edi
0x904E59: pop     esi
0x904E5A: retn    4
