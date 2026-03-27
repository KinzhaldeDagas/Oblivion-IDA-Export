0x874310: push    0FFFFFFFFh
0x874312: push    offset SEH_880560
0x874317: mov     eax, large fs:0
0x87431D: push    eax
0x87431E: push    ebx
0x87431F: push    ebp
0x874320: push    esi
0x874321: push    edi
0x874322: mov     eax, ds:0B30AACh
0x874327: xor     eax, esp
0x874329: push    eax
0x87432A: lea     eax, [esp+20h+var_C]
0x87432E: mov     large fs:0, eax
0x874334: mov     esi, ecx
0x874336: mov     ebx, [esp+20h+arg_8]
0x87433A: mov     eax, [ebx+10h]
0x87433D: mov     edi, ds:0B47638h
0x874343: push    eax
0x874344: call    sub_848C40
0x874349: mov     ebx, [ebx+0Ch]
0x87434C: push    ebx
0x87434D: mov     ecx, esi
0x87434F: call    sub_848E50
0x874354: mov     ecx, [esp+20h+arg_0]
0x874358: mov     eax, [esi]
0x87435A: mov     edx, [eax+0BCh]
0x874360: push    0
0x874362: push    ebx
0x874363: push    ecx
0x874364: mov     ecx, esi
0x874366: call    edx
0x874368: mov     eax, [edi+24h]
0x87436B: mov     ecx, [esp+20h+arg_C]
0x87436F: mov     ebx, [eax]
0x874371: mov     edx, [ecx]
0x874373: mov     eax, [edx+88h]
0x874379: push    0
0x87437B: mov     [esp+24h+arg_8], ebx
0x87437F: call    eax
0x874381: mov     ebx, [ebx+4]
0x874384: mov     ebp, eax
0x874386: cmp     ebx, ebp
0x874388: jz      short loc_8743BF
0x87438A: test    ebx, ebx
0x87438C: jz      short loc_8743AA
0x87438E: lea     ecx, [ebx+4]
0x874391: push    ecx; lpAddend
0x874392: call    dword ptr ds:0A2807Ch
0x874398: test    eax, eax
0x87439A: jnz     short loc_8743AA
0x87439C: test    ebx, ebx
0x87439E: jz      short loc_8743AA
0x8743A0: mov     edx, [ebx]
0x8743A2: mov     eax, [edx]
0x8743A4: push    1
0x8743A6: mov     ecx, ebx
0x8743A8: call    eax
0x8743AA: test    ebp, ebp
0x8743AC: mov     ecx, [esp+20h+arg_8]
0x8743B0: mov     [ecx+4], ebp
0x8743B3: jz      short loc_8743BF
0x8743B5: add     ebp, 4
0x8743B8: push    ebp; lpAddend
0x8743B9: call    dword ptr ds:0A28078h
0x8743BF: mov     edx, [edi+24h]
0x8743C2: mov     eax, [esp+20h+arg_C]
0x8743C6: mov     ebx, [edx+4]
0x8743C9: push    0
0x8743CB: push    eax
0x8743CC: mov     ecx, esi
0x8743CE: mov     [esp+28h+arg_8], ebx
0x8743D2: call    sub_848FD0
0x8743D7: mov     ebx, [ebx+4]
0x8743DA: mov     ebp, eax
0x8743DC: cmp     ebx, ebp
0x8743DE: jz      short loc_874415
0x8743E0: test    ebx, ebx
0x8743E2: jz      short loc_874400
0x8743E4: lea     ecx, [ebx+4]
0x8743E7: push    ecx; lpAddend
0x8743E8: call    dword ptr ds:0A2807Ch
0x8743EE: test    eax, eax
0x8743F0: jnz     short loc_874400
0x8743F2: test    ebx, ebx
0x8743F4: jz      short loc_874400
0x8743F6: mov     edx, [ebx]
0x8743F8: mov     eax, [edx]
0x8743FA: push    1
0x8743FC: mov     ecx, ebx
0x8743FE: call    eax
0x874400: test    ebp, ebp
0x874402: mov     ecx, [esp+20h+arg_8]
0x874406: mov     [ecx+4], ebp
0x874409: jz      short loc_874415
0x87440B: add     ebp, 4
0x87440E: push    ebp; lpAddend
0x87440F: call    dword ptr ds:0A28078h
0x874415: mov     edx, [edi+24h]
0x874418: mov     ebx, [edx+10h]
0x87441B: mov     eax, ds:0B43110h
0x874420: mov     ebp, [ebx+4]
0x874423: add     ebx, 4
0x874426: cmp     ebp, eax
0x874428: mov     [esp+20h+arg_C], eax
0x87442C: jz      short loc_874463
0x87442E: test    ebp, ebp
0x874430: jz      short loc_874453
0x874432: lea     eax, [ebp+4]
0x874435: push    eax; lpAddend
0x874436: call    dword ptr ds:0A2807Ch
0x87443C: test    eax, eax
0x87443E: jnz     short loc_87444F
0x874440: test    ebp, ebp
0x874442: jz      short loc_87444F
0x874444: mov     edx, [ebp+0]
0x874447: mov     eax, [edx]
0x874449: push    1
0x87444B: mov     ecx, ebp
0x87444D: call    eax
0x87444F: mov     eax, [esp+20h+arg_C]
0x874453: test    eax, eax
0x874455: mov     [ebx], eax
0x874457: jz      short loc_874463
0x874459: add     eax, 4
0x87445C: push    eax; lpAddend
0x87445D: call    dword ptr ds:0A28078h
0x874463: mov     ecx, [edi+24h]
0x874466: mov     ebx, [ecx+14h]
0x874469: mov     eax, ds:0B43108h
0x87446E: mov     ebp, [ebx+4]
0x874471: add     ebx, 4
0x874474: cmp     ebp, eax
0x874476: mov     [esp+20h+arg_C], eax
0x87447A: jz      short loc_8744B1
0x87447C: test    ebp, ebp
0x87447E: jz      short loc_8744A1
0x874480: lea     edx, [ebp+4]
0x874483: push    edx; lpAddend
0x874484: call    dword ptr ds:0A2807Ch
0x87448A: test    eax, eax
0x87448C: jnz     short loc_87449D
0x87448E: test    ebp, ebp
0x874490: jz      short loc_87449D
0x874492: mov     eax, [ebp+0]
0x874495: mov     edx, [eax]
0x874497: push    1
0x874499: mov     ecx, ebp
0x87449B: call    edx
0x87449D: mov     eax, [esp+20h+arg_C]
0x8744A1: test    eax, eax
0x8744A3: mov     [ebx], eax
0x8744A5: jz      short loc_8744B1
0x8744A7: add     eax, 4
0x8744AA: push    eax; lpAddend
0x8744AB: call    dword ptr ds:0A28078h
0x8744B1: mov     eax, [edi+24h]
0x8744B4: mov     ebp, [eax+18h]
0x8744B7: mov     eax, ds:0B4310Ch
0x8744BC: mov     ebx, [ebp+4]
0x8744BF: cmp     ebx, eax
0x8744C1: mov     ecx, eax
0x8744C3: mov     [esp+20h+arg_C], ecx
0x8744C7: jz      short loc_8744FE
0x8744C9: test    ebx, ebx
0x8744CB: jz      short loc_8744ED
0x8744CD: lea     ecx, [ebx+4]
0x8744D0: push    ecx; lpAddend
0x8744D1: call    dword ptr ds:0A2807Ch
0x8744D7: test    eax, eax
0x8744D9: jnz     short loc_8744E9
0x8744DB: test    ebx, ebx
0x8744DD: jz      short loc_8744E9
0x8744DF: mov     edx, [ebx]
0x8744E1: mov     eax, [edx]
0x8744E3: push    1
0x8744E5: mov     ecx, ebx
0x8744E7: call    eax
0x8744E9: mov     ecx, [esp+20h+arg_C]
0x8744ED: test    ecx, ecx
0x8744EF: mov     [ebp+4], ecx
0x8744F2: jz      short loc_8744FE
0x8744F4: add     ecx, 4
0x8744F7: push    ecx; lpAddend
0x8744F8: call    dword ptr ds:0A28078h
0x8744FE: mov     ebx, 1
0x874503: add     [edi+60h], ebx
0x874506: mov     [esp+20h+arg_C], edi
0x87450A: mov     edx, [esi+38h]
0x87450D: lea     ecx, [esp+20h+arg_C]
0x874511: push    ecx
0x874512: push    edx
0x874513: lea     ecx, [esi+40h]
0x874516: mov     [esp+28h+var_4], 0
0x87451E: call    sub_76CE40
0x874523: or      eax, 0FFFFFFFFh
0x874526: add     [edi+60h], eax
0x874529: mov     [esp+20h+var_4], eax
0x87452D: jnz     short loc_874536
0x87452F: mov     ecx, edi
0x874531: call    sub_7604D0
0x874536: add     [esi+38h], ebx
0x874539: mov     ecx, [esp+20h+var_C]
0x87453D: mov     large fs:0, ecx
0x874544: pop     ecx
0x874545: pop     edi
0x874546: pop     esi
0x874547: pop     ebp
0x874548: pop     ebx
0x874549: add     esp, 0Ch
0x87454C: retn    10h
