0x881610: push    0FFFFFFFFh
0x881612: push    offset SEH_882120
0x881617: mov     eax, large fs:0
0x88161D: push    eax
0x88161E: push    ebx
0x88161F: push    ebp
0x881620: push    esi
0x881621: push    edi
0x881622: mov     eax, ds:0B30AACh
0x881627: xor     eax, esp
0x881629: push    eax
0x88162A: lea     eax, [esp+20h+var_C]
0x88162E: mov     large fs:0, eax
0x881634: mov     esi, ecx
0x881636: mov     ebx, [esp+20h+arg_8]
0x88163A: mov     eax, [ebx+10h]
0x88163D: mov     edi, ds:0B4774Ch
0x881643: push    eax
0x881644: call    sub_848C40
0x881649: mov     ebx, [ebx+0Ch]
0x88164C: push    ebx
0x88164D: mov     ecx, esi
0x88164F: call    sub_848E50
0x881654: mov     ecx, [esp+20h+arg_0]
0x881658: mov     eax, [esi]
0x88165A: mov     edx, [eax+0BCh]
0x881660: push    0
0x881662: push    ebx
0x881663: push    ecx
0x881664: mov     ecx, esi
0x881666: call    edx
0x881668: mov     eax, [edi+24h]
0x88166B: mov     ebp, [esp+20h+arg_C]
0x88166F: mov     ebx, [eax]
0x881671: mov     edx, [ebp+0]
0x881674: mov     eax, [edx+88h]
0x88167A: push    0
0x88167C: mov     ecx, ebp
0x88167E: mov     [esp+24h+arg_8], ebx
0x881682: call    eax
0x881684: mov     ebx, [ebx+4]
0x881687: cmp     ebx, eax
0x881689: mov     [esp+20h+arg_0], eax
0x88168D: jz      short loc_8816C8
0x88168F: test    ebx, ebx
0x881691: jz      short loc_8816B3
0x881693: lea     ecx, [ebx+4]
0x881696: push    ecx; lpAddend
0x881697: call    dword ptr ds:0A2807Ch
0x88169D: test    eax, eax
0x88169F: jnz     short loc_8816AF
0x8816A1: test    ebx, ebx
0x8816A3: jz      short loc_8816AF
0x8816A5: mov     edx, [ebx]
0x8816A7: mov     eax, [edx]
0x8816A9: push    1
0x8816AB: mov     ecx, ebx
0x8816AD: call    eax
0x8816AF: mov     eax, [esp+20h+arg_0]
0x8816B3: test    eax, eax
0x8816B5: mov     ecx, [esp+20h+arg_8]
0x8816B9: mov     [ecx+4], eax
0x8816BC: jz      short loc_8816C8
0x8816BE: add     eax, 4
0x8816C1: push    eax; lpAddend
0x8816C2: call    dword ptr ds:0A28078h
0x8816C8: mov     edx, [edi+24h]
0x8816CB: mov     ebx, [edx+4]
0x8816CE: push    0
0x8816D0: push    ebp
0x8816D1: mov     ecx, esi
0x8816D3: mov     [esp+28h+arg_8], ebx
0x8816D7: call    sub_848FD0
0x8816DC: mov     ebx, [ebx+4]
0x8816DF: cmp     ebx, eax
0x8816E1: mov     [esp+20h+arg_0], eax
0x8816E5: jz      short loc_881720
0x8816E7: test    ebx, ebx
0x8816E9: jz      short loc_88170B
0x8816EB: lea     eax, [ebx+4]
0x8816EE: push    eax; lpAddend
0x8816EF: call    dword ptr ds:0A2807Ch
0x8816F5: test    eax, eax
0x8816F7: jnz     short loc_881707
0x8816F9: test    ebx, ebx
0x8816FB: jz      short loc_881707
0x8816FD: mov     edx, [ebx]
0x8816FF: mov     eax, [edx]
0x881701: push    1
0x881703: mov     ecx, ebx
0x881705: call    eax
0x881707: mov     eax, [esp+20h+arg_0]
0x88170B: test    eax, eax
0x88170D: mov     ecx, [esp+20h+arg_8]
0x881711: mov     [ecx+4], eax
0x881714: jz      short loc_881720
0x881716: add     eax, 4
0x881719: push    eax; lpAddend
0x88171A: call    dword ptr ds:0A28078h
0x881720: mov     edx, [edi+24h]
0x881723: mov     ebx, [edx+8]
0x881726: mov     eax, [ebp+0]
0x881729: mov     edx, [eax+88h]
0x88172F: push    1
0x881731: mov     ecx, ebp
0x881733: mov     [esp+24h+arg_8], ebx
0x881737: call    edx
0x881739: mov     ebx, [ebx+4]
0x88173C: cmp     ebx, eax
0x88173E: mov     [esp+20h+arg_0], eax
0x881742: jz      short loc_88177D
0x881744: test    ebx, ebx
0x881746: jz      short loc_881768
0x881748: lea     eax, [ebx+4]
0x88174B: push    eax; lpAddend
0x88174C: call    dword ptr ds:0A2807Ch
0x881752: test    eax, eax
0x881754: jnz     short loc_881764
0x881756: test    ebx, ebx
0x881758: jz      short loc_881764
0x88175A: mov     edx, [ebx]
0x88175C: mov     eax, [edx]
0x88175E: push    1
0x881760: mov     ecx, ebx
0x881762: call    eax
0x881764: mov     eax, [esp+20h+arg_0]
0x881768: test    eax, eax
0x88176A: mov     ecx, [esp+20h+arg_8]
0x88176E: mov     [ecx+4], eax
0x881771: jz      short loc_88177D
0x881773: add     eax, 4
0x881776: push    eax; lpAddend
0x881777: call    dword ptr ds:0A28078h
0x88177D: mov     edx, [edi+24h]
0x881780: mov     eax, [edx+0Ch]
0x881783: push    1
0x881785: push    ebp
0x881786: mov     ecx, esi
0x881788: mov     [esp+28h+arg_8], eax
0x88178C: call    sub_848FD0
0x881791: mov     ecx, [esp+20h+arg_8]
0x881795: mov     ebp, [ecx+4]
0x881798: mov     ebx, eax
0x88179A: cmp     ebp, ebx
0x88179C: jz      short loc_8817D4
0x88179E: test    ebp, ebp
0x8817A0: jz      short loc_8817BF
0x8817A2: lea     edx, [ebp+4]
0x8817A5: push    edx; lpAddend
0x8817A6: call    dword ptr ds:0A2807Ch
0x8817AC: test    eax, eax
0x8817AE: jnz     short loc_8817BF
0x8817B0: test    ebp, ebp
0x8817B2: jz      short loc_8817BF
0x8817B4: mov     eax, [ebp+0]
0x8817B7: mov     edx, [eax]
0x8817B9: push    1
0x8817BB: mov     ecx, ebp
0x8817BD: call    edx
0x8817BF: test    ebx, ebx
0x8817C1: mov     eax, [esp+20h+arg_8]
0x8817C5: mov     [eax+4], ebx
0x8817C8: jz      short loc_8817D4
0x8817CA: add     ebx, 4
0x8817CD: push    ebx; lpAddend
0x8817CE: call    dword ptr ds:0A28078h
0x8817D4: mov     ecx, [edi+24h]
0x8817D7: mov     ebx, [ecx+14h]
0x8817DA: mov     eax, ds:0B43110h
0x8817DF: mov     ebp, [ebx+4]
0x8817E2: cmp     ebp, eax
0x8817E4: mov     ecx, eax
0x8817E6: mov     [esp+20h+arg_8], ecx
0x8817EA: jz      short loc_881822
0x8817EC: test    ebp, ebp
0x8817EE: jz      short loc_881811
0x8817F0: lea     edx, [ebp+4]
0x8817F3: push    edx; lpAddend
0x8817F4: call    dword ptr ds:0A2807Ch
0x8817FA: test    eax, eax
0x8817FC: jnz     short loc_88180D
0x8817FE: test    ebp, ebp
0x881800: jz      short loc_88180D
0x881802: mov     eax, [ebp+0]
0x881805: mov     edx, [eax]
0x881807: push    1
0x881809: mov     ecx, ebp
0x88180B: call    edx
0x88180D: mov     ecx, [esp+20h+arg_8]
0x881811: test    ecx, ecx
0x881813: mov     [ebx+4], ecx
0x881816: jz      short loc_881822
0x881818: add     ecx, 4
0x88181B: push    ecx; lpAddend
0x88181C: call    dword ptr ds:0A28078h
0x881822: mov     ebx, 1
0x881827: add     [edi+60h], ebx
0x88182A: mov     [esp+20h+arg_8], edi
0x88182E: mov     ecx, [esi+38h]
0x881831: lea     eax, [esp+20h+arg_8]
0x881835: push    eax
0x881836: push    ecx
0x881837: lea     ecx, [esi+40h]
0x88183A: mov     [esp+28h+var_4], 0
0x881842: call    sub_76CE40
0x881847: or      eax, 0FFFFFFFFh
0x88184A: add     [edi+60h], eax
0x88184D: mov     [esp+20h+var_4], eax
0x881851: jnz     short loc_88185A
0x881853: mov     ecx, edi
0x881855: call    sub_7604D0
0x88185A: add     [esi+38h], ebx
0x88185D: mov     ecx, [esp+20h+var_C]
0x881861: mov     large fs:0, ecx
0x881868: pop     ecx
0x881869: pop     edi
0x88186A: pop     esi
0x88186B: pop     ebp
0x88186C: pop     ebx
0x88186D: add     esp, 0Ch
0x881870: retn    10h
