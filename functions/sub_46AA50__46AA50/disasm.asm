0x46AA50: cmp     byte ptr [esp+arg_0], 0
0x46AA55: jz      short loc_46AA60
0x46AA57: or      dword ptr [ecx+8], 2000h
0x46AA5E: jmp     short loc_46AA67
0x46AA60: and     dword ptr [ecx+8], 0FFFFDFFFh
0x46AA67: mov     eax, [ecx]
0x46AA69: mov     edx, [eax+40h]
0x46AA6C: mov     [esp+arg_0], 1
0x46AA74: jmp     edx
