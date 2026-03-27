0x79AA10: mov     edx, [esp+arg_4]
0x79AA14: test    edx, edx
0x79AA16: jbe     short locret_79AA3F
0x79AA18: mov     eax, [esp+arg_0]
0x79AA1C: push    ebx
0x79AA1D: mov     ebx, [esp+4+arg_8]
0x79AA21: push    esi
0x79AA22: push    edi
0x79AA23: test    eax, eax
0x79AA25: jz      short loc_79AA32
0x79AA27: mov     ecx, 0Eh
0x79AA2C: mov     esi, ebx
0x79AA2E: mov     edi, eax
0x79AA30: rep movsd
0x79AA32: sub     edx, 1
0x79AA35: add     eax, 38h ; '8'
0x79AA38: test    edx, edx
0x79AA3A: ja      short loc_79AA23
0x79AA3C: pop     edi
0x79AA3D: pop     esi
0x79AA3E: pop     ebx
0x79AA3F: retn
