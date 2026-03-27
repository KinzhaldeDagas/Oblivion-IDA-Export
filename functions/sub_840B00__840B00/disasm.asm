0x840B00: push    0FFFFFFFFh
0x840B02: push    offset SEH_882120
0x840B07: mov     eax, large fs:0
0x840B0D: push    eax
0x840B0E: push    ebx
0x840B0F: push    ebp
0x840B10: push    esi
0x840B11: push    edi
0x840B12: mov     eax, ds:0B30AACh
0x840B17: xor     eax, esp
0x840B19: push    eax
0x840B1A: lea     eax, [esp+20h+var_C]
0x840B1E: mov     large fs:0, eax
0x840B24: mov     esi, ecx
0x840B26: mov     ebx, [esp+20h+arg_8]
0x840B2A: mov     eax, [ebx+10h]
0x840B2D: mov     edi, ds:0B458ECh
0x840B33: push    eax
0x840B34: call    sub_848C40
0x840B39: mov     ebp, [ebx+0Ch]
0x840B3C: push    ebp
0x840B3D: mov     ecx, esi
0x840B3F: call    sub_848E50
0x840B44: mov     ebx, [ebx+10h]
0x840B47: mov     ecx, [esp+20h+arg_0]
0x840B4B: mov     eax, [esi]
0x840B4D: mov     edx, [eax+0BCh]
0x840B53: push    ebx
0x840B54: push    ebp
0x840B55: push    ecx
0x840B56: mov     ecx, esi
0x840B58: call    edx
0x840B5A: mov     eax, [edi+24h]
0x840B5D: mov     ebx, [esp+20h+arg_C]
0x840B61: mov     ebp, [eax]
0x840B63: mov     edx, [ebx]
0x840B65: mov     eax, [edx+88h]
0x840B6B: push    0
0x840B6D: mov     ecx, ebx
0x840B6F: mov     [esp+24h+arg_8], ebp
0x840B73: call    eax
0x840B75: mov     ebp, [ebp+4]
0x840B78: cmp     ebp, eax
0x840B7A: mov     [esp+20h+arg_0], eax
0x840B7E: jz      short loc_840BBA
0x840B80: test    ebp, ebp
0x840B82: jz      short loc_840BA5
0x840B84: lea     ecx, [ebp+4]
0x840B87: push    ecx; lpAddend
0x840B88: call    dword ptr ds:0A2807Ch
0x840B8E: test    eax, eax
0x840B90: jnz     short loc_840BA1
0x840B92: test    ebp, ebp
0x840B94: jz      short loc_840BA1
0x840B96: mov     edx, [ebp+0]
0x840B99: mov     eax, [edx]
0x840B9B: push    1
0x840B9D: mov     ecx, ebp
0x840B9F: call    eax
0x840BA1: mov     eax, [esp+20h+arg_0]
0x840BA5: test    eax, eax
0x840BA7: mov     ecx, [esp+20h+arg_8]
0x840BAB: mov     [ecx+4], eax
0x840BAE: jz      short loc_840BBA
0x840BB0: add     eax, 4
0x840BB3: push    eax; lpAddend
0x840BB4: call    dword ptr ds:0A28078h
0x840BBA: mov     edx, [esp+20h+arg_8]
0x840BBE: push    ebx
0x840BBF: push    edx
0x840BC0: mov     ecx, esi
0x840BC2: call    sub_848FA0
0x840BC7: mov     eax, [edi+24h]
0x840BCA: mov     ebp, [eax+4]
0x840BCD: push    0
0x840BCF: push    ebx
0x840BD0: mov     ecx, esi
0x840BD2: mov     [esp+28h+arg_8], ebp
0x840BD6: call    sub_848FD0
0x840BDB: mov     ebp, [ebp+4]
0x840BDE: cmp     ebp, eax
0x840BE0: mov     [esp+20h+arg_0], eax
0x840BE4: jz      short loc_840C20
0x840BE6: test    ebp, ebp
0x840BE8: jz      short loc_840C0B
0x840BEA: lea     ecx, [ebp+4]
0x840BED: push    ecx; lpAddend
0x840BEE: call    dword ptr ds:0A2807Ch
0x840BF4: test    eax, eax
0x840BF6: jnz     short loc_840C07
0x840BF8: test    ebp, ebp
0x840BFA: jz      short loc_840C07
0x840BFC: mov     edx, [ebp+0]
0x840BFF: mov     eax, [edx]
0x840C01: push    1
0x840C03: mov     ecx, ebp
0x840C05: call    eax
0x840C07: mov     eax, [esp+20h+arg_0]
0x840C0B: test    eax, eax
0x840C0D: mov     ecx, [esp+20h+arg_8]
0x840C11: mov     [ecx+4], eax
0x840C14: jz      short loc_840C20
0x840C16: add     eax, 4
0x840C19: push    eax; lpAddend
0x840C1A: call    dword ptr ds:0A28078h
0x840C20: mov     edx, [esp+20h+arg_8]
0x840C24: push    ebx
0x840C25: push    edx
0x840C26: mov     ecx, esi
0x840C28: call    sub_848FA0
0x840C2D: mov     ecx, [edi+24h]
0x840C30: mov     ebx, [ecx+18h]
0x840C33: mov     eax, ds:0B43108h
0x840C38: mov     ebp, [ebx+4]
0x840C3B: add     ebx, 4
0x840C3E: cmp     ebp, eax
0x840C40: mov     [esp+20h+arg_8], eax
0x840C44: jz      short loc_840C7B
0x840C46: test    ebp, ebp
0x840C48: jz      short loc_840C6B
0x840C4A: lea     edx, [ebp+4]
0x840C4D: push    edx; lpAddend
0x840C4E: call    dword ptr ds:0A2807Ch
0x840C54: test    eax, eax
0x840C56: jnz     short loc_840C67
0x840C58: test    ebp, ebp
0x840C5A: jz      short loc_840C67
0x840C5C: mov     eax, [ebp+0]
0x840C5F: mov     edx, [eax]
0x840C61: push    1
0x840C63: mov     ecx, ebp
0x840C65: call    edx
0x840C67: mov     eax, [esp+20h+arg_8]
0x840C6B: test    eax, eax
0x840C6D: mov     [ebx], eax
0x840C6F: jz      short loc_840C7B
0x840C71: add     eax, 4
0x840C74: push    eax; lpAddend
0x840C75: call    dword ptr ds:0A28078h
0x840C7B: mov     eax, [edi+24h]
0x840C7E: mov     ebp, [eax+1Ch]
0x840C81: mov     eax, ds:0B4310Ch
0x840C86: mov     ebx, [ebp+4]
0x840C89: cmp     ebx, eax
0x840C8B: mov     ecx, eax
0x840C8D: mov     [esp+20h+arg_8], ecx
0x840C91: jz      short loc_840CC8
0x840C93: test    ebx, ebx
0x840C95: jz      short loc_840CB7
0x840C97: lea     ecx, [ebx+4]
0x840C9A: push    ecx; lpAddend
0x840C9B: call    dword ptr ds:0A2807Ch
0x840CA1: test    eax, eax
0x840CA3: jnz     short loc_840CB3
0x840CA5: test    ebx, ebx
0x840CA7: jz      short loc_840CB3
0x840CA9: mov     edx, [ebx]
0x840CAB: mov     eax, [edx]
0x840CAD: push    1
0x840CAF: mov     ecx, ebx
0x840CB1: call    eax
0x840CB3: mov     ecx, [esp+20h+arg_8]
0x840CB7: test    ecx, ecx
0x840CB9: mov     [ebp+4], ecx
0x840CBC: jz      short loc_840CC8
0x840CBE: add     ecx, 4
0x840CC1: push    ecx; lpAddend
0x840CC2: call    dword ptr ds:0A28078h
0x840CC8: mov     ebx, 1
0x840CCD: add     [edi+60h], ebx
0x840CD0: mov     [esp+20h+arg_8], edi
0x840CD4: mov     edx, [esi+38h]
0x840CD7: lea     ecx, [esp+20h+arg_8]
0x840CDB: push    ecx
0x840CDC: push    edx
0x840CDD: lea     ecx, [esi+40h]
0x840CE0: mov     [esp+28h+var_4], 0
0x840CE8: call    sub_76CE40
0x840CED: or      eax, 0FFFFFFFFh
0x840CF0: add     [edi+60h], eax
0x840CF3: mov     [esp+20h+var_4], eax
0x840CF7: jnz     short loc_840D00
0x840CF9: mov     ecx, edi
0x840CFB: call    sub_7604D0
0x840D00: add     [esi+38h], ebx
0x840D03: mov     ecx, [esp+20h+var_C]
0x840D07: mov     large fs:0, ecx
0x840D0E: pop     ecx
0x840D0F: pop     edi
0x840D10: pop     esi
0x840D11: pop     ebp
0x840D12: pop     ebx
0x840D13: add     esp, 0Ch
0x840D16: retn    10h
