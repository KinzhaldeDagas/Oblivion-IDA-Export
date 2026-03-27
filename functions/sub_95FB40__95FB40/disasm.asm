0x95FB40: push    ebx
0x95FB41: push    ebp
0x95FB42: push    esi
0x95FB43: push    edi
0x95FB44: mov     edi, [esp+10h+arg_4]
0x95FB48: xor     esi, esi
0x95FB4A: cmp     [edi+0Eh], si
0x95FB4E: jbe     short loc_95FB8D
0x95FB50: mov     ebx, [esp+10h+arg_10]
0x95FB54: mov     ebp, [esp+10h+arg_C]
0x95FB58: jmp     short loc_95FB60
0x95FB5A: align 10h
0x95FB60: mov     ecx, [esp+10h+arg_8]
0x95FB64: fld     [esp+10h+arg_0]
0x95FB68: mov     eax, [edi+8]
0x95FB6B: mov     eax, [eax+esi*4]
0x95FB6E: push    ebx; int
0x95FB6F: push    ebp; int
0x95FB70: push    ecx; int
0x95FB71: push    eax; int
0x95FB72: push    ecx
0x95FB73: fstp    [esp+24h+var_24]; float
0x95FB76: call    sub_95D920
0x95FB7B: add     esp, 14h
0x95FB7E: test    al, al
0x95FB80: jnz     short loc_95FB94
0x95FB82: movzx   edx, word ptr [edi+0Eh]
0x95FB86: add     esi, 1
0x95FB89: cmp     esi, edx
0x95FB8B: jb      short loc_95FB60
0x95FB8D: pop     edi
0x95FB8E: pop     esi
0x95FB8F: pop     ebp
0x95FB90: xor     al, al
0x95FB92: pop     ebx
0x95FB93: retn
0x95FB94: mov     [edi+14h], esi
0x95FB97: pop     edi
0x95FB98: pop     esi
0x95FB99: pop     ebp
0x95FB9A: mov     al, 1
0x95FB9C: pop     ebx
0x95FB9D: retn
