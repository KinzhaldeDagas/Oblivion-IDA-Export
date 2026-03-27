0x92A780: push    ebp
0x92A781: mov     ebp, esp
0x92A783: and     esp, 0FFFFFFF0h
0x92A786: sub     esp, 44h
0x92A789: push    ebx
0x92A78A: mov     ebx, large fs:2Ch
0x92A791: mov     [esp+48h+var_34], ecx
0x92A795: mov     ecx, ds:0BA9DE4h
0x92A79B: mov     eax, [ebx+ecx*4]
0x92A79E: mov     edx, [eax+1A4h]
0x92A7A4: push    esi
0x92A7A5: cmp     edx, [eax+1A8h]
0x92A7AB: push    edi
0x92A7AC: jnb     short loc_92A7D2
0x92A7AE: mov     esi, eax
0x92A7B0: mov     ecx, [esi+1A4h]
0x92A7B6: mov     dword ptr [ecx], offset aTtrcconvtransl; "TtrcConvTransl"
0x92A7BC: rdtsc
0x92A7BE: mov     [esp+50h+var_38], eax
0x92A7C2: mov     eax, [esp+50h+var_38]
0x92A7C6: mov     [ecx+4], eax
0x92A7C9: add     ecx, 0Ch
0x92A7CC: mov     [esi+1A4h], ecx
0x92A7D2: mov     eax, [ebp+arg_4]
0x92A7D5: movaps  xmm1, xmmword ptr [eax]
0x92A7D8: mov     esi, eax
0x92A7DA: mov     ecx, 0Ch
0x92A7DF: lea     edi, [esp+50h+var_30]
0x92A7E3: rep movsd
0x92A7E5: mov     ecx, [esp+50h+var_34]
0x92A7E9: movaps  xmm0, xmmword ptr [ecx+20h]
0x92A7ED: mov     ecx, [ecx+10h]
0x92A7F0: subps   xmm1, xmm0
0x92A7F3: movaps  [esp+50h+var_30], xmm1
0x92A7F8: movaps  xmm1, xmmword ptr [eax+10h]
0x92A7FC: mov     eax, [ebp+arg_8]
0x92A7FF: push    eax
0x92A800: lea     eax, [esp+54h+var_30]
0x92A804: push    eax
0x92A805: subps   xmm1, xmm0
0x92A808: lea     eax, [esp+58h+var_39]
0x92A80C: movaps  [esp+58h+var_20], xmm1
0x92A811: mov     edx, [ecx]
0x92A813: push    eax
0x92A814: call    dword ptr [edx+14h]
0x92A817: mov     ecx, ds:0BA9DE4h
0x92A81D: mov     eax, [ebx+ecx*4]
0x92A820: mov     edx, [eax+1A4h]
0x92A826: cmp     edx, [eax+1A8h]
0x92A82C: jnb     short loc_92A864
0x92A82E: mov     ebx, eax
0x92A830: mov     ecx, [ebx+1A4h]
0x92A836: mov     dword ptr [ecx], offset aEt; "Et"
0x92A83C: rdtsc
0x92A83E: mov     [esp+50h+var_34], eax
0x92A842: mov     eax, [esp+50h+var_34]
0x92A846: mov     [ecx+4], eax
0x92A849: mov     eax, [ebp+arg_0]
0x92A84C: add     ecx, 0Ch
0x92A84F: mov     [ebx+1A4h], ecx
0x92A855: mov     cl, [esp+50h+var_39]
0x92A859: mov     [eax], cl
0x92A85B: pop     edi
0x92A85C: pop     esi
0x92A85D: pop     ebx
0x92A85E: mov     esp, ebp
0x92A860: pop     ebp
0x92A861: retn    0Ch
0x92A864: mov     eax, [ebp+arg_0]
0x92A867: mov     dl, [esp+50h+var_39]
0x92A86B: pop     edi
0x92A86C: pop     esi
0x92A86D: mov     [eax], dl
0x92A86F: pop     ebx
0x92A870: mov     esp, ebp
0x92A872: pop     ebp
0x92A873: retn    0Ch
