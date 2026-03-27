0x879830: push    0FFFFFFFFh
0x879832: push    offset SEH_879360
0x879837: mov     eax, large fs:0
0x87983D: push    eax
0x87983E: push    ecx
0x87983F: push    ebx
0x879840: push    ebp
0x879841: push    esi
0x879842: push    edi
0x879843: mov     eax, ds:0B30AACh
0x879848: xor     eax, esp
0x87984A: push    eax
0x87984B: lea     eax, [esp+24h+var_C]
0x87984F: mov     large fs:0, eax
0x879855: mov     ebx, ecx
0x879857: mov     [esp+24h+var_10], ebx
0x87985B: mov     ebp, [esp+24h+arg_8]
0x87985F: mov     edi, [ebp+0Ch]
0x879862: mov     esi, ds:0B476DCh
0x879868: push    edi
0x879869: call    sub_848E50
0x87986E: mov     ebp, [ebp+10h]
0x879871: mov     ecx, [esp+24h+arg_0]
0x879875: mov     eax, [ebx]
0x879877: mov     edx, [eax+0BCh]
0x87987D: push    ebp
0x87987E: push    edi
0x87987F: push    ecx
0x879880: mov     ecx, ebx
0x879882: call    edx
0x879884: mov     eax, [esi+24h]
0x879887: mov     ebx, [esp+24h+arg_C]
0x87988B: mov     edi, [eax]
0x87988D: mov     edx, [ebx]
0x87988F: mov     eax, [edx+88h]
0x879895: push    0
0x879897: mov     ecx, ebx
0x879899: mov     [esp+28h+arg_8], edi
0x87989D: call    eax
0x87989F: mov     edi, [edi+4]
0x8798A2: mov     ebp, eax
0x8798A4: cmp     edi, ebp
0x8798A6: jz      short loc_8798DD
0x8798A8: test    edi, edi
0x8798AA: jz      short loc_8798C8
0x8798AC: lea     ecx, [edi+4]
0x8798AF: push    ecx; lpAddend
0x8798B0: call    dword ptr ds:0A2807Ch
0x8798B6: test    eax, eax
0x8798B8: jnz     short loc_8798C8
0x8798BA: test    edi, edi
0x8798BC: jz      short loc_8798C8
0x8798BE: mov     edx, [edi]
0x8798C0: mov     eax, [edx]
0x8798C2: push    1
0x8798C4: mov     ecx, edi
0x8798C6: call    eax
0x8798C8: test    ebp, ebp
0x8798CA: mov     ecx, [esp+24h+arg_8]
0x8798CE: mov     [ecx+4], ebp
0x8798D1: jz      short loc_8798DD
0x8798D3: add     ebp, 4
0x8798D6: push    ebp; lpAddend
0x8798D7: call    dword ptr ds:0A28078h
0x8798DD: mov     edx, [esi+24h]
0x8798E0: mov     edi, [edx+4]
0x8798E3: mov     ecx, [esp+24h+var_10]
0x8798E7: push    0
0x8798E9: push    ebx
0x8798EA: mov     [esp+2Ch+arg_8], edi
0x8798EE: call    sub_848FD0
0x8798F3: mov     edi, [edi+4]
0x8798F6: mov     ebp, eax
0x8798F8: cmp     edi, ebp
0x8798FA: jz      short loc_879931
0x8798FC: test    edi, edi
0x8798FE: jz      short loc_87991C
0x879900: lea     eax, [edi+4]
0x879903: push    eax; lpAddend
0x879904: call    dword ptr ds:0A2807Ch
0x87990A: test    eax, eax
0x87990C: jnz     short loc_87991C
0x87990E: test    edi, edi
0x879910: jz      short loc_87991C
0x879912: mov     edx, [edi]
0x879914: mov     eax, [edx]
0x879916: push    1
0x879918: mov     ecx, edi
0x87991A: call    eax
0x87991C: test    ebp, ebp
0x87991E: mov     ecx, [esp+24h+arg_8]
0x879922: mov     [ecx+4], ebp
0x879925: jz      short loc_879931
0x879927: add     ebp, 4
0x87992A: push    ebp; lpAddend
0x87992B: call    dword ptr ds:0A28078h
0x879931: mov     edx, [esi+24h]
0x879934: mov     eax, [ebx]
0x879936: mov     ebp, [edx+10h]
0x879939: mov     edx, [eax+90h]
0x87993F: push    0
0x879941: mov     ecx, ebx
0x879943: call    edx
0x879945: mov     edi, [ebp+4]
0x879948: mov     ebx, eax
0x87994A: cmp     edi, ebx
0x87994C: jz      short loc_87997F
0x87994E: test    edi, edi
0x879950: jz      short loc_87996E
0x879952: lea     eax, [edi+4]
0x879955: push    eax; lpAddend
0x879956: call    dword ptr ds:0A2807Ch
0x87995C: test    eax, eax
0x87995E: jnz     short loc_87996E
0x879960: test    edi, edi
0x879962: jz      short loc_87996E
0x879964: mov     edx, [edi]
0x879966: mov     eax, [edx]
0x879968: push    1
0x87996A: mov     ecx, edi
0x87996C: call    eax
0x87996E: test    ebx, ebx
0x879970: mov     [ebp+4], ebx
0x879973: jz      short loc_87997F
0x879975: add     ebx, 4
0x879978: push    ebx; lpAddend
0x879979: call    dword ptr ds:0A28078h
0x87997F: mov     ecx, [esi+24h]
0x879982: mov     edi, [ecx+14h]
0x879985: mov     eax, ds:0B43110h
0x87998A: mov     ebx, [edi+4]
0x87998D: add     edi, 4
0x879990: cmp     ebx, eax
0x879992: mov     ebp, eax
0x879994: jz      short loc_8799C6
0x879996: test    ebx, ebx
0x879998: jz      short loc_8799B6
0x87999A: lea     edx, [ebx+4]
0x87999D: push    edx; lpAddend
0x87999E: call    dword ptr ds:0A2807Ch
0x8799A4: test    eax, eax
0x8799A6: jnz     short loc_8799B6
0x8799A8: test    ebx, ebx
0x8799AA: jz      short loc_8799B6
0x8799AC: mov     eax, [ebx]
0x8799AE: mov     edx, [eax]
0x8799B0: push    1
0x8799B2: mov     ecx, ebx
0x8799B4: call    edx
0x8799B6: test    ebp, ebp
0x8799B8: mov     [edi], ebp
0x8799BA: jz      short loc_8799C6
0x8799BC: add     ebp, 4
0x8799BF: push    ebp; lpAddend
0x8799C0: call    dword ptr ds:0A28078h
0x8799C6: mov     ecx, [esi+24h]
0x8799C9: mov     edi, [ecx+18h]
0x8799CC: mov     eax, ds:0B43108h
0x8799D1: mov     ebx, [edi+4]
0x8799D4: add     edi, 4
0x8799D7: cmp     ebx, eax
0x8799D9: mov     ebp, eax
0x8799DB: jz      short loc_879A0D
0x8799DD: test    ebx, ebx
0x8799DF: jz      short loc_8799FD
0x8799E1: lea     edx, [ebx+4]
0x8799E4: push    edx; lpAddend
0x8799E5: call    dword ptr ds:0A2807Ch
0x8799EB: test    eax, eax
0x8799ED: jnz     short loc_8799FD
0x8799EF: test    ebx, ebx
0x8799F1: jz      short loc_8799FD
0x8799F3: mov     eax, [ebx]
0x8799F5: mov     edx, [eax]
0x8799F7: push    1
0x8799F9: mov     ecx, ebx
0x8799FB: call    edx
0x8799FD: test    ebp, ebp
0x8799FF: mov     [edi], ebp
0x879A01: jz      short loc_879A0D
0x879A03: add     ebp, 4
0x879A06: push    ebp; lpAddend
0x879A07: call    dword ptr ds:0A28078h
0x879A0D: mov     eax, [esi+24h]
0x879A10: mov     ebx, [eax+1Ch]
0x879A13: mov     eax, ds:0B4310Ch
0x879A18: mov     edi, [ebx+4]
0x879A1B: cmp     edi, eax
0x879A1D: mov     ebp, eax
0x879A1F: jz      short loc_879A52
0x879A21: test    edi, edi
0x879A23: jz      short loc_879A41
0x879A25: lea     ecx, [edi+4]
0x879A28: push    ecx; lpAddend
0x879A29: call    dword ptr ds:0A2807Ch
0x879A2F: test    eax, eax
0x879A31: jnz     short loc_879A41
0x879A33: test    edi, edi
0x879A35: jz      short loc_879A41
0x879A37: mov     edx, [edi]
0x879A39: mov     eax, [edx]
0x879A3B: push    1
0x879A3D: mov     ecx, edi
0x879A3F: call    eax
0x879A41: test    ebp, ebp
0x879A43: mov     [ebx+4], ebp
0x879A46: jz      short loc_879A52
0x879A48: add     ebp, 4
0x879A4B: push    ebp; lpAddend
0x879A4C: call    dword ptr ds:0A28078h
0x879A52: mov     ebx, 1
0x879A57: add     [esi+60h], ebx
0x879A5A: mov     [esp+24h+arg_8], esi
0x879A5E: mov     edi, [esp+24h+var_10]
0x879A62: mov     edx, [edi+38h]
0x879A65: lea     ecx, [esp+24h+arg_8]
0x879A69: push    ecx
0x879A6A: push    edx
0x879A6B: lea     ecx, [edi+40h]
0x879A6E: mov     [esp+2Ch+var_4], 0
0x879A76: call    sub_76CE40
0x879A7B: or      eax, 0FFFFFFFFh
0x879A7E: add     [esi+60h], eax
0x879A81: mov     [esp+24h+var_4], eax
0x879A85: jnz     short loc_879A8E
0x879A87: mov     ecx, esi
0x879A89: call    sub_7604D0
0x879A8E: add     [edi+38h], ebx
0x879A91: mov     ecx, [esp+24h+var_C]
0x879A95: mov     large fs:0, ecx
0x879A9C: pop     ecx
0x879A9D: pop     edi
0x879A9E: pop     esi
0x879A9F: pop     ebp
0x879AA0: pop     ebx
0x879AA1: add     esp, 10h
0x879AA4: retn    10h
