0x46AAD0: cmp     byte ptr [esp+arg_0], 0
0x46AAD5: jz      short loc_46AAE0
0x46AAD7: or      dword ptr [ecx+8], 10000h
0x46AADE: jmp     short loc_46AAE7
0x46AAE0: and     dword ptr [ecx+8], 0FFFEFFFFh
0x46AAE7: mov     eax, [ecx]
0x46AAE9: mov     edx, [eax+40h]
0x46AAEC: mov     [esp+arg_0], 1
0x46AAF4: jmp     edx
