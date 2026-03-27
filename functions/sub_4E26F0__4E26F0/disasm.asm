0x4E26F0: push    ecx
0x4E26F1: push    edi
0x4E26F2: mov     edi, [esp+8+arg_0]
0x4E26F6: test    edi, edi
0x4E26F8: jnz     short loc_4E26FF
0x4E26FA: xor     al, al
0x4E26FC: pop     edi
0x4E26FD: pop     ecx
0x4E26FE: retn
0x4E26FF: push    ebx
0x4E2700: push    ebp
0x4E2701: push    esi
0x4E2702: mov     esi, [edi+8]
0x4E2705: test    esi, esi
0x4E2707: mov     byte ptr [esp+14h+arg_0], 0
0x4E270C: jz      loc_4E2887
0x4E2712: push    9; MaxCount
0x4E2714: push    offset aFlamenode; "FlameNode"
0x4E2719: push    esi; Str1
0x4E271A: call    __strnicmp
0x4E271F: add     esp, 0Ch
0x4E2722: test    eax, eax
0x4E2724: jnz     loc_4E286F
0x4E272A: movsx   eax, byte ptr [esi+9]
0x4E272E: push    eax; C
0x4E272F: xor     ebx, ebx
0x4E2731: call    _isdigit
0x4E2736: add     esp, 4
0x4E2739: test    eax, eax
0x4E273B: jz      short loc_4E274F
0x4E273D: movsx   ecx, byte ptr [esi+9]
0x4E2741: sub     ecx, 12h
0x4E2744: push    ecx; a1
0x4E2745: call    TESForm_LookupByFormID
0x4E274A: add     esp, 4
0x4E274D: jmp     short loc_4E2776
0x4E274F: movsx   edx, byte ptr [esi+9]
0x4E2753: push    edx; C
0x4E2754: call    _isalpha
0x4E2759: add     esp, 4
0x4E275C: test    eax, eax
0x4E275E: jz      short loc_4E2778
0x4E2760: movsx   eax, byte ptr [esi+9]
0x4E2764: push    eax; C
0x4E2765: call    _tolower
0x4E276A: sub     eax, 39h ; '9'
0x4E276D: push    eax; a1
0x4E276E: call    TESForm_LookupByFormID
0x4E2773: add     esp, 8
0x4E2776: mov     ebx, eax
0x4E2778: xor     ebp, ebp
0x4E277A: cmp     [edi+0B6h], bp
0x4E2781: jbe     short loc_4E27E8
0x4E2783: movzx   ecx, word ptr [edi+0B6h]
0x4E278A: cmp     ecx, ebp
0x4E278C: jbe     short loc_4E27DA
0x4E278E: mov     edx, [edi+0B0h]
0x4E2794: mov     esi, [edx+ebp*4]
0x4E2797: test    esi, esi
0x4E2799: jz      short loc_4E27DA
0x4E279B: mov     eax, [esi]
0x4E279D: mov     edx, [eax+8]
0x4E27A0: mov     ecx, esi
0x4E27A2: call    edx
0x4E27A4: test    eax, eax
0x4E27A6: jz      short loc_4E27DA
0x4E27A8: mov     eax, [esi+8]
0x4E27AB: push    4; MaxCount
0x4E27AD: push    offset aBase; "BASE"
0x4E27B2: push    eax; Str1
0x4E27B3: call    _strncmp
0x4E27B8: add     esp, 0Ch
0x4E27BB: test    eax, eax
0x4E27BD: jnz     short loc_4E27DA
0x4E27BF: mov     eax, [esi]
0x4E27C1: mov     edx, [eax+8Ch]
0x4E27C7: push    ebp
0x4E27C8: lea     ecx, [esp+18h+var_4]
0x4E27CC: push    ecx
0x4E27CD: mov     ecx, esi
0x4E27CF: call    edx
0x4E27D1: lea     ecx, [esp+14h+var_4]; this
0x4E27D5: call    sub_7016A0
0x4E27DA: movzx   eax, word ptr [edi+0B6h]
0x4E27E1: add     ebp, 1
0x4E27E4: cmp     ebp, eax
0x4E27E6: jb      short loc_4E2783
0x4E27E8: test    ebx, ebx
0x4E27EA: jz      loc_4E2887
0x4E27F0: movzx   eax, word ptr [ebx+2Ch]
0x4E27F4: cmp     ax, 0FFFFh
0x4E27F8: jnz     short loc_4E280D
0x4E27FA: mov     eax, [ebx+28h]
0x4E27FD: lea     edx, [eax+1]
0x4E2800: mov     cl, [eax]
0x4E2802: add     eax, 1
0x4E2805: test    cl, cl
0x4E2807: jnz     short loc_4E2800
0x4E2809: sub     eax, edx
0x4E280B: jmp     short loc_4E2810
0x4E280D: movzx   eax, ax
0x4E2810: test    eax, eax
0x4E2812: jz      short loc_4E2887
0x4E2814: mov     edx, [ebx]
0x4E2816: mov     eax, [edx+114h]
0x4E281C: push    0
0x4E281E: mov     ecx, ebx
0x4E2820: call    eax
0x4E2822: mov     esi, eax
0x4E2824: test    esi, esi
0x4E2826: jz      short loc_4E2887
0x4E2828: push    0; Seed
0x4E282A: call    GetRandomLargeInteger?
0x4E282F: cdq
0x4E2830: mov     ecx, 3E8h
0x4E2835: idiv    ecx
0x4E2837: mov     [esp+18h+arg_0], edx
0x4E283B: fild    [esp+18h+arg_0]
0x4E283F: fdiv    qword ptr ds:0A309F0h
0x4E2845: fstp    [esp+18h+arg_0]
0x4E2849: fld     [esp+18h+arg_0]
0x4E284D: fstp    [esp+18h+var_18]; float
0x4E2850: push    esi; int
0x4E2851: call    sub_4DE3C0
0x4E2856: mov     edx, [edi]
0x4E2858: mov     eax, [edx+84h]
0x4E285E: add     esp, 8
0x4E2861: push    1
0x4E2863: push    esi
0x4E2864: mov     ecx, edi
0x4E2866: call    eax
0x4E2868: mov     byte ptr [esp+14h+arg_0], 1
0x4E286D: jmp     short loc_4E2887
0x4E286F: push    offset aFlamecap; "FlameCap"
0x4E2874: push    esi; Str1
0x4E2875: call    __strcmp
0x4E287A: add     esp, 8
0x4E287D: test    eax, eax
0x4E287F: jnz     short loc_4E2887
0x4E2881: and     word ptr [edi+18h], 0FFFEh
0x4E2887: xor     ebp, ebp
0x4E2889: cmp     [edi+0B6h], bp
0x4E2890: jbe     short loc_4E28DF
0x4E2892: movzx   ecx, word ptr [edi+0B6h]
0x4E2899: cmp     ecx, ebp
0x4E289B: jbe     short loc_4E28D1
0x4E289D: mov     edx, [edi+0B0h]
0x4E28A3: mov     esi, [edx+ebp*4]
0x4E28A6: test    esi, esi
0x4E28A8: jz      short loc_4E28D1
0x4E28AA: mov     eax, [esi]
0x4E28AC: mov     edx, [eax+4]
0x4E28AF: mov     ecx, esi
0x4E28B1: call    edx
0x4E28B3: cmp     eax, offset dword_B3FAB0
0x4E28B8: setz    al
0x4E28BB: test    al, al
0x4E28BD: jz      short loc_4E28D1
0x4E28BF: push    esi
0x4E28C0: call    sub_4E26F0
0x4E28C5: add     esp, 4
0x4E28C8: test    al, al
0x4E28CA: jz      short loc_4E28D1
0x4E28CC: mov     byte ptr [esp+14h+arg_0], 1
0x4E28D1: movzx   eax, word ptr [edi+0B6h]
0x4E28D8: add     ebp, 1
0x4E28DB: cmp     ebp, eax
0x4E28DD: jb      short loc_4E2892
0x4E28DF: mov     al, byte ptr [esp+14h+arg_0]
0x4E28E3: test    al, al
0x4E28E5: pop     esi
0x4E28E6: pop     ebp
0x4E28E7: pop     ebx
0x4E28E8: jz      short loc_4E28FB
0x4E28EA: mov     cx, [edi+18h]
0x4E28EE: and     cx, 0FFEFh
0x4E28F3: or      cx, 2
0x4E28F7: mov     [edi+18h], cx
0x4E28FB: pop     edi
0x4E28FC: pop     ecx
0x4E28FD: retn
