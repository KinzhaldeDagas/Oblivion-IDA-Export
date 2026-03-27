0x7023E0: sub     esp, 118h
0x7023E6: mov     eax, ds:0B30AACh
0x7023EB: xor     eax, esp
0x7023ED: mov     [esp+118h+var_4], eax
0x7023F4: push    ebx
0x7023F5: push    ebp
0x7023F6: push    esi
0x7023F7: mov     esi, [esp+124h+arg_0]
0x7023FE: push    edi
0x7023FF: push    esi
0x702400: mov     edi, ecx
0x702402: call    sub_700FC0
0x702407: lea     eax, [edi+4]
0x70240A: push    eax; lpAddend
0x70240B: call    dword ptr ds:0A28078h
0x702411: cmp     dword ptr [esi+0D8h], 0A000104h
0x70241B: mov     eax, [esi+21Ch]
0x702421: mov     byte ptr [esp+128h+var_118+3], 0
0x702426: lea     ecx, [esp+128h+var_114]
0x70242A: jnb     loc_7024D1
0x702430: mov     ebx, 1
0x702435: push    ebx
0x702436: push    ecx
0x702437: push    ebx
0x702438: lea     edx, [esp+134h+var_109]
0x70243C: push    edx
0x70243D: push    eax
0x70243E: mov     eax, [eax+4]
0x702441: mov     [esp+13Ch+var_114], ebx
0x702445: call    eax
0x702447: add     esp, 14h
0x70244A: cmp     [esp+128h+var_109], 0
0x70244F: lea     ebp, [edi+34h]
0x702452: jz      short loc_702496
0x702454: push    ebp
0x702455: mov     ecx, esi
0x702457: call    sub_713620
0x70245C: mov     ebx, [edi+3Ch]
0x70245F: test    ebx, ebx
0x702461: jz      short loc_702486
0x702463: lea     ecx, [ebx+4]
0x702466: push    ecx; lpAddend
0x702467: call    dword ptr ds:0A2807Ch
0x70246D: test    eax, eax
0x70246F: jnz     short loc_70247F
0x702471: test    ebx, ebx
0x702473: jz      short loc_70247F
0x702475: mov     edx, [ebx]
0x702477: mov     eax, [edx]
0x702479: push    1
0x70247B: mov     ecx, ebx
0x70247D: call    eax
0x70247F: mov     dword ptr [edi+3Ch], 0
0x702486: push    0
0x702488: mov     ecx, esi
0x70248A: mov     byte ptr [esp+12Ch+var_118+3], 1
0x70248F: call    sub_712BC0
0x702494: jmp     short loc_702507
0x702496: push    ebx
0x702497: lea     ecx, [esp+12Ch+var_114]
0x70249B: push    ecx
0x70249C: mov     dword ptr [ebp+0], 0
0x7024A3: mov     eax, [esi+21Ch]
0x7024A9: push    ebx
0x7024AA: lea     edx, [esp+134h+var_118+2]
0x7024AE: push    edx
0x7024AF: push    eax
0x7024B0: mov     eax, [eax+4]
0x7024B3: mov     [esp+13Ch+var_114], ebx
0x7024B7: call    eax
0x7024B9: add     esp, 14h
0x7024BC: cmp     byte ptr [esp+128h+var_118+2], 0
0x7024C1: mov     ecx, esi
0x7024C3: jz      short loc_7024C8
0x7024C5: push    ebx
0x7024C6: jmp     short loc_7024FB
0x7024C8: push    0
0x7024CA: call    sub_712BC0
0x7024CF: jmp     short loc_702507
0x7024D1: push    1
0x7024D3: push    ecx
0x7024D4: push    1
0x7024D6: lea     edx, [esp+134h+var_118+3]
0x7024DA: push    edx
0x7024DB: push    eax
0x7024DC: mov     eax, [eax+4]
0x7024DF: mov     [esp+13Ch+var_114], 1
0x7024E7: call    eax
0x7024E9: add     esp, 14h
0x7024EC: lea     ebp, [edi+34h]
0x7024EF: push    ebp
0x7024F0: mov     ecx, esi
0x7024F2: call    sub_713620
0x7024F7: push    1
0x7024F9: mov     ecx, esi
0x7024FB: call    sub_712BC0
0x702500: mov     ecx, esi
0x702502: call    sub_712A20
0x702507: mov     ebp, [ebp+0]
0x70250A: test    ebp, ebp
0x70250C: jz      short loc_70251A
0x70250E: push    ebp; Src
0x70250F: call    sub_71B090
0x702514: add     esp, 4
0x702517: mov     [edi+38h], eax
0x70251A: cmp     byte ptr [esp+128h+var_118+3], 0
0x70251F: jz      loc_702637
0x702525: mov     ecx, [edi+38h]
0x702528: mov     ebp, [esi+1E8h]
0x70252E: push    ecx; Src
0x70252F: mov     ecx, ebp
0x702531: call    sub_7478F0
0x702536: mov     edx, [ebp+0]
0x702539: mov     eax, [edx+4]
0x70253C: mov     ecx, ebp
0x70253E: call    eax
0x702540: xor     ebx, ebx
0x702542: mov     edx, [ebp+0]
0x702545: mov     edx, [edx+8]
0x702548: push    104h
0x70254D: lea     eax, [esp+12Ch+Src]
0x702551: push    eax
0x702552: mov     ecx, ebp
0x702554: call    edx
0x702556: test    al, al
0x702558: jz      short loc_70256F
0x70255A: push    edi
0x70255B: lea     eax, [esp+12Ch+Src]
0x70255F: push    eax
0x702560: mov     ecx, esi
0x702562: call    sub_712750
0x702567: mov     ebx, eax
0x702569: test    ebx, ebx
0x70256B: jz      short loc_702542
0x70256D: jmp     short loc_702573
0x70256F: test    ebx, ebx
0x702571: jz      short loc_7025AB
0x702573: mov     ecx, [edi+38h]
0x702576: push    ecx
0x702577: call    FormHeapFree
0x70257C: push    104h; Size
0x702581: call    FormHeapAlloc
0x702586: lea     edx, [esp+130h+Src]
0x70258A: push    edx; Src
0x70258B: push    104h; SizeInBytes
0x702590: push    eax; Dst
0x702591: mov     [edi+38h], eax
0x702594: call    _strcpy_s
0x702599: mov     eax, [esi]
0x70259B: mov     edx, [eax+24h]
0x70259E: add     esp, 14h
0x7025A1: push    ebx
0x7025A2: mov     ecx, esi
0x7025A4: call    edx
0x7025A6: jmp     loc_702665
0x7025AB: mov     eax, [ebp+0]
0x7025AE: mov     edx, [eax+4]
0x7025B1: mov     ecx, ebp
0x7025B3: call    edx
0x7025B5: mov     eax, [ebp+0]
0x7025B8: mov     edx, [eax+8]
0x7025BB: push    104h
0x7025C0: lea     ecx, [esp+12Ch+Src]
0x7025C4: push    ecx
0x7025C5: mov     ecx, ebp
0x7025C7: call    edx
0x7025C9: test    al, al
0x7025CB: jz      loc_702665
0x7025D1: lea     eax, [esp+128h+Src]
0x7025D5: push    0
0x7025D7: push    eax
0x7025D8: call    NiFile_CanOpenFileWithMode_Indirect
0x7025DD: add     esp, 8
0x7025E0: test    al, al
0x7025E2: jnz     short loc_7025FE
0x7025E4: mov     edx, [ebp+0]
0x7025E7: mov     edx, [edx+8]
0x7025EA: push    104h
0x7025EF: lea     eax, [esp+12Ch+Src]
0x7025F3: push    eax
0x7025F4: mov     ecx, ebp
0x7025F6: call    edx
0x7025F8: test    al, al
0x7025FA: jnz     short loc_7025D1
0x7025FC: jmp     short loc_702665
0x7025FE: mov     eax, [edi+38h]
0x702601: push    eax
0x702602: call    FormHeapFree
0x702607: push    104h; Size
0x70260C: call    FormHeapAlloc
0x702611: lea     ecx, [esp+130h+Src]
0x702615: push    ecx; Src
0x702616: push    104h; SizeInBytes
0x70261B: push    eax; Dst
0x70261C: mov     [edi+38h], eax
0x70261F: call    _strcpy_s
0x702624: mov     edx, [esi]
0x702626: mov     eax, [edi+38h]
0x702629: mov     edx, [edx+30h]
0x70262C: add     esp, 14h
0x70262F: push    edi
0x702630: push    eax
0x702631: mov     ecx, esi
0x702633: call    edx
0x702635: jmp     short loc_702665
0x702637: mov     eax, [edi+38h]
0x70263A: test    eax, eax
0x70263C: jz      short loc_702665
0x70263E: push    edi
0x70263F: push    eax
0x702640: mov     ecx, esi
0x702642: call    sub_712750
0x702647: test    eax, eax
0x702649: jnz     short loc_70265B
0x70264B: mov     ecx, [edi+38h]
0x70264E: mov     eax, [esi]
0x702650: mov     edx, [eax+30h]
0x702653: push    edi
0x702654: push    ecx
0x702655: mov     ecx, esi
0x702657: call    edx
0x702659: jmp     short loc_702665
0x70265B: mov     edx, [esi]
0x70265D: push    eax
0x70265E: mov     eax, [edx+24h]
0x702661: mov     ecx, esi
0x702663: call    eax
0x702665: mov     eax, [esi+21Ch]
0x70266B: mov     ebp, 1
0x702670: push    ebp
0x702671: lea     ecx, [esp+12Ch+var_114]
0x702675: push    ecx
0x702676: mov     ebx, 4
0x70267B: push    ebx
0x70267C: lea     edx, [esp+134h+var_110]
0x702680: push    edx
0x702681: push    eax
0x702682: mov     eax, [eax+4]
0x702685: mov     [esp+13Ch+var_114], ebx
0x702689: call    eax
0x70268B: mov     ecx, dword ptr [esp+13Ch+var_110]
0x70268F: push    ebp
0x702690: lea     edx, [esp+140h+var_110]
0x702694: push    edx
0x702695: mov     [edi+18h], ecx
0x702698: mov     eax, [esi+21Ch]
0x70269E: mov     edx, [eax+4]
0x7026A1: push    ebx
0x7026A2: lea     ecx, [esp+148h+var_114]
0x7026A6: push    ecx
0x7026A7: push    eax
0x7026A8: mov     dword ptr [esp+150h+var_110], ebx
0x7026AC: call    edx
0x7026AE: mov     eax, [esp+150h+var_114]
0x7026B2: push    ebp
0x7026B3: lea     ecx, [esp+154h+var_110]
0x7026B7: push    ecx
0x7026B8: mov     [edi+20h], eax
0x7026BB: mov     eax, [esi+21Ch]
0x7026C1: push    ebx
0x7026C2: lea     edx, [esp+15Ch+var_114]
0x7026C6: push    edx
0x7026C7: push    eax
0x7026C8: mov     eax, [eax+4]
0x7026CB: mov     dword ptr [esp+164h+var_110], ebx
0x7026CF: call    eax
0x7026D1: mov     ecx, [esp+164h+var_114]
0x7026D5: mov     [edi+1Ch], ecx
0x7026D8: mov     eax, [esi+0D8h]
0x7026DE: add     esp, 3Ch
0x7026E1: cmp     eax, 303000Ch
0x7026E6: jnb     short loc_7026ED
0x7026E8: cmp     [edi+18h], ebx
0x7026EB: jmp     short loc_7026F8
0x7026ED: cmp     eax, 5000001h
0x7026F2: jnb     short loc_702701
0x7026F4: cmp     dword ptr [edi+18h], 5
0x7026F8: jnz     short loc_702701
0x7026FA: mov     dword ptr [edi+18h], 6
0x702701: mov     eax, [esi+21Ch]
0x702707: push    ebp
0x702708: lea     edx, [esp+12Ch+var_110]
0x70270C: push    edx
0x70270D: mov     edx, [eax+4]
0x702710: push    ebp
0x702711: lea     ecx, [esp+134h+var_10A]
0x702715: push    ecx
0x702716: push    eax
0x702717: mov     dword ptr [esp+13Ch+var_110], ebp
0x70271B: call    edx
0x70271D: add     esp, 14h
0x702720: cmp     [esp+128h+var_10A], 0
0x702725: setnz   al
0x702728: mov     [edi+40h], al
0x70272B: cmp     dword ptr [esi+0D8h], 0A010067h
0x702735: jb      short loc_702761
0x702737: mov     esi, [esi+21Ch]
0x70273D: mov     eax, [esi+4]
0x702740: push    ebp
0x702741: lea     ecx, [esp+12Ch+var_110]
0x702745: push    ecx
0x702746: push    ebp
0x702747: lea     edx, [esp+134h+var_118+2]
0x70274B: push    edx
0x70274C: push    esi
0x70274D: mov     dword ptr [esp+13Ch+var_110], ebp
0x702751: call    eax
0x702753: add     esp, 14h
0x702756: cmp     byte ptr [esp+128h+var_118+2], 0
0x70275B: setnz   cl
0x70275E: mov     [edi+41h], cl
0x702761: lea     eax, [edi+4]
0x702764: push    eax; lpAddend
0x702765: call    dword ptr ds:0A2807Ch
0x70276B: test    eax, eax
0x70276D: jnz     short loc_702778
0x70276F: mov     edx, [edi]
0x702771: mov     eax, [edx]
0x702773: push    ebp
0x702774: mov     ecx, edi
0x702776: call    eax
0x702778: mov     ecx, [esp+128h+var_4]
0x70277F: pop     edi
0x702780: pop     esi
0x702781: pop     ebp
0x702782: pop     ebx
0x702783: xor     ecx, esp
0x702785: call    @__security_check_cookie@4; __security_check_cookie(x)
0x70278A: add     esp, 118h
0x702790: retn    4
