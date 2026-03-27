0x4392E0: push    esi
0x4392E1: push    edi
0x4392E2: mov     edi, ecx
0x4392E4: mov     eax, [edi+1Ch]
0x4392E7: test    eax, eax
0x4392E9: jz      short loc_439317
0x4392EB: push    ebx
0x4392EC: movzx   ebx, word ptr [eax+0Ah]
0x4392F0: xor     esi, esi
0x4392F2: test    ebx, ebx
0x4392F4: jbe     short loc_439316
0x4392F6: mov     eax, [edi+1Ch]
0x4392F9: mov     ecx, [eax+4]
0x4392FC: mov     eax, [ecx+esi*4]
0x4392FF: test    eax, eax
0x439301: jz      short loc_43930F
0x439303: mov     ecx, ioManager
0x439309: push    eax
0x43930A: call    sub_432130
0x43930F: add     esi, 1
0x439312: cmp     esi, ebx
0x439314: jb      short loc_4392F6
0x439316: pop     ebx
0x439317: mov     esi, [edi+18h]
0x43931A: test    esi, esi
0x43931C: jz      short loc_439341
0x43931E: lea     edx, [esi+8]
0x439321: push    edx; lpAddend
0x439322: call    ds:InterlockedDecrement
0x439328: test    eax, eax
0x43932A: jnz     short loc_43933A
0x43932C: test    esi, esi
0x43932E: jz      short loc_43933A
0x439330: mov     eax, [esi]
0x439332: mov     edx, [eax]
0x439334: push    1
0x439336: mov     ecx, esi
0x439338: call    edx
0x43933A: mov     dword ptr [edi+18h], 0
0x439341: pop     edi
0x439342: pop     esi
0x439343: retn    4
