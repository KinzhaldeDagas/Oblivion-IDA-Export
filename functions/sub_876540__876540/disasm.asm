0x876540: push    0FFFFFFFFh
0x876542: push    offset SEH_882120
0x876547: mov     eax, large fs:0
0x87654D: push    eax
0x87654E: push    ebx
0x87654F: push    ebp
0x876550: push    esi
0x876551: push    edi
0x876552: mov     eax, ds:0B30AACh
0x876557: xor     eax, esp
0x876559: push    eax
0x87655A: lea     eax, [esp+20h+var_C]
0x87655E: mov     large fs:0, eax
0x876564: mov     ebx, ecx
0x876566: mov     eax, [esp+20h+arg_8]
0x87656A: mov     edi, [eax+0Ch]
0x87656D: mov     esi, ds:0B4767Ch
0x876573: push    edi
0x876574: call    sub_848E50
0x876579: mov     edx, [ebx]
0x87657B: mov     eax, [esp+20h+arg_0]
0x87657F: mov     edx, [edx+0BCh]
0x876585: push    0
0x876587: push    edi
0x876588: push    eax
0x876589: mov     ecx, ebx
0x87658B: call    edx
0x87658D: mov     eax, [esi+24h]
0x876590: mov     ebp, [esp+20h+arg_C]
0x876594: mov     edi, [eax]
0x876596: mov     edx, [ebp+0]
0x876599: mov     eax, [edx+88h]
0x87659F: push    0
0x8765A1: mov     ecx, ebp
0x8765A3: mov     [esp+24h+arg_8], edi
0x8765A7: call    eax
0x8765A9: mov     edi, [edi+4]
0x8765AC: cmp     edi, eax
0x8765AE: mov     [esp+20h+arg_0], eax
0x8765B2: jz      short loc_8765ED
0x8765B4: test    edi, edi
0x8765B6: jz      short loc_8765D8
0x8765B8: lea     ecx, [edi+4]
0x8765BB: push    ecx; lpAddend
0x8765BC: call    dword ptr ds:0A2807Ch
0x8765C2: test    eax, eax
0x8765C4: jnz     short loc_8765D4
0x8765C6: test    edi, edi
0x8765C8: jz      short loc_8765D4
0x8765CA: mov     edx, [edi]
0x8765CC: mov     eax, [edx]
0x8765CE: push    1
0x8765D0: mov     ecx, edi
0x8765D2: call    eax
0x8765D4: mov     eax, [esp+20h+arg_0]
0x8765D8: test    eax, eax
0x8765DA: mov     ecx, [esp+20h+arg_8]
0x8765DE: mov     [ecx+4], eax
0x8765E1: jz      short loc_8765ED
0x8765E3: add     eax, 4
0x8765E6: push    eax; lpAddend
0x8765E7: call    dword ptr ds:0A28078h
0x8765ED: mov     edx, [esi+24h]
0x8765F0: mov     edi, [edx+4]
0x8765F3: push    0
0x8765F5: push    ebp
0x8765F6: mov     ecx, ebx
0x8765F8: mov     [esp+28h+arg_8], edi
0x8765FC: call    sub_848FD0
0x876601: mov     edi, [edi+4]
0x876604: cmp     edi, eax
0x876606: mov     [esp+20h+arg_0], eax
0x87660A: jz      short loc_876645
0x87660C: test    edi, edi
0x87660E: jz      short loc_876630
0x876610: lea     eax, [edi+4]
0x876613: push    eax; lpAddend
0x876614: call    dword ptr ds:0A2807Ch
0x87661A: test    eax, eax
0x87661C: jnz     short loc_87662C
0x87661E: test    edi, edi
0x876620: jz      short loc_87662C
0x876622: mov     edx, [edi]
0x876624: mov     eax, [edx]
0x876626: push    1
0x876628: mov     ecx, edi
0x87662A: call    eax
0x87662C: mov     eax, [esp+20h+arg_0]
0x876630: test    eax, eax
0x876632: mov     ecx, [esp+20h+arg_8]
0x876636: mov     [ecx+4], eax
0x876639: jz      short loc_876645
0x87663B: add     eax, 4
0x87663E: push    eax; lpAddend
0x87663F: call    dword ptr ds:0A28078h
0x876645: mov     edx, [esi+24h]
0x876648: mov     eax, [edx+10h]
0x87664B: mov     edx, [ebp+0]
0x87664E: mov     [esp+20h+arg_8], eax
0x876652: mov     eax, [edx+90h]
0x876658: push    0
0x87665A: mov     ecx, ebp
0x87665C: call    eax
0x87665E: mov     ecx, [esp+20h+arg_8]
0x876662: mov     ebp, [ecx+4]
0x876665: mov     edi, eax
0x876667: cmp     ebp, edi
0x876669: jz      short loc_8766A1
0x87666B: test    ebp, ebp
0x87666D: jz      short loc_87668C
0x87666F: lea     edx, [ebp+4]
0x876672: push    edx; lpAddend
0x876673: call    dword ptr ds:0A2807Ch
0x876679: test    eax, eax
0x87667B: jnz     short loc_87668C
0x87667D: test    ebp, ebp
0x87667F: jz      short loc_87668C
0x876681: mov     eax, [ebp+0]
0x876684: mov     edx, [eax]
0x876686: push    1
0x876688: mov     ecx, ebp
0x87668A: call    edx
0x87668C: test    edi, edi
0x87668E: mov     eax, [esp+20h+arg_8]
0x876692: mov     [eax+4], edi
0x876695: jz      short loc_8766A1
0x876697: add     edi, 4
0x87669A: push    edi; lpAddend
0x87669B: call    dword ptr ds:0A28078h
0x8766A1: mov     ecx, [esi+24h]
0x8766A4: mov     edi, [ecx+18h]
0x8766A7: mov     eax, ds:0B43108h
0x8766AC: mov     ebp, [edi+4]
0x8766AF: add     edi, 4
0x8766B2: cmp     ebp, eax
0x8766B4: mov     [esp+20h+arg_8], eax
0x8766B8: jz      short loc_8766EF
0x8766BA: test    ebp, ebp
0x8766BC: jz      short loc_8766DF
0x8766BE: lea     edx, [ebp+4]
0x8766C1: push    edx; lpAddend
0x8766C2: call    dword ptr ds:0A2807Ch
0x8766C8: test    eax, eax
0x8766CA: jnz     short loc_8766DB
0x8766CC: test    ebp, ebp
0x8766CE: jz      short loc_8766DB
0x8766D0: mov     eax, [ebp+0]
0x8766D3: mov     edx, [eax]
0x8766D5: push    1
0x8766D7: mov     ecx, ebp
0x8766D9: call    edx
0x8766DB: mov     eax, [esp+20h+arg_8]
0x8766DF: test    eax, eax
0x8766E1: mov     [edi], eax
0x8766E3: jz      short loc_8766EF
0x8766E5: add     eax, 4
0x8766E8: push    eax; lpAddend
0x8766E9: call    dword ptr ds:0A28078h
0x8766EF: mov     eax, [esi+24h]
0x8766F2: mov     edi, [eax+1Ch]
0x8766F5: mov     eax, ds:0B4310Ch
0x8766FA: mov     ebp, [edi+4]
0x8766FD: cmp     ebp, eax
0x8766FF: mov     ecx, eax
0x876701: mov     [esp+20h+arg_8], ecx
0x876705: jz      short loc_87673D
0x876707: test    ebp, ebp
0x876709: jz      short loc_87672C
0x87670B: lea     ecx, [ebp+4]
0x87670E: push    ecx; lpAddend
0x87670F: call    dword ptr ds:0A2807Ch
0x876715: test    eax, eax
0x876717: jnz     short loc_876728
0x876719: test    ebp, ebp
0x87671B: jz      short loc_876728
0x87671D: mov     edx, [ebp+0]
0x876720: mov     eax, [edx]
0x876722: push    1
0x876724: mov     ecx, ebp
0x876726: call    eax
0x876728: mov     ecx, [esp+20h+arg_8]
0x87672C: test    ecx, ecx
0x87672E: mov     [edi+4], ecx
0x876731: jz      short loc_87673D
0x876733: add     ecx, 4
0x876736: push    ecx; lpAddend
0x876737: call    dword ptr ds:0A28078h
0x87673D: mov     edi, 1
0x876742: add     [esi+60h], edi
0x876745: mov     [esp+20h+arg_8], esi
0x876749: mov     edx, [ebx+38h]
0x87674C: lea     ecx, [esp+20h+arg_8]
0x876750: push    ecx
0x876751: push    edx
0x876752: lea     ecx, [ebx+40h]
0x876755: mov     [esp+28h+var_4], 0
0x87675D: call    sub_76CE40
0x876762: or      eax, 0FFFFFFFFh
0x876765: add     [esi+60h], eax
0x876768: mov     [esp+20h+var_4], eax
0x87676C: jnz     short loc_876775
0x87676E: mov     ecx, esi
0x876770: call    sub_7604D0
0x876775: add     [ebx+38h], edi
0x876778: mov     ecx, [esp+20h+var_C]
0x87677C: mov     large fs:0, ecx
0x876783: pop     ecx
0x876784: pop     edi
0x876785: pop     esi
0x876786: pop     ebp
0x876787: pop     ebx
0x876788: add     esp, 0Ch
0x87678B: retn    10h
