0x85C870: push    0FFFFFFFFh
0x85C872: push    offset SEH_85E160
0x85C877: mov     eax, large fs:0
0x85C87D: push    eax
0x85C87E: push    ebx
0x85C87F: push    ebp
0x85C880: push    esi
0x85C881: push    edi
0x85C882: mov     eax, ds:0B30AACh
0x85C887: xor     eax, esp
0x85C889: push    eax
0x85C88A: lea     eax, [esp+20h+var_C]
0x85C88E: mov     large fs:0, eax
0x85C894: mov     esi, ecx
0x85C896: mov     ebx, [esp+20h+arg_8]
0x85C89A: mov     eax, [ebx+10h]
0x85C89D: mov     edi, ds:0B477C8h
0x85C8A3: push    eax
0x85C8A4: call    sub_848C40
0x85C8A9: mov     ebx, [ebx+0Ch]
0x85C8AC: push    ebx
0x85C8AD: mov     ecx, esi
0x85C8AF: call    sub_848E50
0x85C8B4: mov     ecx, [esp+20h+arg_0]
0x85C8B8: mov     eax, [esi]
0x85C8BA: mov     edx, [eax+0BCh]
0x85C8C0: push    0
0x85C8C2: push    ebx
0x85C8C3: push    ecx
0x85C8C4: mov     ecx, esi
0x85C8C6: call    edx
0x85C8C8: mov     eax, [edi+24h]
0x85C8CB: mov     ebp, [esp+20h+arg_C]
0x85C8CF: mov     ebx, [eax]
0x85C8D1: mov     edx, [ebp+0]
0x85C8D4: mov     eax, [edx+88h]
0x85C8DA: push    0
0x85C8DC: mov     ecx, ebp
0x85C8DE: mov     [esp+24h+arg_8], ebx
0x85C8E2: call    eax
0x85C8E4: mov     ebx, [ebx+4]
0x85C8E7: cmp     ebx, eax
0x85C8E9: mov     [esp+20h+arg_0], eax
0x85C8ED: jz      short loc_85C928
0x85C8EF: test    ebx, ebx
0x85C8F1: jz      short loc_85C913
0x85C8F3: lea     ecx, [ebx+4]
0x85C8F6: push    ecx; lpAddend
0x85C8F7: call    dword ptr ds:0A2807Ch
0x85C8FD: test    eax, eax
0x85C8FF: jnz     short loc_85C90F
0x85C901: test    ebx, ebx
0x85C903: jz      short loc_85C90F
0x85C905: mov     edx, [ebx]
0x85C907: mov     eax, [edx]
0x85C909: push    1
0x85C90B: mov     ecx, ebx
0x85C90D: call    eax
0x85C90F: mov     eax, [esp+20h+arg_0]
0x85C913: test    eax, eax
0x85C915: mov     ecx, [esp+20h+arg_8]
0x85C919: mov     [ecx+4], eax
0x85C91C: jz      short loc_85C928
0x85C91E: add     eax, 4
0x85C921: push    eax; lpAddend
0x85C922: call    dword ptr ds:0A28078h
0x85C928: mov     edx, [esp+20h+arg_8]
0x85C92C: push    ebp
0x85C92D: push    edx
0x85C92E: mov     ecx, esi
0x85C930: call    sub_848FA0
0x85C935: mov     eax, [edi+24h]
0x85C938: mov     ebx, [eax+4]
0x85C93B: push    0
0x85C93D: push    ebp
0x85C93E: mov     ecx, esi
0x85C940: mov     [esp+28h+arg_8], ebx
0x85C944: call    sub_848FD0
0x85C949: mov     ebx, [ebx+4]
0x85C94C: cmp     ebx, eax
0x85C94E: mov     [esp+20h+arg_0], eax
0x85C952: jz      short loc_85C98D
0x85C954: test    ebx, ebx
0x85C956: jz      short loc_85C978
0x85C958: lea     ecx, [ebx+4]
0x85C95B: push    ecx; lpAddend
0x85C95C: call    dword ptr ds:0A2807Ch
0x85C962: test    eax, eax
0x85C964: jnz     short loc_85C974
0x85C966: test    ebx, ebx
0x85C968: jz      short loc_85C974
0x85C96A: mov     edx, [ebx]
0x85C96C: mov     eax, [edx]
0x85C96E: push    1
0x85C970: mov     ecx, ebx
0x85C972: call    eax
0x85C974: mov     eax, [esp+20h+arg_0]
0x85C978: test    eax, eax
0x85C97A: mov     ecx, [esp+20h+arg_8]
0x85C97E: mov     [ecx+4], eax
0x85C981: jz      short loc_85C98D
0x85C983: add     eax, 4
0x85C986: push    eax; lpAddend
0x85C987: call    dword ptr ds:0A28078h
0x85C98D: mov     edx, [esp+20h+arg_8]
0x85C991: push    ebp
0x85C992: push    edx
0x85C993: mov     ecx, esi
0x85C995: call    sub_848FA0
0x85C99A: cmp     byte ptr [esp+20h+arg_10], 0
0x85C99F: jnz     short loc_85C9DC
0x85C9A1: mov     ebx, 1
0x85C9A6: add     [edi+60h], ebx
0x85C9A9: mov     [esp+20h+arg_10], edi
0x85C9AD: mov     ecx, [esi+38h]
0x85C9B0: lea     eax, [esp+20h+arg_10]
0x85C9B4: push    eax
0x85C9B5: push    ecx
0x85C9B6: lea     ecx, [esi+40h]
0x85C9B9: mov     [esp+28h+var_4], 0
0x85C9C1: call    sub_76CE40
0x85C9C6: or      eax, 0FFFFFFFFh
0x85C9C9: add     [edi+60h], eax
0x85C9CC: mov     [esp+20h+var_4], eax
0x85C9D0: jnz     short loc_85C9D9
0x85C9D2: mov     ecx, edi
0x85C9D4: call    sub_7604D0
0x85C9D9: add     [esi+38h], ebx
0x85C9DC: mov     ecx, [esp+20h+var_C]
0x85C9E0: mov     large fs:0, ecx
0x85C9E7: pop     ecx
0x85C9E8: pop     edi
0x85C9E9: pop     esi
0x85C9EA: pop     ebp
0x85C9EB: pop     ebx
0x85C9EC: add     esp, 0Ch
0x85C9EF: retn    14h
