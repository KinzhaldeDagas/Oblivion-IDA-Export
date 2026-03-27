0x794F90: push    esi
0x794F91: mov     esi, [esp+4+arg_4]
0x794F95: test    esi, esi
0x794F97: push    edi
0x794F98: mov     edi, [esp+8+arg_0]
0x794F9C: mov     eax, esi
0x794F9E: mov     ecx, edi
0x794FA0: jbe     short loc_794FB8
0x794FA2: mov     edx, [esp+8+arg_8]
0x794FA6: push    ebx
0x794FA7: mov     bx, [edx]
0x794FAA: mov     [ecx], bx
0x794FAD: sub     eax, 1
0x794FB0: add     ecx, 2
0x794FB3: test    eax, eax
0x794FB5: ja      short loc_794FA7
0x794FB7: pop     ebx
0x794FB8: lea     eax, [edi+esi*2]
0x794FBB: pop     edi
0x794FBC: pop     esi
0x794FBD: retn    0Ch
