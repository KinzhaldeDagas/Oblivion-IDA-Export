0x7425A0: mov     eax, [esp+arg_0]
0x7425A4: sub     esp, 2Ch
0x7425A7: test    eax, eax
0x7425A9: push    edi; int
0x7425AA: jz      loc_7438D9
0x7425B0: mov     edi, [eax+1Ch]
0x7425B3: test    edi, edi
0x7425B5: jz      loc_7438D9
0x7425BB: cmp     dword ptr [eax+0Ch], 0
0x7425BF: jz      loc_7438D9
0x7425C5: cmp     dword ptr [eax], 0
0x7425C8: jnz     short loc_7425D4
0x7425CA: cmp     dword ptr [eax+4], 0
0x7425CE: jnz     loc_7438D9
0x7425D4: cmp     dword ptr [edi], 0Bh
0x7425D7: jnz     short loc_7425DF
0x7425D9: mov     dword ptr [edi], 0Ch
0x7425DF: mov     ecx, [eax+0Ch]
0x7425E2: push    ebx; int
0x7425E3: mov     ebx, [edi+30h]
0x7425E6: mov     [esp+34h+Dst], ecx; Dst
0x7425EA: mov     ecx, [eax+10h]
0x7425ED: push    ebp; int
0x7425EE: mov     ebp, [eax]
0x7425F0: mov     eax, [eax+4]
0x7425F3: mov     [esp+38h+var_20], ecx; int
0x7425F7: mov     [esp+38h+var_10], ecx; int
0x7425FB: mov     ecx, [edi]
0x7425FD: cmp     ecx, 1Ch; switch 29 cases
0x742600: push    esi
0x742601: mov     esi, [edi+34h]
0x742604: mov     [esp+3Ch+var_2C], eax
0x742608: mov     [esp+3Ch+var_24], ebx
0x74260C: mov     [esp+3Ch+var_4], eax; int
0x742610: mov     [esp+3Ch+var_C], 0; int
0x742618: ja      def_742620
0x74261E: mov     edi, edi
0x742620: jmp     ds:jpt_742620[ecx*4]; switch jump
0x742627: cmp     dword ptr [edi+8], 0; jumptable 00742620 case 0
0x74262B: jnz     short loc_742638
0x74262D: mov     dword ptr [edi], 0Ch
0x742633: jmp     loc_7437A3
0x742638: cmp     esi, 10h
0x74263B: jnb     short loc_742668
0x74263D: lea     ecx, [ecx+0]
0x742640: test    eax, eax
0x742642: jz      loc_743801
0x742648: movzx   edx, byte ptr [ebp+0]
0x74264C: mov     ecx, esi
0x74264E: shl     edx, cl
0x742650: sub     eax, 1
0x742653: add     esi, 8
0x742656: add     ebp, 1
0x742659: add     ebx, edx
0x74265B: cmp     esi, 10h
0x74265E: mov     [esp+3Ch+var_2C], eax
0x742662: mov     [esp+3Ch+var_24], ebx
0x742666: jb      short loc_742640
0x742668: mov     eax, [edi+8]
0x74266B: test    al, 2
0x74266D: jz      short loc_7426BC
0x74266F: cmp     ebx, 8B1Fh
0x742675: jnz     short loc_7426BC
0x742677: push    0
0x742679: push    0
0x74267B: push    0
0x74267D: call    sub_745D90
0x742682: mov     [edi+14h], eax
0x742685: push    2
0x742687: lea     eax, [esp+4Ch+var_1C]
0x74268B: mov     [esp+4Ch+var_1C], 1Fh
0x742690: mov     [esp+4Ch+var_1B], 8Bh ; '‹'
0x742695: mov     ecx, [edi+14h]
0x742698: push    eax
0x742699: push    ecx
0x74269A: call    sub_745D90
0x74269F: xor     ebx, ebx
0x7426A1: add     esp, 18h
0x7426A4: mov     [edi+14h], eax
0x7426A7: mov     eax, [esp+3Ch+var_2C]
0x7426AB: mov     [esp+3Ch+var_24], ebx
0x7426AF: xor     esi, esi
0x7426B1: mov     dword ptr [edi], 1
0x7426B7: jmp     loc_7437A3
0x7426BC: test    al, 1
0x7426BE: mov     dword ptr [edi+10h], 0
0x7426C5: jz      loc_742764
0x7426CB: movzx   eax, bl
0x7426CE: shl     eax, 8
0x7426D1: mov     edx, ebx
0x7426D3: shr     edx, 8
0x7426D6: add     eax, edx
0x7426D8: xor     edx, edx
0x7426DA: mov     ecx, 1Fh
0x7426DF: div     ecx
0x7426E1: test    edx, edx
0x7426E3: jnz     short loc_742764
0x7426E5: mov     edx, ebx
0x7426E7: and     dl, 0Fh
0x7426EA: cmp     dl, 8
0x7426ED: jz      short loc_742703
0x7426EF: mov     eax, [esp+3Ch+arg_0]
0x7426F3: mov     dword ptr [eax+18h], offset aUnknownCompres; "unknown compression method"
0x7426FA: mov     eax, [esp+3Ch+var_2C]
0x7426FE: jmp     loc_74379D
0x742703: shr     ebx, 4
0x742706: mov     ecx, ebx
0x742708: and     ecx, 0Fh
0x74270B: add     ecx, 8
0x74270E: sub     esi, 4
0x742711: cmp     ecx, [edi+1Ch]
0x742714: mov     [esp+3Ch+var_24], ebx
0x742718: jbe     short loc_74272E
0x74271A: mov     edx, [esp+3Ch+arg_0]
0x74271E: mov     eax, [esp+3Ch+var_2C]
0x742722: mov     dword ptr [edx+18h], offset aInvalidWindowS; "invalid window size"
0x742729: jmp     loc_74379D
0x74272E: push    0
0x742730: push    0
0x742732: push    0
0x742734: call    sub_7459B0
0x742739: mov     ecx, [esp+48h+arg_0]
0x74273D: shr     ebx, 8
0x742740: not     ebx
0x742742: and     ebx, 2
0x742745: or      ebx, 9
0x742748: mov     [edi+14h], eax
0x74274B: mov     [ecx+30h], eax
0x74274E: mov     eax, [esp+48h+var_2C]
0x742752: mov     [edi], ebx
0x742754: xor     ebx, ebx
0x742756: add     esp, 0Ch
0x742759: mov     [esp+3Ch+var_24], ebx
0x74275D: xor     esi, esi
0x74275F: jmp     loc_7437A3
0x742764: mov     edx, [esp+3Ch+arg_0]
0x742768: mov     eax, [esp+3Ch+var_2C]
0x74276C: mov     dword ptr [edx+18h], offset aIncorrectHeade; "incorrect header check"
0x742773: jmp     loc_74379D
0x742778: cmp     esi, 10h; jumptable 00742620 case 1
0x74277B: jnb     short loc_7427A8
0x74277D: lea     ecx, [ecx+0]
0x742780: test    eax, eax
0x742782: jz      loc_743801
0x742788: movzx   edx, byte ptr [ebp+0]
0x74278C: mov     ecx, esi
0x74278E: shl     edx, cl
0x742790: sub     eax, 1
0x742793: add     esi, 8
0x742796: add     ebp, 1
0x742799: add     ebx, edx
0x74279B: cmp     esi, 10h
0x74279E: mov     [esp+3Ch+var_2C], eax
0x7427A2: mov     [esp+3Ch+var_24], ebx
0x7427A6: jb      short loc_742780
0x7427A8: cmp     bl, 8
0x7427AB: mov     [edi+10h], ebx
0x7427AE: jz      short loc_7427C0
0x7427B0: mov     ecx, [esp+3Ch+arg_0]
0x7427B4: mov     dword ptr [ecx+18h], offset aUnknownCompres; "unknown compression method"
0x7427BB: jmp     loc_74379D
0x7427C0: test    ebx, 0E000h
0x7427C6: jz      short loc_7427D8
0x7427C8: mov     edx, [esp+3Ch+arg_0]
0x7427CC: mov     dword ptr [edx+18h], offset aUnknownHeaderF; "unknown header flags set"
0x7427D3: jmp     loc_74379D
0x7427D8: test    ebx, 200h
0x7427DE: jz      short loc_742805
0x7427E0: mov     [esp+3Ch+var_1C], bl
0x7427E4: shr     ebx, 8
0x7427E7: push    2
0x7427E9: lea     eax, [esp+40h+var_1C]
0x7427ED: mov     [esp+40h+var_1B], bl
0x7427F1: mov     ecx, [edi+14h]
0x7427F4: push    eax
0x7427F5: push    ecx
0x7427F6: call    sub_745D90
0x7427FB: mov     [edi+14h], eax
0x7427FE: mov     eax, [esp+48h+var_2C]
0x742802: add     esp, 0Ch
0x742805: xor     ebx, ebx
0x742807: xor     esi, esi
0x742809: mov     dword ptr [edi], 2
0x74280F: jmp     short loc_742816
0x742811: cmp     esi, 20h ; ' '; jumptable 00742620 case 2
0x742814: jnb     short loc_74283A
0x742816: test    eax, eax
0x742818: jz      loc_743801
0x74281E: movzx   edx, byte ptr [ebp+0]
0x742822: mov     ecx, esi
0x742824: shl     edx, cl
0x742826: sub     eax, 1
0x742829: add     esi, 8
0x74282C: add     ebp, 1
0x74282F: add     ebx, edx
0x742831: cmp     esi, 20h ; ' '
0x742834: mov     [esp+3Ch+var_2C], eax
0x742838: jb      short loc_742816
0x74283A: test    dword ptr [edi+10h], 200h
0x742841: jz      short loc_74287A
0x742843: mov     [esp+3Ch+var_1C], bl
0x742847: mov     eax, ebx
0x742849: mov     ecx, ebx
0x74284B: shr     eax, 8
0x74284E: shr     ecx, 10h
0x742851: shr     ebx, 18h
0x742854: push    4
0x742856: lea     edx, [esp+40h+var_1C]
0x74285A: mov     [esp+40h+var_1B], al
0x74285E: mov     [esp+40h+var_1A], cl
0x742862: mov     [esp+40h+var_19], bl
0x742866: mov     eax, [edi+14h]
0x742869: push    edx
0x74286A: push    eax
0x74286B: call    sub_745D90
0x742870: mov     [edi+14h], eax
0x742873: mov     eax, [esp+48h+var_2C]
0x742877: add     esp, 0Ch
0x74287A: xor     ebx, ebx
0x74287C: xor     esi, esi
0x74287E: mov     dword ptr [edi], 3
0x742884: jmp     short loc_742890
0x742886: cmp     esi, 10h; jumptable 00742620 case 3
0x742889: jnb     short loc_7428B4
0x74288B: jmp     short loc_742890
0x74288D: align 10h
0x742890: test    eax, eax
0x742892: jz      loc_743801
0x742898: movzx   edx, byte ptr [ebp+0]
0x74289C: mov     ecx, esi
0x74289E: shl     edx, cl
0x7428A0: sub     eax, 1
0x7428A3: add     esi, 8
0x7428A6: add     ebp, 1
0x7428A9: add     ebx, edx
0x7428AB: cmp     esi, 10h
0x7428AE: mov     [esp+3Ch+var_2C], eax
0x7428B2: jb      short loc_742890
0x7428B4: test    dword ptr [edi+10h], 200h
0x7428BB: jz      short loc_7428E2
0x7428BD: mov     [esp+3Ch+var_1C], bl
0x7428C1: shr     ebx, 8
0x7428C4: push    2
0x7428C6: lea     eax, [esp+40h+var_1C]
0x7428CA: mov     [esp+40h+var_1B], bl
0x7428CE: mov     ecx, [edi+14h]
0x7428D1: push    eax
0x7428D2: push    ecx
0x7428D3: call    sub_745D90
0x7428D8: mov     [edi+14h], eax
0x7428DB: mov     eax, [esp+48h+var_2C]
0x7428DF: add     esp, 0Ch
0x7428E2: xor     ebx, ebx
0x7428E4: mov     [esp+3Ch+var_24], ebx
0x7428E8: xor     esi, esi
0x7428EA: mov     dword ptr [edi], 4
0x7428F0: test    dword ptr [edi+10h], 400h; jumptable 00742620 case 4
0x7428F7: jz      short loc_74295D
0x7428F9: cmp     esi, 10h
0x7428FC: jnb     short loc_742924
0x7428FE: mov     edi, edi
0x742900: test    eax, eax
0x742902: jz      loc_743801
0x742908: movzx   edx, byte ptr [ebp+0]
0x74290C: mov     ecx, esi
0x74290E: shl     edx, cl
0x742910: sub     eax, 1
0x742913: add     esi, 8
0x742916: add     ebp, 1
0x742919: add     ebx, edx
0x74291B: cmp     esi, 10h
0x74291E: mov     [esp+3Ch+var_2C], eax
0x742922: jb      short loc_742900
0x742924: test    dword ptr [edi+10h], 200h
0x74292B: mov     [edi+38h], ebx
0x74292E: jz      short loc_742955
0x742930: mov     [esp+3Ch+var_1C], bl
0x742934: shr     ebx, 8
0x742937: push    2
0x742939: lea     eax, [esp+40h+var_1C]
0x74293D: mov     [esp+40h+var_1B], bl
0x742941: mov     ecx, [edi+14h]
0x742944: push    eax
0x742945: push    ecx
0x742946: call    sub_745D90
0x74294B: mov     [edi+14h], eax
0x74294E: mov     eax, [esp+48h+var_2C]
0x742952: add     esp, 0Ch
0x742955: xor     ebx, ebx
0x742957: mov     [esp+3Ch+var_24], ebx
0x74295B: xor     esi, esi
0x74295D: mov     dword ptr [edi], 5
0x742963: mov     edx, [edi+10h]; jumptable 00742620 case 5
0x742966: test    edx, 400h
0x74296C: jz      short loc_7429BD
0x74296E: mov     ecx, [edi+38h]
0x742971: cmp     ecx, eax
0x742973: mov     [esp+3Ch+var_28], ecx
0x742977: jbe     short loc_74297F
0x742979: mov     ecx, eax
0x74297B: mov     [esp+3Ch+var_28], eax
0x74297F: test    ecx, ecx
0x742981: jz      short loc_7429B3
0x742983: test    edx, 200h
0x742989: jz      short loc_7429A8
0x74298B: mov     edx, [esp+3Ch+var_28]
0x74298F: mov     eax, [edi+14h]
0x742992: push    edx
0x742993: push    ebp
0x742994: push    eax
0x742995: call    sub_745D90
0x74299A: mov     ecx, [esp+48h+var_28]
0x74299E: mov     [edi+14h], eax
0x7429A1: mov     eax, [esp+48h+var_2C]
0x7429A5: add     esp, 0Ch
0x7429A8: sub     eax, ecx
0x7429AA: add     ebp, ecx
0x7429AC: sub     [edi+38h], ecx
0x7429AF: mov     [esp+3Ch+var_2C], eax
0x7429B3: cmp     dword ptr [edi+38h], 0
0x7429B7: jnz     loc_743801
0x7429BD: mov     dword ptr [edi], 6
0x7429C3: test    dword ptr [edi+10h], 800h; jumptable 00742620 case 6
0x7429CA: jz      short loc_742A22
0x7429CC: test    eax, eax
0x7429CE: jz      loc_743801
0x7429D4: xor     ecx, ecx
0x7429D6: movzx   edx, byte ptr [ecx+ebp]
0x7429DA: add     ecx, 1
0x7429DD: test    edx, edx
0x7429DF: mov     [esp+3Ch+var_14], edx
0x7429E3: jz      short loc_7429E9
0x7429E5: cmp     ecx, eax
0x7429E7: jb      short loc_7429D6
0x7429E9: test    dword ptr [edi+10h], 2000h
0x7429F0: mov     [esp+3Ch+var_28], ecx
0x7429F4: jz      short loc_742A0F
0x7429F6: mov     edx, [edi+14h]
0x7429F9: push    ecx
0x7429FA: push    ebp
0x7429FB: push    edx
0x7429FC: call    sub_745D90
0x742A01: mov     ecx, [esp+48h+var_28]
0x742A05: mov     [edi+14h], eax
0x742A08: mov     eax, [esp+48h+var_2C]
0x742A0C: add     esp, 0Ch
0x742A0F: sub     eax, ecx
0x742A11: add     ebp, ecx
0x742A13: cmp     [esp+3Ch+var_14], 0
0x742A18: mov     [esp+3Ch+var_2C], eax
0x742A1C: jnz     loc_743801
0x742A22: mov     dword ptr [edi], 7
0x742A28: test    dword ptr [edi+10h], 1000h; jumptable 00742620 case 7
0x742A2F: jz      short loc_742A8E
0x742A31: test    eax, eax
0x742A33: jz      loc_743801
0x742A39: xor     ecx, ecx
0x742A3B: jmp     short loc_742A40
0x742A3D: align 10h
0x742A40: movzx   edx, byte ptr [ecx+ebp]
0x742A44: add     ecx, 1
0x742A47: test    edx, edx
0x742A49: mov     [esp+3Ch+var_14], edx
0x742A4D: jz      short loc_742A53
0x742A4F: cmp     ecx, eax
0x742A51: jb      short loc_742A40
0x742A53: test    dword ptr [edi+10h], 2000h
0x742A5A: mov     [esp+3Ch+var_28], ecx
0x742A5E: jz      short loc_742A7B
0x742A60: mov     eax, ecx
0x742A62: mov     ecx, [edi+14h]
0x742A65: push    eax
0x742A66: push    ebp
0x742A67: push    ecx
0x742A68: call    sub_745D90
0x742A6D: mov     ecx, [esp+48h+var_28]
0x742A71: mov     [edi+14h], eax
0x742A74: mov     eax, [esp+48h+var_2C]
0x742A78: add     esp, 0Ch
0x742A7B: sub     eax, ecx
0x742A7D: add     ebp, ecx
0x742A7F: cmp     [esp+3Ch+var_14], 0
0x742A84: mov     [esp+3Ch+var_2C], eax
0x742A88: jnz     loc_743801
0x742A8E: mov     dword ptr [edi], 8
0x742A94: test    dword ptr [edi+10h], 200h; jumptable 00742620 case 8
0x742A9B: jz      short loc_742AEA
0x742A9D: cmp     esi, 10h
0x742AA0: jnb     short loc_742ACA
0x742AA2: test    eax, eax
0x742AA4: jz      loc_743801
0x742AAA: movzx   edx, byte ptr [ebp+0]
0x742AAE: mov     ecx, esi
0x742AB0: shl     edx, cl
0x742AB2: sub     eax, 1
0x742AB5: add     esi, 8
0x742AB8: add     ebp, 1
0x742ABB: add     ebx, edx
0x742ABD: cmp     esi, 10h
0x742AC0: mov     [esp+3Ch+var_2C], eax
0x742AC4: mov     [esp+3Ch+var_24], ebx
0x742AC8: jb      short loc_742AA2
0x742ACA: movzx   ecx, word ptr [edi+14h]
0x742ACE: cmp     ebx, ecx
0x742AD0: jz      short loc_742AE2
0x742AD2: mov     edx, [esp+3Ch+arg_0]
0x742AD6: mov     dword ptr [edx+18h], offset aHeaderCrcMisma; "header crc mismatch"
0x742ADD: jmp     loc_74379D
0x742AE2: xor     ebx, ebx
0x742AE4: mov     [esp+3Ch+var_24], ebx
0x742AE8: xor     esi, esi
0x742AEA: push    0
0x742AEC: push    0
0x742AEE: push    0
0x742AF0: call    sub_745D90
0x742AF5: mov     ecx, [esp+48h+arg_0]
0x742AF9: mov     [edi+14h], eax
0x742AFC: mov     [ecx+30h], eax
0x742AFF: mov     eax, [esp+48h+var_2C]
0x742B03: add     esp, 0Ch
0x742B06: mov     dword ptr [edi], 0Bh
0x742B0C: jmp     loc_7437A3
0x742B11: cmp     esi, 20h ; ' '; jumptable 00742620 case 9
0x742B14: jnb     short loc_742B3E
0x742B16: test    eax, eax
0x742B18: jz      loc_743801
0x742B1E: movzx   edx, byte ptr [ebp+0]
0x742B22: mov     ecx, esi
0x742B24: shl     edx, cl
0x742B26: sub     eax, 1
0x742B29: add     esi, 8
0x742B2C: add     ebp, 1
0x742B2F: add     ebx, edx
0x742B31: cmp     esi, 20h ; ' '
0x742B34: mov     [esp+3Ch+var_2C], eax
0x742B38: mov     [esp+3Ch+var_24], ebx; int
0x742B3C: jb      short loc_742B16
0x742B3E: mov     ecx, ebx
0x742B40: and     ecx, 0FF00h
0x742B46: mov     edx, ebx
0x742B48: shl     edx, 10h
0x742B4B: add     ecx, edx
0x742B4D: xor     edx, edx
0x742B4F: mov     dh, byte ptr [esp+3Ch+var_24+2]
0x742B53: shl     ecx, 8
0x742B56: shr     ebx, 18h
0x742B59: add     ecx, edx
0x742B5B: mov     edx, [esp+3Ch+arg_0]
0x742B5F: add     ecx, ebx
0x742B61: mov     [edi+14h], ecx
0x742B64: mov     [edx+30h], ecx
0x742B67: xor     ebx, ebx
0x742B69: xor     esi, esi
0x742B6B: mov     dword ptr [edi], 0Ah
0x742B71: cmp     dword ptr [edi+0Ch], 0; jumptable 00742620 case 10
0x742B75: jz      loc_7437BB
0x742B7B: push    0
0x742B7D: push    0
0x742B7F: push    0
0x742B81: call    sub_7459B0
0x742B86: mov     ecx, [esp+48h+arg_0]
0x742B8A: mov     [edi+14h], eax
0x742B8D: mov     [ecx+30h], eax
0x742B90: mov     eax, [esp+48h+var_2C]
0x742B94: add     esp, 0Ch
0x742B97: mov     dword ptr [edi], 0Bh
0x742B9D: cmp     [esp+3Ch+arg_4], 5; jumptable 00742620 case 11
0x742BA2: jz      loc_743801
0x742BA8: cmp     dword ptr [edi+4], 0; jumptable 00742620 case 12
0x742BAC: jz      short loc_742BC6
0x742BAE: mov     ecx, esi
0x742BB0: and     ecx, 7
0x742BB3: shr     ebx, cl
0x742BB5: sub     esi, ecx
0x742BB7: mov     dword ptr [edi], 18h
0x742BBD: mov     [esp+3Ch+var_24], ebx
0x742BC1: jmp     loc_7437A3
0x742BC6: cmp     esi, 3
0x742BC9: jnb     short loc_742BF4
0x742BCB: jmp     short loc_742BD0
0x742BCD: align 10h
0x742BD0: test    eax, eax
0x742BD2: jz      loc_743801
0x742BD8: movzx   edx, byte ptr [ebp+0]
0x742BDC: mov     ecx, esi
0x742BDE: shl     edx, cl
0x742BE0: sub     eax, 1
0x742BE3: add     esi, 8
0x742BE6: add     ebp, 1
0x742BE9: add     ebx, edx
0x742BEB: cmp     esi, 3
0x742BEE: mov     [esp+3Ch+var_2C], eax; int
0x742BF2: jb      short loc_742BD0
0x742BF4: mov     ecx, ebx
0x742BF6: and     ecx, 1
0x742BF9: shr     ebx, 1
0x742BFB: mov     [edi+4], ecx
0x742BFE: mov     ecx, ebx
0x742C00: and     ecx, 3
0x742C03: sub     esi, 1
0x742C06: cmp     ecx, 3; switch 4 cases
0x742C09: ja      short def_742C0B
0x742C0B: jmp     ds:jpt_742C0B[ecx*4]; switch jump
0x742C12: shr     ebx, 2; jumptable 00742C0B case 0
0x742C15: mov     dword ptr [edi], 0Dh
0x742C1B: mov     [esp+3Ch+var_24], ebx
0x742C1F: sub     esi, 2
0x742C22: jmp     loc_7437A3
0x742C27: shr     ebx, 2; jumptable 00742C0B case 1
0x742C2A: mov     dword ptr [edi+44h], offset unk_A81CA8
0x742C31: mov     dword ptr [edi+4Ch], 9
0x742C38: mov     dword ptr [edi+48h], offset unk_A824A8
0x742C3F: mov     dword ptr [edi+50h], 5
0x742C46: mov     dword ptr [edi], 12h
0x742C4C: mov     [esp+3Ch+var_24], ebx
0x742C50: sub     esi, 2
0x742C53: jmp     loc_7437A3
0x742C58: shr     ebx, 2; jumptable 00742C0B case 2
0x742C5B: mov     dword ptr [edi], 0Fh
0x742C61: mov     [esp+3Ch+var_24], ebx
0x742C65: sub     esi, 2
0x742C68: jmp     loc_7437A3
0x742C6D: mov     edx, [esp+3Ch+arg_0]; jumptable 00742C0B case 3
0x742C71: mov     dword ptr [edx+18h], offset aInvalidBlock_0; "invalid block type"
0x742C78: mov     dword ptr [edi], 1Bh
