0x8419C0: push    0FFFFFFFFh
0x8419C2: push    offset SEH_882120
0x8419C7: mov     eax, large fs:0
0x8419CD: push    eax
0x8419CE: push    ebx
0x8419CF: push    ebp
0x8419D0: push    esi
0x8419D1: push    edi
0x8419D2: mov     eax, ds:0B30AACh
0x8419D7: xor     eax, esp
0x8419D9: push    eax
0x8419DA: lea     eax, [esp+20h+var_C]
0x8419DE: mov     large fs:0, eax
0x8419E4: mov     esi, ecx
0x8419E6: mov     ebx, [esp+20h+arg_8]
0x8419EA: mov     eax, [ebx+10h]
0x8419ED: mov     edi, ds:0B456C8h
0x8419F3: push    eax
0x8419F4: call    sub_848C40
0x8419F9: mov     ebx, [ebx+0Ch]
0x8419FC: push    ebx
0x8419FD: mov     ecx, esi
0x8419FF: call    sub_848E50
0x841A04: mov     ecx, [esp+20h+arg_0]
0x841A08: mov     eax, [esi]
0x841A0A: mov     edx, [eax+0BCh]
0x841A10: push    0
0x841A12: push    ebx
0x841A13: push    ecx
0x841A14: mov     ecx, esi
0x841A16: call    edx
0x841A18: mov     eax, [edi+24h]
0x841A1B: mov     ebx, [esp+20h+arg_C]
0x841A1F: mov     ebp, [eax]
0x841A21: mov     edx, [ebx]
0x841A23: mov     eax, [edx+88h]
0x841A29: push    0
0x841A2B: mov     ecx, ebx
0x841A2D: mov     [esp+24h+arg_8], ebp
0x841A31: call    eax
0x841A33: mov     ebp, [ebp+4]
0x841A36: cmp     ebp, eax
0x841A38: mov     [esp+20h+arg_0], eax
0x841A3C: jz      short loc_841A78
0x841A3E: test    ebp, ebp
0x841A40: jz      short loc_841A63
0x841A42: lea     ecx, [ebp+4]
0x841A45: push    ecx; lpAddend
0x841A46: call    dword ptr ds:0A2807Ch
0x841A4C: test    eax, eax
0x841A4E: jnz     short loc_841A5F
0x841A50: test    ebp, ebp
0x841A52: jz      short loc_841A5F
0x841A54: mov     edx, [ebp+0]
0x841A57: mov     eax, [edx]
0x841A59: push    1
0x841A5B: mov     ecx, ebp
0x841A5D: call    eax
0x841A5F: mov     eax, [esp+20h+arg_0]
0x841A63: test    eax, eax
0x841A65: mov     ecx, [esp+20h+arg_8]
0x841A69: mov     [ecx+4], eax
0x841A6C: jz      short loc_841A78
0x841A6E: add     eax, 4
0x841A71: push    eax; lpAddend
0x841A72: call    dword ptr ds:0A28078h
0x841A78: mov     edx, [esp+20h+arg_8]
0x841A7C: push    ebx
0x841A7D: push    edx
0x841A7E: mov     ecx, esi
0x841A80: call    sub_848FA0
0x841A85: mov     eax, [edi+24h]
0x841A88: mov     ebp, [eax+4]
0x841A8B: push    0
0x841A8D: push    ebx
0x841A8E: mov     ecx, esi
0x841A90: mov     [esp+28h+arg_8], ebp
0x841A94: call    sub_848FD0
0x841A99: mov     ebp, [ebp+4]
0x841A9C: cmp     ebp, eax
0x841A9E: mov     [esp+20h+arg_0], eax
0x841AA2: jz      short loc_841ADE
0x841AA4: test    ebp, ebp
0x841AA6: jz      short loc_841AC9
0x841AA8: lea     ecx, [ebp+4]
0x841AAB: push    ecx; lpAddend
0x841AAC: call    dword ptr ds:0A2807Ch
0x841AB2: test    eax, eax
0x841AB4: jnz     short loc_841AC5
0x841AB6: test    ebp, ebp
0x841AB8: jz      short loc_841AC5
0x841ABA: mov     edx, [ebp+0]
0x841ABD: mov     eax, [edx]
0x841ABF: push    1
0x841AC1: mov     ecx, ebp
0x841AC3: call    eax
0x841AC5: mov     eax, [esp+20h+arg_0]
0x841AC9: test    eax, eax
0x841ACB: mov     ecx, [esp+20h+arg_8]
0x841ACF: mov     [ecx+4], eax
0x841AD2: jz      short loc_841ADE
0x841AD4: add     eax, 4
0x841AD7: push    eax; lpAddend
0x841AD8: call    dword ptr ds:0A28078h
0x841ADE: mov     edx, [esp+20h+arg_8]
0x841AE2: push    ebx
0x841AE3: push    edx
0x841AE4: mov     ecx, esi
0x841AE6: call    sub_848FA0
0x841AEB: mov     ebx, 1
0x841AF0: add     [edi+60h], ebx
0x841AF3: mov     [esp+20h+arg_8], edi
0x841AF7: mov     ecx, [esi+38h]
0x841AFA: lea     eax, [esp+20h+arg_8]
0x841AFE: push    eax
0x841AFF: push    ecx
0x841B00: lea     ecx, [esi+40h]
0x841B03: mov     [esp+28h+var_4], 0
0x841B0B: call    sub_76CE40
0x841B10: or      eax, 0FFFFFFFFh
0x841B13: add     [edi+60h], eax
0x841B16: mov     [esp+20h+var_4], eax
0x841B1A: jnz     short loc_841B23
0x841B1C: mov     ecx, edi
0x841B1E: call    sub_7604D0
0x841B23: add     [esi+38h], ebx
0x841B26: mov     ecx, [esp+20h+var_C]
0x841B2A: mov     large fs:0, ecx
0x841B31: pop     ecx
0x841B32: pop     edi
0x841B33: pop     esi
0x841B34: pop     ebp
0x841B35: pop     ebx
0x841B36: add     esp, 0Ch
0x841B39: retn    10h
