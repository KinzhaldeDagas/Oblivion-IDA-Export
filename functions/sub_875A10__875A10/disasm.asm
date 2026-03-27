0x875A10: push    0FFFFFFFFh
0x875A12: push    offset SEH_882120
0x875A17: mov     eax, large fs:0
0x875A1D: push    eax
0x875A1E: push    ebx
0x875A1F: push    ebp
0x875A20: push    esi
0x875A21: push    edi
0x875A22: mov     eax, ds:0B30AACh
0x875A27: xor     eax, esp
0x875A29: push    eax
0x875A2A: lea     eax, [esp+20h+var_C]
0x875A2E: mov     large fs:0, eax
0x875A34: mov     esi, ecx
0x875A36: mov     eax, [esp+20h+arg_8]
0x875A3A: mov     ebx, [eax+0Ch]
0x875A3D: mov     edi, ds:0B47664h
0x875A43: push    ebx
0x875A44: call    sub_848E50
0x875A49: mov     edx, [esi]
0x875A4B: mov     eax, [esp+20h+arg_0]
0x875A4F: mov     edx, [edx+0BCh]
0x875A55: push    0
0x875A57: push    ebx
0x875A58: push    eax
0x875A59: mov     ecx, esi
0x875A5B: call    edx
0x875A5D: mov     eax, [edi+24h]
0x875A60: mov     ebp, [esp+20h+arg_C]
0x875A64: mov     ebx, [eax]
0x875A66: mov     edx, [ebp+0]
0x875A69: mov     eax, [edx+88h]
0x875A6F: push    0
0x875A71: mov     ecx, ebp
0x875A73: mov     [esp+24h+arg_8], ebx
0x875A77: call    eax
0x875A79: mov     ebx, [ebx+4]
0x875A7C: cmp     ebx, eax
0x875A7E: mov     [esp+20h+arg_0], eax
0x875A82: jz      short loc_875ABD
0x875A84: test    ebx, ebx
0x875A86: jz      short loc_875AA8
0x875A88: lea     ecx, [ebx+4]
0x875A8B: push    ecx; lpAddend
0x875A8C: call    dword ptr ds:0A2807Ch
0x875A92: test    eax, eax
0x875A94: jnz     short loc_875AA4
0x875A96: test    ebx, ebx
0x875A98: jz      short loc_875AA4
0x875A9A: mov     edx, [ebx]
0x875A9C: mov     eax, [edx]
0x875A9E: push    1
0x875AA0: mov     ecx, ebx
0x875AA2: call    eax
0x875AA4: mov     eax, [esp+20h+arg_0]
0x875AA8: test    eax, eax
0x875AAA: mov     ecx, [esp+20h+arg_8]
0x875AAE: mov     [ecx+4], eax
0x875AB1: jz      short loc_875ABD
0x875AB3: add     eax, 4
0x875AB6: push    eax; lpAddend
0x875AB7: call    dword ptr ds:0A28078h
0x875ABD: mov     edx, [edi+24h]
0x875AC0: mov     ebx, [edx+4]
0x875AC3: push    0
0x875AC5: push    ebp
0x875AC6: mov     ecx, esi
0x875AC8: mov     [esp+28h+arg_8], ebx
0x875ACC: call    sub_848FD0
0x875AD1: mov     ebx, [ebx+4]
0x875AD4: cmp     ebx, eax
0x875AD6: mov     [esp+20h+arg_0], eax
0x875ADA: jz      short loc_875B15
0x875ADC: test    ebx, ebx
0x875ADE: jz      short loc_875B00
0x875AE0: lea     eax, [ebx+4]
0x875AE3: push    eax; lpAddend
0x875AE4: call    dword ptr ds:0A2807Ch
0x875AEA: test    eax, eax
0x875AEC: jnz     short loc_875AFC
0x875AEE: test    ebx, ebx
0x875AF0: jz      short loc_875AFC
0x875AF2: mov     edx, [ebx]
0x875AF4: mov     eax, [edx]
0x875AF6: push    1
0x875AF8: mov     ecx, ebx
0x875AFA: call    eax
0x875AFC: mov     eax, [esp+20h+arg_0]
0x875B00: test    eax, eax
0x875B02: mov     ecx, [esp+20h+arg_8]
0x875B06: mov     [ecx+4], eax
0x875B09: jz      short loc_875B15
0x875B0B: add     eax, 4
0x875B0E: push    eax; lpAddend
0x875B0F: call    dword ptr ds:0A28078h
0x875B15: mov     edx, [edi+24h]
0x875B18: mov     eax, [edx+10h]
0x875B1B: mov     edx, [ebp+0]
0x875B1E: mov     [esp+20h+arg_8], eax
0x875B22: mov     eax, [edx+90h]
0x875B28: push    0
0x875B2A: mov     ecx, ebp
0x875B2C: call    eax
0x875B2E: mov     ecx, [esp+20h+arg_8]
0x875B32: mov     ebp, [ecx+4]
0x875B35: mov     ebx, eax
0x875B37: cmp     ebp, ebx
0x875B39: jz      short loc_875B71
0x875B3B: test    ebp, ebp
0x875B3D: jz      short loc_875B5C
0x875B3F: lea     edx, [ebp+4]
0x875B42: push    edx; lpAddend
0x875B43: call    dword ptr ds:0A2807Ch
0x875B49: test    eax, eax
0x875B4B: jnz     short loc_875B5C
0x875B4D: test    ebp, ebp
0x875B4F: jz      short loc_875B5C
0x875B51: mov     eax, [ebp+0]
0x875B54: mov     edx, [eax]
0x875B56: push    1
0x875B58: mov     ecx, ebp
0x875B5A: call    edx
0x875B5C: test    ebx, ebx
0x875B5E: mov     eax, [esp+20h+arg_8]
0x875B62: mov     [eax+4], ebx
0x875B65: jz      short loc_875B71
0x875B67: add     ebx, 4
0x875B6A: push    ebx; lpAddend
0x875B6B: call    dword ptr ds:0A28078h
0x875B71: mov     ebx, 1
0x875B76: add     [edi+60h], ebx
0x875B79: mov     [esp+20h+arg_8], edi
0x875B7D: mov     edx, [esi+38h]
0x875B80: lea     ecx, [esp+20h+arg_8]
0x875B84: push    ecx
0x875B85: push    edx
0x875B86: lea     ecx, [esi+40h]
0x875B89: mov     [esp+28h+var_4], 0
0x875B91: call    sub_76CE40
0x875B96: or      eax, 0FFFFFFFFh
0x875B99: add     [edi+60h], eax
0x875B9C: mov     [esp+20h+var_4], eax
0x875BA0: jnz     short loc_875BA9
0x875BA2: mov     ecx, edi
0x875BA4: call    sub_7604D0
0x875BA9: add     [esi+38h], ebx
0x875BAC: mov     ecx, [esp+20h+var_C]
0x875BB0: mov     large fs:0, ecx
0x875BB7: pop     ecx
0x875BB8: pop     edi
0x875BB9: pop     esi
0x875BBA: pop     ebp
0x875BBB: pop     ebx
0x875BBC: add     esp, 0Ch
0x875BBF: retn    10h
