0x55F550: push    0FFFFFFFFh
0x55F552: push    offset SEH_55F550
0x55F557: mov     eax, large fs:0
0x55F55D: push    eax
0x55F55E: sub     esp, 8
0x55F561: push    ebp
0x55F562: push    esi
0x55F563: push    edi
0x55F564: mov     eax, ds:0B30AACh
0x55F569: xor     eax, esp
0x55F56B: push    eax
0x55F56C: lea     eax, [esp+24h+var_C]
0x55F570: mov     large fs:0, eax
0x55F576: mov     edi, ecx
0x55F578: mov     [esp+24h+var_10], edi
0x55F57C: push    0
0x55F57E: mov     [esp+28h+var_4], 5
0x55F586: call    sub_55E390
0x55F58B: mov     eax, ds:0B43108h
0x55F590: mov     ebp, ds:0A2807Ch
0x55F596: add     esp, 4
0x55F599: test    eax, eax
0x55F59B: jz      short loc_55F5C1
0x55F59D: mov     esi, eax
0x55F59F: add     eax, 4
0x55F5A2: push    eax; lpAddend
0x55F5A3: call    ebp ; InterlockedDecrement
0x55F5A5: test    eax, eax
0x55F5A7: jnz     short loc_55F5B7
0x55F5A9: test    esi, esi
0x55F5AB: jz      short loc_55F5B7
0x55F5AD: mov     eax, [esi]
0x55F5AF: mov     edx, [eax]
0x55F5B1: push    1
0x55F5B3: mov     ecx, esi
0x55F5B5: call    edx
0x55F5B7: mov     dword ptr ds:0B43108h, 0
0x55F5C1: mov     esi, ds:0B4310Ch
0x55F5C7: test    esi, esi
0x55F5C9: jz      short loc_55F5ED
0x55F5CB: lea     eax, [esi+4]
0x55F5CE: push    eax; lpAddend
0x55F5CF: call    ebp ; InterlockedDecrement
0x55F5D1: test    eax, eax
0x55F5D3: jnz     short loc_55F5E3
0x55F5D5: test    esi, esi
0x55F5D7: jz      short loc_55F5E3
0x55F5D9: mov     edx, [esi]
0x55F5DB: mov     eax, [edx]
0x55F5DD: push    1
0x55F5DF: mov     ecx, esi
0x55F5E1: call    eax
0x55F5E3: mov     dword ptr ds:0B4310Ch, 0
0x55F5ED: mov     byte ptr ds:0B06A28h, 1
0x55F5F4: call    sub_4A3C60
0x55F5F9: mov     esi, [edi+24h]
0x55F5FC: test    esi, esi
0x55F5FE: jz      short loc_55F632
0x55F600: push    1; a2
0x55F602: mov     ecx, esi; this
0x55F604: mov     dword ptr [esi], offset ??_7?$LockFreeMap@PAVTESObjectREFR@@PAVBSTreeNode@@@@6B@; const LockFreeMap<TESObjectREFR *,BSTreeNode *>::`vftable'
0x55F60A: call    sub_55F3C0
0x55F60F: mov     eax, [esi+0Ch]
0x55F612: push    eax
0x55F613: call    FormHeapFree
0x55F618: mov     ecx, [esi+4]
0x55F61B: mov     dword ptr [esp+28h+var_14], ecx
0x55F61F: mov     edx, dword ptr [esp+28h+var_14]
0x55F623: push    edx
0x55F624: call    FormHeapFree
0x55F629: push    esi
0x55F62A: call    FormHeapFree
0x55F62F: add     esp, 0Ch
0x55F632: mov     esi, [edi+18h]
0x55F635: test    esi, esi
0x55F637: mov     byte ptr [esp+24h+var_4], 4
0x55F63C: jz      short loc_55F656
0x55F63E: lea     eax, [esi+4]
0x55F641: push    eax; lpAddend
0x55F642: call    ebp ; InterlockedDecrement
0x55F644: test    eax, eax
0x55F646: jnz     short loc_55F656
0x55F648: test    esi, esi
0x55F64A: jz      short loc_55F656
0x55F64C: mov     edx, [esi]
0x55F64E: mov     eax, [edx]
0x55F650: push    1
0x55F652: mov     ecx, esi
0x55F654: call    eax
0x55F656: mov     esi, [edi+14h]
0x55F659: test    esi, esi
0x55F65B: mov     byte ptr [esp+24h+var_4], 3
0x55F660: jz      short loc_55F67A
0x55F662: lea     ecx, [esi+4]
0x55F665: push    ecx; lpAddend
0x55F666: call    ebp ; InterlockedDecrement
0x55F668: test    eax, eax
0x55F66A: jnz     short loc_55F67A
0x55F66C: test    esi, esi
0x55F66E: jz      short loc_55F67A
0x55F670: mov     edx, [esi]
0x55F672: mov     eax, [edx]
0x55F674: push    1
0x55F676: mov     ecx, esi
0x55F678: call    eax
0x55F67A: mov     esi, [edi+10h]
0x55F67D: test    esi, esi
0x55F67F: mov     byte ptr [esp+24h+var_4], 2
0x55F684: jz      short loc_55F69E
0x55F686: lea     ecx, [esi+4]
0x55F689: push    ecx; lpAddend
0x55F68A: call    ebp ; InterlockedDecrement
0x55F68C: test    eax, eax
0x55F68E: jnz     short loc_55F69E
0x55F690: test    esi, esi
0x55F692: jz      short loc_55F69E
0x55F694: mov     edx, [esi]
0x55F696: mov     eax, [edx]
0x55F698: push    1
0x55F69A: mov     ecx, esi
0x55F69C: call    eax
0x55F69E: mov     esi, [edi+0Ch]
0x55F6A1: test    esi, esi
0x55F6A3: mov     byte ptr [esp+24h+var_4], 1
0x55F6A8: jz      short loc_55F6C2
0x55F6AA: lea     ecx, [esi+4]
0x55F6AD: push    ecx; lpAddend
0x55F6AE: call    ebp ; InterlockedDecrement
0x55F6B0: test    eax, eax
0x55F6B2: jnz     short loc_55F6C2
0x55F6B4: test    esi, esi
0x55F6B6: jz      short loc_55F6C2
0x55F6B8: mov     edx, [esi]
0x55F6BA: mov     eax, [edx]
0x55F6BC: push    1
0x55F6BE: mov     ecx, esi
0x55F6C0: call    eax
0x55F6C2: mov     esi, [edi+8]
0x55F6C5: test    esi, esi
0x55F6C7: mov     byte ptr [esp+24h+var_4], 0
0x55F6CC: jz      short loc_55F6E6
0x55F6CE: lea     ecx, [esi+4]
0x55F6D1: push    ecx; lpAddend
0x55F6D2: call    ebp ; InterlockedDecrement
0x55F6D4: test    eax, eax
0x55F6D6: jnz     short loc_55F6E6
0x55F6D8: test    esi, esi
0x55F6DA: jz      short loc_55F6E6
0x55F6DC: mov     edx, [esi]
0x55F6DE: mov     eax, [edx]
0x55F6E0: push    1
0x55F6E2: mov     ecx, esi
0x55F6E4: call    eax
0x55F6E6: mov     esi, [edi+4]
0x55F6E9: test    esi, esi
0x55F6EB: mov     [esp+24h+var_4], 0FFFFFFFFh
0x55F6F3: jz      short loc_55F70D
0x55F6F5: lea     ecx, [esi+4]
0x55F6F8: push    ecx; lpAddend
0x55F6F9: call    ebp ; InterlockedDecrement
0x55F6FB: test    eax, eax
0x55F6FD: jnz     short loc_55F70D
0x55F6FF: test    esi, esi
0x55F701: jz      short loc_55F70D
0x55F703: mov     edx, [esi]
0x55F705: mov     eax, [edx]
0x55F707: push    1
0x55F709: mov     ecx, esi
0x55F70B: call    eax
0x55F70D: mov     ecx, dword ptr [esp+24h+var_C]
0x55F711: mov     large fs:0, ecx
0x55F718: pop     ecx
0x55F719: pop     edi
0x55F71A: pop     esi
0x55F71B: pop     ebp
0x55F71C: add     esp, 14h
0x55F71F: retn
