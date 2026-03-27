0x6AF7B0: mov     eax, [esp+arg_0]
0x6AF7B4: sub     [ecx+4], eax
0x6AF7B7: add     [ecx+10h], eax
0x6AF7BA: mov     eax, [ecx+10h]
0x6AF7BD: cmp     eax, 8
0x6AF7C0: jb      short locret_6AF7DC
0x6AF7C2: mov     edx, 0FFFFFFF8h
0x6AF7C7: or      eax, 0FFFFFFFFh
0x6AF7CA: lea     ebx, [ebx+0]
0x6AF7D0: add     [ecx+10h], edx
0x6AF7D3: add     [ecx+8], eax
0x6AF7D6: cmp     dword ptr [ecx+10h], 8
0x6AF7DA: jnb     short loc_6AF7D0
0x6AF7DC: retn    4
