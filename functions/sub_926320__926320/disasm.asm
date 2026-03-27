0x926320: push    esi
0x926321: mov     esi, ecx
0x926323: mov     eax, [esi+10h]
0x926326: push    edi
0x926327: mov     edi, [esp+8+arg_0]
0x92632B: cmp     eax, edi
0x92632D: jge     short loc_926387
0x92632F: mov     ecx, ds:0BA7D98h
0x926335: mov     eax, [ecx]
0x926337: push    ebx
0x926338: lea     edx, [edi+edi*2]
0x92633B: push    14h
0x92633D: shl     edx, 2
0x926340: push    edx
0x926341: call    dword ptr [eax+10h]
0x926344: mov     ebx, eax
0x926346: mov     eax, [esi+0Ch]
0x926349: test    eax, eax
0x92634B: jz      short loc_926361
0x92634D: mov     ecx, [esi+10h]
0x926350: lea     ecx, [ecx+ecx*2]
0x926353: shl     ecx, 2
0x926356: push    ecx
0x926357: push    eax
0x926358: push    ebx
0x926359: call    sub_8B1890
0x92635E: add     esp, 0Ch
0x926361: mov     eax, [esi+10h]
0x926364: test    eax, eax
0x926366: jz      short loc_926380
0x926368: mov     ecx, ds:0BA7D98h
0x92636E: mov     edx, [ecx]
0x926370: lea     eax, [eax+eax*2]
0x926373: push    14h
0x926375: shl     eax, 2
0x926378: push    eax
0x926379: mov     eax, [esi+0Ch]
0x92637C: push    eax
0x92637D: call    dword ptr [edx+14h]
0x926380: mov     [esi+0Ch], ebx
0x926383: mov     [esi+10h], edi
0x926386: pop     ebx
0x926387: pop     edi
0x926388: pop     esi
0x926389: retn    4
