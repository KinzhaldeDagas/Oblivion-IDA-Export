0x58BC80: push    esi
0x58BC81: lea     esi, [ecx+4]
0x58BC84: test    esi, esi
0x58BC86: push    edi
0x58BC87: jz      short loc_58BCC2
0x58BC89: mov     edi, [esp+8+Str2]
0x58BC8D: lea     ecx, [ecx+0]
0x58BC90: mov     eax, [esi]
0x58BC92: test    eax, eax
0x58BC94: jz      short loc_58BCC2
0x58BC96: test    edi, edi
0x58BC98: jz      short loc_58BCAC
0x58BC9A: mov     eax, [eax]
0x58BC9C: test    eax, eax
0x58BC9E: jz      short loc_58BCAC
0x58BCA0: push    edi; Str2
0x58BCA1: push    eax; Str1
0x58BCA2: call    __strcmp
0x58BCA7: add     esp, 8
0x58BCAA: jmp     short loc_58BCB7
0x58BCAC: xor     eax, eax
0x58BCAE: test    edi, edi
0x58BCB0: setz    al
0x58BCB3: lea     eax, [eax+eax-1]
0x58BCB7: test    eax, eax
0x58BCB9: jz      short loc_58BCC9
0x58BCBB: mov     esi, [esi+4]
0x58BCBE: test    esi, esi
0x58BCC0: jnz     short loc_58BC90
0x58BCC2: pop     edi
0x58BCC3: xor     eax, eax
0x58BCC5: pop     esi
0x58BCC6: retn    4
0x58BCC9: mov     eax, [esi]
0x58BCCB: pop     edi
0x58BCCC: pop     esi
0x58BCCD: retn    4
