0x842B80: push    0FFFFFFFFh
0x842B82: push    offset SEH_882120
0x842B87: mov     eax, large fs:0
0x842B8D: push    eax
0x842B8E: push    ebx
0x842B8F: push    ebp
0x842B90: push    esi
0x842B91: push    edi
0x842B92: mov     eax, ds:0B30AACh
0x842B97: xor     eax, esp
0x842B99: push    eax
0x842B9A: lea     eax, [esp+20h+var_C]
0x842B9E: mov     large fs:0, eax
0x842BA4: mov     esi, ecx
0x842BA6: mov     ebx, [esp+20h+arg_8]
0x842BAA: mov     eax, [ebx+10h]
0x842BAD: mov     edi, ds:0B45724h
0x842BB3: push    eax
0x842BB4: call    sub_848DA0
0x842BB9: mov     ebx, [ebx+0Ch]
0x842BBC: push    ebx
0x842BBD: mov     ecx, esi
0x842BBF: call    sub_848E50
0x842BC4: mov     ecx, [esp+20h+arg_0]
0x842BC8: mov     eax, [esi]
0x842BCA: mov     edx, [eax+0BCh]
0x842BD0: push    0
0x842BD2: push    ebx
0x842BD3: push    ecx
0x842BD4: mov     ecx, esi
0x842BD6: call    edx
0x842BD8: mov     eax, [edi+24h]
0x842BDB: mov     ebx, [esp+20h+arg_C]
0x842BDF: mov     ebp, [eax]
0x842BE1: mov     edx, [ebx]
0x842BE3: mov     eax, [edx+88h]
0x842BE9: push    0
0x842BEB: mov     ecx, ebx
0x842BED: mov     [esp+24h+arg_8], ebp
0x842BF1: call    eax
0x842BF3: mov     ebp, [ebp+4]
0x842BF6: cmp     ebp, eax
0x842BF8: mov     [esp+20h+arg_0], eax
0x842BFC: jz      short loc_842C38
0x842BFE: test    ebp, ebp
0x842C00: jz      short loc_842C23
0x842C02: lea     ecx, [ebp+4]
0x842C05: push    ecx; lpAddend
0x842C06: call    dword ptr ds:0A2807Ch
0x842C0C: test    eax, eax
0x842C0E: jnz     short loc_842C1F
0x842C10: test    ebp, ebp
0x842C12: jz      short loc_842C1F
0x842C14: mov     edx, [ebp+0]
0x842C17: mov     eax, [edx]
0x842C19: push    1
0x842C1B: mov     ecx, ebp
0x842C1D: call    eax
0x842C1F: mov     eax, [esp+20h+arg_0]
0x842C23: test    eax, eax
0x842C25: mov     ecx, [esp+20h+arg_8]
0x842C29: mov     [ecx+4], eax
0x842C2C: jz      short loc_842C38
0x842C2E: add     eax, 4
0x842C31: push    eax; lpAddend
0x842C32: call    dword ptr ds:0A28078h
0x842C38: mov     edx, [esp+20h+arg_8]
0x842C3C: push    ebx
0x842C3D: push    edx
0x842C3E: mov     ecx, esi
0x842C40: call    sub_848FA0
0x842C45: mov     eax, [edi+24h]
0x842C48: mov     ebp, [eax+4]
0x842C4B: push    0
0x842C4D: push    ebx
0x842C4E: mov     ecx, esi
0x842C50: mov     [esp+28h+arg_8], ebp
0x842C54: call    sub_848FD0
0x842C59: mov     ebp, [ebp+4]
0x842C5C: cmp     ebp, eax
0x842C5E: mov     [esp+20h+arg_0], eax
0x842C62: jz      short loc_842C9E
0x842C64: test    ebp, ebp
0x842C66: jz      short loc_842C89
0x842C68: lea     ecx, [ebp+4]
0x842C6B: push    ecx; lpAddend
0x842C6C: call    dword ptr ds:0A2807Ch
0x842C72: test    eax, eax
0x842C74: jnz     short loc_842C85
0x842C76: test    ebp, ebp
0x842C78: jz      short loc_842C85
0x842C7A: mov     edx, [ebp+0]
0x842C7D: mov     eax, [edx]
0x842C7F: push    1
0x842C81: mov     ecx, ebp
0x842C83: call    eax
0x842C85: mov     eax, [esp+20h+arg_0]
0x842C89: test    eax, eax
0x842C8B: mov     ecx, [esp+20h+arg_8]
0x842C8F: mov     [ecx+4], eax
0x842C92: jz      short loc_842C9E
0x842C94: add     eax, 4
0x842C97: push    eax; lpAddend
0x842C98: call    dword ptr ds:0A28078h
0x842C9E: mov     edx, [esp+20h+arg_8]
0x842CA2: push    ebx
0x842CA3: push    edx
0x842CA4: mov     ecx, esi
0x842CA6: call    sub_848FA0
0x842CAB: mov     eax, [edi+24h]
0x842CAE: mov     ebp, [eax+0Ch]
0x842CB1: mov     edx, [ebx]
0x842CB3: mov     eax, [edx+90h]
0x842CB9: push    0
0x842CBB: mov     ecx, ebx
0x842CBD: mov     [esp+24h+arg_8], ebp
0x842CC1: call    eax
0x842CC3: mov     ebp, [ebp+4]
0x842CC6: cmp     ebp, eax
0x842CC8: mov     [esp+20h+arg_0], eax
0x842CCC: jz      short loc_842D08
0x842CCE: test    ebp, ebp
0x842CD0: jz      short loc_842CF3
0x842CD2: lea     ecx, [ebp+4]
0x842CD5: push    ecx; lpAddend
0x842CD6: call    dword ptr ds:0A2807Ch
0x842CDC: test    eax, eax
0x842CDE: jnz     short loc_842CEF
0x842CE0: test    ebp, ebp
0x842CE2: jz      short loc_842CEF
0x842CE4: mov     edx, [ebp+0]
0x842CE7: mov     eax, [edx]
0x842CE9: push    1
0x842CEB: mov     ecx, ebp
0x842CED: call    eax
0x842CEF: mov     eax, [esp+20h+arg_0]
0x842CF3: test    eax, eax
0x842CF5: mov     ecx, [esp+20h+arg_8]
0x842CF9: mov     [ecx+4], eax
0x842CFC: jz      short loc_842D08
0x842CFE: add     eax, 4
0x842D01: push    eax; lpAddend
0x842D02: call    dword ptr ds:0A28078h
0x842D08: mov     edx, [esp+20h+arg_8]
0x842D0C: push    ebx
0x842D0D: push    edx
0x842D0E: mov     ecx, esi
0x842D10: call    sub_848FA0
0x842D15: mov     ebx, 1
0x842D1A: add     [edi+60h], ebx
0x842D1D: mov     [esp+20h+arg_8], edi
0x842D21: mov     ecx, [esi+38h]
0x842D24: lea     eax, [esp+20h+arg_8]
0x842D28: push    eax
0x842D29: push    ecx
0x842D2A: lea     ecx, [esi+40h]
0x842D2D: mov     [esp+28h+var_4], 0
0x842D35: call    sub_76CE40
0x842D3A: or      eax, 0FFFFFFFFh
0x842D3D: add     [edi+60h], eax
0x842D40: mov     [esp+20h+var_4], eax
0x842D44: jnz     short loc_842D4D
0x842D46: mov     ecx, edi
0x842D48: call    sub_7604D0
0x842D4D: add     [esi+38h], ebx
0x842D50: mov     ecx, [esp+20h+var_C]
0x842D54: mov     large fs:0, ecx
0x842D5B: pop     ecx
0x842D5C: pop     edi
0x842D5D: pop     esi
0x842D5E: pop     ebp
0x842D5F: pop     ebx
0x842D60: add     esp, 0Ch
0x842D63: retn    10h
