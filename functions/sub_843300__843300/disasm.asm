0x843300: push    0FFFFFFFFh
0x843302: push    offset SEH_882120
0x843307: mov     eax, large fs:0
0x84330D: push    eax
0x84330E: push    ebx
0x84330F: push    ebp
0x843310: push    esi
0x843311: push    edi
0x843312: mov     eax, ds:0B30AACh
0x843317: xor     eax, esp
0x843319: push    eax
0x84331A: lea     eax, [esp+20h+var_C]
0x84331E: mov     large fs:0, eax
0x843324: mov     esi, ecx
0x843326: mov     edi, [esp+20h+arg_8]
0x84332A: mov     eax, [edi+10h]
0x84332D: mov     ebx, ds:0B45750h
0x843333: push    eax
0x843334: call    sub_848DA0
0x843339: mov     edi, [edi+0Ch]
0x84333C: push    edi
0x84333D: mov     ecx, esi
0x84333F: call    sub_848E50
0x843344: mov     ecx, [esp+20h+arg_0]
0x843348: mov     eax, [esi]
0x84334A: mov     edx, [eax+0BCh]
0x843350: push    0
0x843352: push    edi
0x843353: push    ecx
0x843354: mov     ecx, esi
0x843356: call    edx
0x843358: mov     eax, [ebx+24h]
0x84335B: mov     edi, [esp+20h+arg_C]
0x84335F: mov     ebp, [eax]
0x843361: mov     edx, [edi]
0x843363: mov     eax, [edx+88h]
0x843369: push    0
0x84336B: mov     ecx, edi
0x84336D: mov     [esp+24h+arg_8], ebp
0x843371: call    eax
0x843373: mov     ebp, [ebp+4]
0x843376: cmp     ebp, eax
0x843378: mov     [esp+20h+arg_0], eax
0x84337C: jz      short loc_8433B8
0x84337E: test    ebp, ebp
0x843380: jz      short loc_8433A3
0x843382: lea     ecx, [ebp+4]
0x843385: push    ecx; lpAddend
0x843386: call    dword ptr ds:0A2807Ch
0x84338C: test    eax, eax
0x84338E: jnz     short loc_84339F
0x843390: test    ebp, ebp
0x843392: jz      short loc_84339F
0x843394: mov     edx, [ebp+0]
0x843397: mov     eax, [edx]
0x843399: push    1
0x84339B: mov     ecx, ebp
0x84339D: call    eax
0x84339F: mov     eax, [esp+20h+arg_0]
0x8433A3: test    eax, eax
0x8433A5: mov     ecx, [esp+20h+arg_8]
0x8433A9: mov     [ecx+4], eax
0x8433AC: jz      short loc_8433B8
0x8433AE: add     eax, 4
0x8433B1: push    eax; lpAddend
0x8433B2: call    dword ptr ds:0A28078h
0x8433B8: mov     edx, [esp+20h+arg_8]
0x8433BC: push    edi
0x8433BD: push    edx
0x8433BE: mov     ecx, esi
0x8433C0: call    sub_848FA0
0x8433C5: mov     eax, [ebx+24h]
0x8433C8: mov     ebp, [eax+4]
0x8433CB: push    0
0x8433CD: push    edi
0x8433CE: mov     ecx, esi
0x8433D0: mov     [esp+28h+arg_8], ebp
0x8433D4: call    sub_848FD0
0x8433D9: mov     ebp, [ebp+4]
0x8433DC: cmp     ebp, eax
0x8433DE: mov     [esp+20h+arg_0], eax
0x8433E2: jz      short loc_84341E
0x8433E4: test    ebp, ebp
0x8433E6: jz      short loc_843409
0x8433E8: lea     ecx, [ebp+4]
0x8433EB: push    ecx; lpAddend
0x8433EC: call    dword ptr ds:0A2807Ch
0x8433F2: test    eax, eax
0x8433F4: jnz     short loc_843405
0x8433F6: test    ebp, ebp
0x8433F8: jz      short loc_843405
0x8433FA: mov     edx, [ebp+0]
0x8433FD: mov     eax, [edx]
0x8433FF: push    1
0x843401: mov     ecx, ebp
0x843403: call    eax
0x843405: mov     eax, [esp+20h+arg_0]
0x843409: test    eax, eax
0x84340B: mov     ecx, [esp+20h+arg_8]
0x84340F: mov     [ecx+4], eax
0x843412: jz      short loc_84341E
0x843414: add     eax, 4
0x843417: push    eax; lpAddend
0x843418: call    dword ptr ds:0A28078h
0x84341E: mov     edx, [esp+20h+arg_8]
0x843422: push    edi
0x843423: push    edx
0x843424: mov     ecx, esi
0x843426: call    sub_848FA0
0x84342B: mov     eax, [ebx+24h]
0x84342E: mov     ebp, [eax+0Ch]
0x843431: mov     edx, [edi]
0x843433: mov     eax, [edx+90h]
0x843439: push    0
0x84343B: mov     ecx, edi
0x84343D: mov     [esp+24h+arg_8], ebp
0x843441: call    eax
0x843443: mov     ebp, [ebp+4]
0x843446: cmp     ebp, eax
0x843448: mov     [esp+20h+arg_0], eax
0x84344C: jz      short loc_843488
0x84344E: test    ebp, ebp
0x843450: jz      short loc_843473
0x843452: lea     ecx, [ebp+4]
0x843455: push    ecx; lpAddend
0x843456: call    dword ptr ds:0A2807Ch
0x84345C: test    eax, eax
0x84345E: jnz     short loc_84346F
0x843460: test    ebp, ebp
0x843462: jz      short loc_84346F
0x843464: mov     edx, [ebp+0]
0x843467: mov     eax, [edx]
0x843469: push    1
0x84346B: mov     ecx, ebp
0x84346D: call    eax
0x84346F: mov     eax, [esp+20h+arg_0]
0x843473: test    eax, eax
0x843475: mov     ecx, [esp+20h+arg_8]
0x843479: mov     [ecx+4], eax
0x84347C: jz      short loc_843488
0x84347E: add     eax, 4
0x843481: push    eax; lpAddend
0x843482: call    dword ptr ds:0A28078h
0x843488: mov     edx, [esp+20h+arg_8]
0x84348C: push    edi
0x84348D: push    edx
0x84348E: mov     ecx, esi
0x843490: call    sub_848FA0
0x843495: mov     ecx, [ebx+24h]
0x843498: mov     edi, [ecx+14h]
0x84349B: mov     eax, ds:0B43108h
0x8434A0: mov     ebp, [edi+4]
0x8434A3: add     edi, 4
0x8434A6: cmp     ebp, eax
0x8434A8: mov     [esp+20h+arg_8], eax
0x8434AC: jz      short loc_8434E3
0x8434AE: test    ebp, ebp
0x8434B0: jz      short loc_8434D3
0x8434B2: lea     edx, [ebp+4]
0x8434B5: push    edx; lpAddend
0x8434B6: call    dword ptr ds:0A2807Ch
0x8434BC: test    eax, eax
0x8434BE: jnz     short loc_8434CF
0x8434C0: test    ebp, ebp
0x8434C2: jz      short loc_8434CF
0x8434C4: mov     eax, [ebp+0]
0x8434C7: mov     edx, [eax]
0x8434C9: push    1
0x8434CB: mov     ecx, ebp
0x8434CD: call    edx
0x8434CF: mov     eax, [esp+20h+arg_8]
0x8434D3: test    eax, eax
0x8434D5: mov     [edi], eax
0x8434D7: jz      short loc_8434E3
0x8434D9: add     eax, 4
0x8434DC: push    eax; lpAddend
0x8434DD: call    dword ptr ds:0A28078h
0x8434E3: mov     eax, [ebx+24h]
0x8434E6: mov     ebp, [eax+18h]
0x8434E9: mov     eax, ds:0B4310Ch
0x8434EE: mov     edi, [ebp+4]
0x8434F1: cmp     edi, eax
0x8434F3: mov     ecx, eax
0x8434F5: mov     [esp+20h+arg_8], ecx
0x8434F9: jz      short loc_843530
0x8434FB: test    edi, edi
0x8434FD: jz      short loc_84351F
0x8434FF: lea     ecx, [edi+4]
0x843502: push    ecx; lpAddend
0x843503: call    dword ptr ds:0A2807Ch
0x843509: test    eax, eax
0x84350B: jnz     short loc_84351B
0x84350D: test    edi, edi
0x84350F: jz      short loc_84351B
0x843511: mov     edx, [edi]
0x843513: mov     eax, [edx]
0x843515: push    1
0x843517: mov     ecx, edi
0x843519: call    eax
0x84351B: mov     ecx, [esp+20h+arg_8]
0x84351F: test    ecx, ecx
0x843521: mov     [ebp+4], ecx
0x843524: jz      short loc_843530
0x843526: add     ecx, 4
0x843529: push    ecx; lpAddend
0x84352A: call    dword ptr ds:0A28078h
0x843530: mov     edi, 1
0x843535: add     [ebx+60h], edi
0x843538: mov     [esp+20h+arg_8], ebx
0x84353C: mov     edx, [esi+38h]
0x84353F: lea     ecx, [esp+20h+arg_8]
0x843543: push    ecx
0x843544: push    edx
0x843545: lea     ecx, [esi+40h]
0x843548: mov     [esp+28h+var_4], 0
0x843550: call    sub_76CE40
0x843555: or      eax, 0FFFFFFFFh
0x843558: add     [ebx+60h], eax
0x84355B: mov     [esp+20h+var_4], eax
0x84355F: jnz     short loc_843568
0x843561: mov     ecx, ebx
0x843563: call    sub_7604D0
0x843568: add     [esi+38h], edi
0x84356B: mov     ecx, [esp+20h+var_C]
0x84356F: mov     large fs:0, ecx
0x843576: pop     ecx
0x843577: pop     edi
0x843578: pop     esi
0x843579: pop     ebp
0x84357A: pop     ebx
0x84357B: add     esp, 0Ch
0x84357E: retn    10h
