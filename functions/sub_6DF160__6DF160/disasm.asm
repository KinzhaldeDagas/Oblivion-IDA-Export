0x6DF160: push    esi
0x6DF161: push    edi
0x6DF162: lea     esi, [ecx+38h]
0x6DF165: mov     edi, 3
0x6DF16A: lea     ebx, [ebx+0]
0x6DF170: mov     ecx, [esi]
0x6DF172: test    ecx, ecx
0x6DF174: jz      short loc_6DF17D
0x6DF176: mov     eax, [ecx]
0x6DF178: mov     edx, [eax+7Ch]
0x6DF17B: call    edx
0x6DF17D: add     esi, 4
0x6DF180: sub     edi, 1
0x6DF183: jnz     short loc_6DF170
0x6DF185: pop     edi
0x6DF186: pop     esi
0x6DF187: retn
