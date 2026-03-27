0x94BC40: sub     esp, 24h
0x94BC43: push    ebx
0x94BC44: mov     ebx, [esp+28h+arg_0]
0x94BC48: push    ebp
0x94BC49: push    esi
0x94BC4A: lea     eax, [esp+30h+var_18]
0x94BC4E: push    eax
0x94BC4F: xor     ebp, ebp
0x94BC51: mov     esi, 80000000h
0x94BC56: push    ecx
0x94BC57: mov     [esp+38h+var_18], ebp
0x94BC5B: mov     [esp+38h+var_14], ebp
0x94BC5F: mov     [esp+38h+var_10], esi
0x94BC63: call    sub_8F1EC0
0x94BC68: mov     eax, [esp+38h+var_14]
0x94BC6C: add     esp, 8
0x94BC6F: cmp     eax, 1
0x94BC72: jge     short loc_94BCBA
0x94BC74: mov     eax, [esp+30h+var_10]
0x94BC78: test    esi, eax
0x94BC7A: jnz     short loc_94BCB1
0x94BC7C: mov     ecx, large fs:2Ch
0x94BC83: mov     edx, ds:0BA9DE4h
0x94BC89: mov     edx, [ecx+edx*4]
0x94BC8C: mov     ecx, [edx+19Ch]
0x94BC92: cmp     ecx, ebp
0x94BC94: jnz     short loc_94BC9C
0x94BC96: mov     ecx, ds:0BA7D9Ch
0x94BC9C: and     eax, 3FFFFFFFh
0x94BCA1: push    14h
0x94BCA3: shl     eax, 4
0x94BCA6: push    eax
0x94BCA7: mov     eax, [esp+38h+var_18]
0x94BCAB: push    eax
0x94BCAC: call    sub_8A75D0
0x94BCB1: pop     esi
0x94BCB2: pop     ebp
0x94BCB3: xor     eax, eax
0x94BCB5: pop     ebx
0x94BCB6: add     esp, 24h
0x94BCB9: retn
0x94BCBA: cmp     eax, ebp
0x94BCBC: push    edi
0x94BCBD: mov     [esp+34h+var_24], ebp
0x94BCC1: mov     [esp+34h+var_20], ebp
0x94BCC5: mov     [esp+34h+var_1C], esi
0x94BCC9: mov     edi, eax
0x94BCCB: jle     short loc_94BCE7
0x94BCCD: xor     ecx, ecx
0x94BCCF: cmp     eax, ebp
0x94BCD1: setl    cl
0x94BCD4: push    10h
0x94BCD6: lea     edx, [esp+38h+var_24]
0x94BCDA: dec     ecx
0x94BCDB: and     eax, ecx
0x94BCDD: push    eax
0x94BCDE: push    edx
0x94BCDF: call    sub_8A6E40
0x94BCE4: add     esp, 0Ch
0x94BCE7: cmp     edi, ebp
0x94BCE9: mov     [esp+34h+var_20], edi
0x94BCED: jle     short loc_94BD11
0x94BCEF: xor     esi, esi
0x94BCF1: mov     eax, [esp+34h+var_18]
0x94BCF5: mov     edx, [esp+34h+var_24]
0x94BCF9: lea     ecx, [esi+eax]
0x94BCFC: push    ecx
0x94BCFD: push    ebx
0x94BCFE: lea     ecx, [esi+edx]
0x94BD01: call    sub_88FCC0
0x94BD06: add     esi, 10h
0x94BD09: dec     edi
0x94BD0A: jnz     short loc_94BCF1
0x94BD0C: mov     esi, 80000000h
0x94BD11: mov     ecx, ds:0BA7D98h
0x94BD17: mov     eax, [ecx]
0x94BD19: push    24h ; '$'
0x94BD1B: push    18h
0x94BD1D: call    dword ptr [eax+10h]
0x94BD20: cmp     eax, ebp
0x94BD22: jz      short loc_94BD39
0x94BD24: mov     [eax+8], esi
0x94BD27: mov     [eax], ebp
0x94BD29: mov     [eax+4], ebp
0x94BD2C: mov     [eax+14h], esi
0x94BD2F: mov     [eax+0Ch], ebp
0x94BD32: mov     [eax+10h], ebp
0x94BD35: mov     esi, eax
0x94BD37: jmp     short loc_94BD3B
0x94BD39: xor     esi, esi
0x94BD3B: mov     ecx, [esp+30h+var_1C]
0x94BD3F: mov     edx, [esp+30h+var_20]
0x94BD43: push    1
0x94BD45: lea     eax, [esp+34h+var_8]
0x94BD49: push    esi
0x94BD4A: push    eax
0x94BD4B: mov     [esp+3Ch+var_4], ecx
0x94BD4F: mov     dword ptr [esp+3Ch], 10h
0x94BD57: mov     [esp+3Ch+var_8], edx
0x94BD5B: call    sub_8F21E0
0x94BD60: mov     ecx, ds:0BA7D98h
0x94BD66: mov     edx, [ecx]
0x94BD68: add     esp, 0Ch
0x94BD6B: push    8
0x94BD6D: push    60h ; '`'
0x94BD6F: call    dword ptr [edx+10h]
0x94BD72: push    esi
0x94BD73: mov     ecx, eax
0x94BD75: mov     word ptr [eax+4], 60h ; '`'
0x94BD7B: call    sub_94CCB0
0x94BD80: mov     esi, ds:0BA9DE4h
0x94BD86: mov     edi, large fs:2Ch
0x94BD8D: mov     ebx, eax
0x94BD8F: mov     eax, [esp+34h+var_1C]
0x94BD93: test    eax, eax
0x94BD95: js      short loc_94BDBF
0x94BD97: mov     ecx, [edi+esi*4]
0x94BD9A: mov     ecx, [ecx+19Ch]
0x94BDA0: cmp     ecx, ebp
0x94BDA2: jnz     short loc_94BDAA
0x94BDA4: mov     ecx, ds:0BA7D9Ch
0x94BDAA: mov     edx, [esp+34h+var_24]
0x94BDAE: and     eax, 3FFFFFFFh
0x94BDB3: push    14h
0x94BDB5: shl     eax, 4
0x94BDB8: push    eax
0x94BDB9: push    edx
0x94BDBA: call    sub_8A75D0
0x94BDBF: mov     eax, [esp+34h+var_10]
0x94BDC3: test    eax, eax
0x94BDC5: js      short loc_94BDEF
0x94BDC7: mov     ecx, [edi+esi*4]
0x94BDCA: mov     ecx, [ecx+19Ch]
0x94BDD0: cmp     ecx, ebp
0x94BDD2: jnz     short loc_94BDDA
0x94BDD4: mov     ecx, ds:0BA7D9Ch
0x94BDDA: mov     edx, [esp+34h+var_18]
0x94BDDE: and     eax, 3FFFFFFFh
0x94BDE3: push    14h
0x94BDE5: shl     eax, 4
0x94BDE8: push    eax
0x94BDE9: push    edx
0x94BDEA: call    sub_8A75D0
0x94BDEF: pop     edi
0x94BDF0: pop     esi
0x94BDF1: pop     ebp
0x94BDF2: mov     eax, ebx
0x94BDF4: pop     ebx
0x94BDF5: add     esp, 24h
0x94BDF8: retn
