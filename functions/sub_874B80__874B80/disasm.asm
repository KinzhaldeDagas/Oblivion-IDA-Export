0x874B80: push    0FFFFFFFFh
0x874B82: push    offset SEH_880560
0x874B87: mov     eax, large fs:0
0x874B8D: push    eax
0x874B8E: push    ebx
0x874B8F: push    ebp
0x874B90: push    esi
0x874B91: push    edi
0x874B92: mov     eax, ds:0B30AACh
0x874B97: xor     eax, esp
0x874B99: push    eax
0x874B9A: lea     eax, [esp+20h+var_C]
0x874B9E: mov     large fs:0, eax
0x874BA4: mov     esi, ecx
0x874BA6: mov     ebx, [esp+20h+arg_8]
0x874BAA: mov     eax, [ebx+10h]
0x874BAD: mov     edi, ds:0B47648h
0x874BB3: push    eax
0x874BB4: call    sub_848C40
0x874BB9: mov     ebx, [ebx+0Ch]
0x874BBC: push    ebx
0x874BBD: mov     ecx, esi
0x874BBF: call    sub_848E50
0x874BC4: mov     ecx, [esp+20h+arg_0]
0x874BC8: mov     eax, [esi]
0x874BCA: mov     edx, [eax+0BCh]
0x874BD0: push    0
0x874BD2: push    ebx
0x874BD3: push    ecx
0x874BD4: mov     ecx, esi
0x874BD6: call    edx
0x874BD8: mov     eax, [edi+24h]
0x874BDB: mov     ecx, [esp+20h+arg_C]
0x874BDF: mov     ebx, [eax]
0x874BE1: mov     edx, [ecx]
0x874BE3: mov     eax, [edx+88h]
0x874BE9: push    0
0x874BEB: mov     [esp+24h+arg_8], ebx
0x874BEF: call    eax
0x874BF1: mov     ebx, [ebx+4]
0x874BF4: mov     ebp, eax
0x874BF6: cmp     ebx, ebp
0x874BF8: jz      short loc_874C2F
0x874BFA: test    ebx, ebx
0x874BFC: jz      short loc_874C1A
0x874BFE: lea     ecx, [ebx+4]
0x874C01: push    ecx; lpAddend
0x874C02: call    dword ptr ds:0A2807Ch
0x874C08: test    eax, eax
0x874C0A: jnz     short loc_874C1A
0x874C0C: test    ebx, ebx
0x874C0E: jz      short loc_874C1A
0x874C10: mov     edx, [ebx]
0x874C12: mov     eax, [edx]
0x874C14: push    1
0x874C16: mov     ecx, ebx
0x874C18: call    eax
0x874C1A: test    ebp, ebp
0x874C1C: mov     ecx, [esp+20h+arg_8]
0x874C20: mov     [ecx+4], ebp
0x874C23: jz      short loc_874C2F
0x874C25: add     ebp, 4
0x874C28: push    ebp; lpAddend
0x874C29: call    dword ptr ds:0A28078h
0x874C2F: mov     edx, [edi+24h]
0x874C32: mov     eax, [esp+20h+arg_C]
0x874C36: mov     ebx, [edx+4]
0x874C39: push    0
0x874C3B: push    eax
0x874C3C: mov     ecx, esi
0x874C3E: mov     [esp+28h+arg_8], ebx
0x874C42: call    sub_848FD0
0x874C47: mov     ebx, [ebx+4]
0x874C4A: mov     ebp, eax
0x874C4C: cmp     ebx, ebp
0x874C4E: jz      short loc_874C85
0x874C50: test    ebx, ebx
0x874C52: jz      short loc_874C70
0x874C54: lea     ecx, [ebx+4]
0x874C57: push    ecx; lpAddend
0x874C58: call    dword ptr ds:0A2807Ch
0x874C5E: test    eax, eax
0x874C60: jnz     short loc_874C70
0x874C62: test    ebx, ebx
0x874C64: jz      short loc_874C70
0x874C66: mov     edx, [ebx]
0x874C68: mov     eax, [edx]
0x874C6A: push    1
0x874C6C: mov     ecx, ebx
0x874C6E: call    eax
0x874C70: test    ebp, ebp
0x874C72: mov     ecx, [esp+20h+arg_8]
0x874C76: mov     [ecx+4], ebp
0x874C79: jz      short loc_874C85
0x874C7B: add     ebp, 4
0x874C7E: push    ebp; lpAddend
0x874C7F: call    dword ptr ds:0A28078h
0x874C85: mov     edx, [edi+24h]
0x874C88: mov     ebp, [edx+10h]
0x874C8B: mov     eax, ds:0B43110h
0x874C90: mov     ebx, [ebp+4]
0x874C93: cmp     ebx, eax
0x874C95: mov     ecx, eax
0x874C97: mov     [esp+20h+arg_C], ecx
0x874C9B: jz      short loc_874CD2
0x874C9D: test    ebx, ebx
0x874C9F: jz      short loc_874CC1
0x874CA1: lea     eax, [ebx+4]
0x874CA4: push    eax; lpAddend
0x874CA5: call    dword ptr ds:0A2807Ch
0x874CAB: test    eax, eax
0x874CAD: jnz     short loc_874CBD
0x874CAF: test    ebx, ebx
0x874CB1: jz      short loc_874CBD
0x874CB3: mov     edx, [ebx]
0x874CB5: mov     eax, [edx]
0x874CB7: push    1
0x874CB9: mov     ecx, ebx
0x874CBB: call    eax
0x874CBD: mov     ecx, [esp+20h+arg_C]
0x874CC1: test    ecx, ecx
0x874CC3: mov     [ebp+4], ecx
0x874CC6: jz      short loc_874CD2
0x874CC8: add     ecx, 4
0x874CCB: push    ecx; lpAddend
0x874CCC: call    dword ptr ds:0A28078h
0x874CD2: mov     ebx, 1
0x874CD7: add     [edi+60h], ebx
0x874CDA: mov     [esp+20h+arg_C], edi
0x874CDE: mov     edx, [esi+38h]
0x874CE1: lea     ecx, [esp+20h+arg_C]
0x874CE5: push    ecx
0x874CE6: push    edx
0x874CE7: lea     ecx, [esi+40h]
0x874CEA: mov     [esp+28h+var_4], 0
0x874CF2: call    sub_76CE40
0x874CF7: or      eax, 0FFFFFFFFh
0x874CFA: add     [edi+60h], eax
0x874CFD: mov     [esp+20h+var_4], eax
0x874D01: jnz     short loc_874D0A
0x874D03: mov     ecx, edi
0x874D05: call    sub_7604D0
0x874D0A: add     [esi+38h], ebx
0x874D0D: mov     ecx, [esp+20h+var_C]
0x874D11: mov     large fs:0, ecx
0x874D18: pop     ecx
0x874D19: pop     edi
0x874D1A: pop     esi
0x874D1B: pop     ebp
0x874D1C: pop     ebx
0x874D1D: add     esp, 0Ch
0x874D20: retn    10h
