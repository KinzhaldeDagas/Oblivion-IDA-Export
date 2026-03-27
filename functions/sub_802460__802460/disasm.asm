0x802460: sub     esp, 10Ch
0x802466: mov     eax, ds:0B30AACh
0x80246B: xor     eax, esp
0x80246D: mov     [esp+10Ch+var_4], eax
0x802474: mov     ecx, [esp+10Ch+Str1]
0x80247B: mov     eax, [esp+10Ch+arg_0]
0x802482: mov     eax, [eax+4]
0x802485: push    ebx
0x802486: mov     ebx, [esp+110h+arg_10]
0x80248D: push    ebp
0x80248E: mov     ebp, [esp+114h+arg_14]
0x802495: push    esi
0x802496: lea     edx, [esp+118h+var_108]
0x80249A: push    edx; int
0x80249B: push    ecx; Str1
0x80249C: push    eax; FullPath
0x80249D: call    sub_431180
0x8024A2: push    20h ; ' '
0x8024A4: push    2800h
0x8024A9: lea     ecx, [esp+12Ch+var_108]
0x8024AD: push    0
0x8024AF: push    ecx
0x8024B0: call    sub_431130
0x8024B5: mov     esi, eax
0x8024B7: add     esp, 1Ch
0x8024BA: test    esi, esi
0x8024BC: jz      short loc_802513
0x8024BE: cmp     byte ptr [esi+24h], 0
0x8024C2: mov     ecx, esi
0x8024C4: jz      short loc_80250B
0x8024C6: mov     edx, [esi]
0x8024C8: mov     eax, [edx+1Ch]
0x8024CB: push    edi
0x8024CC: call    eax
0x8024CE: mov     edi, eax
0x8024D0: push    1
0x8024D2: push    edi
0x8024D3: mov     ecx, offset FormHeap
0x8024D8: call    j_MemoryHeap_Alloc
0x8024DD: push    1
0x8024DF: lea     ecx, [esp+120h+var_10C]
0x8024E3: push    ecx
0x8024E4: push    edi
0x8024E5: push    eax
0x8024E6: mov     [ebx], eax
0x8024E8: mov     edx, [esi+4]
0x8024EB: push    esi
0x8024EC: mov     [esp+130h+var_10C], 1
0x8024F4: call    edx
0x8024F6: mov     [ebp+0], eax
0x8024F9: mov     eax, [esi]
0x8024FB: mov     edx, [eax]
0x8024FD: add     esp, 14h
0x802500: push    1
0x802502: mov     ecx, esi
0x802504: call    edx
0x802506: xor     eax, eax
0x802508: pop     edi
0x802509: jmp     short loc_802518
0x80250B: mov     eax, [esi]
0x80250D: mov     edx, [eax]
0x80250F: push    1
0x802511: call    edx
0x802513: mov     eax, 80004005h
0x802518: mov     ecx, [esp+118h+var_4]
0x80251F: pop     esi
0x802520: pop     ebp
0x802521: pop     ebx
0x802522: xor     ecx, esp
0x802524: call    @__security_check_cookie@4; __security_check_cookie(x)
0x802529: add     esp, 10Ch
0x80252F: retn    18h
