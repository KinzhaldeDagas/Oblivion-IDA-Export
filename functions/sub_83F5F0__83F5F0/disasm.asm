0x83F5F0: push    0FFFFFFFFh
0x83F5F2: push    offset SEH_882120
0x83F5F7: mov     eax, large fs:0
0x83F5FD: push    eax
0x83F5FE: push    ebx
0x83F5FF: push    ebp
0x83F600: push    esi
0x83F601: push    edi
0x83F602: mov     eax, ds:0B30AACh
0x83F607: xor     eax, esp
0x83F609: push    eax
0x83F60A: lea     eax, [esp+20h+var_C]
0x83F60E: mov     large fs:0, eax
0x83F614: mov     edi, ecx
0x83F616: mov     ebp, [esp+20h+arg_8]
0x83F61A: mov     esi, [ebp+0Ch]
0x83F61D: mov     ebx, ds:0B4588Ch
0x83F623: push    esi
0x83F624: call    sub_848E50
0x83F629: mov     ebp, [ebp+10h]
0x83F62C: mov     ecx, [esp+20h+arg_0]
0x83F630: mov     eax, [edi]
0x83F632: mov     edx, [eax+0BCh]
0x83F638: push    ebp
0x83F639: push    esi
0x83F63A: push    ecx
0x83F63B: mov     ecx, edi
0x83F63D: call    edx
0x83F63F: mov     esi, [esp+20h+arg_C]
0x83F643: mov     eax, [esi+0A8h]
0x83F649: mov     ds:0B46628h, eax
0x83F64E: mov     ecx, [esi+0ACh]
0x83F654: mov     ds:0B4662Ch, ecx
0x83F65A: mov     edx, [esi+0B0h]
0x83F660: mov     ds:0B46630h, edx
0x83F666: mov     eax, [esi+0B4h]
0x83F66C: mov     ds:0B46634h, eax
0x83F671: mov     ecx, [ebx+24h]
0x83F674: mov     ebp, [ecx]
0x83F676: mov     edx, [esi]
0x83F678: mov     eax, [edx+88h]
0x83F67E: push    0
0x83F680: mov     ecx, esi
0x83F682: mov     [esp+24h+arg_8], ebp
0x83F686: call    eax
0x83F688: mov     ebp, [ebp+4]
0x83F68B: cmp     ebp, eax
0x83F68D: mov     [esp+20h+arg_0], eax
0x83F691: jz      short loc_83F6CD
0x83F693: test    ebp, ebp
0x83F695: jz      short loc_83F6B8
0x83F697: lea     ecx, [ebp+4]
0x83F69A: push    ecx; lpAddend
0x83F69B: call    dword ptr ds:0A2807Ch
0x83F6A1: test    eax, eax
0x83F6A3: jnz     short loc_83F6B4
0x83F6A5: test    ebp, ebp
0x83F6A7: jz      short loc_83F6B4
0x83F6A9: mov     edx, [ebp+0]
0x83F6AC: mov     eax, [edx]
0x83F6AE: push    1
0x83F6B0: mov     ecx, ebp
0x83F6B2: call    eax
0x83F6B4: mov     eax, [esp+20h+arg_0]
0x83F6B8: test    eax, eax
0x83F6BA: mov     ecx, [esp+20h+arg_8]
0x83F6BE: mov     [ecx+4], eax
0x83F6C1: jz      short loc_83F6CD
0x83F6C3: add     eax, 4
0x83F6C6: push    eax; lpAddend
0x83F6C7: call    dword ptr ds:0A28078h
0x83F6CD: mov     edx, [esp+20h+arg_8]
0x83F6D1: push    esi
0x83F6D2: push    edx
0x83F6D3: mov     ecx, edi
0x83F6D5: call    sub_848FA0
0x83F6DA: mov     eax, [ebx+24h]
0x83F6DD: mov     ebp, [eax+4]
0x83F6E0: push    0
0x83F6E2: push    esi
0x83F6E3: mov     ecx, edi
0x83F6E5: mov     [esp+28h+arg_8], ebp
0x83F6E9: call    sub_848FD0
0x83F6EE: mov     ebp, [ebp+4]
0x83F6F1: cmp     ebp, eax
0x83F6F3: mov     [esp+20h+arg_0], eax
0x83F6F7: jz      short loc_83F733
0x83F6F9: test    ebp, ebp
0x83F6FB: jz      short loc_83F71E
0x83F6FD: lea     ecx, [ebp+4]
0x83F700: push    ecx; lpAddend
0x83F701: call    dword ptr ds:0A2807Ch
0x83F707: test    eax, eax
0x83F709: jnz     short loc_83F71A
0x83F70B: test    ebp, ebp
0x83F70D: jz      short loc_83F71A
0x83F70F: mov     edx, [ebp+0]
0x83F712: mov     eax, [edx]
0x83F714: push    1
0x83F716: mov     ecx, ebp
0x83F718: call    eax
0x83F71A: mov     eax, [esp+20h+arg_0]
0x83F71E: test    eax, eax
0x83F720: mov     ecx, [esp+20h+arg_8]
0x83F724: mov     [ecx+4], eax
0x83F727: jz      short loc_83F733
0x83F729: add     eax, 4
0x83F72C: push    eax; lpAddend
0x83F72D: call    dword ptr ds:0A28078h
0x83F733: mov     edx, [esp+20h+arg_8]
0x83F737: push    esi
0x83F738: push    edx
0x83F739: mov     ecx, edi
0x83F73B: call    sub_848FA0
0x83F740: mov     eax, [ebx+24h]
0x83F743: mov     ebp, [eax+10h]
0x83F746: mov     edx, [esi]
0x83F748: mov     eax, [edx+88h]
0x83F74E: push    1
0x83F750: mov     ecx, esi
0x83F752: mov     [esp+24h+arg_8], ebp
0x83F756: call    eax
0x83F758: mov     ebp, [ebp+4]
0x83F75B: cmp     ebp, eax
0x83F75D: mov     [esp+20h+arg_0], eax
0x83F761: jz      short loc_83F79D
0x83F763: test    ebp, ebp
0x83F765: jz      short loc_83F788
0x83F767: lea     ecx, [ebp+4]
0x83F76A: push    ecx; lpAddend
0x83F76B: call    dword ptr ds:0A2807Ch
0x83F771: test    eax, eax
0x83F773: jnz     short loc_83F784
0x83F775: test    ebp, ebp
0x83F777: jz      short loc_83F784
0x83F779: mov     edx, [ebp+0]
0x83F77C: mov     eax, [edx]
0x83F77E: push    1
0x83F780: mov     ecx, ebp
0x83F782: call    eax
0x83F784: mov     eax, [esp+20h+arg_0]
0x83F788: test    eax, eax
0x83F78A: mov     ecx, [esp+20h+arg_8]
0x83F78E: mov     [ecx+4], eax
0x83F791: jz      short loc_83F79D
0x83F793: add     eax, 4
0x83F796: push    eax; lpAddend
0x83F797: call    dword ptr ds:0A28078h
0x83F79D: mov     edx, [esp+20h+arg_8]
0x83F7A1: push    esi
0x83F7A2: push    edx
0x83F7A3: mov     ecx, edi
0x83F7A5: call    sub_848FA0
0x83F7AA: mov     ecx, [ebx+24h]
0x83F7AD: mov     esi, [ecx+18h]
0x83F7B0: mov     eax, ds:0B43108h
0x83F7B5: mov     ebp, [esi+4]
0x83F7B8: add     esi, 4
0x83F7BB: cmp     ebp, eax
0x83F7BD: mov     [esp+20h+arg_8], eax
0x83F7C1: jz      short loc_83F7F8
0x83F7C3: test    ebp, ebp
0x83F7C5: jz      short loc_83F7E8
0x83F7C7: lea     edx, [ebp+4]
0x83F7CA: push    edx; lpAddend
0x83F7CB: call    dword ptr ds:0A2807Ch
0x83F7D1: test    eax, eax
0x83F7D3: jnz     short loc_83F7E4
0x83F7D5: test    ebp, ebp
0x83F7D7: jz      short loc_83F7E4
0x83F7D9: mov     eax, [ebp+0]
0x83F7DC: mov     edx, [eax]
0x83F7DE: push    1
0x83F7E0: mov     ecx, ebp
0x83F7E2: call    edx
0x83F7E4: mov     eax, [esp+20h+arg_8]
0x83F7E8: test    eax, eax
0x83F7EA: mov     [esi], eax
0x83F7EC: jz      short loc_83F7F8
0x83F7EE: add     eax, 4
0x83F7F1: push    eax; lpAddend
0x83F7F2: call    dword ptr ds:0A28078h
0x83F7F8: mov     eax, [ebx+24h]
0x83F7FB: mov     ebp, [eax+1Ch]
0x83F7FE: mov     eax, ds:0B4310Ch
0x83F803: mov     esi, [ebp+4]
0x83F806: cmp     esi, eax
0x83F808: mov     ecx, eax
0x83F80A: mov     [esp+20h+arg_8], ecx
0x83F80E: jz      short loc_83F845
0x83F810: test    esi, esi
0x83F812: jz      short loc_83F834
0x83F814: lea     ecx, [esi+4]
0x83F817: push    ecx; lpAddend
0x83F818: call    dword ptr ds:0A2807Ch
0x83F81E: test    eax, eax
0x83F820: jnz     short loc_83F830
0x83F822: test    esi, esi
0x83F824: jz      short loc_83F830
0x83F826: mov     edx, [esi]
0x83F828: mov     eax, [edx]
0x83F82A: push    1
0x83F82C: mov     ecx, esi
0x83F82E: call    eax
0x83F830: mov     ecx, [esp+20h+arg_8]
0x83F834: test    ecx, ecx
0x83F836: mov     [ebp+4], ecx
0x83F839: jz      short loc_83F845
0x83F83B: add     ecx, 4
0x83F83E: push    ecx; lpAddend
0x83F83F: call    dword ptr ds:0A28078h
0x83F845: mov     esi, 1
0x83F84A: add     [ebx+60h], esi
0x83F84D: mov     [esp+20h+arg_8], ebx
0x83F851: mov     edx, [edi+38h]
0x83F854: lea     ecx, [esp+20h+arg_8]
0x83F858: push    ecx
0x83F859: push    edx
0x83F85A: lea     ecx, [edi+40h]
0x83F85D: mov     [esp+28h+var_4], 0
0x83F865: call    sub_76CE40
0x83F86A: or      eax, 0FFFFFFFFh
0x83F86D: add     [ebx+60h], eax
0x83F870: mov     [esp+20h+var_4], eax
0x83F874: jnz     short loc_83F87D
0x83F876: mov     ecx, ebx
0x83F878: call    sub_7604D0
0x83F87D: add     [edi+38h], esi
0x83F880: mov     ecx, [esp+20h+var_C]
0x83F884: mov     large fs:0, ecx
0x83F88B: pop     ecx
0x83F88C: pop     edi
0x83F88D: pop     esi
0x83F88E: pop     ebp
0x83F88F: pop     ebx
0x83F890: add     esp, 0Ch
0x83F893: retn    10h
