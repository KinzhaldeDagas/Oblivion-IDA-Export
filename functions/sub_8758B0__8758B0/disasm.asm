0x8758B0: push    0FFFFFFFFh
0x8758B2: push    offset SEH_880560
0x8758B7: mov     eax, large fs:0
0x8758BD: push    eax
0x8758BE: push    ebx
0x8758BF: push    ebp
0x8758C0: push    esi
0x8758C1: push    edi
0x8758C2: mov     eax, ds:0B30AACh
0x8758C7: xor     eax, esp
0x8758C9: push    eax
0x8758CA: lea     eax, [esp+20h+var_C]
0x8758CE: mov     large fs:0, eax
0x8758D4: mov     esi, ecx
0x8758D6: mov     ebx, [esp+20h+arg_8]
0x8758DA: mov     eax, [ebx+10h]
0x8758DD: mov     edi, ds:0B47660h
0x8758E3: push    eax
0x8758E4: call    sub_848C40
0x8758E9: mov     ebx, [ebx+0Ch]
0x8758EC: push    ebx
0x8758ED: mov     ecx, esi
0x8758EF: call    sub_848E50
0x8758F4: mov     ecx, [esp+20h+arg_0]
0x8758F8: mov     eax, [esi]
0x8758FA: mov     edx, [eax+0BCh]
0x875900: push    0
0x875902: push    ebx
0x875903: push    ecx
0x875904: mov     ecx, esi
0x875906: call    edx
0x875908: mov     eax, [edi+24h]
0x87590B: mov     ecx, [esp+20h+arg_C]
0x87590F: mov     ebx, [eax]
0x875911: mov     edx, [ecx]
0x875913: mov     eax, [edx+88h]
0x875919: push    0
0x87591B: mov     [esp+24h+arg_8], ebx
0x87591F: call    eax
0x875921: mov     ebx, [ebx+4]
0x875924: mov     ebp, eax
0x875926: cmp     ebx, ebp
0x875928: jz      short loc_87595F
0x87592A: test    ebx, ebx
0x87592C: jz      short loc_87594A
0x87592E: lea     ecx, [ebx+4]
0x875931: push    ecx; lpAddend
0x875932: call    dword ptr ds:0A2807Ch
0x875938: test    eax, eax
0x87593A: jnz     short loc_87594A
0x87593C: test    ebx, ebx
0x87593E: jz      short loc_87594A
0x875940: mov     edx, [ebx]
0x875942: mov     eax, [edx]
0x875944: push    1
0x875946: mov     ecx, ebx
0x875948: call    eax
0x87594A: test    ebp, ebp
0x87594C: mov     ecx, [esp+20h+arg_8]
0x875950: mov     [ecx+4], ebp
0x875953: jz      short loc_87595F
0x875955: add     ebp, 4
0x875958: push    ebp; lpAddend
0x875959: call    dword ptr ds:0A28078h
0x87595F: mov     edx, [edi+24h]
0x875962: mov     eax, [esp+20h+arg_C]
0x875966: mov     ebx, [edx+4]
0x875969: push    0
0x87596B: push    eax
0x87596C: mov     ecx, esi
0x87596E: mov     [esp+28h+arg_8], ebx
0x875972: call    sub_848FD0
0x875977: mov     ebx, [ebx+4]
0x87597A: mov     ebp, eax
0x87597C: cmp     ebx, ebp
0x87597E: jz      short loc_8759B5
0x875980: test    ebx, ebx
0x875982: jz      short loc_8759A0
0x875984: lea     ecx, [ebx+4]
0x875987: push    ecx; lpAddend
0x875988: call    dword ptr ds:0A2807Ch
0x87598E: test    eax, eax
0x875990: jnz     short loc_8759A0
0x875992: test    ebx, ebx
0x875994: jz      short loc_8759A0
0x875996: mov     edx, [ebx]
0x875998: mov     eax, [edx]
0x87599A: push    1
0x87599C: mov     ecx, ebx
0x87599E: call    eax
0x8759A0: test    ebp, ebp
0x8759A2: mov     ecx, [esp+20h+arg_8]
0x8759A6: mov     [ecx+4], ebp
0x8759A9: jz      short loc_8759B5
0x8759AB: add     ebp, 4
0x8759AE: push    ebp; lpAddend
0x8759AF: call    dword ptr ds:0A28078h
0x8759B5: mov     ebx, 1
0x8759BA: add     [edi+60h], ebx
0x8759BD: mov     [esp+20h+arg_C], edi
0x8759C1: mov     eax, [esi+38h]
0x8759C4: lea     edx, [esp+20h+arg_C]
0x8759C8: push    edx
0x8759C9: push    eax
0x8759CA: lea     ecx, [esi+40h]
0x8759CD: mov     [esp+28h+var_4], 0
0x8759D5: call    sub_76CE40
0x8759DA: or      eax, 0FFFFFFFFh
0x8759DD: add     [edi+60h], eax
0x8759E0: mov     [esp+20h+var_4], eax
0x8759E4: jnz     short loc_8759ED
0x8759E6: mov     ecx, edi
0x8759E8: call    sub_7604D0
0x8759ED: add     [esi+38h], ebx
0x8759F0: mov     ecx, [esp+20h+var_C]
0x8759F4: mov     large fs:0, ecx
0x8759FB: pop     ecx
0x8759FC: pop     edi
0x8759FD: pop     esi
0x8759FE: pop     ebp
0x8759FF: pop     ebx
0x875A00: add     esp, 0Ch
0x875A03: retn    10h
