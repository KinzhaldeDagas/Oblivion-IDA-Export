0x876B40: push    0FFFFFFFFh
0x876B42: push    offset SEH_880560
0x876B47: mov     eax, large fs:0
0x876B4D: push    eax
0x876B4E: push    ebx
0x876B4F: push    ebp
0x876B50: push    esi
0x876B51: push    edi
0x876B52: mov     eax, ds:0B30AACh
0x876B57: xor     eax, esp
0x876B59: push    eax
0x876B5A: lea     eax, [esp+20h+var_C]
0x876B5E: mov     large fs:0, eax
0x876B64: mov     esi, ecx
0x876B66: mov     ebx, [esp+20h+arg_8]
0x876B6A: mov     eax, [ebx+10h]
0x876B6D: mov     edi, ds:0B47688h
0x876B73: push    eax
0x876B74: call    sub_848C40
0x876B79: mov     ebx, [ebx+0Ch]
0x876B7C: push    ebx
0x876B7D: mov     ecx, esi
0x876B7F: call    sub_848E50
0x876B84: mov     ecx, [esp+20h+arg_0]
0x876B88: mov     eax, [esi]
0x876B8A: mov     edx, [eax+0BCh]
0x876B90: push    0
0x876B92: push    ebx
0x876B93: push    ecx
0x876B94: mov     ecx, esi
0x876B96: call    edx
0x876B98: mov     eax, [edi+24h]
0x876B9B: mov     ecx, [esp+20h+arg_C]
0x876B9F: mov     ebx, [eax]
0x876BA1: mov     edx, [ecx]
0x876BA3: mov     eax, [edx+88h]
0x876BA9: push    0
0x876BAB: mov     [esp+24h+arg_8], ebx
0x876BAF: call    eax
0x876BB1: mov     ebx, [ebx+4]
0x876BB4: mov     ebp, eax
0x876BB6: cmp     ebx, ebp
0x876BB8: jz      short loc_876BEF
0x876BBA: test    ebx, ebx
0x876BBC: jz      short loc_876BDA
0x876BBE: lea     ecx, [ebx+4]
0x876BC1: push    ecx; lpAddend
0x876BC2: call    dword ptr ds:0A2807Ch
0x876BC8: test    eax, eax
0x876BCA: jnz     short loc_876BDA
0x876BCC: test    ebx, ebx
0x876BCE: jz      short loc_876BDA
0x876BD0: mov     edx, [ebx]
0x876BD2: mov     eax, [edx]
0x876BD4: push    1
0x876BD6: mov     ecx, ebx
0x876BD8: call    eax
0x876BDA: test    ebp, ebp
0x876BDC: mov     ecx, [esp+20h+arg_8]
0x876BE0: mov     [ecx+4], ebp
0x876BE3: jz      short loc_876BEF
0x876BE5: add     ebp, 4
0x876BE8: push    ebp; lpAddend
0x876BE9: call    dword ptr ds:0A28078h
0x876BEF: mov     edx, [edi+24h]
0x876BF2: mov     eax, [esp+20h+arg_C]
0x876BF6: mov     ebx, [edx+4]
0x876BF9: push    0
0x876BFB: push    eax
0x876BFC: mov     ecx, esi
0x876BFE: mov     [esp+28h+arg_8], ebx
0x876C02: call    sub_848FD0
0x876C07: mov     ebx, [ebx+4]
0x876C0A: mov     ebp, eax
0x876C0C: cmp     ebx, ebp
0x876C0E: jz      short loc_876C45
0x876C10: test    ebx, ebx
0x876C12: jz      short loc_876C30
0x876C14: lea     ecx, [ebx+4]
0x876C17: push    ecx; lpAddend
0x876C18: call    dword ptr ds:0A2807Ch
0x876C1E: test    eax, eax
0x876C20: jnz     short loc_876C30
0x876C22: test    ebx, ebx
0x876C24: jz      short loc_876C30
0x876C26: mov     edx, [ebx]
0x876C28: mov     eax, [edx]
0x876C2A: push    1
0x876C2C: mov     ecx, ebx
0x876C2E: call    eax
0x876C30: test    ebp, ebp
0x876C32: mov     ecx, [esp+20h+arg_8]
0x876C36: mov     [ecx+4], ebp
0x876C39: jz      short loc_876C45
0x876C3B: add     ebp, 4
0x876C3E: push    ebp; lpAddend
0x876C3F: call    dword ptr ds:0A28078h
0x876C45: mov     edx, [edi+24h]
0x876C48: mov     ebp, [edx+14h]
0x876C4B: mov     eax, ds:0B43110h
0x876C50: mov     ebx, [ebp+4]
0x876C53: cmp     ebx, eax
0x876C55: mov     ecx, eax
0x876C57: mov     [esp+20h+arg_C], ecx
0x876C5B: jz      short loc_876C92
0x876C5D: test    ebx, ebx
0x876C5F: jz      short loc_876C81
0x876C61: lea     eax, [ebx+4]
0x876C64: push    eax; lpAddend
0x876C65: call    dword ptr ds:0A2807Ch
0x876C6B: test    eax, eax
0x876C6D: jnz     short loc_876C7D
0x876C6F: test    ebx, ebx
0x876C71: jz      short loc_876C7D
0x876C73: mov     edx, [ebx]
0x876C75: mov     eax, [edx]
0x876C77: push    1
0x876C79: mov     ecx, ebx
0x876C7B: call    eax
0x876C7D: mov     ecx, [esp+20h+arg_C]
0x876C81: test    ecx, ecx
0x876C83: mov     [ebp+4], ecx
0x876C86: jz      short loc_876C92
0x876C88: add     ecx, 4
0x876C8B: push    ecx; lpAddend
0x876C8C: call    dword ptr ds:0A28078h
0x876C92: mov     ebx, 1
0x876C97: add     [edi+60h], ebx
0x876C9A: mov     [esp+20h+arg_C], edi
0x876C9E: mov     edx, [esi+38h]
0x876CA1: lea     ecx, [esp+20h+arg_C]
0x876CA5: push    ecx
0x876CA6: push    edx
0x876CA7: lea     ecx, [esi+40h]
0x876CAA: mov     [esp+28h+var_4], 0
0x876CB2: call    sub_76CE40
0x876CB7: or      eax, 0FFFFFFFFh
0x876CBA: add     [edi+60h], eax
0x876CBD: mov     [esp+20h+var_4], eax
0x876CC1: jnz     short loc_876CCA
0x876CC3: mov     ecx, edi
0x876CC5: call    sub_7604D0
0x876CCA: add     [esi+38h], ebx
0x876CCD: mov     ecx, [esp+20h+var_C]
0x876CD1: mov     large fs:0, ecx
0x876CD8: pop     ecx
0x876CD9: pop     edi
0x876CDA: pop     esi
0x876CDB: pop     ebp
0x876CDC: pop     ebx
0x876CDD: add     esp, 0Ch
0x876CE0: retn    10h
