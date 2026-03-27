0x8B96D0: push    0FFFFFFFFh
0x8B96D2: push    offset SEH_8B96D0
0x8B96D7: mov     eax, large fs:0
0x8B96DD: push    eax
0x8B96DE: push    ecx
0x8B96DF: push    ebx
0x8B96E0: push    ebp
0x8B96E1: push    esi
0x8B96E2: push    edi
0x8B96E3: mov     eax, ds:0B30AACh
0x8B96E8: xor     eax, esp
0x8B96EA: push    eax
0x8B96EB: lea     eax, [esp+24h+var_C]
0x8B96EF: mov     large fs:0, eax
0x8B96F5: mov     esi, ecx
0x8B96F7: mov     [esp+24h+var_10], esi
0x8B96FB: call    sub_8A4150
0x8B9700: mov     edi, [esp+24h+arg_0]
0x8B9704: mov     dword ptr [esi], offset ??_7bhkRigidBodyT@@6B@; const bhkRigidBodyT::`vftable'
0x8B970A: add     dword ptr ds:0BA8014h, 1
0x8B9711: mov     ebp, [edi+8]
0x8B9714: xor     ebx, ebx
0x8B9716: mov     ecx, ebp
0x8B9718: mov     [esp+24h+var_4], ebx
0x8B971C: call    sub_8BC720
0x8B9721: mov     eax, [edi+8]
0x8B9724: cmp     eax, ebx
0x8B9726: jz      short loc_8B9738
0x8B9728: add     eax, 14h
0x8B972B: cmp     eax, ebx
0x8B972D: jz      short loc_8B9738
0x8B972F: mov     eax, [eax]
0x8B9731: cmp     eax, ebx
0x8B9733: jz      short loc_8B9738
0x8B9735: mov     ebx, [eax+8]
0x8B9738: test    ebx, ebx
0x8B973A: jz      short loc_8B9746
0x8B973C: lea     eax, [ebx+4]
0x8B973F: push    eax; lpAddend
0x8B9740: call    dword ptr ds:0A28078h
0x8B9746: mov     edx, [edi]
0x8B9748: mov     eax, [edx+4Ch]
0x8B974B: push    0
0x8B974D: mov     ecx, edi
0x8B974F: call    eax
0x8B9751: push    ebp
0x8B9752: mov     ecx, esi
0x8B9754: call    sub_89D730
0x8B9759: test    ebx, ebx
0x8B975B: jz      short loc_8B9775
0x8B975D: lea     ecx, [ebx+4]
0x8B9760: push    ecx; lpAddend
0x8B9761: call    dword ptr ds:0A2807Ch
0x8B9767: test    eax, eax
0x8B9769: jnz     short loc_8B9775
0x8B976B: mov     edx, [ebx]
0x8B976D: mov     eax, [edx]
0x8B976F: push    1
0x8B9771: mov     ecx, ebx
0x8B9773: call    eax
0x8B9775: mov     ecx, ebp
0x8B9777: call    sub_8BC730
0x8B977C: mov     eax, esi
0x8B977E: mov     ecx, dword ptr [esp+24h+var_C]
0x8B9782: mov     large fs:0, ecx
0x8B9789: pop     ecx
0x8B978A: pop     edi
0x8B978B: pop     esi
0x8B978C: pop     ebp
0x8B978D: pop     ebx
0x8B978E: add     esp, 10h
0x8B9791: retn    4
