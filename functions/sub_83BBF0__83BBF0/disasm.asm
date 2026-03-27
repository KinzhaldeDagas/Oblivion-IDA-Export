0x83BBF0: push    0FFFFFFFFh
0x83BBF2: push    offset SEH_882120
0x83BBF7: mov     eax, large fs:0
0x83BBFD: push    eax
0x83BBFE: push    ebx
0x83BBFF: push    ebp
0x83BC00: push    esi
0x83BC01: push    edi
0x83BC02: mov     eax, ds:0B30AACh
0x83BC07: xor     eax, esp
0x83BC09: push    eax
0x83BC0A: lea     eax, [esp+20h+var_C]
0x83BC0E: mov     large fs:0, eax
0x83BC14: mov     esi, ecx
0x83BC16: mov     ebx, [esp+20h+arg_8]
0x83BC1A: mov     eax, [ebx+10h]
0x83BC1D: mov     edi, ds:0B457B0h
0x83BC23: push    eax
0x83BC24: call    sub_848C40
0x83BC29: mov     ebx, [ebx+0Ch]
0x83BC2C: push    ebx
0x83BC2D: mov     ecx, esi
0x83BC2F: call    sub_848E50
0x83BC34: mov     ecx, [esp+20h+arg_0]
0x83BC38: mov     eax, [esi]
0x83BC3A: mov     edx, [eax+0BCh]
0x83BC40: push    0
0x83BC42: push    ebx
0x83BC43: push    ecx
0x83BC44: mov     ecx, esi
0x83BC46: call    edx
0x83BC48: mov     eax, [edi+24h]
0x83BC4B: mov     ebx, [esp+20h+arg_C]
0x83BC4F: mov     ebp, [eax]
0x83BC51: mov     edx, [ebx]
0x83BC53: mov     eax, [edx+88h]
0x83BC59: push    0
0x83BC5B: mov     ecx, ebx
0x83BC5D: mov     [esp+24h+arg_8], ebp
0x83BC61: call    eax
0x83BC63: mov     ebp, [ebp+4]
0x83BC66: cmp     ebp, eax
0x83BC68: mov     [esp+20h+arg_0], eax
0x83BC6C: jz      short loc_83BCA8
0x83BC6E: test    ebp, ebp
0x83BC70: jz      short loc_83BC93
0x83BC72: lea     ecx, [ebp+4]
0x83BC75: push    ecx; lpAddend
0x83BC76: call    dword ptr ds:0A2807Ch
0x83BC7C: test    eax, eax
0x83BC7E: jnz     short loc_83BC8F
0x83BC80: test    ebp, ebp
0x83BC82: jz      short loc_83BC8F
0x83BC84: mov     edx, [ebp+0]
0x83BC87: mov     eax, [edx]
0x83BC89: push    1
0x83BC8B: mov     ecx, ebp
0x83BC8D: call    eax
0x83BC8F: mov     eax, [esp+20h+arg_0]
0x83BC93: test    eax, eax
0x83BC95: mov     ecx, [esp+20h+arg_8]
0x83BC99: mov     [ecx+4], eax
0x83BC9C: jz      short loc_83BCA8
0x83BC9E: add     eax, 4
0x83BCA1: push    eax; lpAddend
0x83BCA2: call    dword ptr ds:0A28078h
0x83BCA8: mov     edx, [esp+20h+arg_8]
0x83BCAC: push    ebx
0x83BCAD: push    edx
0x83BCAE: mov     ecx, esi
0x83BCB0: call    sub_848FA0
0x83BCB5: mov     eax, [edi+24h]
0x83BCB8: mov     ebp, [eax+4]
0x83BCBB: push    0
0x83BCBD: push    ebx
0x83BCBE: mov     ecx, esi
0x83BCC0: mov     [esp+28h+arg_8], ebp
0x83BCC4: call    sub_848FD0
0x83BCC9: mov     ebp, [ebp+4]
0x83BCCC: cmp     ebp, eax
0x83BCCE: mov     [esp+20h+arg_0], eax
0x83BCD2: jz      short loc_83BD0E
0x83BCD4: test    ebp, ebp
0x83BCD6: jz      short loc_83BCF9
0x83BCD8: lea     ecx, [ebp+4]
0x83BCDB: push    ecx; lpAddend
0x83BCDC: call    dword ptr ds:0A2807Ch
0x83BCE2: test    eax, eax
0x83BCE4: jnz     short loc_83BCF5
0x83BCE6: test    ebp, ebp
0x83BCE8: jz      short loc_83BCF5
0x83BCEA: mov     edx, [ebp+0]
0x83BCED: mov     eax, [edx]
0x83BCEF: push    1
0x83BCF1: mov     ecx, ebp
0x83BCF3: call    eax
0x83BCF5: mov     eax, [esp+20h+arg_0]
0x83BCF9: test    eax, eax
0x83BCFB: mov     ecx, [esp+20h+arg_8]
0x83BCFF: mov     [ecx+4], eax
0x83BD02: jz      short loc_83BD0E
0x83BD04: add     eax, 4
0x83BD07: push    eax; lpAddend
0x83BD08: call    dword ptr ds:0A28078h
0x83BD0E: mov     edx, [esp+20h+arg_8]
0x83BD12: push    ebx
0x83BD13: push    edx
0x83BD14: mov     ecx, esi
0x83BD16: call    sub_848FA0
0x83BD1B: mov     ecx, [edi+24h]
0x83BD1E: mov     ebx, [ecx+18h]
0x83BD21: mov     eax, ds:0B43108h
0x83BD26: mov     ebp, [ebx+4]
0x83BD29: add     ebx, 4
0x83BD2C: cmp     ebp, eax
0x83BD2E: mov     [esp+20h+arg_8], eax
0x83BD32: jz      short loc_83BD69
0x83BD34: test    ebp, ebp
0x83BD36: jz      short loc_83BD59
0x83BD38: lea     edx, [ebp+4]
0x83BD3B: push    edx; lpAddend
0x83BD3C: call    dword ptr ds:0A2807Ch
0x83BD42: test    eax, eax
0x83BD44: jnz     short loc_83BD55
0x83BD46: test    ebp, ebp
0x83BD48: jz      short loc_83BD55
0x83BD4A: mov     eax, [ebp+0]
0x83BD4D: mov     edx, [eax]
0x83BD4F: push    1
0x83BD51: mov     ecx, ebp
0x83BD53: call    edx
0x83BD55: mov     eax, [esp+20h+arg_8]
0x83BD59: test    eax, eax
0x83BD5B: mov     [ebx], eax
0x83BD5D: jz      short loc_83BD69
0x83BD5F: add     eax, 4
0x83BD62: push    eax; lpAddend
0x83BD63: call    dword ptr ds:0A28078h
0x83BD69: mov     eax, [edi+24h]
0x83BD6C: mov     ebp, [eax+1Ch]
0x83BD6F: mov     eax, ds:0B4310Ch
0x83BD74: mov     ebx, [ebp+4]
0x83BD77: cmp     ebx, eax
0x83BD79: mov     ecx, eax
0x83BD7B: mov     [esp+20h+arg_8], ecx
0x83BD7F: jz      short loc_83BDB6
0x83BD81: test    ebx, ebx
0x83BD83: jz      short loc_83BDA5
0x83BD85: lea     ecx, [ebx+4]
0x83BD88: push    ecx; lpAddend
0x83BD89: call    dword ptr ds:0A2807Ch
0x83BD8F: test    eax, eax
0x83BD91: jnz     short loc_83BDA1
0x83BD93: test    ebx, ebx
0x83BD95: jz      short loc_83BDA1
0x83BD97: mov     edx, [ebx]
0x83BD99: mov     eax, [edx]
0x83BD9B: push    1
0x83BD9D: mov     ecx, ebx
0x83BD9F: call    eax
0x83BDA1: mov     ecx, [esp+20h+arg_8]
0x83BDA5: test    ecx, ecx
0x83BDA7: mov     [ebp+4], ecx
0x83BDAA: jz      short loc_83BDB6
0x83BDAC: add     ecx, 4
0x83BDAF: push    ecx; lpAddend
0x83BDB0: call    dword ptr ds:0A28078h
0x83BDB6: mov     ebx, 1
0x83BDBB: add     [edi+60h], ebx
0x83BDBE: mov     [esp+20h+arg_8], edi
0x83BDC2: mov     edx, [esi+38h]
0x83BDC5: lea     ecx, [esp+20h+arg_8]
0x83BDC9: push    ecx
0x83BDCA: push    edx
0x83BDCB: lea     ecx, [esi+40h]
0x83BDCE: mov     [esp+28h+var_4], 0
0x83BDD6: call    sub_76CE40
0x83BDDB: or      eax, 0FFFFFFFFh
0x83BDDE: add     [edi+60h], eax
0x83BDE1: mov     [esp+20h+var_4], eax
0x83BDE5: jnz     short loc_83BDEE
0x83BDE7: mov     ecx, edi
0x83BDE9: call    sub_7604D0
0x83BDEE: add     [esi+38h], ebx
0x83BDF1: mov     ecx, [esp+20h+var_C]
0x83BDF5: mov     large fs:0, ecx
0x83BDFC: pop     ecx
0x83BDFD: pop     edi
0x83BDFE: pop     esi
0x83BDFF: pop     ebp
0x83BE00: pop     ebx
0x83BE01: add     esp, 0Ch
0x83BE04: retn    10h
