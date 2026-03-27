0x452910: mov     eax, [esp+arg_0]
0x452914: push    esi
0x452915: mov     esi, ecx
0x452917: cmp     eax, [esi+8]
0x45291A: jz      loc_4529D1
0x452920: cmp     eax, [esi+0Ch]
0x452923: push    edi
0x452924: jnb     short loc_452950
0x452926: mov     edx, eax
0x452928: or      edi, 0FFFFFFFFh
0x45292B: jmp     short loc_452930
0x45292D: align 10h
0x452930: mov     ecx, [esi+4]
0x452933: cmp     dword ptr [ecx+edx*4], 0
0x452937: lea     ecx, [ecx+edx*4]
0x45293A: jz      short loc_452945
0x45293C: mov     dword ptr [ecx], 0
0x452942: add     [esi+10h], edi
0x452945: add     edx, 1
0x452948: cmp     edx, [esi+0Ch]
0x45294B: jb      short loc_452930
0x45294D: mov     [esi+0Ch], eax
0x452950: test    eax, eax
0x452952: mov     edi, [esi+4]
0x452955: mov     [esi+8], eax
0x452958: jbe     short loc_4529C0
0x45295A: xor     ecx, ecx
0x45295C: mov     edx, 4
0x452961: mul     edx
0x452963: seto    cl
0x452966: neg     ecx
0x452968: or      ecx, eax
0x45296A: push    ecx; Size
0x45296B: call    FormHeapAlloc
0x452970: mov     [esi+4], eax
0x452973: xor     eax, eax
0x452975: add     esp, 4
0x452978: cmp     [esi+0Ch], eax
0x45297B: jbe     short loc_452991
0x45297D: lea     ecx, [ecx+0]
0x452980: mov     edx, [edi+eax*4]
0x452983: mov     ecx, [esi+4]
0x452986: mov     [ecx+eax*4], edx
0x452989: add     eax, 1
0x45298C: cmp     eax, [esi+0Ch]
0x45298F: jb      short loc_452980
0x452991: mov     eax, [esi+0Ch]
0x452994: cmp     eax, [esi+8]
0x452997: jnb     short loc_4529C7
0x452999: lea     esp, [esp+0]
0x4529A0: mov     ecx, [esi+4]
0x4529A3: mov     dword ptr [ecx+eax*4], 0
0x4529AA: add     eax, 1
0x4529AD: cmp     eax, [esi+8]
0x4529B0: jb      short loc_4529A0
0x4529B2: push    edi
0x4529B3: call    FormHeapFree
0x4529B8: add     esp, 4
0x4529BB: pop     edi
0x4529BC: pop     esi
0x4529BD: retn    4
0x4529C0: mov     dword ptr [esi+4], 0
0x4529C7: push    edi
0x4529C8: call    FormHeapFree
0x4529CD: add     esp, 4
0x4529D0: pop     edi
0x4529D1: pop     esi
0x4529D2: retn    4
