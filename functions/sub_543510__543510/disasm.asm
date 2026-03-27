0x543510: push    0FFFFFFFFh
0x543512: push    offset SEH_5ACE20
0x543517: mov     eax, large fs:0
0x54351D: push    eax
0x54351E: sub     esp, 8
0x543521: push    ebx
0x543522: push    ebp
0x543523: push    esi
0x543524: push    edi
0x543525: mov     eax, ds:0B30AACh
0x54352A: xor     eax, esp
0x54352C: push    eax
0x54352D: lea     eax, [esp+28h+var_C]
0x543531: mov     large fs:0, eax
0x543537: mov     esi, ecx
0x543539: push    3
0x54353B: call    nullsub_returnTrue_0arg
0x543540: xor     ebp, ebp
0x543542: add     esp, 4
0x543545: cmp     [esi+2Ch], ebp
0x543548: jz      loc_543681
0x54354E: cmp     [esi+10h], ebp
0x543551: jz      loc_543681
0x543557: mov     ecx, ds:0B33B00h
0x54355D: call    sub_45A500
0x543562: test    al, al
0x543564: jnz     loc_543681
0x54356A: xor     ebx, ebx
0x54356C: lea     esp, [esp+0]
0x543570: mov     eax, [esi+10h]
0x543573: lea     ecx, [ebx+ebx*2+6]
0x543577: add     ecx, ecx
0x543579: add     ecx, ecx
0x54357B: add     eax, ecx
0x54357D: cmp     eax, ebp
0x54357F: jz      loc_54366A
0x543585: movzx   edx, word ptr [eax+8]
0x543589: cmp     dx, 0FFFFh
0x54358E: jnz     short loc_5435A3
0x543590: mov     eax, [eax+4]
0x543593: lea     edi, [eax+1]
0x543596: mov     dl, [eax]
0x543598: add     eax, 1
0x54359B: test    dl, dl
0x54359D: jnz     short loc_543596
0x54359F: sub     eax, edi
0x5435A1: jmp     short loc_5435A6
0x5435A3: movzx   eax, dx
0x5435A6: cmp     eax, ebp
0x5435A8: jz      loc_54366A
0x5435AE: mov     [esp+28h+Src], ebp
0x5435B2: mov     [esp+28h+var_10], bp
0x5435B7: mov     [esp+28h+var_E], bp
0x5435BC: mov     edx, [esi+10h]
0x5435BF: mov     eax, [ecx+edx+4]
0x5435C3: add     ecx, edx
0x5435C5: cmp     eax, ebp
0x5435C7: mov     [esp+28h+var_4], ebp
0x5435CB: jnz     short loc_5435D2
0x5435CD: mov     eax, offset EmptyString
0x5435D2: push    eax
0x5435D3: mov     eax, [ecx]
0x5435D5: mov     edx, [eax+14h]
0x5435D8: call    edx
0x5435DA: push    eax; ArgList
0x5435DB: lea     eax, [esp+30h+Src]
0x5435DF: push    offset aSS_0; "%s%s"
0x5435E4: push    eax; int
0x5435E5: call    BSStringT_Static_Format
0x5435EA: mov     ecx, ds:0B33A04h
0x5435F0: add     esp, 10h
0x5435F3: cmp     ecx, ebp
0x5435F5: mov     ebp, [esp+28h+Src]
0x5435F9: jz      short loc_543647
0x5435FB: mov     edx, [ecx]
0x5435FD: mov     eax, [edx+4]
0x543600: push    0FFFFFFFFh
0x543602: push    0
0x543604: push    0
0x543606: push    ebp
0x543607: call    eax
0x543609: test    eax, eax
0x54360B: jz      short loc_543647
0x54360D: mov     ecx, [esi+2Ch]
0x543610: mov     ecx, [ecx+ebx*4+8]
0x543614: push    6
0x543616: call    NiNode_GetNiPropertyByID
0x54361B: test    eax, eax
0x54361D: jz      short loc_543647
0x54361F: mov     edx, [esi+2Ch]
0x543622: mov     edi, [edx+ebx*4+8]
0x543626: push    1; char
0x543628: push    offset dword_B256D0; int
0x54362D: push    ebp; Src
0x54362E: call    NiSourceTexture__LoadTextureByFilename
0x543633: add     esp, 0Ch
0x543636: push    eax
0x543637: push    6
0x543639: mov     ecx, edi
0x54363B: call    NiNode_GetNiPropertyByID
0x543640: mov     ecx, eax
0x543642: call    NiTexturingProperty__SetUnk08
0x543647: push    ebp
0x543648: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x543650: call    FormHeapFree
0x543655: xor     eax, eax
0x543657: add     esp, 4
0x54365A: mov     [esp+28h+Src], eax
0x54365E: mov     [esp+28h+var_E], ax
0x543663: mov     [esp+28h+var_10], ax
0x543668: xor     ebp, ebp
0x54366A: lea     eax, [ebx+1]
0x54366D: xor     edx, edx
0x54366F: mov     ecx, 3
0x543674: div     ecx
0x543676: mov     ebx, edx
0x543678: cmp     ebx, 2
0x54367B: jl      loc_543570
0x543681: mov     eax, [esi+30h]
0x543684: cmp     eax, ebp
0x543686: jz      short loc_5436B2
0x543688: mov     edx, [eax+14h]
0x54368B: mov     ecx, ds:0B365C4h
0x543691: push    ebp; int
0x543692: push    offset sub_540EF0; int
0x543697: push    offset aTexturesSkyMoo; "Textures\\Sky\\MoonShadow.dds"
0x54369C: push    edx; int
0x54369D: add     ecx, 0F8h ; 'ø'
0x5436A3: call    sub_544160
0x5436A8: mov     eax, [esi+30h]
0x5436AB: mov     dword ptr [eax+70h], 2
0x5436B2: mov     eax, [esi+34h]
0x5436B5: cmp     eax, ebp
0x5436B7: jz      short loc_5436E3
0x5436B9: mov     ecx, [eax+14h]
0x5436BC: push    ebp; int
0x5436BD: push    offset sub_540F20; int
0x5436C2: push    offset aTexturesSkyMoo; "Textures\\Sky\\MoonShadow.dds"
0x5436C7: push    ecx; int
0x5436C8: mov     ecx, ds:0B365C4h
0x5436CE: add     ecx, 0F8h ; 'ø'
0x5436D4: call    sub_544160
0x5436D9: mov     edx, [esi+34h]
0x5436DC: mov     dword ptr [edx+70h], 2
0x5436E3: mov     ecx, [esi+28h]
0x5436E6: cmp     ecx, ebp
0x5436E8: jz      short loc_543767
0x5436EA: mov     eax, [esi+0Ch]
0x5436ED: cmp     eax, ebp
0x5436EF: jz      short loc_543767
0x5436F1: push    ebp
0x5436F2: add     eax, 38h ; '8'
0x5436F5: push    offset sub_542E40
0x5436FA: push    eax
0x5436FB: mov     eax, [ecx+8]
0x5436FE: push    eax
0x5436FF: call    sub_542D30
0x543704: mov     edi, [esi+0Ch]
0x543707: add     esp, 10h
0x54370A: add     edi, 44h ; 'D'
0x54370D: cmp     byte ptr ds:0B43070h, 0
0x543714: jnz     short loc_543751
0x543716: cmp     edi, ebp
0x543718: jz      short loc_543751
0x54371A: mov     eax, [edi+4]
0x54371D: cmp     eax, ebp
0x54371F: jnz     short loc_543726
0x543721: mov     eax, offset EmptyString
0x543726: push    offset aSkySunglare_dd; "Sky\\SunGlare.dds"
0x54372B: push    eax; Str1
0x54372C: call    __strcmp
0x543731: add     esp, 8
0x543734: test    eax, eax
0x543736: jnz     short loc_543751
0x543738: mov     ecx, [esi+28h]
0x54373B: mov     edx, [ecx+0Ch]
0x54373E: push    ebp
0x54373F: push    offset sub_542E70
0x543744: push    offset aTexturesSkySun; "Textures\\Sky\\SunGlareNonHDR.dds"
0x543749: push    edx
0x54374A: call    sub_53FBE0
0x54374F: jmp     short loc_543764
0x543751: mov     eax, [esi+28h]
0x543754: mov     ecx, [eax+0Ch]
0x543757: push    ebp
0x543758: push    offset sub_542E70
0x54375D: push    edi
0x54375E: push    ecx
0x54375F: call    sub_542D30
0x543764: add     esp, 10h
0x543767: cmp     [esi+24h], ebp
0x54376A: jz      short loc_54379F
0x54376C: mov     ecx, [esi+0Ch]
0x54376F: cmp     ecx, ebp
0x543771: jz      short loc_54379F
0x543773: mov     edx, [ecx+18h]
0x543776: mov     eax, [edx+14h]
0x543779: add     ecx, 18h
0x54377C: call    eax
0x54377E: mov     ecx, [esi+24h]
0x543781: push    eax
0x543782: call    sub_544780
0x543787: mov     ecx, [esi+24h]
0x54378A: mov     edx, [ecx]
0x54378C: mov     eax, [edx+4]
0x54378F: push    1
0x543791: push    ebp
0x543792: push    0Ah
0x543794: call    eax
0x543796: push    eax
0x543797: call    sub_7B8940
0x54379C: add     esp, 10h
0x54379F: push    2
0x5437A1: call    nullsub_returnTrue_0arg
0x5437A6: add     esp, 4
0x5437A9: mov     ecx, dword ptr [esp+28h+var_C]
0x5437AD: mov     large fs:0, ecx
0x5437B4: pop     ecx
0x5437B5: pop     edi
0x5437B6: pop     esi
0x5437B7: pop     ebp
0x5437B8: pop     ebx
0x5437B9: add     esp, 14h
0x5437BC: retn
