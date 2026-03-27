0x74F9A0: push    ebp
0x74F9A1: mov     ebp, [esp+4+arg_0]
0x74F9A5: push    esi
0x74F9A6: mov     esi, ecx
0x74F9A8: cmp     ebp, [esi+4]
0x74F9AB: jz      short loc_74F9FC
0x74F9AD: test    ebp, ebp
0x74F9AF: push    edi
0x74F9B0: jbe     short loc_74F9E9
0x74F9B2: xor     ecx, ecx
0x74F9B4: mov     eax, ebp
0x74F9B6: mov     edx, 4
0x74F9BB: mul     edx
0x74F9BD: seto    cl
0x74F9C0: neg     ecx
0x74F9C2: or      ecx, eax
0x74F9C4: push    ecx; Size
0x74F9C5: call    FormHeapAlloc
0x74F9CA: mov     edi, eax
0x74F9CC: xor     eax, eax
0x74F9CE: add     esp, 4
0x74F9D1: cmp     [esi+8], eax
0x74F9D4: jbe     short loc_74F9EB
0x74F9D6: mov     ecx, [esi]
0x74F9D8: fld     dword ptr [ecx+eax*4]
0x74F9DB: add     eax, 1
0x74F9DE: fstp    dword ptr [edi+eax*4-4]
0x74F9E2: cmp     eax, [esi+8]
0x74F9E5: jb      short loc_74F9D6
0x74F9E7: jmp     short loc_74F9EB
0x74F9E9: xor     edi, edi
0x74F9EB: mov     edx, [esi]
0x74F9ED: push    edx
0x74F9EE: call    FormHeapFree
0x74F9F3: add     esp, 4
0x74F9F6: mov     [esi], edi
0x74F9F8: mov     [esi+4], ebp
0x74F9FB: pop     edi
0x74F9FC: pop     esi
0x74F9FD: pop     ebp
0x74F9FE: retn    4
