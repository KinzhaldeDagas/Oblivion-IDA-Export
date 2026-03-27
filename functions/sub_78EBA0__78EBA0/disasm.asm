0x78EBA0: fldz
0x78EBA2: push    ebx
0x78EBA3: push    ebp
0x78EBA4: mov     ebp, [esp+8+arg_0]
0x78EBA8: push    esi
0x78EBA9: fst     dword ptr [ebp+8]
0x78EBAC: fst     dword ptr [ebp+4]
0x78EBAF: push    edi
0x78EBB0: fstp    dword ptr [ebp+0]
0x78EBB3: mov     esi, ecx
0x78EBB5: xor     edi, edi
0x78EBB7: mov     ecx, [esi+8]
0x78EBBA: test    ecx, ecx
0x78EBBC: mov     ebx, [esi]
0x78EBBE: jz      short loc_78EBC9
0x78EBC0: mov     eax, [esi+0Ch]
0x78EBC3: sub     eax, ecx
0x78EBC5: cmp     ebx, eax
0x78EBC7: jb      short loc_78EBCE
0x78EBC9: call    __invalid_parameter_noinfo
0x78EBCE: mov     eax, [esi+8]
0x78EBD1: add     dword ptr [esi], 4
0x78EBD4: fld     dword ptr [eax+ebx]
0x78EBD7: add     eax, ebx
0x78EBD9: fstp    dword ptr [ebp+edi*4+0]
0x78EBDD: add     edi, 1
0x78EBE0: cmp     edi, 3
0x78EBE3: jl      short loc_78EBB7
0x78EBE5: pop     edi
0x78EBE6: pop     esi
0x78EBE7: mov     eax, ebp
0x78EBE9: pop     ebp
0x78EBEA: pop     ebx
0x78EBEB: retn    4
