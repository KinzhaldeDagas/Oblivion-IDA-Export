0x83DC30: push    0FFFFFFFFh
0x83DC32: push    offset SEH_882120
0x83DC37: mov     eax, large fs:0
0x83DC3D: push    eax
0x83DC3E: push    ebx
0x83DC3F: push    ebp
0x83DC40: push    esi
0x83DC41: push    edi
0x83DC42: mov     eax, ds:0B30AACh
0x83DC47: xor     eax, esp
0x83DC49: push    eax
0x83DC4A: lea     eax, [esp+20h+var_C]
0x83DC4E: mov     large fs:0, eax
0x83DC54: mov     edi, ecx
0x83DC56: mov     eax, [esp+20h+arg_8]
0x83DC5A: mov     esi, [eax+0Ch]
0x83DC5D: mov     ebx, ds:0B45830h
0x83DC63: push    esi
0x83DC64: call    sub_848E50
0x83DC69: mov     edx, [edi]
0x83DC6B: mov     eax, [esp+20h+arg_0]
0x83DC6F: mov     edx, [edx+0BCh]
0x83DC75: push    0
0x83DC77: push    esi
0x83DC78: push    eax
0x83DC79: mov     ecx, edi
0x83DC7B: call    edx
0x83DC7D: mov     esi, [esp+20h+arg_C]
0x83DC81: mov     eax, [esi+0A8h]
0x83DC87: mov     ds:0B46628h, eax
0x83DC8C: mov     ecx, [esi+0ACh]
0x83DC92: mov     ds:0B4662Ch, ecx
0x83DC98: mov     edx, [esi+0B0h]
0x83DC9E: mov     ds:0B46630h, edx
0x83DCA4: mov     eax, [esi+0B4h]
0x83DCAA: mov     ds:0B46634h, eax
0x83DCAF: mov     ecx, [ebx+24h]
0x83DCB2: mov     ebp, [ecx]
0x83DCB4: mov     edx, [esi]
0x83DCB6: mov     eax, [edx+88h]
0x83DCBC: push    0
0x83DCBE: mov     ecx, esi
0x83DCC0: mov     [esp+24h+arg_8], ebp
0x83DCC4: call    eax
0x83DCC6: mov     ebp, [ebp+4]
0x83DCC9: cmp     ebp, eax
0x83DCCB: mov     [esp+20h+arg_0], eax
0x83DCCF: jz      short loc_83DD0B
0x83DCD1: test    ebp, ebp
0x83DCD3: jz      short loc_83DCF6
0x83DCD5: lea     ecx, [ebp+4]
0x83DCD8: push    ecx; lpAddend
0x83DCD9: call    dword ptr ds:0A2807Ch
0x83DCDF: test    eax, eax
0x83DCE1: jnz     short loc_83DCF2
0x83DCE3: test    ebp, ebp
0x83DCE5: jz      short loc_83DCF2
0x83DCE7: mov     edx, [ebp+0]
0x83DCEA: mov     eax, [edx]
0x83DCEC: push    1
0x83DCEE: mov     ecx, ebp
0x83DCF0: call    eax
0x83DCF2: mov     eax, [esp+20h+arg_0]
0x83DCF6: test    eax, eax
0x83DCF8: mov     ecx, [esp+20h+arg_8]
0x83DCFC: mov     [ecx+4], eax
0x83DCFF: jz      short loc_83DD0B
0x83DD01: add     eax, 4
0x83DD04: push    eax; lpAddend
0x83DD05: call    dword ptr ds:0A28078h
0x83DD0B: mov     edx, [esp+20h+arg_8]
0x83DD0F: push    esi
0x83DD10: push    edx
0x83DD11: mov     ecx, edi
0x83DD13: call    sub_848FA0
0x83DD18: mov     eax, [ebx+24h]
0x83DD1B: mov     ebp, [eax+4]
0x83DD1E: push    0
0x83DD20: push    esi
0x83DD21: mov     ecx, edi
0x83DD23: mov     [esp+28h+arg_8], ebp
0x83DD27: call    sub_848FD0
0x83DD2C: mov     ebp, [ebp+4]
0x83DD2F: cmp     ebp, eax
0x83DD31: mov     [esp+20h+arg_0], eax
0x83DD35: jz      short loc_83DD71
0x83DD37: test    ebp, ebp
0x83DD39: jz      short loc_83DD5C
0x83DD3B: lea     ecx, [ebp+4]
0x83DD3E: push    ecx; lpAddend
0x83DD3F: call    dword ptr ds:0A2807Ch
0x83DD45: test    eax, eax
0x83DD47: jnz     short loc_83DD58
0x83DD49: test    ebp, ebp
0x83DD4B: jz      short loc_83DD58
0x83DD4D: mov     edx, [ebp+0]
0x83DD50: mov     eax, [edx]
0x83DD52: push    1
0x83DD54: mov     ecx, ebp
0x83DD56: call    eax
0x83DD58: mov     eax, [esp+20h+arg_0]
0x83DD5C: test    eax, eax
0x83DD5E: mov     ecx, [esp+20h+arg_8]
0x83DD62: mov     [ecx+4], eax
0x83DD65: jz      short loc_83DD71
0x83DD67: add     eax, 4
0x83DD6A: push    eax; lpAddend
0x83DD6B: call    dword ptr ds:0A28078h
0x83DD71: mov     edx, [esp+20h+arg_8]
0x83DD75: push    esi
0x83DD76: push    edx
0x83DD77: mov     ecx, edi
0x83DD79: call    sub_848FA0
0x83DD7E: mov     eax, [ebx+24h]
0x83DD81: mov     ebp, [eax+10h]
0x83DD84: mov     edx, [esi]
0x83DD86: mov     eax, [edx+88h]
0x83DD8C: push    1
0x83DD8E: mov     ecx, esi
0x83DD90: mov     [esp+24h+arg_8], ebp
0x83DD94: call    eax
0x83DD96: mov     ebp, [ebp+4]
0x83DD99: cmp     ebp, eax
0x83DD9B: mov     [esp+20h+arg_0], eax
0x83DD9F: jz      short loc_83DDDB
0x83DDA1: test    ebp, ebp
0x83DDA3: jz      short loc_83DDC6
0x83DDA5: lea     ecx, [ebp+4]
0x83DDA8: push    ecx; lpAddend
0x83DDA9: call    dword ptr ds:0A2807Ch
0x83DDAF: test    eax, eax
0x83DDB1: jnz     short loc_83DDC2
0x83DDB3: test    ebp, ebp
0x83DDB5: jz      short loc_83DDC2
0x83DDB7: mov     edx, [ebp+0]
0x83DDBA: mov     eax, [edx]
0x83DDBC: push    1
0x83DDBE: mov     ecx, ebp
0x83DDC0: call    eax
0x83DDC2: mov     eax, [esp+20h+arg_0]
0x83DDC6: test    eax, eax
0x83DDC8: mov     ecx, [esp+20h+arg_8]
0x83DDCC: mov     [ecx+4], eax
0x83DDCF: jz      short loc_83DDDB
0x83DDD1: add     eax, 4
0x83DDD4: push    eax; lpAddend
0x83DDD5: call    dword ptr ds:0A28078h
0x83DDDB: mov     edx, [esp+20h+arg_8]
0x83DDDF: push    esi
0x83DDE0: push    edx
0x83DDE1: mov     ecx, edi
0x83DDE3: call    sub_848FA0
0x83DDE8: mov     ecx, [ebx+24h]
0x83DDEB: mov     esi, [ecx+18h]
0x83DDEE: mov     eax, ds:0B43108h
0x83DDF3: mov     ebp, [esi+4]
0x83DDF6: add     esi, 4
0x83DDF9: cmp     ebp, eax
0x83DDFB: mov     [esp+20h+arg_8], eax
0x83DDFF: jz      short loc_83DE36
0x83DE01: test    ebp, ebp
0x83DE03: jz      short loc_83DE26
0x83DE05: lea     edx, [ebp+4]
0x83DE08: push    edx; lpAddend
0x83DE09: call    dword ptr ds:0A2807Ch
0x83DE0F: test    eax, eax
0x83DE11: jnz     short loc_83DE22
0x83DE13: test    ebp, ebp
0x83DE15: jz      short loc_83DE22
0x83DE17: mov     eax, [ebp+0]
0x83DE1A: mov     edx, [eax]
0x83DE1C: push    1
0x83DE1E: mov     ecx, ebp
0x83DE20: call    edx
0x83DE22: mov     eax, [esp+20h+arg_8]
0x83DE26: test    eax, eax
0x83DE28: mov     [esi], eax
0x83DE2A: jz      short loc_83DE36
0x83DE2C: add     eax, 4
0x83DE2F: push    eax; lpAddend
0x83DE30: call    dword ptr ds:0A28078h
0x83DE36: mov     eax, [ebx+24h]
0x83DE39: mov     ebp, [eax+1Ch]
0x83DE3C: mov     eax, ds:0B4310Ch
0x83DE41: mov     esi, [ebp+4]
0x83DE44: cmp     esi, eax
0x83DE46: mov     ecx, eax
0x83DE48: mov     [esp+20h+arg_8], ecx
0x83DE4C: jz      short loc_83DE83
0x83DE4E: test    esi, esi
0x83DE50: jz      short loc_83DE72
0x83DE52: lea     ecx, [esi+4]
0x83DE55: push    ecx; lpAddend
0x83DE56: call    dword ptr ds:0A2807Ch
0x83DE5C: test    eax, eax
0x83DE5E: jnz     short loc_83DE6E
0x83DE60: test    esi, esi
0x83DE62: jz      short loc_83DE6E
0x83DE64: mov     edx, [esi]
0x83DE66: mov     eax, [edx]
0x83DE68: push    1
0x83DE6A: mov     ecx, esi
0x83DE6C: call    eax
0x83DE6E: mov     ecx, [esp+20h+arg_8]
0x83DE72: test    ecx, ecx
0x83DE74: mov     [ebp+4], ecx
0x83DE77: jz      short loc_83DE83
0x83DE79: add     ecx, 4
0x83DE7C: push    ecx; lpAddend
0x83DE7D: call    dword ptr ds:0A28078h
0x83DE83: mov     esi, 1
0x83DE88: add     [ebx+60h], esi
0x83DE8B: mov     [esp+20h+arg_8], ebx
0x83DE8F: mov     edx, [edi+38h]
0x83DE92: lea     ecx, [esp+20h+arg_8]
0x83DE96: push    ecx
0x83DE97: push    edx
0x83DE98: lea     ecx, [edi+40h]
0x83DE9B: mov     [esp+28h+var_4], 0
0x83DEA3: call    sub_76CE40
0x83DEA8: or      eax, 0FFFFFFFFh
0x83DEAB: add     [ebx+60h], eax
0x83DEAE: mov     [esp+20h+var_4], eax
0x83DEB2: jnz     short loc_83DEBB
0x83DEB4: mov     ecx, ebx
0x83DEB6: call    sub_7604D0
0x83DEBB: add     [edi+38h], esi
0x83DEBE: mov     ecx, [esp+20h+var_C]
0x83DEC2: mov     large fs:0, ecx
0x83DEC9: pop     ecx
0x83DECA: pop     edi
0x83DECB: pop     esi
0x83DECC: pop     ebp
0x83DECD: pop     ebx
0x83DECE: add     esp, 0Ch
0x83DED1: retn    10h
