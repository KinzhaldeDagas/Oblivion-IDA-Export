0x85DE70: push    0FFFFFFFFh
0x85DE72: push    offset SEH_85DE70
0x85DE77: mov     eax, large fs:0
0x85DE7D: push    eax
0x85DE7E: push    ecx
0x85DE7F: push    ebx
0x85DE80: push    ebp
0x85DE81: push    esi
0x85DE82: push    edi
0x85DE83: mov     eax, ds:0B30AACh
0x85DE88: xor     eax, esp
0x85DE8A: push    eax
0x85DE8B: lea     eax, [esp+24h+var_C]
0x85DE8F: mov     large fs:0, eax
0x85DE95: mov     edi, ecx
0x85DE97: mov     esi, ds:0B477E8h
0x85DE9D: mov     eax, [esi+24h]
0x85DEA0: mov     ecx, [esp+24h+arg_C]
0x85DEA4: mov     ebx, [eax]
0x85DEA6: push    0
0x85DEA8: push    ecx
0x85DEA9: mov     ecx, edi
0x85DEAB: mov     [esp+2Ch+var_10], ebx
0x85DEAF: call    sub_848FD0
0x85DEB4: mov     ebx, [ebx+4]
0x85DEB7: mov     ebp, eax
0x85DEB9: cmp     ebx, ebp
0x85DEBB: jz      short loc_85DEF2
0x85DEBD: test    ebx, ebx
0x85DEBF: jz      short loc_85DEDD
0x85DEC1: lea     edx, [ebx+4]
0x85DEC4: push    edx; lpAddend
0x85DEC5: call    dword ptr ds:0A2807Ch
0x85DECB: test    eax, eax
0x85DECD: jnz     short loc_85DEDD
0x85DECF: test    ebx, ebx
0x85DED1: jz      short loc_85DEDD
0x85DED3: mov     eax, [ebx]
0x85DED5: mov     edx, [eax]
0x85DED7: push    1
0x85DED9: mov     ecx, ebx
0x85DEDB: call    edx
0x85DEDD: test    ebp, ebp
0x85DEDF: mov     eax, [esp+24h+var_10]
0x85DEE3: mov     [eax+4], ebp
0x85DEE6: jz      short loc_85DEF2
0x85DEE8: add     ebp, 4
0x85DEEB: push    ebp; lpAddend
0x85DEEC: call    dword ptr ds:0A28078h
0x85DEF2: mov     ecx, [esp+24h+arg_C]
0x85DEF6: mov     edx, [esp+24h+var_10]
0x85DEFA: push    ecx
0x85DEFB: push    edx
0x85DEFC: mov     ecx, edi
0x85DEFE: call    sub_848FA0
0x85DF03: cmp     byte ptr [esp+24h+arg_10], 0
0x85DF08: jnz     short loc_85DF45
0x85DF0A: mov     ebx, 1
0x85DF0F: add     [esi+60h], ebx
0x85DF12: mov     [esp+24h+arg_10], esi
0x85DF16: mov     ecx, [edi+38h]
0x85DF19: lea     eax, [esp+24h+arg_10]
0x85DF1D: push    eax
0x85DF1E: push    ecx
0x85DF1F: lea     ecx, [edi+40h]
0x85DF22: mov     [esp+2Ch+var_4], 0
0x85DF2A: call    sub_76CE40
0x85DF2F: or      eax, 0FFFFFFFFh
0x85DF32: add     [esi+60h], eax
0x85DF35: mov     [esp+24h+var_4], eax
0x85DF39: jnz     short loc_85DF42
0x85DF3B: mov     ecx, esi
0x85DF3D: call    sub_7604D0
0x85DF42: add     [edi+38h], ebx
0x85DF45: mov     ecx, dword ptr [esp+24h+var_C]
0x85DF49: mov     large fs:0, ecx
0x85DF50: pop     ecx
0x85DF51: pop     edi
0x85DF52: pop     esi
0x85DF53: pop     ebp
0x85DF54: pop     ebx
0x85DF55: add     esp, 10h
0x85DF58: retn    14h
