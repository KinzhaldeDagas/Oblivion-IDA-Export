0x842770: push    0FFFFFFFFh
0x842772: push    offset SEH_882120
0x842777: mov     eax, large fs:0
0x84277D: push    eax
0x84277E: push    ebx
0x84277F: push    ebp
0x842780: push    esi
0x842781: push    edi
0x842782: mov     eax, ds:0B30AACh
0x842787: xor     eax, esp
0x842789: push    eax
0x84278A: lea     eax, [esp+20h+var_C]
0x84278E: mov     large fs:0, eax
0x842794: mov     esi, ecx
0x842796: mov     edi, [esp+20h+arg_8]
0x84279A: mov     eax, [edi+10h]
0x84279D: mov     ebx, ds:0B45710h
0x8427A3: push    eax
0x8427A4: call    sub_848DA0
0x8427A9: mov     edi, [edi+0Ch]
0x8427AC: push    edi
0x8427AD: mov     ecx, esi
0x8427AF: call    sub_848E50
0x8427B4: mov     ecx, [esp+20h+arg_0]
0x8427B8: mov     eax, [esi]
0x8427BA: mov     edx, [eax+0BCh]
0x8427C0: push    0
0x8427C2: push    edi
0x8427C3: push    ecx
0x8427C4: mov     ecx, esi
0x8427C6: call    edx
0x8427C8: mov     eax, [ebx+24h]
0x8427CB: mov     edi, [esp+20h+arg_C]
0x8427CF: mov     ebp, [eax]
0x8427D1: mov     edx, [edi]
0x8427D3: mov     eax, [edx+88h]
0x8427D9: push    0
0x8427DB: mov     ecx, edi
0x8427DD: mov     [esp+24h+arg_8], ebp
0x8427E1: call    eax
0x8427E3: mov     ebp, [ebp+4]
0x8427E6: cmp     ebp, eax
0x8427E8: mov     [esp+20h+arg_0], eax
0x8427EC: jz      short loc_842828
0x8427EE: test    ebp, ebp
0x8427F0: jz      short loc_842813
0x8427F2: lea     ecx, [ebp+4]
0x8427F5: push    ecx; lpAddend
0x8427F6: call    dword ptr ds:0A2807Ch
0x8427FC: test    eax, eax
0x8427FE: jnz     short loc_84280F
0x842800: test    ebp, ebp
0x842802: jz      short loc_84280F
0x842804: mov     edx, [ebp+0]
0x842807: mov     eax, [edx]
0x842809: push    1
0x84280B: mov     ecx, ebp
0x84280D: call    eax
0x84280F: mov     eax, [esp+20h+arg_0]
0x842813: test    eax, eax
0x842815: mov     ecx, [esp+20h+arg_8]
0x842819: mov     [ecx+4], eax
0x84281C: jz      short loc_842828
0x84281E: add     eax, 4
0x842821: push    eax; lpAddend
0x842822: call    dword ptr ds:0A28078h
0x842828: mov     edx, [esp+20h+arg_8]
0x84282C: push    edi
0x84282D: push    edx
0x84282E: mov     ecx, esi
0x842830: call    sub_848FA0
0x842835: mov     eax, [ebx+24h]
0x842838: mov     ebp, [eax+4]
0x84283B: push    0
0x84283D: push    edi
0x84283E: mov     ecx, esi
0x842840: mov     [esp+28h+arg_8], ebp
0x842844: call    sub_848FD0
0x842849: mov     ebp, [ebp+4]
0x84284C: cmp     ebp, eax
0x84284E: mov     [esp+20h+arg_0], eax
0x842852: jz      short loc_84288E
0x842854: test    ebp, ebp
0x842856: jz      short loc_842879
0x842858: lea     ecx, [ebp+4]
0x84285B: push    ecx; lpAddend
0x84285C: call    dword ptr ds:0A2807Ch
0x842862: test    eax, eax
0x842864: jnz     short loc_842875
0x842866: test    ebp, ebp
0x842868: jz      short loc_842875
0x84286A: mov     edx, [ebp+0]
0x84286D: mov     eax, [edx]
0x84286F: push    1
0x842871: mov     ecx, ebp
0x842873: call    eax
0x842875: mov     eax, [esp+20h+arg_0]
0x842879: test    eax, eax
0x84287B: mov     ecx, [esp+20h+arg_8]
0x84287F: mov     [ecx+4], eax
0x842882: jz      short loc_84288E
0x842884: add     eax, 4
0x842887: push    eax; lpAddend
0x842888: call    dword ptr ds:0A28078h
0x84288E: mov     edx, [esp+20h+arg_8]
0x842892: push    edi
0x842893: push    edx
0x842894: mov     ecx, esi
0x842896: call    sub_848FA0
0x84289B: mov     eax, [ebx+24h]
0x84289E: mov     ebp, [eax+0Ch]
0x8428A1: mov     edx, [edi]
0x8428A3: mov     eax, [edx+90h]
0x8428A9: push    0
0x8428AB: mov     ecx, edi
0x8428AD: mov     [esp+24h+arg_8], ebp
0x8428B1: call    eax
0x8428B3: mov     ebp, [ebp+4]
0x8428B6: cmp     ebp, eax
0x8428B8: mov     [esp+20h+arg_0], eax
0x8428BC: jz      short loc_8428F8
0x8428BE: test    ebp, ebp
0x8428C0: jz      short loc_8428E3
0x8428C2: lea     ecx, [ebp+4]
0x8428C5: push    ecx; lpAddend
0x8428C6: call    dword ptr ds:0A2807Ch
0x8428CC: test    eax, eax
0x8428CE: jnz     short loc_8428DF
0x8428D0: test    ebp, ebp
0x8428D2: jz      short loc_8428DF
0x8428D4: mov     edx, [ebp+0]
0x8428D7: mov     eax, [edx]
0x8428D9: push    1
0x8428DB: mov     ecx, ebp
0x8428DD: call    eax
0x8428DF: mov     eax, [esp+20h+arg_0]
0x8428E3: test    eax, eax
0x8428E5: mov     ecx, [esp+20h+arg_8]
0x8428E9: mov     [ecx+4], eax
0x8428EC: jz      short loc_8428F8
0x8428EE: add     eax, 4
0x8428F1: push    eax; lpAddend
0x8428F2: call    dword ptr ds:0A28078h
0x8428F8: mov     edx, [esp+20h+arg_8]
0x8428FC: push    edi
0x8428FD: push    edx
0x8428FE: mov     ecx, esi
0x842900: call    sub_848FA0
0x842905: mov     ecx, [ebx+24h]
0x842908: mov     edi, [ecx+14h]
0x84290B: mov     eax, ds:0B43108h
0x842910: mov     ebp, [edi+4]
0x842913: add     edi, 4
0x842916: cmp     ebp, eax
0x842918: mov     [esp+20h+arg_8], eax
0x84291C: jz      short loc_842953
0x84291E: test    ebp, ebp
0x842920: jz      short loc_842943
0x842922: lea     edx, [ebp+4]
0x842925: push    edx; lpAddend
0x842926: call    dword ptr ds:0A2807Ch
0x84292C: test    eax, eax
0x84292E: jnz     short loc_84293F
0x842930: test    ebp, ebp
0x842932: jz      short loc_84293F
0x842934: mov     eax, [ebp+0]
0x842937: mov     edx, [eax]
0x842939: push    1
0x84293B: mov     ecx, ebp
0x84293D: call    edx
0x84293F: mov     eax, [esp+20h+arg_8]
0x842943: test    eax, eax
0x842945: mov     [edi], eax
0x842947: jz      short loc_842953
0x842949: add     eax, 4
0x84294C: push    eax; lpAddend
0x84294D: call    dword ptr ds:0A28078h
0x842953: mov     eax, [ebx+24h]
0x842956: mov     ebp, [eax+18h]
0x842959: mov     eax, ds:0B4310Ch
0x84295E: mov     edi, [ebp+4]
0x842961: cmp     edi, eax
0x842963: mov     ecx, eax
0x842965: mov     [esp+20h+arg_8], ecx
0x842969: jz      short loc_8429A0
0x84296B: test    edi, edi
0x84296D: jz      short loc_84298F
0x84296F: lea     ecx, [edi+4]
0x842972: push    ecx; lpAddend
0x842973: call    dword ptr ds:0A2807Ch
0x842979: test    eax, eax
0x84297B: jnz     short loc_84298B
0x84297D: test    edi, edi
0x84297F: jz      short loc_84298B
0x842981: mov     edx, [edi]
0x842983: mov     eax, [edx]
0x842985: push    1
0x842987: mov     ecx, edi
0x842989: call    eax
0x84298B: mov     ecx, [esp+20h+arg_8]
0x84298F: test    ecx, ecx
0x842991: mov     [ebp+4], ecx
0x842994: jz      short loc_8429A0
0x842996: add     ecx, 4
0x842999: push    ecx; lpAddend
0x84299A: call    dword ptr ds:0A28078h
0x8429A0: mov     edi, 1
0x8429A5: add     [ebx+60h], edi
0x8429A8: mov     [esp+20h+arg_8], ebx
0x8429AC: mov     edx, [esi+38h]
0x8429AF: lea     ecx, [esp+20h+arg_8]
0x8429B3: push    ecx
0x8429B4: push    edx
0x8429B5: lea     ecx, [esi+40h]
0x8429B8: mov     [esp+28h+var_4], 0
0x8429C0: call    sub_76CE40
0x8429C5: or      eax, 0FFFFFFFFh
0x8429C8: add     [ebx+60h], eax
0x8429CB: mov     [esp+20h+var_4], eax
0x8429CF: jnz     short loc_8429D8
0x8429D1: mov     ecx, ebx
0x8429D3: call    sub_7604D0
0x8429D8: add     [esi+38h], edi
0x8429DB: mov     ecx, [esp+20h+var_C]
0x8429DF: mov     large fs:0, ecx
0x8429E6: pop     ecx
0x8429E7: pop     edi
0x8429E8: pop     esi
0x8429E9: pop     ebp
0x8429EA: pop     ebx
0x8429EB: add     esp, 0Ch
0x8429EE: retn    10h
