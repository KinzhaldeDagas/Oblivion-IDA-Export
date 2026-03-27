0x7354B0: push    0FFFFFFFFh
0x7354B2: push    offset SEH_7354B0
0x7354B7: mov     eax, large fs:0
0x7354BD: push    eax
0x7354BE: sub     esp, 60h
0x7354C1: push    ebx
0x7354C2: push    ebp
0x7354C3: push    esi
0x7354C4: push    edi
0x7354C5: mov     eax, ds:0B30AACh
0x7354CA: xor     eax, esp
0x7354CC: push    eax
0x7354CD: lea     eax, [esp+80h+var_C]
0x7354D1: mov     large fs:0, eax
0x7354D7: mov     esi, ecx
0x7354D9: lea     ecx, [esp+80h+var_50]
0x7354DD: call    InitSurfacEData
0x7354E2: lea     edi, [esi+80h]
0x7354E8: push    edi; lpCriticalSection
0x7354E9: mov     [esp+84h+lpCriticalSection], edi
0x7354ED: call    dword ptr ds:0A2806Ch
0x7354F3: call    dword ptr ds:0A2808Ch
0x7354F9: add     dword ptr [edi+7Ch], 1
0x7354FD: mov     ebp, [esp+80h+arg_0]
0x735504: lea     ecx, [esp+80h+var_5C]
0x735508: push    ecx
0x735509: lea     edx, [esp+84h+var_69]
0x73550D: push    edx
0x73550E: lea     ecx, [esp+88h+var_50]
0x735512: push    ecx
0x735513: lea     edx, [esp+8Ch+var_58]
0x735517: push    edx
0x735518: lea     ecx, [esp+90h+var_54]
0x73551C: mov     [edi+78h], eax
0x73551F: mov     eax, [esi]
0x735521: mov     edx, [eax+0Ch]
0x735524: push    ecx
0x735525: push    ebp
0x735526: mov     ecx, esi
0x735528: call    edx
0x73552A: test    al, al
0x73552C: jnz     short loc_735549
0x73552E: add     dword ptr [edi+7Ch], 0FFFFFFFFh
0x735532: jnz     short loc_73553B
0x735534: mov     dword ptr [edi+78h], 0
0x73553B: push    edi; lpCriticalSection
0x73553C: call    dword ptr ds:0A28074h
0x735542: xor     eax, eax
0x735544: jmp     loc_7357DC
0x735549: mov     cl, [esi+114h]
0x73554F: movzx   eax, word ptr [esi+10Eh]
0x735556: movzx   ebx, cl
0x735559: imul    ebx, eax
0x73555C: test    cl, cl
0x73555E: mov     [esp+80h+var_68], ebx
0x735562: jnz     short loc_735575
0x735564: cmp     byte ptr [esi+112h], 4
0x73556B: jnz     short loc_73552E
0x73556D: shr     eax, 1
0x73556F: mov     [esp+80h+var_68], eax
0x735573: mov     ebx, eax
0x735575: cmp     byte ptr [esi+101h], 0
0x73557C: jz      short loc_7355A2
0x73557E: movzx   eax, word ptr [esi+106h]
0x735585: movzx   ecx, word ptr [esi+104h]
0x73558C: add     eax, ecx
0x73558E: add     eax, 1
0x735591: cmp     eax, 4000h
0x735596: jnb     short loc_73552E
0x735598: push    ebp
0x735599: mov     ecx, esi
0x73559B: call    sub_734E10
0x7355A0: jmp     short loc_7355AB
0x7355A2: cmp     byte ptr [esi+116h], 0
0x7355A9: jnz     short loc_73552E
0x7355AB: mov     ebp, [esp+80h+arg_4]
0x7355B2: test    ebp, ebp
0x7355B4: jz      short loc_7355F2
0x7355B6: mov     edx, [ebp+54h]
0x7355B9: movzx   ecx, word ptr [esi+10Eh]
0x7355C0: mov     eax, [edx]
0x7355C2: cmp     eax, ecx
0x7355C4: jnz     short loc_7355F2
0x7355C6: mov     edx, [ebp+58h]
0x7355C9: movzx   ecx, word ptr [esi+110h]
0x7355D0: mov     eax, [edx]
0x7355D2: cmp     eax, ecx
0x7355D4: jnz     short loc_7355F2
0x7355D6: lea     edx, [esi+11Ch]
0x7355DC: push    edx
0x7355DD: lea     ecx, [ebp+8]
0x7355E0: call    sub_71AD40
0x7355E5: test    al, al
0x7355E7: jz      short loc_7355F2
0x7355E9: mov     [esp+80h+arg_4], ebp
0x7355F0: jmp     short loc_735646
0x7355F2: push    70h ; 'p'; Size
0x7355F4: call    FormHeapAlloc
0x7355F9: add     esp, 4
0x7355FC: mov     [esp+80h+arg_4], eax
0x735603: test    eax, eax
0x735605: mov     [esp+80h+var_4], 0
0x73560D: jz      short loc_735633
0x73560F: movzx   edx, word ptr [esi+110h]
0x735616: push    1
0x735618: push    1
0x73561A: lea     ecx, [esi+11Ch]
0x735620: push    ecx
0x735621: movzx   ecx, word ptr [esi+10Eh]
0x735628: push    edx
0x735629: push    ecx
0x73562A: mov     ecx, eax
0x73562C: call    NiPixelData__NiPixelData
0x735631: jmp     short loc_735635
0x735633: xor     eax, eax
0x735635: mov     [esp+80h+var_4], 0FFFFFFFFh
0x73563D: mov     [esp+80h+arg_4], eax
0x735644: mov     ebp, eax
0x735646: cmp     byte ptr [esi+116h], 0
0x73564D: jz      short loc_73569E
0x73564F: push    24h ; '$'; Size
0x735651: call    FormHeapAlloc
0x735656: add     esp, 4
0x735659: mov     [esp+80h+var_64], eax
0x73565D: test    eax, eax
0x73565F: mov     [esp+80h+var_4], 1
0x735667: jz      short loc_735689
0x735669: mov     edx, [esi+16Ch]
0x73566F: movzx   ecx, word ptr [esi+106h]
0x735676: push    edx; Src
0x735677: movzx   edx, byte ptr [esi+115h]
0x73567E: push    ecx; int
0x73567F: push    edx; char
0x735680: mov     ecx, eax
0x735682: call    sub_732750
0x735687: jmp     short loc_73568B
0x735689: xor     eax, eax
0x73568B: push    eax
0x73568C: mov     ecx, ebp
0x73568E: mov     [esp+84h+var_4], 0FFFFFFFFh
0x735699: call    sub_71B140
0x73569E: cmp     [esi+160h], ebx
0x7356A4: jnb     short loc_7356CD
0x7356A6: mov     eax, [esi+164h]
0x7356AC: push    eax
0x7356AD: mov     [esi+160h], ebx
0x7356B3: call    FormHeapFree
0x7356B8: mov     ecx, [esi+160h]
0x7356BE: push    ecx; Size
0x7356BF: call    FormHeapAlloc
0x7356C4: add     esp, 8
0x7356C7: mov     [esi+164h], eax
0x7356CD: mov     edx, [ebp+5Ch]
0x7356D0: mov     eax, [ebp+54h]
0x7356D3: mov     edi, [edx]
0x7356D5: add     edi, [ebp+50h]
0x7356D8: mov     eax, [eax]
0x7356DA: mov     ebp, [ebp+64h]
0x7356DD: imul    ebp, eax
0x7356E0: test    ebp, ebp
0x7356E2: jnz     short loc_7356E8
0x7356E4: shr     eax, 1
0x7356E6: mov     ebp, eax
0x7356E8: cmp     byte ptr [esi+117h], 0
0x7356EF: jz      short loc_735702
0x7356F1: movzx   ecx, word ptr [esi+110h]
0x7356F8: sub     ecx, 1
0x7356FB: imul    ecx, ebp
0x7356FE: add     edi, ecx
0x735700: neg     ebp
0x735702: xor     ebx, ebx
0x735704: cmp     [esi+118h], bl
0x73570A: jz      short loc_735761
0x73570C: cmp     [esi+110h], bx
0x735713: jbe     loc_7357BD
0x735719: lea     esp, [esp+0]
0x735720: mov     edx, [esi+160h]
0x735726: mov     eax, [esi+164h]
0x73572C: mov     ecx, [esp+80h+arg_0]
0x735733: push    edx; int
0x735734: push    eax; Dst
0x735735: push    ecx; int
0x735736: mov     ecx, esi
0x735738: call    sub_734CB0
0x73573D: mov     edx, [esi+164h]
0x735743: mov     eax, [esi+170h]
0x735749: push    edi
0x73574A: push    edx
0x73574B: mov     ecx, esi
0x73574D: call    eax
0x73574F: movzx   ecx, word ptr [esi+110h]
0x735756: add     ebx, 1
0x735759: add     edi, ebp
0x73575B: cmp     ebx, ecx
0x73575D: jb      short loc_735720
0x73575F: jmp     short loc_7357BD
0x735761: cmp     word ptr [esi+110h], 0
0x735769: jbe     short loc_7357BD
0x73576B: jmp     short loc_735770
0x73576D: align 10h
0x735770: mov     eax, [esp+80h+var_68]
0x735774: mov     ecx, [esi+164h]
0x73577A: push    1
0x73577C: lea     edx, [esp+84h+var_64]
0x735780: push    edx
0x735781: push    eax
0x735782: mov     eax, [esp+8Ch+arg_0]
0x735789: mov     edx, [eax+4]
0x73578C: push    ecx
0x73578D: push    eax
0x73578E: mov     [esp+94h+var_64], 1
0x735796: call    edx
0x735798: mov     eax, [esi+164h]
0x73579E: mov     edx, [esi+170h]
0x7357A4: add     esp, 14h
0x7357A7: push    edi
0x7357A8: push    eax
0x7357A9: mov     ecx, esi
0x7357AB: call    edx
0x7357AD: movzx   eax, word ptr [esi+110h]
0x7357B4: add     ebx, 1
0x7357B7: add     edi, ebp
0x7357B9: cmp     ebx, eax
0x7357BB: jb      short loc_735770
0x7357BD: mov     eax, [esp+80h+lpCriticalSection]
0x7357C1: add     dword ptr [eax+7Ch], 0FFFFFFFFh
0x7357C5: jnz     short loc_7357CE
0x7357C7: mov     dword ptr [eax+78h], 0
0x7357CE: push    eax; lpCriticalSection
0x7357CF: call    dword ptr ds:0A28074h
0x7357D5: mov     eax, [esp+80h+arg_4]
0x7357DC: mov     ecx, dword ptr [esp+80h+var_C]
0x7357E0: mov     large fs:0, ecx
0x7357E7: pop     ecx
0x7357E8: pop     edi
0x7357E9: pop     esi
0x7357EA: pop     ebp
0x7357EB: pop     ebx
0x7357EC: add     esp, 6Ch
0x7357EF: retn    8
