0x85D8A0: push    0FFFFFFFFh
0x85D8A2: push    offset SEH_85E160
0x85D8A7: mov     eax, large fs:0
0x85D8AD: push    eax
0x85D8AE: push    ebx
0x85D8AF: push    ebp
0x85D8B0: push    esi
0x85D8B1: push    edi
0x85D8B2: mov     eax, ds:0B30AACh
0x85D8B7: xor     eax, esp
0x85D8B9: push    eax
0x85D8BA: lea     eax, [esp+20h+var_C]
0x85D8BE: mov     large fs:0, eax
0x85D8C4: mov     esi, ecx
0x85D8C6: mov     eax, [esp+20h+arg_8]
0x85D8CA: mov     ebx, [eax+0Ch]
0x85D8CD: mov     edi, ds:0B477C4h
0x85D8D3: push    ebx
0x85D8D4: call    sub_848E50
0x85D8D9: mov     edx, [esi]
0x85D8DB: mov     eax, [esp+20h+arg_0]
0x85D8DF: mov     edx, [edx+0BCh]
0x85D8E5: push    0
0x85D8E7: push    ebx
0x85D8E8: push    eax
0x85D8E9: mov     ecx, esi
0x85D8EB: call    edx
0x85D8ED: mov     eax, [edi+24h]
0x85D8F0: mov     ebx, [esp+20h+arg_C]
0x85D8F4: mov     ebp, [eax]
0x85D8F6: mov     edx, [ebx]
0x85D8F8: mov     eax, [edx+88h]
0x85D8FE: push    0
0x85D900: mov     ecx, ebx
0x85D902: mov     [esp+24h+arg_8], ebp
0x85D906: call    eax
0x85D908: mov     ebp, [ebp+4]
0x85D90B: cmp     ebp, eax
0x85D90D: mov     [esp+20h+arg_0], eax
0x85D911: jz      short loc_85D94D
0x85D913: test    ebp, ebp
0x85D915: jz      short loc_85D938
0x85D917: lea     ecx, [ebp+4]
0x85D91A: push    ecx; lpAddend
0x85D91B: call    dword ptr ds:0A2807Ch
0x85D921: test    eax, eax
0x85D923: jnz     short loc_85D934
0x85D925: test    ebp, ebp
0x85D927: jz      short loc_85D934
0x85D929: mov     edx, [ebp+0]
0x85D92C: mov     eax, [edx]
0x85D92E: push    1
0x85D930: mov     ecx, ebp
0x85D932: call    eax
0x85D934: mov     eax, [esp+20h+arg_0]
0x85D938: test    eax, eax
0x85D93A: mov     ecx, [esp+20h+arg_8]
0x85D93E: mov     [ecx+4], eax
0x85D941: jz      short loc_85D94D
0x85D943: add     eax, 4
0x85D946: push    eax; lpAddend
0x85D947: call    dword ptr ds:0A28078h
0x85D94D: mov     edx, [esp+20h+arg_8]
0x85D951: push    ebx
0x85D952: push    edx
0x85D953: mov     ecx, esi
0x85D955: call    sub_848FA0
0x85D95A: mov     eax, [edi+24h]
0x85D95D: mov     ebp, [eax+4]
0x85D960: push    0
0x85D962: push    ebx
0x85D963: mov     ecx, esi
0x85D965: mov     [esp+28h+arg_8], ebp
0x85D969: call    sub_848FD0
0x85D96E: mov     ebp, [ebp+4]
0x85D971: cmp     ebp, eax
0x85D973: mov     [esp+20h+arg_0], eax
0x85D977: jz      short loc_85D9B3
0x85D979: test    ebp, ebp
0x85D97B: jz      short loc_85D99E
0x85D97D: lea     ecx, [ebp+4]
0x85D980: push    ecx; lpAddend
0x85D981: call    dword ptr ds:0A2807Ch
0x85D987: test    eax, eax
0x85D989: jnz     short loc_85D99A
0x85D98B: test    ebp, ebp
0x85D98D: jz      short loc_85D99A
0x85D98F: mov     edx, [ebp+0]
0x85D992: mov     eax, [edx]
0x85D994: push    1
0x85D996: mov     ecx, ebp
0x85D998: call    eax
0x85D99A: mov     eax, [esp+20h+arg_0]
0x85D99E: test    eax, eax
0x85D9A0: mov     ecx, [esp+20h+arg_8]
0x85D9A4: mov     [ecx+4], eax
0x85D9A7: jz      short loc_85D9B3
0x85D9A9: add     eax, 4
0x85D9AC: push    eax; lpAddend
0x85D9AD: call    dword ptr ds:0A28078h
0x85D9B3: mov     edx, [esp+20h+arg_8]
0x85D9B7: push    ebx
0x85D9B8: push    edx
0x85D9B9: mov     ecx, esi
0x85D9BB: call    sub_848FA0
0x85D9C0: mov     ecx, [edi+24h]
0x85D9C3: mov     ebx, [ecx+14h]
0x85D9C6: mov     eax, ds:0B43108h
0x85D9CB: mov     ebp, [ebx+4]
0x85D9CE: add     ebx, 4
0x85D9D1: cmp     ebp, eax
0x85D9D3: mov     [esp+20h+arg_8], eax
0x85D9D7: jz      short loc_85DA0E
0x85D9D9: test    ebp, ebp
0x85D9DB: jz      short loc_85D9FE
0x85D9DD: lea     edx, [ebp+4]
0x85D9E0: push    edx; lpAddend
0x85D9E1: call    dword ptr ds:0A2807Ch
0x85D9E7: test    eax, eax
0x85D9E9: jnz     short loc_85D9FA
0x85D9EB: test    ebp, ebp
0x85D9ED: jz      short loc_85D9FA
0x85D9EF: mov     eax, [ebp+0]
0x85D9F2: mov     edx, [eax]
0x85D9F4: push    1
0x85D9F6: mov     ecx, ebp
0x85D9F8: call    edx
0x85D9FA: mov     eax, [esp+20h+arg_8]
0x85D9FE: test    eax, eax
0x85DA00: mov     [ebx], eax
0x85DA02: jz      short loc_85DA0E
0x85DA04: add     eax, 4
0x85DA07: push    eax; lpAddend
0x85DA08: call    dword ptr ds:0A28078h
0x85DA0E: mov     eax, [edi+24h]
0x85DA11: mov     ebp, [eax+18h]
0x85DA14: mov     eax, ds:0B4310Ch
0x85DA19: mov     ebx, [ebp+4]
0x85DA1C: cmp     ebx, eax
0x85DA1E: mov     ecx, eax
0x85DA20: mov     [esp+20h+arg_8], ecx
0x85DA24: jz      short loc_85DA5B
0x85DA26: test    ebx, ebx
0x85DA28: jz      short loc_85DA4A
0x85DA2A: lea     ecx, [ebx+4]
0x85DA2D: push    ecx; lpAddend
0x85DA2E: call    dword ptr ds:0A2807Ch
0x85DA34: test    eax, eax
0x85DA36: jnz     short loc_85DA46
0x85DA38: test    ebx, ebx
0x85DA3A: jz      short loc_85DA46
0x85DA3C: mov     edx, [ebx]
0x85DA3E: mov     eax, [edx]
0x85DA40: push    1
0x85DA42: mov     ecx, ebx
0x85DA44: call    eax
0x85DA46: mov     ecx, [esp+20h+arg_8]
0x85DA4A: test    ecx, ecx
0x85DA4C: mov     [ebp+4], ecx
0x85DA4F: jz      short loc_85DA5B
0x85DA51: add     ecx, 4
0x85DA54: push    ecx; lpAddend
0x85DA55: call    dword ptr ds:0A28078h
0x85DA5B: cmp     byte ptr [esp+20h+arg_10], 0
0x85DA60: jnz     short loc_85DA9D
0x85DA62: mov     ebx, 1
0x85DA67: add     [edi+60h], ebx
0x85DA6A: mov     [esp+20h+arg_10], edi
0x85DA6E: mov     edx, [esi+38h]
0x85DA71: lea     ecx, [esp+20h+arg_10]
0x85DA75: push    ecx
0x85DA76: push    edx
0x85DA77: lea     ecx, [esi+40h]
0x85DA7A: mov     [esp+28h+var_4], 0
0x85DA82: call    sub_76CE40
0x85DA87: or      eax, 0FFFFFFFFh
0x85DA8A: add     [edi+60h], eax
0x85DA8D: mov     [esp+20h+var_4], eax
0x85DA91: jnz     short loc_85DA9A
0x85DA93: mov     ecx, edi
0x85DA95: call    sub_7604D0
0x85DA9A: add     [esi+38h], ebx
0x85DA9D: mov     ecx, [esp+20h+var_C]
0x85DAA1: mov     large fs:0, ecx
0x85DAA8: pop     ecx
0x85DAA9: pop     edi
0x85DAAA: pop     esi
0x85DAAB: pop     ebp
0x85DAAC: pop     ebx
0x85DAAD: add     esp, 0Ch
0x85DAB0: retn    14h
