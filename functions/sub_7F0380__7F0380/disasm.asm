0x7F0380: sub     esp, 3E0h
0x7F0386: mov     eax, ds:0B30AACh
0x7F038B: xor     eax, esp
0x7F038D: mov     [esp+3E0h+var_4], eax
0x7F0394: push    ebx
0x7F0395: push    ebp
0x7F0396: push    esi
0x7F0397: push    edi
0x7F0398: xor     ebp, ebp
0x7F039A: push    3Ch ; '<'
0x7F039C: lea     eax, [esp+3F4h+var_32C]
0x7F03A3: mov     ebx, ecx
0x7F03A5: push    ebp
0x7F03A6: mov     edi, offset aSpeedtreeLeaf_; "speedtree\\leaf.v.hlsl"
0x7F03AB: push    eax
0x7F03AC: mov     [esp+3FCh+var_3D8], ebx
0x7F03B0: mov     [esp+3FCh+var_33C], edi
0x7F03B7: mov     [esp+3FCh+var_338], ebp
0x7F03BE: mov     [esp+3FCh+var_334], ebp
0x7F03C5: mov     [esp+3FCh+var_330], ebp
0x7F03CC: call    __memset
0x7F03D1: push    38h ; '8'
0x7F03D3: lea     ecx, [esp+400h+var_2DC]
0x7F03DA: push    ebp
0x7F03DB: mov     esi, offset EmptyString
0x7F03E0: push    ecx
0x7F03E1: mov     [esp+408h+var_2F0], edi
0x7F03E8: mov     [esp+408h+var_2EC], offset off_A90D88
0x7F03F3: mov     [esp+408h+var_2E8], esi
0x7F03FA: mov     [esp+408h+var_2E4], ebp
0x7F0401: mov     [esp+408h+var_2E0], ebp
0x7F0408: call    __memset
0x7F040D: push    38h ; '8'
0x7F040F: lea     edx, [esp+40Ch+var_290]
0x7F0416: push    ebp
0x7F0417: push    edx
0x7F0418: mov     [esp+414h+var_2A4], edi
0x7F041F: mov     [esp+414h+var_2A0], offset aPt; "PT"
0x7F042A: mov     [esp+414h+var_29C], esi
0x7F0431: mov     [esp+414h+var_298], ebp
0x7F0438: mov     [esp+414h+var_294], ebp
0x7F043F: call    __memset
0x7F0444: push    34h ; '4'
0x7F0446: lea     eax, [esp+418h+var_240]
0x7F044D: push    ebp
0x7F044E: push    eax
0x7F044F: mov     [esp+420h+var_258], edi
0x7F0456: mov     [esp+420h+var_254], offset aPt; "PT"
0x7F0461: mov     [esp+420h+var_250], esi
0x7F0468: mov     [esp+420h+var_24C], offset off_A90D88
0x7F0473: mov     [esp+420h+var_248], esi
0x7F047A: mov     [esp+420h+var_244], ebp
0x7F0481: call    __memset
0x7F0486: push    3Ch ; '<'
0x7F0488: lea     ecx, [esp+424h+var_3C4]
0x7F048C: push    ebp
0x7F048D: mov     edi, offset aSpeedtreeLea_0; "speedtree\\leaf.p.hlsl"
0x7F0492: push    ecx
0x7F0493: mov     [esp+42Ch+var_3D4], edi
0x7F0497: mov     [esp+42Ch+var_3D0], ebp
0x7F049B: mov     [esp+42Ch+var_3CC], ebp
0x7F049F: mov     [esp+42Ch+var_3C8], ebp
0x7F04A3: call    __memset
0x7F04A8: push    38h ; '8'
0x7F04AA: lea     edx, [esp+430h+var_374]
0x7F04B1: push    ebp
0x7F04B2: push    edx
0x7F04B3: mov     [esp+438h+var_388], edi
0x7F04BA: mov     [esp+438h+var_384], offset off_A90D88
0x7F04C5: mov     [esp+438h+var_380], esi
0x7F04CC: mov     [esp+438h+var_37C], ebp
0x7F04D3: mov     [esp+438h+var_378], ebp
0x7F04DA: call    __memset
0x7F04DF: xor     esi, esi
0x7F04E1: lea     edi, [esp+438h+var_33C]
0x7F04E8: add     esp, 48h
0x7F04EB: mov     [esp+3F0h+var_3DC], esi
0x7F04EF: mov     [esp+3F0h+var_3E0], edi
0x7F04F3: add     ebx, 37Ch
0x7F04F9: lea     esp, [esp+0]
0x7F0500: mov     eax, [edi]
0x7F0502: cmp     eax, ebp
0x7F0504: jz      loc_7F058C
0x7F050A: lea     ecx, [esp+3F0h+FileName]
0x7F0511: push    ecx; int
0x7F0512: push    eax; FullPath
0x7F0513: call    sub_801030
0x7F0518: push    esi
0x7F0519: lea     edx, [esp+3FCh+var_108]
0x7F0520: push    offset aStleaf03i_vso; "STLEAF%03i.vso"
0x7F0525: push    edx
0x7F0526: call    __sprintf
0x7F052B: add     esp, 14h
0x7F052E: push    ebp; int
0x7F052F: push    ebp; int
0x7F0530: lea     eax, [esp+3F8h+var_108]
0x7F0537: push    eax; int
0x7F0538: push    offset aVs_1_1; "vs_1_1"
0x7F053D: add     edi, 4
0x7F0540: push    edi; int
0x7F0541: lea     ecx, [esp+404h+FileName]
0x7F0548: push    ecx; lpFileName
0x7F0549: mov     ecx, [esp+408h+var_3D8]
0x7F054D: call    CreateVertexShader
0x7F0552: mov     esi, [ebx]
0x7F0554: mov     edi, eax
0x7F0556: cmp     esi, edi
0x7F0558: jz      short loc_7F05B0
0x7F055A: cmp     esi, ebp
0x7F055C: jz      short loc_7F057A
0x7F055E: lea     edx, [esi+4]
0x7F0561: push    edx; lpAddend
0x7F0562: call    dword ptr ds:0A2807Ch
0x7F0568: test    eax, eax
0x7F056A: jnz     short loc_7F057A
0x7F056C: cmp     esi, ebp
0x7F056E: jz      short loc_7F057A
0x7F0570: mov     eax, [esi]
0x7F0572: mov     edx, [eax]
0x7F0574: push    1
0x7F0576: mov     ecx, esi
0x7F0578: call    edx
0x7F057A: cmp     edi, ebp
0x7F057C: mov     [ebx], edi
0x7F057E: jz      short loc_7F05B0
0x7F0580: add     edi, 4
0x7F0583: push    edi; lpAddend
0x7F0584: call    dword ptr ds:0A28078h
0x7F058A: jmp     short loc_7F05B0
0x7F058C: mov     esi, [ebx]
0x7F058E: cmp     esi, ebp
0x7F0590: jz      short loc_7F05B0
0x7F0592: lea     eax, [esi+4]
0x7F0595: push    eax; lpAddend
0x7F0596: call    dword ptr ds:0A2807Ch
0x7F059C: test    eax, eax
0x7F059E: jnz     short loc_7F05AE
0x7F05A0: cmp     esi, ebp
0x7F05A2: jz      short loc_7F05AE
0x7F05A4: mov     edx, [esi]
0x7F05A6: mov     eax, [edx]
0x7F05A8: push    1
0x7F05AA: mov     ecx, esi
0x7F05AC: call    eax
0x7F05AE: mov     [ebx], ebp
0x7F05B0: mov     esi, [esp+3F0h+var_3DC]
0x7F05B4: mov     edi, [esp+3F0h+var_3E0]
0x7F05B8: add     esi, 1
0x7F05BB: add     edi, 4Ch ; 'L'
0x7F05BE: add     ebx, 4
0x7F05C1: cmp     esi, 4
0x7F05C4: mov     [esp+3F0h+var_3DC], esi
0x7F05C8: mov     [esp+3F0h+var_3E0], edi
0x7F05CC: jl      loc_7F0500
0x7F05D2: mov     ebx, [esp+3F0h+var_3D8]
0x7F05D6: xor     esi, esi
0x7F05D8: add     ebx, 38Ch
0x7F05DE: cmp     dword ptr ds:0B42F48h, 2
0x7F05E5: lea     edi, [esp+3F0h+var_3D4]
0x7F05E9: mov     [esp+3F0h+var_3DC], esi
0x7F05ED: jl      loc_7F06D7
0x7F05F3: mov     [esp+3F0h+var_3E0], edi
0x7F05F7: jmp     short loc_7F0600
0x7F05F9: align 10h
0x7F0600: mov     eax, [edi]
0x7F0602: cmp     eax, ebp
0x7F0604: jz      loc_7F068C
0x7F060A: lea     ecx, [esp+3F0h+FileName]
0x7F0611: push    ecx; int
0x7F0612: push    eax; FullPath
0x7F0613: call    sub_801030
0x7F0618: push    esi
0x7F0619: lea     edx, [esp+3FCh+var_108]
0x7F0620: push    offset aStleaf203i_pso; "STLEAF2%03i.pso"
0x7F0625: push    edx
0x7F0626: call    __sprintf
0x7F062B: add     esp, 14h
0x7F062E: push    ebp; int
0x7F062F: push    ebp; int
0x7F0630: lea     eax, [esp+3F8h+var_108]
0x7F0637: push    eax; int
0x7F0638: push    offset aPs_2_0; "ps_2_0"
0x7F063D: add     edi, 4
0x7F0640: push    edi; int
0x7F0641: lea     ecx, [esp+404h+FileName]
0x7F0648: push    ecx; lpFileName
0x7F0649: mov     ecx, [esp+408h+var_3D8]
0x7F064D: call    CreatePixelShader
0x7F0652: mov     esi, [ebx]
0x7F0654: mov     edi, eax
0x7F0656: cmp     esi, edi
0x7F0658: jz      short loc_7F06B0
0x7F065A: cmp     esi, ebp
0x7F065C: jz      short loc_7F067A
0x7F065E: lea     edx, [esi+4]
0x7F0661: push    edx; lpAddend
0x7F0662: call    dword ptr ds:0A2807Ch
0x7F0668: test    eax, eax
0x7F066A: jnz     short loc_7F067A
0x7F066C: cmp     esi, ebp
0x7F066E: jz      short loc_7F067A
0x7F0670: mov     eax, [esi]
0x7F0672: mov     edx, [eax]
0x7F0674: push    1
0x7F0676: mov     ecx, esi
0x7F0678: call    edx
0x7F067A: cmp     edi, ebp
0x7F067C: mov     [ebx], edi
0x7F067E: jz      short loc_7F06B0
0x7F0680: add     edi, 4
0x7F0683: push    edi; lpAddend
0x7F0684: call    dword ptr ds:0A28078h
0x7F068A: jmp     short loc_7F06B0
0x7F068C: mov     esi, [ebx]
0x7F068E: cmp     esi, ebp
0x7F0690: jz      short loc_7F06B0
0x7F0692: lea     eax, [esi+4]
0x7F0695: push    eax; lpAddend
0x7F0696: call    dword ptr ds:0A2807Ch
0x7F069C: test    eax, eax
0x7F069E: jnz     short loc_7F06AE
0x7F06A0: cmp     esi, ebp
0x7F06A2: jz      short loc_7F06AE
0x7F06A4: mov     edx, [esi]
0x7F06A6: mov     eax, [edx]
0x7F06A8: push    1
0x7F06AA: mov     ecx, esi
0x7F06AC: call    eax
0x7F06AE: mov     [ebx], ebp
0x7F06B0: mov     esi, [esp+3F0h+var_3DC]
0x7F06B4: mov     edi, [esp+3F0h+var_3E0]
0x7F06B8: add     esi, 1
0x7F06BB: add     edi, 4Ch ; 'L'
0x7F06BE: add     ebx, 4
0x7F06C1: cmp     esi, 2
0x7F06C4: mov     [esp+3F0h+var_3DC], esi
0x7F06C8: mov     [esp+3F0h+var_3E0], edi
0x7F06CC: jl      loc_7F0600
0x7F06D2: jmp     loc_7F07B2
0x7F06D7: mov     [esp+3F0h+var_3E0], edi
0x7F06DB: jmp     short loc_7F06E0
0x7F06DD: align 10h
0x7F06E0: mov     eax, [edi]
0x7F06E2: cmp     eax, ebp
0x7F06E4: jz      loc_7F076C
0x7F06EA: lea     ecx, [esp+3F0h+FileName]
0x7F06F1: push    ecx; int
0x7F06F2: push    eax; FullPath
0x7F06F3: call    sub_801030
0x7F06F8: push    esi
0x7F06F9: lea     edx, [esp+3FCh+var_108]
0x7F0700: push    offset aStleaf03i_pso; "STLEAF%03i.pso"
0x7F0705: push    edx
0x7F0706: call    __sprintf
0x7F070B: add     esp, 14h
0x7F070E: push    ebp; int
0x7F070F: push    ebp; int
0x7F0710: lea     eax, [esp+3F8h+var_108]
0x7F0717: push    eax; int
0x7F0718: push    offset aPs_1_3; "ps_1_3"
0x7F071D: add     edi, 4
0x7F0720: push    edi; int
0x7F0721: lea     ecx, [esp+404h+FileName]
0x7F0728: push    ecx; lpFileName
0x7F0729: mov     ecx, [esp+408h+var_3D8]
0x7F072D: call    CreatePixelShader
0x7F0732: mov     esi, [ebx]
0x7F0734: mov     edi, eax
0x7F0736: cmp     esi, edi
0x7F0738: jz      short loc_7F0790
0x7F073A: cmp     esi, ebp
0x7F073C: jz      short loc_7F075A
0x7F073E: lea     edx, [esi+4]
0x7F0741: push    edx; lpAddend
0x7F0742: call    dword ptr ds:0A2807Ch
0x7F0748: test    eax, eax
0x7F074A: jnz     short loc_7F075A
0x7F074C: cmp     esi, ebp
0x7F074E: jz      short loc_7F075A
0x7F0750: mov     eax, [esi]
0x7F0752: mov     edx, [eax]
0x7F0754: push    1
0x7F0756: mov     ecx, esi
0x7F0758: call    edx
0x7F075A: cmp     edi, ebp
0x7F075C: mov     [ebx], edi
0x7F075E: jz      short loc_7F0790
0x7F0760: add     edi, 4
0x7F0763: push    edi; lpAddend
0x7F0764: call    dword ptr ds:0A28078h
0x7F076A: jmp     short loc_7F0790
0x7F076C: mov     esi, [ebx]
0x7F076E: cmp     esi, ebp
0x7F0770: jz      short loc_7F0790
0x7F0772: lea     eax, [esi+4]
0x7F0775: push    eax; lpAddend
0x7F0776: call    dword ptr ds:0A2807Ch
0x7F077C: test    eax, eax
0x7F077E: jnz     short loc_7F078E
0x7F0780: cmp     esi, ebp
0x7F0782: jz      short loc_7F078E
0x7F0784: mov     edx, [esi]
0x7F0786: mov     eax, [edx]
0x7F0788: push    1
0x7F078A: mov     ecx, esi
0x7F078C: call    eax
0x7F078E: mov     [ebx], ebp
0x7F0790: mov     esi, [esp+3F0h+var_3DC]
0x7F0794: mov     edi, [esp+3F0h+var_3E0]
0x7F0798: add     esi, 1
0x7F079B: add     edi, 4Ch ; 'L'
0x7F079E: add     ebx, 4
0x7F07A1: cmp     esi, 2
0x7F07A4: mov     [esp+3F0h+var_3DC], esi
0x7F07A8: mov     [esp+3F0h+var_3E0], edi
0x7F07AC: jl      loc_7F06E0
0x7F07B2: mov     ecx, [esp+3F0h+var_4]
0x7F07B9: pop     edi
0x7F07BA: pop     esi
0x7F07BB: pop     ebp
0x7F07BC: pop     ebx
0x7F07BD: xor     ecx, esp
0x7F07BF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7F07C4: add     esp, 3E0h
0x7F07CA: retn
