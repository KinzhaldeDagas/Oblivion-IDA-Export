0x679630: sub     esp, 18h
0x679633: push    ebx
0x679634: push    ebp
0x679635: push    esi
0x679636: push    edi
0x679637: mov     edi, ecx
0x679639: mov     ecx, ds:0B33B00h
0x67963F: xor     esi, esi
0x679641: mov     [esp+28h+Src], esi
0x679645: mov     eax, [ecx+14h]
0x679648: push    2; Size
0x67964A: lea     edx, [esp+2Ch+Src]
0x67964E: push    edx; Src
0x67964F: mov     [esp+30h+var_4], edi
0x679653: mov     [esp+30h+var_14], esi
0x679657: mov     [esp+30h+var_C], eax
0x67965B: call    SaveLoad_SaveData
0x679660: add     edi, 40h ; '@'
0x679663: cmp     edi, esi
0x679665: jz      loc_679734
0x67966B: mov     ebx, [esp+28h+var_4]
0x67966F: nop
0x679670: cmp     dword ptr [edi+4], 0
0x679674: jnz     short loc_679686
0x679676: or      [esp+28h+var_14], 1
0x67967B: xor     ebx, ebx
0x67967D: cmp     [edi], ebx
0x67967F: mov     byte ptr [esp+28h+var_18+2], 1
0x679684: jz      short loc_67968B
0x679686: mov     byte ptr [esp+28h+var_18+2], 0
0x67968B: test    byte ptr [esp+28h+var_14], 1
0x679690: jz      short loc_6796B3
0x679692: and     [esp+28h+var_14], 0FFFFFFFEh
0x679697: test    ebx, ebx
0x679699: jz      short loc_6796B3
0x67969B: lea     eax, [ebx+4]
0x67969E: push    eax; lpAddend
0x67969F: call    dword ptr ds:0A2807Ch
0x6796A5: test    eax, eax
0x6796A7: jnz     short loc_6796B3
0x6796A9: mov     edx, [ebx]
0x6796AB: mov     eax, [edx]
0x6796AD: push    1
0x6796AF: mov     ecx, ebx
0x6796B1: call    eax
0x6796B3: cmp     byte ptr [esp+28h+var_18+2], 0
0x6796B8: jnz     short loc_679734
0x6796BA: lea     ecx, [esp+28h+var_8]
0x6796BE: push    ecx
0x6796BF: mov     ecx, edi
0x6796C1: call    sub_677C70
0x6796C6: mov     esi, [eax]
0x6796C8: mov     eax, [esp+28h+var_8]
0x6796CC: test    eax, eax
0x6796CE: jz      short loc_6796EF
0x6796D0: mov     ebp, eax
0x6796D2: add     eax, 4
0x6796D5: push    eax; lpAddend
0x6796D6: call    dword ptr ds:0A2807Ch
0x6796DC: test    eax, eax
0x6796DE: jnz     short loc_6796EF
0x6796E0: test    ebp, ebp
0x6796E2: jz      short loc_6796EF
0x6796E4: mov     edx, [ebp+0]
0x6796E7: mov     eax, [edx]
0x6796E9: push    1
0x6796EB: mov     ecx, ebp
0x6796ED: call    eax
0x6796EF: mov     edx, [esi]
0x6796F1: mov     eax, [edx+58h]
0x6796F4: mov     ecx, esi
0x6796F6: call    eax
0x6796F8: test    al, al
0x6796FA: jz      short loc_679729
0x6796FC: mov     edx, [esi]
0x6796FE: mov     eax, [edx+54h]
0x679701: mov     ecx, esi
0x679703: call    eax
0x679705: push    1; Size
0x679707: lea     ecx, [esp+2Ch+var_18+3]
0x67970B: push    ecx; Src
0x67970C: mov     ecx, ds:0B33B00h
0x679712: mov     byte ptr [esp+30h+var_18+3], al
0x679716: call    SaveLoad_SaveData
0x67971B: mov     edx, [esi]
0x67971D: mov     eax, [edx+60h]
0x679720: mov     ecx, esi
0x679722: call    eax
0x679724: add     [esp+28h+Src], 1
0x679729: mov     edi, [edi+4]
0x67972C: test    edi, edi
0x67972E: jnz     loc_679670
0x679734: mov     ebp, [esp+28h+var_4]
0x679738: add     ebp, 48h ; 'H'
0x67973B: jz      loc_679821
0x679741: mov     ebx, [esp+28h+var_4]
0x679745: cmp     dword ptr [ebp+4], 0
0x679749: jnz     short loc_67975C
0x67974B: or      [esp+28h+var_14], 2
0x679750: xor     ebx, ebx
0x679752: cmp     [ebp+0], ebx
0x679755: mov     byte ptr [esp+28h+var_18+2], 1
0x67975A: jz      short loc_679761
0x67975C: mov     byte ptr [esp+28h+var_18+2], 0
0x679761: test    byte ptr [esp+28h+var_14], 2
0x679766: jz      short loc_679789
0x679768: and     [esp+28h+var_14], 0FFFFFFFDh
0x67976D: test    ebx, ebx
0x67976F: jz      short loc_679789
0x679771: lea     ecx, [ebx+4]
0x679774: push    ecx; lpAddend
0x679775: call    dword ptr ds:0A2807Ch
0x67977B: test    eax, eax
0x67977D: jnz     short loc_679789
0x67977F: mov     edx, [ebx]
0x679781: mov     eax, [edx]
0x679783: push    1
0x679785: mov     ecx, ebx
0x679787: call    eax
0x679789: cmp     byte ptr [esp+28h+var_18+2], 0
0x67978E: jnz     loc_679835
0x679794: lea     ecx, [esp+28h+var_4]
0x679798: push    ecx
0x679799: mov     ecx, ebp
0x67979B: call    sub_677C70
0x6797A0: mov     esi, [eax]
0x6797A2: mov     eax, [esp+28h+var_4]
0x6797A6: test    eax, eax
0x6797A8: jz      short loc_6797C8
0x6797AA: mov     edi, eax
0x6797AC: add     eax, 4
0x6797AF: push    eax; lpAddend
0x6797B0: call    dword ptr ds:0A2807Ch
0x6797B6: test    eax, eax
0x6797B8: jnz     short loc_6797C8
0x6797BA: test    edi, edi
0x6797BC: jz      short loc_6797C8
0x6797BE: mov     edx, [edi]
0x6797C0: mov     eax, [edx]
0x6797C2: push    1
0x6797C4: mov     ecx, edi
0x6797C6: call    eax
0x6797C8: mov     edx, [esi]
0x6797CA: mov     eax, [edx+58h]
0x6797CD: mov     ecx, esi
0x6797CF: call    eax
0x6797D1: test    al, al
0x6797D3: jz      short loc_679802
0x6797D5: mov     edx, [esi]
0x6797D7: mov     eax, [edx+54h]
0x6797DA: mov     ecx, esi
0x6797DC: call    eax
0x6797DE: push    1; Size
0x6797E0: lea     ecx, [esp+2Ch+var_18+3]
0x6797E4: push    ecx; Src
0x6797E5: mov     ecx, ds:0B33B00h
0x6797EB: mov     byte ptr [esp+30h+var_18+3], al
0x6797EF: call    SaveLoad_SaveData
0x6797F4: mov     edx, [esi]
0x6797F6: mov     eax, [edx+60h]
0x6797F9: mov     ecx, esi
0x6797FB: call    eax
0x6797FD: add     [esp+28h+Src], 1
0x679802: mov     ebp, [ebp+4]
0x679805: test    ebp, ebp
0x679807: jnz     loc_679745
0x67980D: mov     ecx, [esp+28h+var_C]
0x679811: mov     dx, word ptr [esp+28h+Src]
0x679816: pop     edi
0x679817: pop     esi
0x679818: pop     ebp
0x679819: mov     [ecx], dx
0x67981C: pop     ebx
0x67981D: add     esp, 18h
0x679820: retn
0x679821: mov     ax, word ptr [esp+28h+Src]
0x679826: mov     ecx, [esp+28h+var_C]
0x67982A: pop     edi
0x67982B: pop     esi
0x67982C: pop     ebp
0x67982D: mov     [ecx], ax
0x679830: pop     ebx
0x679831: add     esp, 18h
0x679834: retn
0x679835: mov     dx, word ptr [esp+28h+Src]
0x67983A: mov     eax, [esp+28h+var_C]
0x67983E: pop     edi
0x67983F: pop     esi
0x679840: pop     ebp
0x679841: mov     [eax], dx
0x679844: pop     ebx
0x679845: add     esp, 18h
0x679848: retn
