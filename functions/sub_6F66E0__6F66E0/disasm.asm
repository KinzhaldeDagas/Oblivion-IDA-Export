0x6F66E0: push    0FFFFFFFFh
0x6F66E2: push    offset SEH_6F66E0
0x6F66E7: mov     eax, large fs:0
0x6F66ED: push    eax
0x6F66EE: sub     esp, 28h
0x6F66F1: push    ebx
0x6F66F2: push    ebp
0x6F66F3: push    esi
0x6F66F4: push    edi
0x6F66F5: mov     eax, ds:0B30AACh
0x6F66FA: xor     eax, esp
0x6F66FC: push    eax
0x6F66FD: lea     eax, [esp+48h+var_C]
0x6F6701: mov     large fs:0, eax
0x6F6707: mov     esi, ecx
0x6F6709: xor     ebx, ebx
0x6F670B: cmp     [esp+48h+arg_1C], bl
0x6F670F: mov     [esp+48h+var_4], ebx
0x6F6713: mov     eax, 1
0x6F6718: jz      short loc_6F671F
0x6F671A: mov     eax, 100h
0x6F671F: mov     ecx, [esp+48h+arg_4]
0x6F6723: mov     ebp, 10h
0x6F6728: cmp     [esp+48h+arg_18], ebp
0x6F672C: jnb     short loc_6F6732
0x6F672E: lea     ecx, [esp+48h+arg_4]
0x6F6732: push    eax; int
0x6F6733: push    2800h; Size
0x6F6738: push    ebx; int
0x6F6739: push    ecx; int
0x6F673A: call    FileFinder_LoadNiFile??
0x6F673F: add     esp, 10h
0x6F6742: cmp     eax, ebx
0x6F6744: mov     [esi+40h], eax
0x6F6747: jnz     short loc_6F6790
0x6F6749: sub     esp, 1Ch
0x6F674C: mov     ecx, esp
0x6F674E: mov     [esp+64h+var_34], esp
0x6F6752: push    0FFFFFFFFh
0x6F6754: push    ebx
0x6F6755: lea     eax, [esp+6Ch+arg_0]
0x6F6759: mov     dword ptr [ecx+18h], 0Fh
0x6F6760: mov     [ecx+14h], ebx
0x6F6763: push    eax
0x6F6764: mov     [ecx+4], bl
0x6F6767: call    sub_414420
0x6F676C: push    4; int
0x6F676E: call    sub_6F6BF0
0x6F6773: add     esp, 20h
0x6F6776: cmp     [esp+48h+arg_18], ebp
0x6F677A: jb      short loc_6F6789
0x6F677C: mov     ecx, [esp+48h+arg_4]
0x6F6780: push    ecx
0x6F6781: call    FormHeapFree
0x6F6786: add     esp, 4
0x6F6789: xor     al, al
0x6F678B: jmp     loc_6F69F4
0x6F6790: mov     eax, [esi+34h]
0x6F6793: lea     edx, [esp+48h+var_2D]
0x6F6797: push    edx; int
0x6F6798: add     eax, 1
0x6F679B: push    eax; char *
0x6F679C: lea     ecx, [esp+50h+var_2D+1]
0x6F67A0: mov     [esp+50h+var_2D], bl
0x6F67A4: call    sub_6F2CD0
0x6F67A9: mov     eax, [esp+48h+var_28]
0x6F67AD: cmp     eax, ebx
0x6F67AF: mov     edi, [esi+34h]
0x6F67B2: mov     byte ptr [esp+48h+var_4], 1
0x6F67B7: jz      short loc_6F67C1
0x6F67B9: mov     ecx, [esp+48h+var_24]
0x6F67BD: sub     ecx, eax
0x6F67BF: jnz     short loc_6F67CA
0x6F67C1: call    __invalid_parameter_noinfo
0x6F67C6: mov     eax, [esp+48h+var_28]
0x6F67CA: push    1
0x6F67CC: push    edi
0x6F67CD: push    eax
0x6F67CE: mov     ecx, esi
0x6F67D0: call    sub_6F5E50
0x6F67D5: test    al, al
0x6F67D7: jnz     short loc_6F6810
0x6F67D9: mov     eax, [esp+48h+var_28]
0x6F67DD: cmp     eax, ebx
0x6F67DF: jz      short loc_6F67EA
0x6F67E1: push    eax
0x6F67E2: call    FormHeapFree
0x6F67E7: add     esp, 4
0x6F67EA: cmp     [esp+48h+arg_18], ebp
0x6F67EE: mov     [esp+48h+var_28], ebx
0x6F67F2: mov     [esp+48h+var_24], ebx
0x6F67F6: mov     [esp+48h+var_20], ebx
0x6F67FA: jb      short loc_6F6789
0x6F67FC: mov     edx, [esp+48h+arg_4]
0x6F6800: push    edx
0x6F6801: call    FormHeapFree
0x6F6806: add     esp, 4
0x6F6809: xor     al, al
0x6F680B: jmp     loc_6F69F4
0x6F6810: lea     eax, [esp+48h+var_2D+1]
0x6F6814: push    eax
0x6F6815: lea     ecx, [esp+4Ch+var_1C]
0x6F6819: call    sub_6F61A0
0x6F681E: cmp     dword ptr [esi+34h], 5
0x6F6822: lea     ebp, [esi+20h]
0x6F6825: mov     byte ptr [esp+48h+var_4], 2
0x6F682A: jnb     short loc_6F6831
0x6F682C: call    __invalid_parameter_noinfo
0x6F6831: cmp     dword ptr [ebp+18h], 10h
0x6F6835: jb      short loc_6F6840
0x6F6837: mov     ecx, [ebp+4]
0x6F683A: mov     [esp+48h+var_34], ecx
0x6F683E: jmp     short loc_6F6847
0x6F6840: lea     edx, [ebp+4]
0x6F6843: mov     [esp+48h+var_34], edx
0x6F6847: mov     edi, [esp+48h+Size]
0x6F684B: cmp     edi, ebx
0x6F684D: mov     ebx, [esp+48h+var_14]
0x6F6851: jz      short loc_6F685C
0x6F6853: mov     eax, ebx
0x6F6855: sub     eax, edi
0x6F6857: cmp     eax, 5
0x6F685A: ja      short loc_6F6861
0x6F685C: call    __invalid_parameter_noinfo
0x6F6861: sub     ebx, edi
0x6F6863: mov     eax, [esp+48h+var_34]
0x6F6867: mov     cl, [eax+5]
0x6F686A: mov     [edi+5], cl
0x6F686D: jnz     short loc_6F6874
0x6F686F: call    __invalid_parameter_noinfo
0x6F6874: mov     eax, edi
0x6F6876: lea     edx, [eax+1]
0x6F6879: lea     esp, [esp+0]
0x6F6880: mov     cl, [eax]
0x6F6882: add     eax, 1
0x6F6885: test    cl, cl
0x6F6887: jnz     short loc_6F6880
0x6F6889: sub     eax, edx
0x6F688B: mov     edx, [ebp+14h]
0x6F688E: push    eax; int
0x6F688F: push    edi; Size
0x6F6890: push    edx; int
0x6F6891: xor     ebx, ebx
0x6F6893: push    ebx; int
0x6F6894: mov     ecx, ebp
0x6F6896: call    sub_6F5DE0
0x6F689B: test    eax, eax
0x6F689D: jz      short loc_6F690E
0x6F689F: sub     esp, 1Ch
0x6F68A2: mov     ecx, esp
0x6F68A4: mov     [esp+64h+var_34], esp
0x6F68A8: push    0FFFFFFFFh
0x6F68AA: push    ebx
0x6F68AB: lea     eax, [esp+6Ch+arg_0]
0x6F68AF: mov     dword ptr [ecx+18h], 0Fh
0x6F68B6: mov     [ecx+14h], ebx
0x6F68B9: push    eax
0x6F68BA: mov     [ecx+4], bl
0x6F68BD: call    sub_414420
0x6F68C2: push    2; int
0x6F68C4: call    sub_6F6BF0
0x6F68C9: mov     ecx, [esi+40h]
0x6F68CC: add     esp, 20h
0x6F68CF: cmp     ecx, ebx
0x6F68D1: jz      short loc_6F68DB
0x6F68D3: mov     edx, [ecx]
0x6F68D5: mov     eax, [edx]
0x6F68D7: push    1
0x6F68D9: call    eax
0x6F68DB: push    edi
0x6F68DC: mov     [esi+40h], ebx
0x6F68DF: call    FormHeapFree
0x6F68E4: mov     eax, [esp+4Ch+var_28]
0x6F68E8: add     esp, 4
0x6F68EB: cmp     eax, ebx
0x6F68ED: jz      short loc_6F68F8
0x6F68EF: push    eax
0x6F68F0: call    FormHeapFree
0x6F68F5: add     esp, 4
0x6F68F8: cmp     [esp+48h+arg_18], 10h
0x6F68FD: mov     [esp+48h+var_28], ebx
0x6F6901: mov     [esp+48h+var_24], ebx
0x6F6905: mov     [esp+48h+var_20], ebx
0x6F6909: jmp     loc_6F677A
0x6F690E: mov     eax, [esp+48h+var_28]
0x6F6912: cmp     eax, ebx
0x6F6914: jz      short loc_6F6923
0x6F6916: mov     edx, [esp+48h+var_24]
0x6F691A: mov     ecx, edx
0x6F691C: sub     ecx, eax
0x6F691E: cmp     ecx, 5
0x6F6921: ja      short loc_6F6930
0x6F6923: call    __invalid_parameter_noinfo
0x6F6928: mov     edx, [esp+48h+var_24]
0x6F692C: mov     eax, [esp+48h+var_28]
0x6F6930: cmp     byte ptr [eax+5], 30h ; '0'
0x6F6934: jle     short loc_6F699D
0x6F6936: push    5
0x6F6938: mov     ecx, ebp
0x6F693A: call    sub_6EDA70
0x6F693F: push    5; int
0x6F6941: lea     ecx, [esp+4Ch+var_2D+1]
0x6F6945: mov     edi, eax
0x6F6947: call    sub_6F1210
0x6F694C: mov     dl, [edi]
0x6F694E: cmp     dl, [eax]
0x6F6950: jz      short loc_6F6995
0x6F6952: sub     esp, 1Ch
0x6F6955: lea     eax, [esp+64h+arg_0]
0x6F6959: mov     ecx, esp
0x6F695B: mov     [esp+64h+var_34], esp
0x6F695F: push    eax
0x6F6960: call    sub_414680
0x6F6965: push    4; int
0x6F6967: call    sub_6F6BF0
0x6F696C: add     esp, 20h
0x6F696F: mov     ecx, esi
0x6F6971: call    sub_6ED6F0
0x6F6976: lea     ecx, [esp+48h+var_1C]; void *
0x6F697A: call    sub_794EB0
0x6F697F: lea     ecx, [esp+48h+var_2D+1]; void *
0x6F6983: call    sub_794EB0
0x6F6988: lea     ecx, [esp+48h+arg_0]
0x6F698C: call    sub_79AB00
0x6F6991: xor     al, al
0x6F6993: jmp     short loc_6F69F4
0x6F6995: mov     edx, [esp+48h+var_24]
0x6F6999: mov     eax, [esp+48h+var_28]
0x6F699D: cmp     eax, ebx
0x6F699F: jz      short loc_6F69A8
0x6F69A1: sub     edx, eax
0x6F69A3: cmp     edx, 5
0x6F69A6: ja      short loc_6F69B1
0x6F69A8: call    __invalid_parameter_noinfo
0x6F69AD: mov     eax, [esp+48h+var_28]
0x6F69B1: push    5
0x6F69B3: mov     ecx, ebp
0x6F69B5: lea     edi, [eax+5]
0x6F69B8: call    sub_6EDA70
0x6F69BD: mov     cl, [edi]
0x6F69BF: push    0FFFFFFFFh
0x6F69C1: push    ebx
0x6F69C2: lea     edx, [esp+50h+arg_0]
0x6F69C6: mov     [eax], cl
0x6F69C8: push    edx
0x6F69C9: lea     ecx, [esi+4]
0x6F69CC: call    sub_414420
0x6F69D1: cmp     [esi+40h], ebx
0x6F69D4: lea     ecx, [esp+48h+var_1C]; void *
0x6F69D8: setnz   bl
0x6F69DB: call    sub_794EB0
0x6F69E0: lea     ecx, [esp+48h+var_2D+1]; void *
0x6F69E4: call    sub_794EB0
0x6F69E9: lea     ecx, [esp+48h+arg_0]
0x6F69ED: call    sub_79AB00
0x6F69F2: mov     al, bl
0x6F69F4: mov     ecx, [esp+48h+var_C]
0x6F69F8: mov     large fs:0, ecx
0x6F69FF: pop     ecx
0x6F6A00: pop     edi
0x6F6A01: pop     esi
0x6F6A02: pop     ebp
0x6F6A03: pop     ebx
0x6F6A04: add     esp, 34h
0x6F6A07: retn    20h ; ' '
