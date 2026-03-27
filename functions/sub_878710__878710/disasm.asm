0x878710: push    0FFFFFFFFh
0x878712: push    offset SEH_879360
0x878717: mov     eax, large fs:0
0x87871D: push    eax
0x87871E: push    ecx
0x87871F: push    ebx
0x878720: push    ebp
0x878721: push    esi
0x878722: push    edi
0x878723: mov     eax, ds:0B30AACh
0x878728: xor     eax, esp
0x87872A: push    eax
0x87872B: lea     eax, [esp+24h+var_C]
0x87872F: mov     large fs:0, eax
0x878735: mov     ebx, ecx
0x878737: mov     [esp+24h+var_10], ebx
0x87873B: mov     ebp, [esp+24h+arg_8]
0x87873F: mov     edi, [ebp+0Ch]
0x878742: mov     esi, ds:0B476BCh
0x878748: push    edi
0x878749: call    sub_848E50
0x87874E: mov     ebp, [ebp+10h]
0x878751: mov     ecx, [esp+24h+arg_0]
0x878755: mov     eax, [ebx]
0x878757: mov     edx, [eax+0BCh]
0x87875D: push    ebp
0x87875E: push    edi
0x87875F: push    ecx
0x878760: mov     ecx, ebx
0x878762: call    edx
0x878764: mov     eax, [esi+24h]
0x878767: mov     ebx, [esp+24h+arg_C]
0x87876B: mov     edi, [eax]
0x87876D: mov     edx, [ebx]
0x87876F: mov     eax, [edx+88h]
0x878775: push    0
0x878777: mov     ecx, ebx
0x878779: mov     [esp+28h+arg_8], edi
0x87877D: call    eax
0x87877F: mov     edi, [edi+4]
0x878782: mov     ebp, eax
0x878784: cmp     edi, ebp
0x878786: jz      short loc_8787BD
0x878788: test    edi, edi
0x87878A: jz      short loc_8787A8
0x87878C: lea     ecx, [edi+4]
0x87878F: push    ecx; lpAddend
0x878790: call    dword ptr ds:0A2807Ch
0x878796: test    eax, eax
0x878798: jnz     short loc_8787A8
0x87879A: test    edi, edi
0x87879C: jz      short loc_8787A8
0x87879E: mov     edx, [edi]
0x8787A0: mov     eax, [edx]
0x8787A2: push    1
0x8787A4: mov     ecx, edi
0x8787A6: call    eax
0x8787A8: test    ebp, ebp
0x8787AA: mov     ecx, [esp+24h+arg_8]
0x8787AE: mov     [ecx+4], ebp
0x8787B1: jz      short loc_8787BD
0x8787B3: add     ebp, 4
0x8787B6: push    ebp; lpAddend
0x8787B7: call    dword ptr ds:0A28078h
0x8787BD: mov     edx, [esi+24h]
0x8787C0: mov     edi, [edx+4]
0x8787C3: mov     ecx, [esp+24h+var_10]
0x8787C7: push    0
0x8787C9: push    ebx
0x8787CA: mov     [esp+2Ch+arg_8], edi
0x8787CE: call    sub_848FD0
0x8787D3: mov     edi, [edi+4]
0x8787D6: mov     ebp, eax
0x8787D8: cmp     edi, ebp
0x8787DA: jz      short loc_878811
0x8787DC: test    edi, edi
0x8787DE: jz      short loc_8787FC
0x8787E0: lea     eax, [edi+4]
0x8787E3: push    eax; lpAddend
0x8787E4: call    dword ptr ds:0A2807Ch
0x8787EA: test    eax, eax
0x8787EC: jnz     short loc_8787FC
0x8787EE: test    edi, edi
0x8787F0: jz      short loc_8787FC
0x8787F2: mov     edx, [edi]
0x8787F4: mov     eax, [edx]
0x8787F6: push    1
0x8787F8: mov     ecx, edi
0x8787FA: call    eax
0x8787FC: test    ebp, ebp
0x8787FE: mov     ecx, [esp+24h+arg_8]
0x878802: mov     [ecx+4], ebp
0x878805: jz      short loc_878811
0x878807: add     ebp, 4
0x87880A: push    ebp; lpAddend
0x87880B: call    dword ptr ds:0A28078h
0x878811: mov     edx, [esi+24h]
0x878814: mov     eax, [ebx]
0x878816: mov     ebp, [edx+10h]
0x878819: mov     edx, [eax+90h]
0x87881F: push    0
0x878821: mov     ecx, ebx
0x878823: call    edx
0x878825: mov     edi, [ebp+4]
0x878828: mov     ebx, eax
0x87882A: cmp     edi, ebx
0x87882C: jz      short loc_87885F
0x87882E: test    edi, edi
0x878830: jz      short loc_87884E
0x878832: lea     eax, [edi+4]
0x878835: push    eax; lpAddend
0x878836: call    dword ptr ds:0A2807Ch
0x87883C: test    eax, eax
0x87883E: jnz     short loc_87884E
0x878840: test    edi, edi
0x878842: jz      short loc_87884E
0x878844: mov     edx, [edi]
0x878846: mov     eax, [edx]
0x878848: push    1
0x87884A: mov     ecx, edi
0x87884C: call    eax
0x87884E: test    ebx, ebx
0x878850: mov     [ebp+4], ebx
0x878853: jz      short loc_87885F
0x878855: add     ebx, 4
0x878858: push    ebx; lpAddend
0x878859: call    dword ptr ds:0A28078h
0x87885F: mov     ecx, [esi+24h]
0x878862: mov     edi, [ecx+14h]
0x878865: mov     eax, ds:0B43110h
0x87886A: mov     ebx, [edi+4]
0x87886D: add     edi, 4
0x878870: cmp     ebx, eax
0x878872: mov     ebp, eax
0x878874: jz      short loc_8788A6
0x878876: test    ebx, ebx
0x878878: jz      short loc_878896
0x87887A: lea     edx, [ebx+4]
0x87887D: push    edx; lpAddend
0x87887E: call    dword ptr ds:0A2807Ch
0x878884: test    eax, eax
0x878886: jnz     short loc_878896
0x878888: test    ebx, ebx
0x87888A: jz      short loc_878896
0x87888C: mov     eax, [ebx]
0x87888E: mov     edx, [eax]
0x878890: push    1
0x878892: mov     ecx, ebx
0x878894: call    edx
0x878896: test    ebp, ebp
0x878898: mov     [edi], ebp
0x87889A: jz      short loc_8788A6
0x87889C: add     ebp, 4
0x87889F: push    ebp; lpAddend
0x8788A0: call    dword ptr ds:0A28078h
0x8788A6: mov     ecx, [esi+24h]
0x8788A9: mov     edi, [ecx+18h]
0x8788AC: mov     eax, ds:0B43108h
0x8788B1: mov     ebx, [edi+4]
0x8788B4: add     edi, 4
0x8788B7: cmp     ebx, eax
0x8788B9: mov     ebp, eax
0x8788BB: jz      short loc_8788ED
0x8788BD: test    ebx, ebx
0x8788BF: jz      short loc_8788DD
0x8788C1: lea     edx, [ebx+4]
0x8788C4: push    edx; lpAddend
0x8788C5: call    dword ptr ds:0A2807Ch
0x8788CB: test    eax, eax
0x8788CD: jnz     short loc_8788DD
0x8788CF: test    ebx, ebx
0x8788D1: jz      short loc_8788DD
0x8788D3: mov     eax, [ebx]
0x8788D5: mov     edx, [eax]
0x8788D7: push    1
0x8788D9: mov     ecx, ebx
0x8788DB: call    edx
0x8788DD: test    ebp, ebp
0x8788DF: mov     [edi], ebp
0x8788E1: jz      short loc_8788ED
0x8788E3: add     ebp, 4
0x8788E6: push    ebp; lpAddend
0x8788E7: call    dword ptr ds:0A28078h
0x8788ED: mov     eax, [esi+24h]
0x8788F0: mov     ebx, [eax+1Ch]
0x8788F3: mov     eax, ds:0B4310Ch
0x8788F8: mov     edi, [ebx+4]
0x8788FB: cmp     edi, eax
0x8788FD: mov     ebp, eax
0x8788FF: jz      short loc_878932
0x878901: test    edi, edi
0x878903: jz      short loc_878921
0x878905: lea     ecx, [edi+4]
0x878908: push    ecx; lpAddend
0x878909: call    dword ptr ds:0A2807Ch
0x87890F: test    eax, eax
0x878911: jnz     short loc_878921
0x878913: test    edi, edi
0x878915: jz      short loc_878921
0x878917: mov     edx, [edi]
0x878919: mov     eax, [edx]
0x87891B: push    1
0x87891D: mov     ecx, edi
0x87891F: call    eax
0x878921: test    ebp, ebp
0x878923: mov     [ebx+4], ebp
0x878926: jz      short loc_878932
0x878928: add     ebp, 4
0x87892B: push    ebp; lpAddend
0x87892C: call    dword ptr ds:0A28078h
0x878932: mov     ebx, 1
0x878937: add     [esi+60h], ebx
0x87893A: mov     [esp+24h+arg_8], esi
0x87893E: mov     edi, [esp+24h+var_10]
0x878942: mov     edx, [edi+38h]
0x878945: lea     ecx, [esp+24h+arg_8]
0x878949: push    ecx
0x87894A: push    edx
0x87894B: lea     ecx, [edi+40h]
0x87894E: mov     [esp+2Ch+var_4], 0
0x878956: call    sub_76CE40
0x87895B: or      eax, 0FFFFFFFFh
0x87895E: add     [esi+60h], eax
0x878961: mov     [esp+24h+var_4], eax
0x878965: jnz     short loc_87896E
0x878967: mov     ecx, esi
0x878969: call    sub_7604D0
0x87896E: add     [edi+38h], ebx
0x878971: mov     ecx, [esp+24h+var_C]
0x878975: mov     large fs:0, ecx
0x87897C: pop     ecx
0x87897D: pop     edi
0x87897E: pop     esi
0x87897F: pop     ebp
0x878980: pop     ebx
0x878981: add     esp, 10h
0x878984: retn    10h
