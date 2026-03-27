0x85DC50: push    0FFFFFFFFh
0x85DC52: push    offset SEH_85E160
0x85DC57: mov     eax, large fs:0
0x85DC5D: push    eax
0x85DC5E: push    ebx
0x85DC5F: push    ebp
0x85DC60: push    esi
0x85DC61: push    edi
0x85DC62: mov     eax, ds:0B30AACh
0x85DC67: xor     eax, esp
0x85DC69: push    eax
0x85DC6A: lea     eax, [esp+20h+var_C]
0x85DC6E: mov     large fs:0, eax
0x85DC74: mov     esi, ecx
0x85DC76: mov     ebx, [esp+20h+arg_8]
0x85DC7A: mov     eax, [ebx+10h]
0x85DC7D: mov     edi, ds:0B477E4h
0x85DC83: push    eax
0x85DC84: call    sub_848C40
0x85DC89: mov     ebp, [ebx+0Ch]
0x85DC8C: push    ebp
0x85DC8D: mov     ecx, esi
0x85DC8F: call    sub_848E50
0x85DC94: mov     ebx, [ebx+10h]
0x85DC97: mov     ecx, [esp+20h+arg_0]
0x85DC9B: mov     eax, [esi]
0x85DC9D: mov     edx, [eax+0BCh]
0x85DCA3: push    ebx
0x85DCA4: push    ebp
0x85DCA5: push    ecx
0x85DCA6: mov     ecx, esi
0x85DCA8: call    edx
0x85DCAA: mov     eax, [edi+24h]
0x85DCAD: mov     ebx, [esp+20h+arg_C]
0x85DCB1: mov     ebp, [eax]
0x85DCB3: mov     edx, [ebx]
0x85DCB5: mov     eax, [edx+88h]
0x85DCBB: push    0
0x85DCBD: mov     ecx, ebx
0x85DCBF: mov     [esp+24h+arg_8], ebp
0x85DCC3: call    eax
0x85DCC5: mov     ebp, [ebp+4]
0x85DCC8: cmp     ebp, eax
0x85DCCA: mov     [esp+20h+arg_0], eax
0x85DCCE: jz      short loc_85DD0A
0x85DCD0: test    ebp, ebp
0x85DCD2: jz      short loc_85DCF5
0x85DCD4: lea     ecx, [ebp+4]
0x85DCD7: push    ecx; lpAddend
0x85DCD8: call    dword ptr ds:0A2807Ch
0x85DCDE: test    eax, eax
0x85DCE0: jnz     short loc_85DCF1
0x85DCE2: test    ebp, ebp
0x85DCE4: jz      short loc_85DCF1
0x85DCE6: mov     edx, [ebp+0]
0x85DCE9: mov     eax, [edx]
0x85DCEB: push    1
0x85DCED: mov     ecx, ebp
0x85DCEF: call    eax
0x85DCF1: mov     eax, [esp+20h+arg_0]
0x85DCF5: test    eax, eax
0x85DCF7: mov     ecx, [esp+20h+arg_8]
0x85DCFB: mov     [ecx+4], eax
0x85DCFE: jz      short loc_85DD0A
0x85DD00: add     eax, 4
0x85DD03: push    eax; lpAddend
0x85DD04: call    dword ptr ds:0A28078h
0x85DD0A: mov     edx, [esp+20h+arg_8]
0x85DD0E: push    ebx
0x85DD0F: push    edx
0x85DD10: mov     ecx, esi
0x85DD12: call    sub_848FA0
0x85DD17: mov     eax, [edi+24h]
0x85DD1A: mov     ebp, [eax+4]
0x85DD1D: push    0
0x85DD1F: push    ebx
0x85DD20: mov     ecx, esi
0x85DD22: mov     [esp+28h+arg_8], ebp
0x85DD26: call    sub_848FD0
0x85DD2B: mov     ebp, [ebp+4]
0x85DD2E: cmp     ebp, eax
0x85DD30: mov     [esp+20h+arg_0], eax
0x85DD34: jz      short loc_85DD70
0x85DD36: test    ebp, ebp
0x85DD38: jz      short loc_85DD5B
0x85DD3A: lea     ecx, [ebp+4]
0x85DD3D: push    ecx; lpAddend
0x85DD3E: call    dword ptr ds:0A2807Ch
0x85DD44: test    eax, eax
0x85DD46: jnz     short loc_85DD57
0x85DD48: test    ebp, ebp
0x85DD4A: jz      short loc_85DD57
0x85DD4C: mov     edx, [ebp+0]
0x85DD4F: mov     eax, [edx]
0x85DD51: push    1
0x85DD53: mov     ecx, ebp
0x85DD55: call    eax
0x85DD57: mov     eax, [esp+20h+arg_0]
0x85DD5B: test    eax, eax
0x85DD5D: mov     ecx, [esp+20h+arg_8]
0x85DD61: mov     [ecx+4], eax
0x85DD64: jz      short loc_85DD70
0x85DD66: add     eax, 4
0x85DD69: push    eax; lpAddend
0x85DD6A: call    dword ptr ds:0A28078h
0x85DD70: mov     edx, [esp+20h+arg_8]
0x85DD74: push    ebx
0x85DD75: push    edx
0x85DD76: mov     ecx, esi
0x85DD78: call    sub_848FA0
0x85DD7D: mov     ecx, [edi+24h]
0x85DD80: mov     ebx, [ecx+18h]
0x85DD83: mov     eax, ds:0B43108h
0x85DD88: mov     ebp, [ebx+4]
0x85DD8B: add     ebx, 4
0x85DD8E: cmp     ebp, eax
0x85DD90: mov     [esp+20h+arg_8], eax
0x85DD94: jz      short loc_85DDCB
0x85DD96: test    ebp, ebp
0x85DD98: jz      short loc_85DDBB
0x85DD9A: lea     edx, [ebp+4]
0x85DD9D: push    edx; lpAddend
0x85DD9E: call    dword ptr ds:0A2807Ch
0x85DDA4: test    eax, eax
0x85DDA6: jnz     short loc_85DDB7
0x85DDA8: test    ebp, ebp
0x85DDAA: jz      short loc_85DDB7
0x85DDAC: mov     eax, [ebp+0]
0x85DDAF: mov     edx, [eax]
0x85DDB1: push    1
0x85DDB3: mov     ecx, ebp
0x85DDB5: call    edx
0x85DDB7: mov     eax, [esp+20h+arg_8]
0x85DDBB: test    eax, eax
0x85DDBD: mov     [ebx], eax
0x85DDBF: jz      short loc_85DDCB
0x85DDC1: add     eax, 4
0x85DDC4: push    eax; lpAddend
0x85DDC5: call    dword ptr ds:0A28078h
0x85DDCB: mov     eax, [edi+24h]
0x85DDCE: mov     ebp, [eax+1Ch]
0x85DDD1: mov     eax, ds:0B4310Ch
0x85DDD6: mov     ebx, [ebp+4]
0x85DDD9: cmp     ebx, eax
0x85DDDB: mov     ecx, eax
0x85DDDD: mov     [esp+20h+arg_8], ecx
0x85DDE1: jz      short loc_85DE18
0x85DDE3: test    ebx, ebx
0x85DDE5: jz      short loc_85DE07
0x85DDE7: lea     ecx, [ebx+4]
0x85DDEA: push    ecx; lpAddend
0x85DDEB: call    dword ptr ds:0A2807Ch
0x85DDF1: test    eax, eax
0x85DDF3: jnz     short loc_85DE03
0x85DDF5: test    ebx, ebx
0x85DDF7: jz      short loc_85DE03
0x85DDF9: mov     edx, [ebx]
0x85DDFB: mov     eax, [edx]
0x85DDFD: push    1
0x85DDFF: mov     ecx, ebx
0x85DE01: call    eax
0x85DE03: mov     ecx, [esp+20h+arg_8]
0x85DE07: test    ecx, ecx
0x85DE09: mov     [ebp+4], ecx
0x85DE0C: jz      short loc_85DE18
0x85DE0E: add     ecx, 4
0x85DE11: push    ecx; lpAddend
0x85DE12: call    dword ptr ds:0A28078h
0x85DE18: cmp     byte ptr [esp+20h+arg_10], 0
0x85DE1D: jnz     short loc_85DE5A
0x85DE1F: mov     ebx, 1
0x85DE24: add     [edi+60h], ebx
0x85DE27: mov     [esp+20h+arg_10], edi
0x85DE2B: mov     edx, [esi+38h]
0x85DE2E: lea     ecx, [esp+20h+arg_10]
0x85DE32: push    ecx
0x85DE33: push    edx
0x85DE34: lea     ecx, [esi+40h]
0x85DE37: mov     [esp+28h+var_4], 0
0x85DE3F: call    sub_76CE40
0x85DE44: or      eax, 0FFFFFFFFh
0x85DE47: add     [edi+60h], eax
0x85DE4A: mov     [esp+20h+var_4], eax
0x85DE4E: jnz     short loc_85DE57
0x85DE50: mov     ecx, edi
0x85DE52: call    sub_7604D0
0x85DE57: add     [esi+38h], ebx
0x85DE5A: mov     ecx, [esp+20h+var_C]
0x85DE5E: mov     large fs:0, ecx
0x85DE65: pop     ecx
0x85DE66: pop     edi
0x85DE67: pop     esi
0x85DE68: pop     ebp
0x85DE69: pop     ebx
0x85DE6A: add     esp, 0Ch
0x85DE6D: retn    14h
