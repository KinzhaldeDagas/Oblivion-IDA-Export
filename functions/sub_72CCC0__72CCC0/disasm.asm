0x72CCC0: push    ebp
0x72CCC1: mov     ebp, [esp+4+arg_0]
0x72CCC5: push    esi
0x72CCC6: mov     esi, ecx
0x72CCC8: cmp     ebp, [esi+4]
0x72CCCB: jz      short loc_72CD1D
0x72CCCD: test    ebp, ebp
0x72CCCF: push    edi
0x72CCD0: jbe     short loc_72CD0A
0x72CCD2: xor     ecx, ecx
0x72CCD4: mov     eax, ebp
0x72CCD6: mov     edx, 2
0x72CCDB: mul     edx
0x72CCDD: seto    cl
0x72CCE0: neg     ecx
0x72CCE2: or      ecx, eax
0x72CCE4: push    ecx; Size
0x72CCE5: call    FormHeapAlloc
0x72CCEA: mov     edi, eax
0x72CCEC: xor     eax, eax
0x72CCEE: add     esp, 4
0x72CCF1: cmp     [esi+8], eax
0x72CCF4: jbe     short loc_72CD0C
0x72CCF6: mov     ecx, [esi]
0x72CCF8: mov     dx, [ecx+eax*2]
0x72CCFC: mov     [edi+eax*2], dx
0x72CD00: add     eax, 1
0x72CD03: cmp     eax, [esi+8]
0x72CD06: jb      short loc_72CCF6
0x72CD08: jmp     short loc_72CD0C
0x72CD0A: xor     edi, edi
0x72CD0C: mov     eax, [esi]
0x72CD0E: push    eax
0x72CD0F: call    FormHeapFree
0x72CD14: add     esp, 4
0x72CD17: mov     [esi], edi
0x72CD19: mov     [esi+4], ebp
0x72CD1C: pop     edi
0x72CD1D: pop     esi
0x72CD1E: pop     ebp
0x72CD1F: retn    4
