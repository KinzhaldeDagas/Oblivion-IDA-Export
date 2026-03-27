0x729450: push    0FFFFFFFFh
0x729452: push    offset SEH_6E16A0
0x729457: mov     eax, large fs:0
0x72945D: push    eax
0x72945E: sub     esp, 10h
0x729461: push    ebx
0x729462: push    ebp
0x729463: push    esi
0x729464: push    edi
0x729465: mov     eax, ds:0B30AACh
0x72946A: xor     eax, esp
0x72946C: push    eax
0x72946D: lea     eax, [esp+30h+var_C]
0x729471: mov     large fs:0, eax
0x729477: mov     esi, ecx
0x729479: mov     edi, [esp+30h+a2]
0x72947D: push    edi; a2
0x72947E: call    sub_7008A0
0x729483: mov     eax, [edi+0D8h]
0x729489: cmp     eax, 0A010072h
0x72948E: jb      short loc_7294C6
0x729490: mov     eax, [edi+21Ch]
0x729496: push    1
0x729498: lea     ecx, [esp+34h+var_18]
0x72949C: push    ecx
0x72949D: push    4
0x72949F: lea     edx, [esp+3Ch+var_14]
0x7294A3: push    edx
0x7294A4: push    eax
0x7294A5: mov     eax, [eax+4]
0x7294A8: mov     [esp+44h+var_18], 4
0x7294B0: call    eax
0x7294B2: mov     ecx, [esp+44h+var_14]
0x7294B6: add     esp, 14h
0x7294B9: push    ecx
0x7294BA: mov     ecx, edi
0x7294BC: call    sub_712550
0x7294C1: mov     ds:0B3FE00h, eax
0x7294C6: mov     eax, [edi+21Ch]
0x7294CC: mov     ebp, 1
0x7294D1: push    ebp
0x7294D2: lea     edx, [esp+34h+var_14]
0x7294D6: push    edx
0x7294D7: push    2
0x7294D9: lea     ebx, [esi+8]
0x7294DC: push    ebx
0x7294DD: push    eax
0x7294DE: mov     eax, [eax+4]
0x7294E1: mov     [esp+44h+var_14], 2
0x7294E9: call    eax
0x7294EB: add     esp, 14h
0x7294EE: cmp     dword ptr [edi+0D8h], 0A000110h
0x7294F8: jb      short loc_729533
0x7294FA: mov     eax, [edi+21Ch]
0x729500: push    ebp
0x729501: lea     ecx, [esp+34h+var_14]
0x729505: push    ecx
0x729506: push    ebp
0x729507: lea     edx, [esi+30h]
0x72950A: push    edx
0x72950B: push    eax
0x72950C: mov     eax, [eax+4]
0x72950F: mov     [esp+44h+var_14], ebp
0x729513: call    eax
0x729515: mov     eax, [edi+21Ch]
0x72951B: push    ebp
0x72951C: lea     ecx, [esp+48h+var_14]
0x729520: push    ecx
0x729521: push    ebp
0x729522: lea     edx, [esi+31h]
0x729525: push    edx
0x729526: push    eax
0x729527: mov     eax, [eax+4]
0x72952A: mov     [esp+58h+var_14], ebp
0x72952E: call    eax
0x729530: add     esp, 28h
0x729533: mov     eax, [edi+0D8h]
0x729539: cmp     eax, 4010000h
0x72953E: mov     eax, [edi+21Ch]
0x729544: lea     ecx, [esp+30h+var_14]
0x729548: jnb     short loc_72956F
0x72954A: mov     edx, [eax+4]
0x72954D: push    1
0x72954F: push    ecx
0x729550: push    4
0x729552: lea     ebp, [esi+1Ch]
0x729555: push    ebp
0x729556: push    eax
0x729557: mov     [esp+44h+var_14], 4
0x72955F: call    edx
0x729561: add     esp, 14h
0x729564: cmp     dword ptr [ebp+0], 0
0x729568: setnz   byte ptr [esp+30h+a2]
0x72956D: jmp     short loc_729584
0x72956F: push    ebp
0x729570: push    ecx
0x729571: push    ebp
0x729572: lea     edx, [esp+3Ch+a2]
0x729576: push    edx
0x729577: push    eax
0x729578: mov     eax, [eax+4]
0x72957B: mov     [esp+44h+var_14], ebp
0x72957F: call    eax
0x729581: add     esp, 14h
0x729584: cmp     byte ptr [esp+30h+a2], 0
0x729589: jz      short loc_72960A
0x72958B: mov     edx, [esi]
0x72958D: mov     eax, [edx+44h]
0x729590: mov     ecx, esi
0x729592: call    eax
0x729594: test    eax, eax
0x729596: jz      short loc_7295BD
0x729598: movzx   ebx, word ptr [ebx]
0x72959B: mov     edx, [esi]
0x72959D: mov     eax, [edx+44h]
0x7295A0: lea     ebx, [ebx+ebx*2]
0x7295A3: add     ebx, ebx
0x7295A5: mov     ecx, esi
0x7295A7: add     ebx, ebx
0x7295A9: call    eax
0x7295AB: mov     ecx, [eax+8]
0x7295AE: add     dword ptr [eax+0Ch], 1
0x7295B2: lea     edx, [ecx+ebx]
0x7295B5: mov     [eax+8], edx
0x7295B8: mov     [esi+1Ch], ecx
0x7295BB: jmp     short loc_7295DC
0x7295BD: movzx   eax, word ptr [ebx]
0x7295C0: xor     ecx, ecx
0x7295C2: mov     edx, 0Ch
0x7295C7: mul     edx
0x7295C9: seto    cl
0x7295CC: neg     ecx
0x7295CE: or      ecx, eax
0x7295D0: push    ecx; Size
0x7295D1: call    FormHeapAlloc
0x7295D6: add     esp, 4
0x7295D9: mov     [esi+1Ch], eax
0x7295DC: movzx   eax, word ptr [esi+8]
0x7295E0: mov     edx, [esi+1Ch]
0x7295E3: mov     ecx, [edi+21Ch]
0x7295E9: lea     eax, [eax+eax*2]
0x7295EC: push    1
0x7295EE: add     eax, eax
0x7295F0: add     eax, eax
0x7295F2: lea     ebx, [esp+34h+var_14]
0x7295F6: push    ebx
0x7295F7: push    eax
0x7295F8: mov     eax, [ecx+4]
0x7295FB: push    edx
0x7295FC: push    ecx
0x7295FD: mov     [esp+44h+var_14], 4
0x729605: call    eax
0x729607: add     esp, 14h
0x72960A: mov     eax, [edi+0D8h]
0x729610: cmp     eax, 0A000002h
0x729615: movzx   ebp, word ptr [esi+8]
0x729619: jb      short loc_72964A
0x72961B: mov     eax, [edi+21Ch]
0x729621: mov     edx, [eax+4]
0x729624: push    1
0x729626: lea     ecx, [esp+34h+var_14]
0x72962A: push    ecx
0x72962B: push    2
0x72962D: lea     ebx, [esi+2Ch]
0x729630: push    ebx
0x729631: push    eax
0x729632: mov     [esp+44h+var_14], 2
0x72963A: call    edx
0x72963C: add     esp, 14h
0x72963F: test    word ptr [ebx], 0F000h
0x729644: jz      short loc_72964A
0x729646: lea     ebp, [ebp+ebp*2+0]
0x72964A: cmp     dword ptr [edi+0D8h], 4010000h
0x729654: mov     eax, [edi+21Ch]
0x72965A: lea     ecx, [esp+30h+var_14]
0x72965E: jnb     short loc_729689
0x729660: mov     edx, [eax+4]
0x729663: push    1
0x729665: push    ecx
0x729666: push    4
0x729668: lea     ebx, [esi+20h]
0x72966B: push    ebx
0x72966C: push    eax
0x72966D: mov     [esp+44h+var_14], 4
0x729675: call    edx
0x729677: add     esp, 14h
0x72967A: cmp     dword ptr [ebx], 0
0x72967D: mov     ebx, 1
0x729682: setnz   [esp+30h+var_1A]
0x729687: jmp     short loc_7296A3
0x729689: mov     ebx, 1
0x72968E: push    ebx
0x72968F: push    ecx
0x729690: push    ebx
0x729691: lea     edx, [esp+3Ch+var_1A]
0x729695: push    edx
0x729696: push    eax
0x729697: mov     eax, [eax+4]
0x72969A: mov     [esp+44h+var_14], ebx
0x72969E: call    eax
0x7296A0: add     esp, 14h
0x7296A3: cmp     [esp+30h+var_1A], 0
0x7296A8: jz      short loc_72971D
0x7296AA: mov     edx, [esi]
0x7296AC: mov     eax, [edx+44h]
0x7296AF: mov     ecx, esi
0x7296B1: call    eax
0x7296B3: test    eax, eax
0x7296B5: jz      short loc_7296D5
0x7296B7: mov     edx, [esi]
0x7296B9: mov     eax, [edx+44h]
0x7296BC: mov     ecx, esi
0x7296BE: call    eax
0x7296C0: mov     ecx, [eax+8]
0x7296C3: add     [eax+0Ch], ebx
0x7296C6: lea     edx, [ebp+ebp*2+0]
0x7296CA: lea     edx, [ecx+edx*4]
0x7296CD: mov     [eax+8], edx
0x7296D0: mov     [esi+20h], ecx
0x7296D3: jmp     short loc_7296F3
0x7296D5: xor     ecx, ecx
0x7296D7: mov     eax, ebp
0x7296D9: mov     edx, 0Ch
0x7296DE: mul     edx
0x7296E0: seto    cl
0x7296E3: neg     ecx
0x7296E5: or      ecx, eax
0x7296E7: push    ecx; Size
0x7296E8: call    FormHeapAlloc
0x7296ED: add     esp, 4
0x7296F0: mov     [esi+20h], eax
0x7296F3: mov     edx, [esi+20h]
0x7296F6: mov     ecx, [edi+21Ch]
0x7296FC: lea     eax, [ebp+ebp*2+0]
0x729700: push    ebx
0x729701: add     eax, eax
0x729703: add     eax, eax
0x729705: lea     ebp, [esp+34h+var_14]
0x729709: push    ebp
0x72970A: push    eax
0x72970B: mov     eax, [ecx+4]
0x72970E: push    edx
0x72970F: push    ecx
0x729710: mov     [esp+44h+var_14], 4
0x729718: call    eax
0x72971A: add     esp, 14h
0x72971D: push    edi
0x72971E: lea     ecx, [esi+0Ch]
0x729721: call    sub_716EA0
0x729726: cmp     dword ptr [edi+0D8h], 4010000h
0x729730: mov     eax, [edi+21Ch]
0x729736: push    ebx
0x729737: lea     ecx, [esp+34h+var_14]
0x72973B: push    ecx
0x72973C: jnb     short loc_729760
0x72973E: mov     edx, [eax+4]
0x729741: push    4
0x729743: lea     ebp, [esi+24h]
0x729746: push    ebp
0x729747: push    eax
0x729748: mov     [esp+44h+var_14], 4
0x729750: call    edx
0x729752: add     esp, 14h
0x729755: cmp     dword ptr [ebp+0], 0
0x729759: setnz   [esp+30h+var_19]
0x72975E: jmp     short loc_729773
0x729760: push    ebx
0x729761: lea     edx, [esp+3Ch+var_19]
0x729765: push    edx
0x729766: push    eax
0x729767: mov     eax, [eax+4]
0x72976A: mov     [esp+44h+var_14], ebx
0x72976E: call    eax
0x729770: add     esp, 14h
0x729773: cmp     [esp+30h+var_19], 0
0x729778: jz      loc_729828
0x72977E: mov     edx, [esi]
0x729780: mov     eax, [edx+44h]
0x729783: mov     ecx, esi
0x729785: call    eax
0x729787: test    eax, eax
0x729789: jz      short loc_7297AC
0x72978B: movzx   ebp, word ptr [esi+8]
0x72978F: mov     edx, [esi]
0x729791: mov     eax, [edx+44h]
0x729794: mov     ecx, esi
0x729796: shl     ebp, 4
0x729799: call    eax
0x72979B: mov     ecx, [eax+8]
0x72979E: add     [eax+0Ch], ebx
0x7297A1: lea     edx, [ecx+ebp]
0x7297A4: mov     [eax+8], edx
0x7297A7: mov     [esi+24h], ecx
0x7297AA: jmp     short loc_7297FF
0x7297AC: movzx   ebx, word ptr [esi+8]
0x7297B0: xor     ecx, ecx
0x7297B2: mov     eax, ebx
0x7297B4: mov     edx, 10h
0x7297B9: mul     edx
0x7297BB: seto    cl
0x7297BE: neg     ecx
0x7297C0: or      ecx, eax
0x7297C2: push    ecx; Size
0x7297C3: call    FormHeapAlloc
0x7297C8: mov     ebp, eax
0x7297CA: add     esp, 4
0x7297CD: mov     [esp+30h+var_10], ebp
0x7297D1: test    ebp, ebp
0x7297D3: mov     [esp+30h+var_4], 0
0x7297DB: jz      short loc_7297ED
0x7297DD: push    offset sub_47EA50
0x7297E2: push    ebx
0x7297E3: push    10h
0x7297E5: push    ebp
0x7297E6: call    sub_401080
0x7297EB: jmp     short loc_7297EF
0x7297ED: xor     ebp, ebp
0x7297EF: mov     [esp+30h+var_4], 0FFFFFFFFh
0x7297F7: mov     [esi+24h], ebp
0x7297FA: mov     ebx, 1
0x7297FF: movzx   edx, word ptr [esi+8]
0x729803: mov     eax, [edi+21Ch]
0x729809: push    ebx
0x72980A: lea     ecx, [esp+34h+var_14]
0x72980E: push    ecx
0x72980F: mov     ecx, [esi+24h]
0x729812: shl     edx, 4
0x729815: push    edx
0x729816: mov     edx, [eax+4]
0x729819: push    ecx
0x72981A: push    eax
0x72981B: mov     [esp+44h+var_14], 4
0x729823: call    edx
0x729825: add     esp, 14h
0x729828: mov     eax, [edi+0D8h]
0x72982E: cmp     eax, 500000Ah
0x729833: jnb     short loc_72986A
0x729835: mov     eax, [edi+21Ch]
0x72983B: push    ebx
0x72983C: lea     ecx, [esp+34h+var_14]
0x729840: push    ecx
0x729841: push    2
0x729843: lea     edx, [esp+3Ch+var_18]
0x729847: push    edx
0x729848: push    eax
0x729849: mov     eax, [eax+4]
0x72984C: mov     [esp+44h+var_14], 2
0x729854: call    eax
0x729856: movzx   ecx, byte ptr [esi+2Ch]
0x72985A: xor     cl, byte ptr [esp+44h+var_18]
0x72985E: add     esp, 14h
0x729861: and     ecx, 3Fh
0x729864: xor     [esi+2Ch], cx
0x729868: jmp     short loc_729894
0x72986A: cmp     eax, 0A000002h
0x72986F: jnb     short loc_729894
0x729871: mov     eax, [edi+21Ch]
0x729877: push    ebx
0x729878: lea     edx, [esp+34h+var_14]
0x72987C: push    edx
0x72987D: mov     edx, [eax+4]
0x729880: push    2
0x729882: lea     ecx, [esi+2Ch]
0x729885: push    ecx
0x729886: push    eax
0x729887: mov     [esp+44h+var_14], 2
0x72988F: call    edx
0x729891: add     esp, 14h
0x729894: cmp     dword ptr [edi+0D8h], 4010000h
0x72989E: jnb     short loc_7298C3
0x7298A0: mov     eax, [edi+21Ch]
0x7298A6: push    ebx
0x7298A7: lea     ecx, [esp+34h+var_14]
0x7298AB: push    ecx
0x7298AC: push    4
0x7298AE: lea     edx, [esi+28h]
0x7298B1: push    edx
0x7298B2: push    eax
0x7298B3: mov     eax, [eax+4]
0x7298B6: mov     [esp+44h+var_14], 4
0x7298BE: call    eax
0x7298C0: add     esp, 14h
0x7298C3: movzx   eax, word ptr [esi+2Ch]
0x7298C7: test    al, 3Fh
0x7298C9: jbe     short loc_729945
0x7298CB: movzx   ecx, word ptr [esi+8]
0x7298CF: mov     edx, [esi]
0x7298D1: and     eax, 3Fh
0x7298D4: imul    eax, ecx
0x7298D7: mov     ebp, eax
0x7298D9: mov     eax, [edx+44h]
0x7298DC: mov     ecx, esi
0x7298DE: call    eax
0x7298E0: test    eax, eax
0x7298E2: jz      short loc_7298FE
0x7298E4: mov     edx, [esi]
0x7298E6: mov     eax, [edx+44h]
0x7298E9: mov     ecx, esi
0x7298EB: call    eax
0x7298ED: mov     ecx, [eax+8]
0x7298F0: add     [eax+0Ch], ebx
0x7298F3: lea     edx, [ecx+ebp*8]
0x7298F6: mov     [eax+8], edx
0x7298F9: mov     [esi+28h], ecx
0x7298FC: jmp     short loc_72991C
0x7298FE: xor     ecx, ecx
0x729900: mov     eax, ebp
0x729902: mov     edx, 8
0x729907: mul     edx
0x729909: seto    cl
0x72990C: neg     ecx
0x72990E: or      ecx, eax
0x729910: push    ecx; Size
0x729911: call    FormHeapAlloc
0x729916: add     esp, 4
0x729919: mov     [esi+28h], eax
0x72991C: mov     eax, [edi+21Ch]
0x729922: push    ebx
0x729923: lea     ecx, [esp+34h+var_14]
0x729927: push    ecx
0x729928: mov     ecx, [esi+28h]
0x72992B: lea     edx, ds:0[ebp*8]
0x729932: push    edx
0x729933: mov     edx, [eax+4]
0x729936: push    ecx
0x729937: push    eax
0x729938: mov     [esp+44h+var_14], 4
0x729940: call    edx
0x729942: add     esp, 14h
0x729945: cmp     dword ptr [edi+0D8h], 500000Ah
0x72994F: jb      short loc_729974
0x729951: mov     eax, [edi+21Ch]
0x729957: mov     edx, [eax+4]
0x72995A: push    ebx
0x72995B: lea     ecx, [esp+34h+var_10]
0x72995F: push    ecx
0x729960: push    2
0x729962: add     esi, 2Eh ; '.'
0x729965: push    esi
0x729966: push    eax
0x729967: mov     [esp+44h+var_10], 2
0x72996F: call    edx
0x729971: add     esp, 14h
0x729974: cmp     dword ptr [edi+0D8h], 0A030007h
0x72997E: jb      short loc_729987
0x729980: mov     ecx, edi
0x729982: call    sub_712A20
0x729987: mov     ecx, [esp+30h+var_C]
0x72998B: mov     large fs:0, ecx
0x729992: pop     ecx
0x729993: pop     edi
0x729994: pop     esi
0x729995: pop     ebp
0x729996: pop     ebx
0x729997: add     esp, 1Ch
0x72999A: retn    4
