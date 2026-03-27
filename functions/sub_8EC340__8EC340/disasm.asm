0x8EC340: push    ebp
0x8EC341: mov     ebp, esp
0x8EC343: and     esp, 0FFFFFFF0h
0x8EC346: sub     esp, 44h
0x8EC349: push    ebx
0x8EC34A: push    esi
0x8EC34B: push    edi
0x8EC34C: mov     edi, eax
0x8EC34E: mov     edi, edi
0x8EC350: mov     eax, [edi+30h]
0x8EC353: dec     eax; switch 4 cases
0x8EC354: cmp     eax, 3
0x8EC357: ja      def_8EC35D
0x8EC35D: jmp     ds:jpt_8EC35D[eax*4]; switch jump
0x8EC364: mov     eax, [edi+38h]; jumptable 008EC35D case 3
0x8EC367: mov     ecx, [edi+1Ch]
0x8EC36A: add     eax, 10h
0x8EC36D: push    eax
0x8EC36E: push    edi
0x8EC36F: lea     esi, [esp+58h+var_30]
0x8EC373: call    sub_8EB970
0x8EC378: mov     eax, [edi+4]
0x8EC37B: mov     ecx, esi
0x8EC37D: lea     ebx, [edi+4]
0x8EC380: push    ecx
0x8EC381: lea     ecx, [esp+5Ch+var_3C]
0x8EC385: call    sub_8EB910
0x8EC38A: mov     al, byte ptr [esp+5Ch+var_3C]
0x8EC38E: add     esp, 0Ch
0x8EC391: test    al, al
0x8EC393: jnz     short loc_8EC3B3
0x8EC395: mov     eax, [edi+10h]
0x8EC398: mov     edx, esi
0x8EC39A: push    edx
0x8EC39B: lea     ecx, [esp+54h+var_40]
0x8EC39F: call    sub_8EB910
0x8EC3A4: mov     al, byte ptr [esp+54h+var_40]
0x8EC3A8: add     esp, 4
0x8EC3AB: test    al, al
0x8EC3AD: jz      loc_8EC70C
0x8EC3B3: lea     eax, [edi+10h]
0x8EC3B6: xor     esi, esi
0x8EC3B8: mov     [esp+50h+var_44], eax
0x8EC3BC: lea     esp, [esp+0]
0x8EC3C0: cmp     dword ptr [edi+30h], 3
0x8EC3C4: jl      short loc_8EC350
0x8EC3C6: mov     edx, [edi+38h]
0x8EC3C9: mov     eax, [edi+1Ch]
0x8EC3CC: lea     ecx, [esp+50h+var_20]
0x8EC3D0: push    ecx
0x8EC3D1: mov     ecx, [ebx]
0x8EC3D3: add     edx, 10h
0x8EC3D6: push    edx
0x8EC3D7: push    eax
0x8EC3D8: push    ecx
0x8EC3D9: call    sub_8EBCD0
0x8EC3DE: mov     eax, [esp+60h+var_44]
0x8EC3E2: mov     eax, [eax]
0x8EC3E4: lea     edx, [esp+60h+var_20]
0x8EC3E8: push    edx
0x8EC3E9: lea     ecx, [esp+64h+var_38]
0x8EC3ED: call    sub_8EB910
0x8EC3F2: mov     al, [esp+64h+var_38]
0x8EC3F6: add     esp, 14h
0x8EC3F9: test    al, al
0x8EC3FB: jz      short loc_8EC446
0x8EC3FD: mov     ecx, [esp+50h+var_44]
0x8EC401: inc     esi
0x8EC402: sub     ecx, 0Ch
0x8EC405: add     ebx, 0Ch
0x8EC408: cmp     esi, 2
0x8EC40B: mov     [esp+50h+var_44], ecx
0x8EC40F: jl      short loc_8EC3C0
0x8EC411: cmp     dword ptr [edi+30h], 3
0x8EC415: jl      loc_8EC350
0x8EC41B: mov     eax, [edi+3Ch]
0x8EC41E: mov     ecx, [edi+38h]
0x8EC421: mov     edx, [edi+1Ch]
0x8EC424: add     eax, 10h
0x8EC427: push    eax
0x8EC428: mov     eax, [edi+10h]
0x8EC42B: add     ecx, 10h
0x8EC42E: push    ecx
0x8EC42F: mov     ecx, [edi+4]
0x8EC432: push    1
0x8EC434: push    edx
0x8EC435: mov     edx, edi
0x8EC437: call    sub_8EC0A0
0x8EC43C: add     esp, 10h
0x8EC43F: pop     edi
0x8EC440: pop     esi
0x8EC441: pop     ebx
0x8EC442: mov     esp, ebp
0x8EC444: pop     ebp
0x8EC445: retn
0x8EC446: lea     ecx, [esi+esi*2]
0x8EC449: shl     ecx, 2
0x8EC44C: lea     eax, [edi+0Ch]
0x8EC44F: mov     edx, edi
0x8EC451: sub     edx, ecx
0x8EC453: add     edx, 0Ch
0x8EC456: mov     ecx, eax
0x8EC458: mov     esi, [ecx]
0x8EC45A: mov     [edx], esi
0x8EC45C: mov     esi, [ecx+4]
0x8EC45F: mov     [edx+4], esi
0x8EC462: mov     ecx, [ecx+8]
0x8EC465: mov     [edx+8], ecx
0x8EC468: lea     edx, [edi+18h]
0x8EC46B: mov     ecx, [edx]
0x8EC46D: mov     [eax], ecx
0x8EC46F: mov     ecx, [edx+4]
0x8EC472: mov     edx, [edx+8]
0x8EC475: mov     [eax+4], ecx
0x8EC478: mov     [eax+8], edx
0x8EC47B: mov     dword ptr [edi+30h], 2
0x8EC482: jmp     loc_8EC350
0x8EC487: push    edi; jumptable 008EC35D case 4
0x8EC488: call    sub_8EB7E0
0x8EC48D: add     esp, 4
0x8EC490: xor     esi, esi
0x8EC492: mov     ecx, [edi+38h]
0x8EC495: mov     edx, [edi+28h]
0x8EC498: add     ecx, 10h
0x8EC49B: lea     eax, [esp+50h+var_10]
0x8EC49F: push    eax
0x8EC4A0: push    ecx
0x8EC4A1: push    0
0x8EC4A3: push    edx
0x8EC4A4: lea     eax, [esi+2]
0x8EC4A7: cdq
0x8EC4A8: mov     ecx, 3
0x8EC4AD: idiv    ecx
0x8EC4AF: lea     eax, [esi+1]
0x8EC4B2: mov     ebx, 3
0x8EC4B7: lea     ecx, [edx+edx*2]
0x8EC4BA: cdq
0x8EC4BB: idiv    ebx
0x8EC4BD: mov     eax, [edi+ecx*4+4]
0x8EC4C1: lea     edx, [edx+edx*2]
0x8EC4C4: mov     ecx, [edi+edx*4+4]
0x8EC4C8: mov     edx, edi
0x8EC4CA: call    sub_8EC0A0
0x8EC4CF: lea     eax, [esi+esi*2]
0x8EC4D2: lea     ebx, [edi+eax*4]
0x8EC4D5: mov     eax, [ebx+4]
0x8EC4D8: lea     ecx, [esp+60h+var_10]
0x8EC4DC: push    ecx
0x8EC4DD: lea     ecx, [esp+64h+var_34]
0x8EC4E1: call    sub_8EB910
0x8EC4E6: mov     al, [esp+64h+var_34]
0x8EC4EA: add     esp, 14h
0x8EC4ED: test    al, al
0x8EC4EF: jnz     short loc_8EC525
0x8EC4F1: lea     eax, [edi+18h]
0x8EC4F4: mov     edx, eax
0x8EC4F6: mov     ecx, [edx]
0x8EC4F8: mov     [ebx], ecx
0x8EC4FA: mov     ecx, [edx+4]
0x8EC4FD: mov     [ebx+4], ecx
0x8EC500: mov     edx, [edx+8]
0x8EC503: mov     [ebx+8], edx
0x8EC506: lea     ecx, [edi+24h]
0x8EC509: mov     edx, [ecx]
0x8EC50B: mov     [eax], edx
0x8EC50D: mov     edx, [ecx+4]
0x8EC510: mov     ecx, [ecx+8]
0x8EC513: mov     [eax+4], edx
0x8EC516: mov     [eax+8], ecx
0x8EC519: mov     dword ptr [edi+30h], 3
0x8EC520: mov     esi, 0Ah
0x8EC525: inc     esi
0x8EC526: cmp     esi, 3
0x8EC529: jl      loc_8EC492
0x8EC52F: cmp     esi, 0Ah
0x8EC532: jge     loc_8EC350
0x8EC538: mov     eax, [edi+38h]
0x8EC53B: mov     esi, [edi+4]
0x8EC53E: mov     ebx, [edi+10h]
0x8EC541: add     eax, 10h
0x8EC544: mov     ecx, [eax]
0x8EC546: mov     edx, [eax+4]
0x8EC549: mov     dword ptr [esp+50h+var_30], ecx
0x8EC54D: mov     ecx, [eax+8]
0x8EC550: mov     dword ptr [esp+50h+var_30+4], edx
0x8EC554: mov     edx, [eax+0Ch]
0x8EC557: mov     eax, [edi+1Ch]
0x8EC55A: mov     dword ptr [esp+50h+var_30+8], ecx
0x8EC55E: mov     ecx, [edi+28h]
0x8EC561: mov     dword ptr [esp+50h+var_30+0Ch], edx
0x8EC565: mov     edx, [edi+30h]
0x8EC568: mov     [esp+50h+var_40], ecx
0x8EC56C: lea     ecx, [esp+50h+var_30]
0x8EC570: push    ecx
0x8EC571: mov     [esp+54h+var_44], edx
0x8EC575: mov     edx, ecx
0x8EC577: push    edx
0x8EC578: push    0
0x8EC57A: mov     [esp+5Ch+var_3C], eax
0x8EC57E: push    eax
0x8EC57F: mov     eax, ebx
0x8EC581: mov     ecx, esi
0x8EC583: mov     edx, edi
0x8EC585: call    sub_8EC0A0
0x8EC58A: mov     eax, [esp+60h+var_44]
0x8EC58E: mov     ecx, [edi+30h]
0x8EC591: add     esp, 10h
0x8EC594: cmp     eax, ecx
0x8EC596: jnz     short loc_8EC5B5
0x8EC598: mov     eax, [esp+50h+var_40]
0x8EC59C: lea     ecx, [esp+50h+var_30]
0x8EC5A0: push    ecx
0x8EC5A1: mov     edx, ecx
0x8EC5A3: push    edx
0x8EC5A4: push    0
0x8EC5A6: push    eax
0x8EC5A7: mov     eax, ebx
0x8EC5A9: mov     ecx, esi
0x8EC5AB: mov     edx, edi
0x8EC5AD: call    sub_8EC0A0
0x8EC5B2: add     esp, 10h
0x8EC5B5: mov     ecx, [esp+50h+var_44]
0x8EC5B9: cmp     ecx, [edi+30h]
0x8EC5BC: jnz     short loc_8EC5DD
0x8EC5BE: mov     ecx, [esp+50h+var_40]
0x8EC5C2: lea     edx, [esp+50h+var_30]
0x8EC5C6: push    edx
0x8EC5C7: mov     eax, edx
0x8EC5C9: push    eax
0x8EC5CA: mov     eax, [esp+58h+var_3C]
0x8EC5CE: push    0
0x8EC5D0: push    ecx
0x8EC5D1: mov     ecx, esi
0x8EC5D3: mov     edx, edi
0x8EC5D5: call    sub_8EC0A0
0x8EC5DA: add     esp, 10h
0x8EC5DD: mov     edx, [esp+50h+var_44]
0x8EC5E1: cmp     edx, [edi+30h]
0x8EC5E4: jnz     short loc_8EC605
0x8EC5E6: mov     edx, [esp+50h+var_40]
0x8EC5EA: lea     eax, [esp+50h+var_30]
0x8EC5EE: push    eax
0x8EC5EF: mov     ecx, eax
0x8EC5F1: mov     eax, [esp+54h+var_3C]
0x8EC5F5: push    ecx
0x8EC5F6: push    0
0x8EC5F8: push    edx
0x8EC5F9: mov     ecx, ebx
0x8EC5FB: mov     edx, edi
0x8EC5FD: call    sub_8EC0A0
0x8EC602: add     esp, 10h
0x8EC605: mov     eax, [edi+3Ch]
0x8EC608: movaps  xmm0, [esp+50h+var_30]
0x8EC60D: movaps  xmmword ptr [eax+10h], xmm0
0x8EC611: mov     edx, [edi+8]
0x8EC614: mov     eax, [edx+0Ch]
0x8EC617: lea     ebx, [edi+8]
0x8EC61A: xor     ecx, ecx
0x8EC61C: test    eax, eax
0x8EC61E: jl      short loc_8EC622
0x8EC620: mov     ecx, eax
0x8EC622: mov     eax, [edi+14h]
0x8EC625: mov     eax, [eax+0Ch]
0x8EC628: cmp     ecx, eax
0x8EC62A: jg      short loc_8EC62E
0x8EC62C: mov     ecx, eax
0x8EC62E: mov     edx, [edi+20h]
0x8EC631: mov     eax, [edx+0Ch]
0x8EC634: cmp     ecx, eax
0x8EC636: jg      short loc_8EC63A
0x8EC638: mov     ecx, eax
0x8EC63A: mov     eax, [edi+2Ch]
0x8EC63D: mov     eax, [eax+0Ch]
0x8EC640: cmp     ecx, eax
0x8EC642: jg      short loc_8EC646
0x8EC644: mov     ecx, eax
0x8EC646: xor     eax, eax
0x8EC648: mov     edx, ebx
0x8EC64A: lea     ebx, [ebx+0]
0x8EC650: mov     esi, [edx]
0x8EC652: cmp     ecx, [esi+0Ch]
0x8EC655: jz      loc_8EC73B
0x8EC65B: inc     eax
0x8EC65C: add     edx, 0Ch
0x8EC65F: cmp     eax, 4
0x8EC662: jl      short loc_8EC650
0x8EC664: jmp     loc_8EC754
0x8EC669: mov     edx, [edi+38h]; jumptable 008EC35D case 1
0x8EC66C: mov     esi, [edi+3Ch]
0x8EC66F: mov     ecx, [edi+4]
0x8EC672: add     edx, 10h
0x8EC675: push    edx
0x8EC676: add     esi, 10h
0x8EC679: push    edi
0x8EC67A: call    sub_8EB970
0x8EC67F: add     esp, 8
0x8EC682: pop     edi
0x8EC683: pop     esi
0x8EC684: pop     ebx
0x8EC685: mov     esp, ebp
0x8EC687: pop     ebp
0x8EC688: retn
0x8EC689: mov     eax, [edi+38h]; jumptable 008EC35D case 2
0x8EC68C: mov     ecx, [edi+10h]
0x8EC68F: add     eax, 10h
0x8EC692: push    eax
0x8EC693: push    edi
0x8EC694: lea     esi, [esp+58h+var_30]
0x8EC698: call    sub_8EB970
0x8EC69D: mov     esi, [edi+4]
0x8EC6A0: lea     ecx, [esp+58h+var_30]
0x8EC6A4: push    ecx
0x8EC6A5: mov     eax, esi
0x8EC6A7: lea     ecx, [esp+5Ch+var_34]
0x8EC6AB: call    sub_8EB910
0x8EC6B0: mov     al, [esp+5Ch+var_34]
0x8EC6B4: add     esp, 0Ch
0x8EC6B7: test    al, al
0x8EC6B9: jnz     short loc_8EC6EA
0x8EC6BB: mov     edx, [edi+3Ch]
0x8EC6BE: movaps  xmm0, [esp+50h+var_30]
0x8EC6C3: movaps  xmmword ptr [edx+10h], xmm0
0x8EC6C7: lea     eax, [edi+0Ch]
0x8EC6CA: mov     edx, [eax]
0x8EC6CC: mov     ecx, edi
0x8EC6CE: mov     [ecx], edx
0x8EC6D0: mov     edx, [eax+4]
0x8EC6D3: mov     eax, [eax+8]
0x8EC6D6: mov     [ecx+4], edx
0x8EC6D9: mov     [ecx+8], eax
0x8EC6DC: mov     dword ptr [edi+30h], 1
0x8EC6E3: pop     edi
0x8EC6E4: pop     esi
0x8EC6E5: pop     ebx
0x8EC6E6: mov     esp, ebp
0x8EC6E8: pop     ebp
0x8EC6E9: retn
0x8EC6EA: mov     ecx, [edi+3Ch]
0x8EC6ED: mov     edx, [edi+38h]
0x8EC6F0: mov     eax, [edi+10h]
0x8EC6F3: add     ecx, 10h
0x8EC6F6: push    ecx
0x8EC6F7: add     edx, 10h
0x8EC6FA: push    edx
0x8EC6FB: push    eax
0x8EC6FC: push    esi
0x8EC6FD: call    sub_8EBCD0
0x8EC702: add     esp, 10h
0x8EC705: pop     edi
0x8EC706: pop     esi
0x8EC707: pop     ebx
0x8EC708: mov     esp, ebp
0x8EC70A: pop     ebp
0x8EC70B: retn
0x8EC70C: mov     ecx, [edi+3Ch]
0x8EC70F: movaps  xmm0, [esp+50h+var_30]
0x8EC714: movaps  xmmword ptr [ecx+10h], xmm0
0x8EC718: lea     edx, [edi+18h]
0x8EC71B: mov     ecx, [edx]
0x8EC71D: mov     eax, edi
0x8EC71F: mov     [eax], ecx
0x8EC721: mov     ecx, [edx+4]
0x8EC724: mov     edx, [edx+8]
0x8EC727: mov     [eax+4], ecx
0x8EC72A: mov     [eax+8], edx
0x8EC72D: mov     dword ptr [edi+30h], 1
0x8EC734: pop     edi
0x8EC735: pop     esi
0x8EC736: pop     ebx
0x8EC737: mov     esp, ebp
0x8EC739: pop     ebp
0x8EC73A: retn
0x8EC73B: lea     edx, [eax+eax*2]
0x8EC73E: lea     eax, [edi+edx*4]
0x8EC741: lea     ecx, [edi+24h]
0x8EC744: mov     edx, [ecx]
0x8EC746: mov     [eax], edx
0x8EC748: mov     edx, [ecx+4]
0x8EC74B: mov     [eax+4], edx
0x8EC74E: mov     ecx, [ecx+8]
0x8EC751: mov     [eax+8], ecx
0x8EC754: dec     dword ptr [edi+30h]
0x8EC757: mov     edx, [ebx]
0x8EC759: xor     eax, eax
0x8EC75B: mov     [edx+0Ch], eax
0x8EC75E: mov     ecx, [edi+14h]
0x8EC761: mov     [ecx+0Ch], eax
0x8EC764: mov     edx, [edi+20h]
0x8EC767: mov     [edx+0Ch], eax
