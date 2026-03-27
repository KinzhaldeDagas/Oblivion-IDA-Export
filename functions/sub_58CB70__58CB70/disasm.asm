0x58CB70: push    ebx
0x58CB71: mov     ebx, ecx
0x58CB73: push    esi
0x58CB74: mov     esi, [ebx+10h]
0x58CB77: cmp     dword ptr [esi+4], 0
0x58CB7B: jz      short loc_58CB89
0x58CB7D: lea     ecx, [ecx+0]
0x58CB80: mov     esi, [esi+4]
0x58CB83: cmp     dword ptr [esi+4], 0
0x58CB87: jnz     short loc_58CB80
0x58CB89: push    18h; Size
0x58CB8B: call    FormHeapAlloc
0x58CB90: add     esp, 4
0x58CB93: test    eax, eax
0x58CB95: jz      short loc_58CBBC
0x58CB97: fldz
0x58CB99: mov     ecx, [esp+8+arg_4]
0x58CB9D: fstp    dword ptr [eax+8]
0x58CBA0: mov     [eax], esi
0x58CBA2: mov     dword ptr [eax+4], 0
0x58CBA9: mov     [eax+0Ch], ecx
0x58CBAC: mov     dword ptr [eax+10h], 0
0x58CBB3: mov     dword ptr [eax+14h], 0
0x58CBBA: jmp     short loc_58CBBE
0x58CBBC: xor     eax, eax
0x58CBBE: mov     edx, [esp+8+arg_0]
0x58CBC2: mov     [esi+4], eax
0x58CBC5: mov     [eax+8], edx
0x58CBC8: mov     esi, [esi+4]
0x58CBCB: push    0
0x58CBCD: mov     ecx, ebx
0x58CBCF: call    DoActionEnumeration
0x58CBD4: mov     eax, esi
0x58CBD6: pop     esi
0x58CBD7: pop     ebx
0x58CBD8: retn    8
