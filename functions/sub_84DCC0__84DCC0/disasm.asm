0x84DCC0: push    0FFFFFFFFh
0x84DCC2: push    offset SEH_879360
0x84DCC7: mov     eax, large fs:0
0x84DCCD: push    eax
0x84DCCE: push    ecx
0x84DCCF: push    ebx
0x84DCD0: push    ebp
0x84DCD1: push    esi
0x84DCD2: push    edi
0x84DCD3: mov     eax, ds:0B30AACh
0x84DCD8: xor     eax, esp
0x84DCDA: push    eax
0x84DCDB: lea     eax, [esp+24h+var_C]
0x84DCDF: mov     large fs:0, eax
0x84DCE5: mov     [esp+24h+var_10], ecx
0x84DCE9: mov     eax, [esp+24h+arg_8]
0x84DCED: mov     eax, [eax+10h]
0x84DCF0: mov     ebx, ds:0B4564Ch
0x84DCF6: push    eax
0x84DCF7: call    sub_848DA0
0x84DCFC: mov     ecx, [ebx+24h]
0x84DCFF: mov     esi, [esp+24h+arg_C]
0x84DD03: mov     edi, [ecx]
0x84DD05: mov     edx, [esi]
0x84DD07: mov     eax, [edx+88h]
0x84DD0D: push    0
0x84DD0F: mov     ecx, esi
0x84DD11: mov     [esp+28h+arg_8], edi
0x84DD15: call    eax
0x84DD17: mov     edi, [edi+4]
0x84DD1A: mov     ebp, eax
0x84DD1C: cmp     edi, ebp
0x84DD1E: jz      short loc_84DD57
0x84DD20: test    edi, edi
0x84DD22: jz      short loc_84DD40
0x84DD24: lea     ecx, [edi+4]
0x84DD27: push    ecx; lpAddend
0x84DD28: call    dword ptr ds:0A2807Ch
0x84DD2E: test    eax, eax
0x84DD30: jnz     short loc_84DD40
0x84DD32: test    edi, edi
0x84DD34: jz      short loc_84DD40
0x84DD36: mov     edx, [edi]
0x84DD38: mov     eax, [edx]
0x84DD3A: push    1
0x84DD3C: mov     ecx, edi
0x84DD3E: call    eax
0x84DD40: test    ebp, ebp
0x84DD42: mov     edi, [esp+24h+arg_8]
0x84DD46: mov     [edi+4], ebp
0x84DD49: jz      short loc_84DD5B
0x84DD4B: add     ebp, 4
0x84DD4E: push    ebp; lpAddend
0x84DD4F: call    dword ptr ds:0A28078h
0x84DD55: jmp     short loc_84DD5B
0x84DD57: mov     edi, [esp+24h+arg_8]
0x84DD5B: test    edi, edi
0x84DD5D: jz      short loc_84DD79
0x84DD5F: cmp     byte ptr ds:0B42CDDh, 0
0x84DD66: jz      short loc_84DD79
0x84DD68: mov     edx, [esi]
0x84DD6A: mov     eax, [edx+78h]
0x84DD6D: mov     ecx, esi
0x84DD6F: call    eax
0x84DD71: push    eax
0x84DD72: mov     ecx, edi
0x84DD74: call    sub_7715E0
0x84DD79: mov     ecx, [ebx+24h]
0x84DD7C: mov     edi, [ecx+4]
0x84DD7F: mov     edx, [esi]
0x84DD81: mov     eax, [edx+8Ch]
0x84DD87: push    0
0x84DD89: mov     ecx, esi
0x84DD8B: mov     [esp+28h+arg_8], edi
0x84DD8F: call    eax
0x84DD91: test    eax, eax
0x84DD93: jz      short loc_84DDA7
0x84DD95: mov     edx, [esi]
0x84DD97: mov     eax, [edx+8Ch]
0x84DD9D: push    0
0x84DD9F: mov     ecx, esi
0x84DDA1: call    eax
0x84DDA3: mov     ebp, eax
0x84DDA5: jmp     short loc_84DDBC
0x84DDA7: test    dword ptr [esi+1Ch], 80h
0x84DDAE: mov     ebp, ds:0B430F0h
0x84DDB4: ja      short loc_84DDBC
0x84DDB6: mov     ebp, ds:0B430DCh
0x84DDBC: mov     edi, [edi+4]
0x84DDBF: cmp     edi, ebp
0x84DDC1: jz      short loc_84DDFA
0x84DDC3: test    edi, edi
0x84DDC5: jz      short loc_84DDE3
0x84DDC7: lea     ecx, [edi+4]
0x84DDCA: push    ecx; lpAddend
0x84DDCB: call    dword ptr ds:0A2807Ch
0x84DDD1: test    eax, eax
0x84DDD3: jnz     short loc_84DDE3
0x84DDD5: test    edi, edi
0x84DDD7: jz      short loc_84DDE3
0x84DDD9: mov     edx, [edi]
0x84DDDB: mov     eax, [edx]
0x84DDDD: push    1
0x84DDDF: mov     ecx, edi
0x84DDE1: call    eax
0x84DDE3: test    ebp, ebp
0x84DDE5: mov     edi, [esp+24h+arg_8]
0x84DDE9: mov     [edi+4], ebp
0x84DDEC: jz      short loc_84DDFE
0x84DDEE: add     ebp, 4
0x84DDF1: push    ebp; lpAddend
0x84DDF2: call    dword ptr ds:0A28078h
0x84DDF8: jmp     short loc_84DDFE
0x84DDFA: mov     edi, [esp+24h+arg_8]
0x84DDFE: test    edi, edi
0x84DE00: jz      short loc_84DE1C
0x84DE02: cmp     byte ptr ds:0B42CDDh, 0
0x84DE09: jz      short loc_84DE1C
0x84DE0B: mov     edx, [esi]
0x84DE0D: mov     eax, [edx+78h]
0x84DE10: mov     ecx, esi
0x84DE12: call    eax
0x84DE14: push    eax
0x84DE15: mov     ecx, edi
0x84DE17: call    sub_7715E0
0x84DE1C: mov     ecx, [ebx+24h]
0x84DE1F: mov     edi, [ecx+8]
0x84DE22: mov     edx, [esi]
0x84DE24: mov     eax, [edx+90h]
0x84DE2A: push    0
0x84DE2C: mov     ecx, esi
0x84DE2E: mov     [esp+28h+arg_8], edi
0x84DE32: call    eax
0x84DE34: mov     edi, [edi+4]
0x84DE37: mov     ebp, eax
0x84DE39: cmp     edi, ebp
0x84DE3B: jz      short loc_84DE74
0x84DE3D: test    edi, edi
0x84DE3F: jz      short loc_84DE5D
0x84DE41: lea     ecx, [edi+4]
0x84DE44: push    ecx; lpAddend
0x84DE45: call    dword ptr ds:0A2807Ch
0x84DE4B: test    eax, eax
0x84DE4D: jnz     short loc_84DE5D
0x84DE4F: test    edi, edi
0x84DE51: jz      short loc_84DE5D
0x84DE53: mov     edx, [edi]
0x84DE55: mov     eax, [edx]
0x84DE57: push    1
0x84DE59: mov     ecx, edi
0x84DE5B: call    eax
0x84DE5D: test    ebp, ebp
0x84DE5F: mov     edi, [esp+24h+arg_8]
0x84DE63: mov     [edi+4], ebp
0x84DE66: jz      short loc_84DE78
0x84DE68: add     ebp, 4
0x84DE6B: push    ebp; lpAddend
0x84DE6C: call    dword ptr ds:0A28078h
0x84DE72: jmp     short loc_84DE78
0x84DE74: mov     edi, [esp+24h+arg_8]
0x84DE78: test    edi, edi
0x84DE7A: jz      short loc_84DE96
0x84DE7C: cmp     byte ptr ds:0B42CDDh, 0
0x84DE83: jz      short loc_84DE96
0x84DE85: mov     edx, [esi]
0x84DE87: mov     eax, [edx+78h]
0x84DE8A: mov     ecx, esi
0x84DE8C: call    eax
0x84DE8E: push    eax
0x84DE8F: mov     ecx, edi
0x84DE91: call    sub_7715E0
0x84DE96: mov     edi, 1
0x84DE9B: add     [ebx+60h], edi
0x84DE9E: mov     [esp+24h+arg_8], ebx
0x84DEA2: mov     esi, [esp+24h+var_10]
0x84DEA6: mov     edx, [esi+38h]
0x84DEA9: lea     ecx, [esp+24h+arg_8]
0x84DEAD: push    ecx
0x84DEAE: push    edx
0x84DEAF: lea     ecx, [esi+40h]
0x84DEB2: mov     [esp+2Ch+var_4], 0
0x84DEBA: call    sub_76CE40
0x84DEBF: or      eax, 0FFFFFFFFh
0x84DEC2: add     [ebx+60h], eax
0x84DEC5: mov     [esp+24h+var_4], eax
0x84DEC9: jnz     short loc_84DED2
0x84DECB: mov     ecx, ebx
0x84DECD: call    sub_7604D0
0x84DED2: add     [esi+38h], edi
0x84DED5: mov     ecx, dword ptr [esp+24h+var_C]
0x84DED9: mov     large fs:0, ecx
0x84DEE0: pop     ecx
0x84DEE1: pop     edi
0x84DEE2: pop     esi
0x84DEE3: pop     ebp
0x84DEE4: pop     ebx
0x84DEE5: add     esp, 10h
0x84DEE8: retn    10h
