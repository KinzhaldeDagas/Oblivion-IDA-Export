0x99FBAF: push    ebp
0x99FBB0: mov     ebp, esp
0x99FBB2: sub     esp, 18h
0x99FBB5: mov     eax, ___security_cookie
0x99FBBA: xor     eax, ebp
0x99FBBC: mov     [ebp+var_4], eax
0x99FBBF: mov     eax, [ebp+arg_8]
0x99FBC2: push    ebx
0x99FBC3: push    esi
0x99FBC4: xor     esi, esi
0x99FBC6: cmp     [ebp+arg_4], esi
0x99FBC9: push    edi
0x99FBCA: mov     [ebp+var_18], 404Eh
0x99FBD1: mov     [eax], esi
0x99FBD3: mov     [eax+4], esi
0x99FBD6: mov     [eax+8], esi
0x99FBD9: jbe     loc_99FD25
0x99FBDF: mov     edx, [eax]
0x99FBE1: mov     ebx, [eax+4]
0x99FBE4: mov     esi, eax
0x99FBE6: lea     edi, [ebp+var_10]
0x99FBE9: movsd
0x99FBEA: movsd
0x99FBEB: movsd
0x99FBEC: mov     ecx, edx
0x99FBEE: shr     ecx, 1Fh
0x99FBF1: lea     edi, [edx+edx]
0x99FBF4: lea     edx, [ebx+ebx]
0x99FBF7: or      edx, ecx
0x99FBF9: mov     ecx, [eax+8]
0x99FBFC: mov     esi, ebx
0x99FBFE: shr     esi, 1Fh
0x99FC01: add     ecx, ecx
0x99FC03: or      ecx, esi
0x99FC05: mov     [ebp+var_14], edi
0x99FC08: mov     esi, edi
0x99FC0A: and     [ebp+var_14], 0
0x99FC0E: mov     ebx, edx
0x99FC10: shr     ebx, 1Fh
0x99FC13: add     ecx, ecx
0x99FC15: shr     edi, 1Fh
0x99FC18: or      ecx, ebx
0x99FC1A: mov     ebx, [ebp+var_10]
0x99FC1D: add     esi, esi
0x99FC1F: add     edx, edx
0x99FC21: or      edx, edi
0x99FC23: lea     edi, [esi+ebx]
0x99FC26: cmp     edi, esi
0x99FC28: mov     [eax], esi
0x99FC2A: mov     [eax+4], edx
0x99FC2D: mov     [eax+8], ecx
0x99FC30: jb      short loc_99FC36
0x99FC32: cmp     edi, ebx
0x99FC34: jnb     short loc_99FC3D
0x99FC36: mov     [ebp+var_14], 1
0x99FC3D: xor     ebx, ebx
0x99FC3F: cmp     [ebp+var_14], ebx
0x99FC42: mov     [eax], edi
0x99FC44: jz      short loc_99FC60
0x99FC46: lea     esi, [edx+1]
0x99FC49: cmp     esi, edx
0x99FC4B: jb      short loc_99FC52
0x99FC4D: cmp     esi, 1
0x99FC50: jnb     short loc_99FC55
0x99FC52: xor     ebx, ebx
0x99FC54: inc     ebx
0x99FC55: test    ebx, ebx
0x99FC57: mov     [eax+4], esi
0x99FC5A: jz      short loc_99FC60
0x99FC5C: inc     ecx
0x99FC5D: mov     [eax+8], ecx
0x99FC60: mov     ecx, [eax+4]
0x99FC63: mov     edx, [ebp+var_C]
0x99FC66: lea     ebx, [ecx+edx]
0x99FC69: xor     esi, esi
0x99FC6B: cmp     ebx, ecx
0x99FC6D: jb      short loc_99FC73
0x99FC6F: cmp     ebx, edx
0x99FC71: jnb     short loc_99FC76
0x99FC73: xor     esi, esi
0x99FC75: inc     esi
0x99FC76: test    esi, esi
0x99FC78: mov     [eax+4], ebx
0x99FC7B: jz      short loc_99FC80
0x99FC7D: inc     dword ptr [eax+8]
0x99FC80: mov     ecx, [ebp+var_8]
0x99FC83: add     [eax+8], ecx
0x99FC86: and     [ebp+var_14], 0
0x99FC8A: lea     ecx, [edi+edi]
0x99FC8D: mov     edx, edi
0x99FC8F: shr     edx, 1Fh
0x99FC92: lea     edi, [ebx+ebx]
0x99FC95: or      edi, edx
0x99FC97: mov     edx, [eax+8]
0x99FC9A: mov     esi, ebx
0x99FC9C: shr     esi, 1Fh
0x99FC9F: lea     ebx, [edx+edx]
0x99FCA2: mov     edx, [ebp+arg_0]
0x99FCA5: or      ebx, esi
0x99FCA7: mov     [eax], ecx
0x99FCA9: mov     [eax+4], edi
0x99FCAC: mov     [eax+8], ebx
0x99FCAF: movsx   edx, byte ptr [edx]
0x99FCB2: lea     esi, [ecx+edx]
0x99FCB5: cmp     esi, ecx
0x99FCB7: mov     [ebp+var_10], edx
0x99FCBA: jb      short loc_99FCC0
0x99FCBC: cmp     esi, edx
0x99FCBE: jnb     short loc_99FCC7
0x99FCC0: mov     [ebp+var_14], 1
0x99FCC7: cmp     [ebp+var_14], 0
0x99FCCB: mov     [eax], esi
0x99FCCD: jz      short loc_99FCEB
0x99FCCF: lea     ecx, [edi+1]
0x99FCD2: xor     edx, edx
0x99FCD4: cmp     ecx, edi
0x99FCD6: jb      short loc_99FCDD
0x99FCD8: cmp     ecx, 1
0x99FCDB: jnb     short loc_99FCE0
0x99FCDD: xor     edx, edx
0x99FCDF: inc     edx
0x99FCE0: test    edx, edx
0x99FCE2: mov     [eax+4], ecx
0x99FCE5: jz      short loc_99FCEB
0x99FCE7: inc     ebx
0x99FCE8: mov     [eax+8], ebx
0x99FCEB: dec     [ebp+arg_4]
0x99FCEE: inc     [ebp+arg_0]
0x99FCF1: cmp     [ebp+arg_4], 0
0x99FCF5: ja      loc_99FBDF
0x99FCFB: xor     esi, esi
0x99FCFD: jmp     short loc_99FD25
0x99FCFF: mov     ecx, [eax+4]
0x99FD02: mov     edx, ecx
0x99FD04: shr     edx, 10h
0x99FD07: mov     [eax+8], edx
0x99FD0A: mov     edx, [eax]
0x99FD0C: mov     edi, edx
0x99FD0E: shl     ecx, 10h
0x99FD11: shr     edi, 10h
0x99FD14: or      ecx, edi
0x99FD16: shl     edx, 10h
0x99FD19: add     [ebp+var_18], 0FFF0h
0x99FD20: mov     [eax+4], ecx
0x99FD23: mov     [eax], edx
0x99FD25: cmp     [eax+8], esi
0x99FD28: jz      short loc_99FCFF
0x99FD2A: mov     ebx, 8000h
0x99FD2F: test    [eax+8], ebx
0x99FD32: jnz     short loc_99FD64
0x99FD34: mov     esi, [eax]
0x99FD36: mov     edi, [eax+4]
0x99FD39: add     [ebp+var_18], 0FFFFh
0x99FD40: mov     ecx, esi
0x99FD42: add     esi, esi
0x99FD44: shr     ecx, 1Fh
0x99FD47: mov     [eax], esi
0x99FD49: lea     esi, [edi+edi]
0x99FD4C: or      esi, ecx
0x99FD4E: mov     ecx, [eax+8]
0x99FD51: mov     edx, edi
0x99FD53: shr     edx, 1Fh
0x99FD56: add     ecx, ecx
0x99FD58: or      ecx, edx
0x99FD5A: test    ebx, ecx
0x99FD5C: mov     [eax+4], esi
0x99FD5F: mov     [eax+8], ecx
0x99FD62: jz      short loc_99FD34
0x99FD64: mov     cx, word ptr [ebp+var_18]
0x99FD68: mov     [eax+0Ah], cx
0x99FD6C: mov     ecx, [ebp+var_4]
0x99FD6F: pop     edi
0x99FD70: pop     esi
0x99FD71: xor     ecx, ebp
0x99FD73: pop     ebx
0x99FD74: call    @__security_check_cookie@4
0x99FD79: leave
0x99FD7A: retn
