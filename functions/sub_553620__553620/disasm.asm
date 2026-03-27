0x553620: push    0FFFFFFFFh
0x553622: push    offset SEH_553620
0x553627: mov     eax, large fs:0
0x55362D: push    eax
0x55362E: push    ecx
0x55362F: push    ebx
0x553630: push    ebp
0x553631: push    esi
0x553632: push    edi
0x553633: mov     eax, ds:0B30AACh
0x553638: xor     eax, esp
0x55363A: push    eax
0x55363B: lea     eax, [esp+24h+var_C]
0x55363F: mov     large fs:0, eax
0x553645: xor     edi, edi
0x553647: xor     esi, esi
0x553649: mov     [esp+24h+var_10], edi
0x55364D: mov     ebp, [esp+24h+arg_0]
0x553651: cmp     ebp, esi
0x553653: mov     ebx, [esp+24h+arg_C]
0x553657: mov     [esp+24h+var_4], esi
0x55365B: jnz     short loc_553677
0x55365D: cmp     ebx, esi
0x55365F: jnz     short loc_553677
0x553661: xor     eax, eax
0x553663: mov     ecx, [esp+24h+var_C]
0x553667: mov     large fs:0, ecx
0x55366E: pop     ecx
0x55366F: pop     edi
0x553670: pop     esi
0x553671: pop     ebp
0x553672: pop     ebx
0x553673: add     esp, 10h
0x553676: retn
0x553677: mov     eax, ds:0B39B80h
0x55367C: cmp     eax, esi
0x55367E: jnz     short loc_55368A
0x553680: call    sub_553550
0x553685: mov     eax, ds:0B39B80h
0x55368A: cmp     [eax+0DACh], esi
0x553690: jnz     loc_55371E
0x553696: push    20h ; ' '; Size
0x553698: call    FormHeapAlloc
0x55369D: add     esp, 4
0x5536A0: mov     [esp+24h+arg_0], eax
0x5536A4: cmp     eax, esi
0x5536A6: mov     byte ptr [esp+24h+var_4], 1
0x5536AB: jz      short loc_5536B6
0x5536AD: mov     ecx, eax; this
0x5536AF: call    ??0BSFaceGenModelMap@@QAE@XZ; BSFaceGenModelMap::BSFaceGenModelMap(void)
0x5536B4: mov     esi, eax
0x5536B6: cmp     dword ptr ds:0B39B80h, 0
0x5536BD: mov     byte ptr [esp+24h+var_4], 0
0x5536C2: jnz     short loc_5536C9
0x5536C4: call    sub_553550
0x5536C9: mov     eax, ds:0B39B80h
0x5536CE: mov     [eax+0DACh], esi
0x5536D4: mov     ecx, ds:0B39B80h
0x5536DA: mov     ecx, [ecx+0DACh]
0x5536E0: mov     edx, ds:0B120ECh
0x5536E6: push    0
0x5536E8: mov     [ecx+18h], edx
0x5536EB: call    sub_5506B0
0x5536F0: cmp     dword ptr ds:0B39B80h, 0
0x5536F7: mov     esi, ds:0B120F4h
0x5536FD: jnz     short loc_553704
0x5536FF: call    sub_553550
0x553704: mov     eax, ds:0B39B80h
0x553709: mov     ecx, [eax+0DACh]
0x55370F: push    0
0x553711: mov     [ecx+1Ch], esi
0x553714: call    sub_5506B0
0x553719: mov     eax, ds:0B39B80h
0x55371E: test    ebp, ebp
0x553720: jz      short loc_5537A1
0x553722: test    eax, eax
0x553724: jnz     short loc_553730
0x553726: call    sub_553550
0x55372B: mov     eax, ds:0B39B80h
0x553730: lea     ecx, [esp+24h+var_10]
0x553734: push    ecx
0x553735: mov     ecx, [eax+0DACh]
0x55373B: push    ebp
0x55373C: call    sub_5515B0
0x553741: test    al, al
0x553743: jz      loc_5537E9
0x553749: mov     esi, [esp+24h+var_10]
0x55374D: cmp     dword ptr [esi+8], 0
0x553751: jnz     short loc_55376B
0x553753: mov     edx, dword ptr [esp+24h+arg_14]
0x553757: mov     eax, [esp+24h+arg_8]
0x55375B: mov     ecx, dword ptr [esp+24h+ArgList]
0x55375F: push    edx; char
0x553760: push    ebx; int
0x553761: push    eax; int
0x553762: push    ecx; ArgList
0x553763: push    ebp; int
0x553764: mov     ecx, esi
0x553766: call    sub_559B50
0x55376B: lea     edx, [esi+4]
0x55376E: push    edx; lpAddend
0x55376F: mov     [esp+28h+var_4], 0FFFFFFFFh
0x553777: call    dword ptr ds:0A2807Ch
0x55377D: test    eax, eax
0x55377F: jnz     short loc_55378B
0x553781: mov     eax, [esi]
0x553783: mov     edx, [eax]
0x553785: push    1
0x553787: mov     ecx, esi
0x553789: call    edx
0x55378B: mov     eax, esi
0x55378D: mov     ecx, [esp+24h+var_C]
0x553791: mov     large fs:0, ecx
0x553798: pop     ecx
0x553799: pop     edi
0x55379A: pop     esi
0x55379B: pop     ebp
0x55379C: pop     ebx
0x55379D: add     esp, 10h
0x5537A0: retn
0x5537A1: test    ebx, ebx
0x5537A3: jz      short loc_5537ED
0x5537A5: test    eax, eax
0x5537A7: jnz     short loc_5537B3
0x5537A9: call    sub_553550
0x5537AE: mov     eax, ds:0B39B80h
0x5537B3: lea     ecx, [esp+24h+var_10]
0x5537B7: push    ecx
0x5537B8: mov     ecx, [eax+0DACh]
0x5537BE: push    ebx
0x5537BF: call    sub_5515B0
0x5537C4: test    al, al
0x5537C6: jz      short loc_5537E9
0x5537C8: mov     esi, [esp+24h+var_10]
0x5537CC: cmp     dword ptr [esi+8], 0
0x5537D0: jnz     short loc_55376B
0x5537D2: mov     edx, dword ptr [esp+24h+arg_14]
0x5537D6: mov     eax, [esp+24h+arg_8]
0x5537DA: mov     ecx, dword ptr [esp+24h+ArgList]
0x5537DE: push    edx
0x5537DF: push    ebx
0x5537E0: push    eax
0x5537E1: push    ecx
0x5537E2: push    0
0x5537E4: jmp     loc_553764
0x5537E9: mov     edi, [esp+24h+var_10]
0x5537ED: cmp     [esp+24h+arg_10], 0
0x5537F2: jz      loc_553891
0x5537F8: push    1Ch; Size
0x5537FA: call    FormHeapAlloc
0x5537FF: add     esp, 4
0x553802: mov     [esp+24h+arg_0], eax
0x553806: test    eax, eax
0x553808: mov     byte ptr [esp+24h+var_4], 2
0x55380D: jz      short loc_553818
0x55380F: mov     ecx, eax; this
0x553811: call    ??0BSFaceGenModel@@QAE@XZ; BSFaceGenModel::BSFaceGenModel(void)
0x553816: jmp     short loc_55381A
0x553818: xor     eax, eax
0x55381A: push    eax; a2
0x55381B: lea     ecx, [esp+28h+var_10]; this
0x55381F: mov     byte ptr [esp+28h+var_4], 0
0x553824: call    NiSmartPointer_Set??
0x553829: mov     eax, dword ptr [esp+24h+arg_14]
0x55382D: mov     ecx, [esp+24h+arg_8]
0x553831: mov     edx, dword ptr [esp+24h+ArgList]
0x553835: mov     edi, [esp+24h+var_10]
0x553839: push    eax; char
0x55383A: push    ebx; int
0x55383B: push    ecx; int
0x55383C: push    edx; ArgList
0x55383D: push    ebp; int
0x55383E: mov     ecx, edi
0x553840: call    sub_559B50
0x553845: test    al, al
0x553847: jz      short loc_553873
0x553849: test    ebp, ebp
0x55384B: mov     esi, ebp
0x55384D: jnz     short loc_553851
0x55384F: mov     esi, ebx
0x553851: cmp     dword ptr ds:0B39B80h, 0
0x553858: jnz     short loc_55385F
0x55385A: call    sub_553550
0x55385F: mov     eax, ds:0B39B80h
0x553864: mov     ecx, [eax+0DACh]
0x55386A: push    edi
0x55386B: push    esi
0x55386C: call    sub_551450
0x553871: jmp     short loc_553891
0x553873: test    edi, edi
0x553875: jz      short loc_553891
0x553877: lea     ecx, [edi+4]
0x55387A: push    ecx; lpAddend
0x55387B: call    dword ptr ds:0A2807Ch
0x553881: test    eax, eax
0x553883: jnz     short loc_55388F
0x553885: mov     edx, [edi]
0x553887: mov     eax, [edx]
0x553889: push    1
0x55388B: mov     ecx, edi
0x55388D: call    eax
0x55388F: xor     edi, edi
0x553891: test    edi, edi
0x553893: mov     [esp+24h+var_4], 0FFFFFFFFh
0x55389B: jz      short loc_5538B5
0x55389D: lea     ecx, [edi+4]
0x5538A0: push    ecx; lpAddend
0x5538A1: call    dword ptr ds:0A2807Ch
0x5538A7: test    eax, eax
0x5538A9: jnz     short loc_5538B5
0x5538AB: mov     edx, [edi]
0x5538AD: mov     eax, [edx]
0x5538AF: push    1
0x5538B1: mov     ecx, edi
0x5538B3: call    eax
0x5538B5: mov     eax, edi
0x5538B7: mov     ecx, [esp+24h+var_C]
0x5538BB: mov     large fs:0, ecx
0x5538C2: pop     ecx
0x5538C3: pop     edi
0x5538C4: pop     esi
0x5538C5: pop     ebp
0x5538C6: pop     ebx
0x5538C7: add     esp, 10h
0x5538CA: retn
