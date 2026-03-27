0x91AC60: push    ecx
0x91AC61: push    ebx
0x91AC62: push    ebp
0x91AC63: push    esi
0x91AC64: push    edi
0x91AC65: mov     ebp, ecx
0x91AC67: xor     edi, edi
0x91AC69: cmp     ebp, edi
0x91AC6B: mov     [esp+14h+var_4], ebp
0x91AC6F: jz      short loc_91AC76
0x91AC71: lea     eax, [ebp+28h]
0x91AC74: jmp     short loc_91AC78
0x91AC76: xor     eax, eax
0x91AC78: mov     ebx, [esp+14h+arg_0]
0x91AC7C: push    eax
0x91AC7D: mov     ecx, ebx
0x91AC7F: call    sub_899CA0
0x91AC84: cmp     ebp, edi
0x91AC86: jz      short loc_91AC8D
0x91AC88: lea     eax, [ebp+2Ch]
0x91AC8B: jmp     short loc_91AC8F
0x91AC8D: xor     eax, eax
0x91AC8F: push    eax
0x91AC90: mov     ecx, ebx
0x91AC92: call    sub_899D20
0x91AC97: mov     ecx, ds:0BA7D98h
0x91AC9D: mov     eax, [ecx]
0x91AC9F: push    32h ; '2'
0x91ACA1: push    10h
0x91ACA3: call    dword ptr [eax+10h]
0x91ACA6: cmp     eax, edi
0x91ACA8: jz      short loc_91ACB9
0x91ACAA: mov     [eax+4], edi
0x91ACAD: mov     [eax+8], edi
0x91ACB0: mov     dword ptr [eax+0Ch], 80000000h
0x91ACB7: mov     edi, eax
0x91ACB9: lea     esi, [ebp+30h]
0x91ACBC: mov     [edi], ebx
0x91ACBE: mov     ecx, [esi+8]
0x91ACC1: mov     eax, [esi+4]
0x91ACC4: and     ecx, 3FFFFFFFh
0x91ACCA: cmp     eax, ecx
0x91ACCC: jnz     short loc_91ACD9
0x91ACCE: push    4
0x91ACD0: push    esi
0x91ACD1: call    sub_8A6EE0
0x91ACD6: add     esp, 8
0x91ACD9: mov     edx, [esi+4]
0x91ACDC: mov     eax, [esi]
0x91ACDE: mov     [eax+edx*4], edi
0x91ACE1: inc     dword ptr [esi+4]
0x91ACE4: mov     ecx, [ebx+3Ch]
0x91ACE7: xor     eax, eax
0x91ACE9: test    ecx, ecx
0x91ACEB: mov     [esp+14h+arg_0], eax
0x91ACEF: jle     short loc_91AD30
0x91ACF1: mov     ecx, [ebx+38h]
0x91ACF4: mov     esi, [ecx+eax*4]
0x91ACF7: mov     ecx, [esi+38h]
0x91ACFA: add     esi, 34h ; '4'
0x91ACFD: xor     edi, edi
0x91ACFF: test    ecx, ecx
0x91AD01: jle     short loc_91AD24
0x91AD03: add     ebp, 28h ; '('
0x91AD06: mov     eax, [esi]
0x91AD08: mov     ecx, [eax+edi*4]
0x91AD0B: mov     edx, [ebp+0]
0x91AD0E: push    ecx
0x91AD0F: mov     ecx, ebp
0x91AD11: call    dword ptr [edx+4]
0x91AD14: mov     eax, [esi+4]
0x91AD17: inc     edi
0x91AD18: cmp     edi, eax
0x91AD1A: jl      short loc_91AD06
0x91AD1C: mov     ebp, [esp+14h+var_4]
0x91AD20: mov     eax, [esp+14h+arg_0]
0x91AD24: mov     ecx, [ebx+3Ch]
0x91AD27: inc     eax
0x91AD28: cmp     eax, ecx
0x91AD2A: mov     [esp+14h+arg_0], eax
0x91AD2E: jl      short loc_91ACF1
0x91AD30: mov     ecx, [ebx+48h]
0x91AD33: xor     eax, eax
0x91AD35: test    ecx, ecx
0x91AD37: mov     [esp+14h+arg_0], eax
0x91AD3B: jle     short loc_91AD7F
0x91AD3D: lea     ecx, [ecx+0]
0x91AD40: mov     edx, [ebx+44h]
0x91AD43: mov     esi, [edx+eax*4]
0x91AD46: mov     ecx, [esi+38h]
0x91AD49: add     esi, 34h ; '4'
0x91AD4C: xor     edi, edi
0x91AD4E: test    ecx, ecx
0x91AD50: jle     short loc_91AD73
0x91AD52: add     ebp, 28h ; '('
0x91AD55: mov     ecx, [esi]
0x91AD57: mov     edx, [ecx+edi*4]
0x91AD5A: mov     eax, [ebp+0]
0x91AD5D: push    edx
0x91AD5E: mov     ecx, ebp
0x91AD60: call    dword ptr [eax+4]
0x91AD63: mov     eax, [esi+4]
0x91AD66: inc     edi
0x91AD67: cmp     edi, eax
0x91AD69: jl      short loc_91AD55
0x91AD6B: mov     eax, [esp+14h+arg_0]
0x91AD6F: mov     ebp, [esp+14h+var_4]
0x91AD73: mov     ecx, [ebx+48h]
0x91AD76: inc     eax
0x91AD77: cmp     eax, ecx
0x91AD79: mov     [esp+14h+arg_0], eax
0x91AD7D: jl      short loc_91AD40
0x91AD7F: mov     ebx, [ebx+30h]
0x91AD82: mov     eax, [ebx+38h]
0x91AD85: add     ebx, 34h ; '4'
0x91AD88: xor     esi, esi
0x91AD8A: test    eax, eax
0x91AD8C: jle     short loc_91ADA6
0x91AD8E: lea     edi, [ebp+28h]
0x91AD91: mov     ecx, [ebx]
0x91AD93: mov     edx, [ecx+esi*4]
0x91AD96: mov     eax, [edi]
0x91AD98: push    edx
0x91AD99: mov     ecx, edi
0x91AD9B: call    dword ptr [eax+4]
0x91AD9E: mov     eax, [ebx+4]
0x91ADA1: inc     esi
0x91ADA2: cmp     esi, eax
0x91ADA4: jl      short loc_91AD91
0x91ADA6: pop     edi
0x91ADA7: pop     esi
0x91ADA8: pop     ebp
0x91ADA9: pop     ebx
0x91ADAA: pop     ecx
0x91ADAB: retn    4
