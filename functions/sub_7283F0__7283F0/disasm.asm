0x7283F0: xor     edx, edx
0x7283F2: test    edi, edi
0x7283F4: push    esi
0x7283F5: jbe     short loc_728426
0x7283F7: mov     esi, eax
0x7283F9: sub     esi, ecx
0x7283FB: jmp     short loc_728400
0x7283FD: align 10h
0x728400: fld     dword ptr [esi+ecx]
0x728403: fld     dword ptr [ecx]
0x728405: fcompp
0x728407: fnstsw  ax
0x728409: test    ah, 41h
0x72840C: jz      short loc_72842A
0x72840E: fld     dword ptr [esi+ecx]
0x728411: fld     dword ptr [ecx]
0x728413: fcompp
0x728415: fnstsw  ax
0x728417: test    ah, 5
0x72841A: jnp     short loc_72842F
0x72841C: add     edx, 1
0x72841F: add     ecx, 4
0x728422: cmp     edx, edi
0x728424: jb      short loc_728400
0x728426: xor     eax, eax
0x728428: pop     esi
0x728429: retn
0x72842A: or      eax, 0FFFFFFFFh
0x72842D: pop     esi
0x72842E: retn
0x72842F: mov     eax, 1
0x728434: pop     esi
0x728435: retn
