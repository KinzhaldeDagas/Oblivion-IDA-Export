0x879360: push    0FFFFFFFFh
0x879362: push    offset SEH_879360
0x879367: mov     eax, large fs:0
0x87936D: push    eax
0x87936E: push    ecx
0x87936F: push    ebx
0x879370: push    ebp
0x879371: push    esi
0x879372: push    edi
0x879373: mov     eax, ds:0B30AACh
0x879378: xor     eax, esp
0x87937A: push    eax
0x87937B: lea     eax, [esp+24h+var_C]
0x87937F: mov     large fs:0, eax
0x879385: mov     ebx, ecx
0x879387: mov     [esp+24h+var_10], ebx
0x87938B: mov     ebp, [esp+24h+arg_8]
0x87938F: mov     edi, [ebp+0Ch]
0x879392: mov     esi, ds:0B476D4h
0x879398: push    edi
0x879399: call    sub_848E50
0x87939E: mov     ebp, [ebp+10h]
0x8793A1: mov     ecx, [esp+24h+arg_0]
0x8793A5: mov     eax, [ebx]
0x8793A7: mov     edx, [eax+0BCh]
0x8793AD: push    ebp
0x8793AE: push    edi
0x8793AF: push    ecx
0x8793B0: mov     ecx, ebx
0x8793B2: call    edx
0x8793B4: mov     eax, [esi+24h]
0x8793B7: mov     ebx, [esp+24h+arg_C]
0x8793BB: mov     edi, [eax]
0x8793BD: mov     edx, [ebx]
0x8793BF: mov     eax, [edx+88h]
0x8793C5: push    0
0x8793C7: mov     ecx, ebx
0x8793C9: mov     [esp+28h+arg_8], edi
0x8793CD: call    eax
0x8793CF: mov     edi, [edi+4]
0x8793D2: mov     ebp, eax
0x8793D4: cmp     edi, ebp
0x8793D6: jz      short loc_87940D
0x8793D8: test    edi, edi
0x8793DA: jz      short loc_8793F8
0x8793DC: lea     ecx, [edi+4]
0x8793DF: push    ecx; lpAddend
0x8793E0: call    dword ptr ds:0A2807Ch
0x8793E6: test    eax, eax
0x8793E8: jnz     short loc_8793F8
0x8793EA: test    edi, edi
0x8793EC: jz      short loc_8793F8
0x8793EE: mov     edx, [edi]
0x8793F0: mov     eax, [edx]
0x8793F2: push    1
0x8793F4: mov     ecx, edi
0x8793F6: call    eax
0x8793F8: test    ebp, ebp
0x8793FA: mov     ecx, [esp+24h+arg_8]
0x8793FE: mov     [ecx+4], ebp
0x879401: jz      short loc_87940D
0x879403: add     ebp, 4
0x879406: push    ebp; lpAddend
0x879407: call    dword ptr ds:0A28078h
0x87940D: mov     edx, [esi+24h]
0x879410: mov     edi, [edx+4]
0x879413: mov     ecx, [esp+24h+var_10]
0x879417: push    0
0x879419: push    ebx
0x87941A: mov     [esp+2Ch+arg_8], edi
0x87941E: call    sub_848FD0
0x879423: mov     edi, [edi+4]
0x879426: mov     ebp, eax
0x879428: cmp     edi, ebp
0x87942A: jz      short loc_879461
0x87942C: test    edi, edi
0x87942E: jz      short loc_87944C
0x879430: lea     eax, [edi+4]
0x879433: push    eax; lpAddend
0x879434: call    dword ptr ds:0A2807Ch
0x87943A: test    eax, eax
0x87943C: jnz     short loc_87944C
0x87943E: test    edi, edi
0x879440: jz      short loc_87944C
0x879442: mov     edx, [edi]
0x879444: mov     eax, [edx]
0x879446: push    1
0x879448: mov     ecx, edi
0x87944A: call    eax
0x87944C: test    ebp, ebp
0x87944E: mov     ecx, [esp+24h+arg_8]
0x879452: mov     [ecx+4], ebp
0x879455: jz      short loc_879461
0x879457: add     ebp, 4
0x87945A: push    ebp; lpAddend
0x87945B: call    dword ptr ds:0A28078h
0x879461: mov     edx, [esi+24h]
0x879464: mov     eax, [ebx]
0x879466: mov     ebp, [edx+10h]
0x879469: mov     edx, [eax+90h]
0x87946F: push    0
0x879471: mov     ecx, ebx
0x879473: call    edx
0x879475: mov     edi, [ebp+4]
0x879478: mov     ebx, eax
0x87947A: cmp     edi, ebx
0x87947C: jz      short loc_8794AF
0x87947E: test    edi, edi
0x879480: jz      short loc_87949E
0x879482: lea     eax, [edi+4]
0x879485: push    eax; lpAddend
0x879486: call    dword ptr ds:0A2807Ch
0x87948C: test    eax, eax
0x87948E: jnz     short loc_87949E
0x879490: test    edi, edi
0x879492: jz      short loc_87949E
0x879494: mov     edx, [edi]
0x879496: mov     eax, [edx]
0x879498: push    1
0x87949A: mov     ecx, edi
0x87949C: call    eax
0x87949E: test    ebx, ebx
0x8794A0: mov     [ebp+4], ebx
0x8794A3: jz      short loc_8794AF
0x8794A5: add     ebx, 4
0x8794A8: push    ebx; lpAddend
0x8794A9: call    dword ptr ds:0A28078h
0x8794AF: mov     ecx, [esi+24h]
0x8794B2: mov     edi, [ecx+14h]
0x8794B5: mov     eax, ds:0B43110h
0x8794BA: mov     ebx, [edi+4]
0x8794BD: add     edi, 4
0x8794C0: cmp     ebx, eax
0x8794C2: mov     ebp, eax
0x8794C4: jz      short loc_8794F6
0x8794C6: test    ebx, ebx
0x8794C8: jz      short loc_8794E6
0x8794CA: lea     edx, [ebx+4]
0x8794CD: push    edx; lpAddend
0x8794CE: call    dword ptr ds:0A2807Ch
0x8794D4: test    eax, eax
0x8794D6: jnz     short loc_8794E6
0x8794D8: test    ebx, ebx
0x8794DA: jz      short loc_8794E6
0x8794DC: mov     eax, [ebx]
0x8794DE: mov     edx, [eax]
0x8794E0: push    1
0x8794E2: mov     ecx, ebx
0x8794E4: call    edx
0x8794E6: test    ebp, ebp
0x8794E8: mov     [edi], ebp
0x8794EA: jz      short loc_8794F6
0x8794EC: add     ebp, 4
0x8794EF: push    ebp; lpAddend
0x8794F0: call    dword ptr ds:0A28078h
0x8794F6: mov     ecx, [esi+24h]
0x8794F9: mov     edi, [ecx+18h]
0x8794FC: mov     eax, ds:0B43108h
0x879501: mov     ebx, [edi+4]
0x879504: add     edi, 4
0x879507: cmp     ebx, eax
0x879509: mov     ebp, eax
0x87950B: jz      short loc_87953D
0x87950D: test    ebx, ebx
0x87950F: jz      short loc_87952D
0x879511: lea     edx, [ebx+4]
0x879514: push    edx; lpAddend
0x879515: call    dword ptr ds:0A2807Ch
0x87951B: test    eax, eax
0x87951D: jnz     short loc_87952D
0x87951F: test    ebx, ebx
0x879521: jz      short loc_87952D
0x879523: mov     eax, [ebx]
0x879525: mov     edx, [eax]
0x879527: push    1
0x879529: mov     ecx, ebx
0x87952B: call    edx
0x87952D: test    ebp, ebp
0x87952F: mov     [edi], ebp
0x879531: jz      short loc_87953D
0x879533: add     ebp, 4
0x879536: push    ebp; lpAddend
0x879537: call    dword ptr ds:0A28078h
0x87953D: mov     eax, [esi+24h]
0x879540: mov     ebx, [eax+1Ch]
0x879543: mov     eax, ds:0B4310Ch
0x879548: mov     edi, [ebx+4]
0x87954B: cmp     edi, eax
0x87954D: mov     ebp, eax
0x87954F: jz      short loc_879582
0x879551: test    edi, edi
0x879553: jz      short loc_879571
0x879555: lea     ecx, [edi+4]
0x879558: push    ecx; lpAddend
0x879559: call    dword ptr ds:0A2807Ch
0x87955F: test    eax, eax
0x879561: jnz     short loc_879571
0x879563: test    edi, edi
0x879565: jz      short loc_879571
0x879567: mov     edx, [edi]
0x879569: mov     eax, [edx]
0x87956B: push    1
0x87956D: mov     ecx, edi
0x87956F: call    eax
0x879571: test    ebp, ebp
0x879573: mov     [ebx+4], ebp
0x879576: jz      short loc_879582
0x879578: add     ebp, 4
0x87957B: push    ebp; lpAddend
0x87957C: call    dword ptr ds:0A28078h
0x879582: mov     ebx, 1
0x879587: add     [esi+60h], ebx
0x87958A: mov     [esp+24h+arg_8], esi
0x87958E: mov     edi, [esp+24h+var_10]
0x879592: mov     edx, [edi+38h]
0x879595: lea     ecx, [esp+24h+arg_8]
0x879599: push    ecx
0x87959A: push    edx
0x87959B: lea     ecx, [edi+40h]
0x87959E: mov     [esp+2Ch+var_4], 0
0x8795A6: call    sub_76CE40
0x8795AB: or      eax, 0FFFFFFFFh
0x8795AE: add     [esi+60h], eax
0x8795B1: mov     [esp+24h+var_4], eax
0x8795B5: jnz     short loc_8795BE
0x8795B7: mov     ecx, esi
0x8795B9: call    sub_7604D0
0x8795BE: add     [edi+38h], ebx
0x8795C1: mov     ecx, [esp+24h+var_C]
0x8795C5: mov     large fs:0, ecx
0x8795CC: pop     ecx
0x8795CD: pop     edi
0x8795CE: pop     esi
0x8795CF: pop     ebp
0x8795D0: pop     ebx
0x8795D1: add     esp, 10h
0x8795D4: retn    10h
