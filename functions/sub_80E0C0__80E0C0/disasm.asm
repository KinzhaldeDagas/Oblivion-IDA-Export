0x80E0C0: sub     esp, 3E0h
0x80E0C6: mov     eax, ds:0B30AACh
0x80E0CB: xor     eax, esp
0x80E0CD: mov     [esp+3E0h+var_4], eax
0x80E0D4: push    ebx
0x80E0D5: push    ebp
0x80E0D6: push    esi
0x80E0D7: push    edi
0x80E0D8: xor     ebp, ebp
0x80E0DA: push    3Ch ; '<'
0x80E0DC: lea     eax, [esp+3F4h+var_32C]
0x80E0E3: mov     ebx, ecx
0x80E0E5: push    ebp
0x80E0E6: mov     edi, offset aSpeedtreeFrond; "speedtree\\frond.v.hlsl"
0x80E0EB: push    eax
0x80E0EC: mov     [esp+3FCh+var_3D8], ebx
0x80E0F0: mov     [esp+3FCh+var_33C], edi
0x80E0F7: mov     [esp+3FCh+var_338], ebp
0x80E0FE: mov     [esp+3FCh+var_334], ebp
0x80E105: mov     [esp+3FCh+var_330], ebp
0x80E10C: call    __memset
0x80E111: push    38h ; '8'
0x80E113: lea     ecx, [esp+400h+var_2DC]
0x80E11A: push    ebp
0x80E11B: mov     esi, offset EmptyString
0x80E120: push    ecx
0x80E121: mov     [esp+408h+var_2F0], edi
0x80E128: mov     [esp+408h+var_2EC], offset off_A90D88
0x80E133: mov     [esp+408h+var_2E8], esi
0x80E13A: mov     [esp+408h+var_2E4], ebp
0x80E141: mov     [esp+408h+var_2E0], ebp
0x80E148: call    __memset
0x80E14D: push    38h ; '8'
0x80E14F: lea     edx, [esp+40Ch+var_290]
0x80E156: push    ebp
0x80E157: push    edx
0x80E158: mov     [esp+414h+var_2A4], edi
0x80E15F: mov     [esp+414h+var_2A0], offset aPt; "PT"
0x80E16A: mov     [esp+414h+var_29C], esi
0x80E171: mov     [esp+414h+var_298], ebp
0x80E178: mov     [esp+414h+var_294], ebp
0x80E17F: call    __memset
0x80E184: push    34h ; '4'
0x80E186: lea     eax, [esp+418h+var_240]
0x80E18D: push    ebp
0x80E18E: push    eax
0x80E18F: mov     [esp+420h+var_258], edi
0x80E196: mov     [esp+420h+var_254], offset aPt; "PT"
0x80E1A1: mov     [esp+420h+var_250], esi
0x80E1A8: mov     [esp+420h+var_24C], offset off_A90D88
0x80E1B3: mov     [esp+420h+var_248], esi
0x80E1BA: mov     [esp+420h+var_244], ebp
0x80E1C1: call    __memset
0x80E1C6: push    3Ch ; '<'
0x80E1C8: lea     ecx, [esp+424h+var_3C4]
0x80E1CC: push    ebp
0x80E1CD: mov     edi, offset aSpeedtreeFro_0; "speedtree\\frond.p.hlsl"
0x80E1D2: push    ecx
0x80E1D3: mov     [esp+42Ch+var_3D4], edi
0x80E1D7: mov     [esp+42Ch+var_3D0], ebp
0x80E1DB: mov     [esp+42Ch+var_3CC], ebp
0x80E1DF: mov     [esp+42Ch+var_3C8], ebp
0x80E1E3: call    __memset
0x80E1E8: push    38h ; '8'
0x80E1EA: lea     edx, [esp+430h+var_374]
0x80E1F1: push    ebp
0x80E1F2: push    edx
0x80E1F3: mov     [esp+438h+var_388], edi
0x80E1FA: mov     [esp+438h+var_384], offset off_A90D88
0x80E205: mov     [esp+438h+var_380], esi
0x80E20C: mov     [esp+438h+var_37C], ebp
0x80E213: mov     [esp+438h+var_378], ebp
0x80E21A: call    __memset
0x80E21F: xor     esi, esi
0x80E221: lea     edi, [esp+438h+var_33C]
0x80E228: add     esp, 48h
0x80E22B: mov     [esp+3F0h+var_3DC], esi
0x80E22F: mov     [esp+3F0h+var_3E0], edi
0x80E233: add     ebx, 7Ch ; '|'
0x80E236: mov     eax, [edi]
0x80E238: cmp     eax, ebp
0x80E23A: jz      loc_80E2C2
0x80E240: lea     ecx, [esp+3F0h+FileName]
0x80E247: push    ecx; int
0x80E248: push    eax; FullPath
0x80E249: call    sub_801030
0x80E24E: push    esi
0x80E24F: lea     edx, [esp+3FCh+var_108]
0x80E256: push    offset aStfrond03i_vso; "STFROND%03i.vso"
0x80E25B: push    edx
0x80E25C: call    __sprintf
0x80E261: add     esp, 14h
0x80E264: push    ebp; int
0x80E265: push    ebp; int
0x80E266: lea     eax, [esp+3F8h+var_108]
0x80E26D: push    eax; int
0x80E26E: push    offset aVs_1_1; "vs_1_1"
0x80E273: add     edi, 4
0x80E276: push    edi; int
0x80E277: lea     ecx, [esp+404h+FileName]
0x80E27E: push    ecx; lpFileName
0x80E27F: mov     ecx, [esp+408h+var_3D8]
0x80E283: call    CreateVertexShader
0x80E288: mov     esi, [ebx]
0x80E28A: mov     edi, eax
0x80E28C: cmp     esi, edi
0x80E28E: jz      short loc_80E2E6
0x80E290: cmp     esi, ebp
0x80E292: jz      short loc_80E2B0
0x80E294: lea     edx, [esi+4]
0x80E297: push    edx; lpAddend
0x80E298: call    dword ptr ds:0A2807Ch
0x80E29E: test    eax, eax
0x80E2A0: jnz     short loc_80E2B0
0x80E2A2: cmp     esi, ebp
0x80E2A4: jz      short loc_80E2B0
0x80E2A6: mov     eax, [esi]
0x80E2A8: mov     edx, [eax]
0x80E2AA: push    1
0x80E2AC: mov     ecx, esi
0x80E2AE: call    edx
0x80E2B0: cmp     edi, ebp
0x80E2B2: mov     [ebx], edi
0x80E2B4: jz      short loc_80E2E6
0x80E2B6: add     edi, 4
0x80E2B9: push    edi; lpAddend
0x80E2BA: call    dword ptr ds:0A28078h
0x80E2C0: jmp     short loc_80E2E6
0x80E2C2: mov     esi, [ebx]
0x80E2C4: cmp     esi, ebp
0x80E2C6: jz      short loc_80E2E6
0x80E2C8: lea     eax, [esi+4]
0x80E2CB: push    eax; lpAddend
0x80E2CC: call    dword ptr ds:0A2807Ch
0x80E2D2: test    eax, eax
0x80E2D4: jnz     short loc_80E2E4
0x80E2D6: cmp     esi, ebp
0x80E2D8: jz      short loc_80E2E4
0x80E2DA: mov     edx, [esi]
0x80E2DC: mov     eax, [edx]
0x80E2DE: push    1
0x80E2E0: mov     ecx, esi
0x80E2E2: call    eax
0x80E2E4: mov     [ebx], ebp
0x80E2E6: mov     esi, [esp+3F0h+var_3DC]
0x80E2EA: mov     edi, [esp+3F0h+var_3E0]
0x80E2EE: add     esi, 1
0x80E2F1: add     edi, 4Ch ; 'L'
0x80E2F4: add     ebx, 4
0x80E2F7: cmp     esi, 4
0x80E2FA: mov     [esp+3F0h+var_3DC], esi
0x80E2FE: mov     [esp+3F0h+var_3E0], edi
0x80E302: jl      loc_80E236
0x80E308: mov     ebx, [esp+3F0h+var_3D8]
0x80E30C: xor     esi, esi
0x80E30E: add     ebx, 8Ch ; 'Œ'
0x80E314: cmp     dword ptr ds:0B42F48h, 2
0x80E31B: lea     edi, [esp+3F0h+var_3D4]
0x80E31F: mov     [esp+3F0h+var_3DC], esi
0x80E323: jl      loc_80E407
0x80E329: mov     [esp+3F0h+var_3E0], edi
0x80E32D: lea     ecx, [ecx+0]
0x80E330: mov     eax, [edi]
0x80E332: cmp     eax, ebp
0x80E334: jz      loc_80E3BC
0x80E33A: lea     ecx, [esp+3F0h+FileName]
0x80E341: push    ecx; int
0x80E342: push    eax; FullPath
0x80E343: call    sub_801030
0x80E348: push    esi
0x80E349: lea     edx, [esp+3FCh+var_108]
0x80E350: push    offset aStfrond203i_ps; "STFROND2%03i.pso"
0x80E355: push    edx
0x80E356: call    __sprintf
0x80E35B: add     esp, 14h
0x80E35E: push    ebp; int
0x80E35F: push    ebp; int
0x80E360: lea     eax, [esp+3F8h+var_108]
0x80E367: push    eax; int
0x80E368: push    offset aPs_2_0; "ps_2_0"
0x80E36D: add     edi, 4
0x80E370: push    edi; int
0x80E371: lea     ecx, [esp+404h+FileName]
0x80E378: push    ecx; lpFileName
0x80E379: mov     ecx, [esp+408h+var_3D8]
0x80E37D: call    CreatePixelShader
0x80E382: mov     esi, [ebx]
0x80E384: mov     edi, eax
0x80E386: cmp     esi, edi
0x80E388: jz      short loc_80E3E0
0x80E38A: cmp     esi, ebp
0x80E38C: jz      short loc_80E3AA
0x80E38E: lea     edx, [esi+4]
0x80E391: push    edx; lpAddend
0x80E392: call    dword ptr ds:0A2807Ch
0x80E398: test    eax, eax
0x80E39A: jnz     short loc_80E3AA
0x80E39C: cmp     esi, ebp
0x80E39E: jz      short loc_80E3AA
0x80E3A0: mov     eax, [esi]
0x80E3A2: mov     edx, [eax]
0x80E3A4: push    1
0x80E3A6: mov     ecx, esi
0x80E3A8: call    edx
0x80E3AA: cmp     edi, ebp
0x80E3AC: mov     [ebx], edi
0x80E3AE: jz      short loc_80E3E0
0x80E3B0: add     edi, 4
0x80E3B3: push    edi; lpAddend
0x80E3B4: call    dword ptr ds:0A28078h
0x80E3BA: jmp     short loc_80E3E0
0x80E3BC: mov     esi, [ebx]
0x80E3BE: cmp     esi, ebp
0x80E3C0: jz      short loc_80E3E0
0x80E3C2: lea     eax, [esi+4]
0x80E3C5: push    eax; lpAddend
0x80E3C6: call    dword ptr ds:0A2807Ch
0x80E3CC: test    eax, eax
0x80E3CE: jnz     short loc_80E3DE
0x80E3D0: cmp     esi, ebp
0x80E3D2: jz      short loc_80E3DE
0x80E3D4: mov     edx, [esi]
0x80E3D6: mov     eax, [edx]
0x80E3D8: push    1
0x80E3DA: mov     ecx, esi
0x80E3DC: call    eax
0x80E3DE: mov     [ebx], ebp
0x80E3E0: mov     esi, [esp+3F0h+var_3DC]
0x80E3E4: mov     edi, [esp+3F0h+var_3E0]
0x80E3E8: add     esi, 1
0x80E3EB: add     edi, 4Ch ; 'L'
0x80E3EE: add     ebx, 4
0x80E3F1: cmp     esi, 2
0x80E3F4: mov     [esp+3F0h+var_3DC], esi
0x80E3F8: mov     [esp+3F0h+var_3E0], edi
0x80E3FC: jl      loc_80E330
0x80E402: jmp     loc_80E4E2
0x80E407: mov     [esp+3F0h+var_3E0], edi
0x80E40B: jmp     short loc_80E410
0x80E40D: align 10h
0x80E410: mov     eax, [edi]
0x80E412: cmp     eax, ebp
0x80E414: jz      loc_80E49C
0x80E41A: lea     ecx, [esp+3F0h+FileName]
0x80E421: push    ecx; int
0x80E422: push    eax; FullPath
0x80E423: call    sub_801030
0x80E428: push    esi
0x80E429: lea     edx, [esp+3FCh+var_108]
0x80E430: push    offset aStfrond03i_pso; "STFROND%03i.pso"
0x80E435: push    edx
0x80E436: call    __sprintf
0x80E43B: add     esp, 14h
0x80E43E: push    ebp; int
0x80E43F: push    ebp; int
0x80E440: lea     eax, [esp+3F8h+var_108]
0x80E447: push    eax; int
0x80E448: push    offset aPs_1_3; "ps_1_3"
0x80E44D: add     edi, 4
0x80E450: push    edi; int
0x80E451: lea     ecx, [esp+404h+FileName]
0x80E458: push    ecx; lpFileName
0x80E459: mov     ecx, [esp+408h+var_3D8]
0x80E45D: call    CreatePixelShader
0x80E462: mov     esi, [ebx]
0x80E464: mov     edi, eax
0x80E466: cmp     esi, edi
0x80E468: jz      short loc_80E4C0
0x80E46A: cmp     esi, ebp
0x80E46C: jz      short loc_80E48A
0x80E46E: lea     edx, [esi+4]
0x80E471: push    edx; lpAddend
0x80E472: call    dword ptr ds:0A2807Ch
0x80E478: test    eax, eax
0x80E47A: jnz     short loc_80E48A
0x80E47C: cmp     esi, ebp
0x80E47E: jz      short loc_80E48A
0x80E480: mov     eax, [esi]
0x80E482: mov     edx, [eax]
0x80E484: push    1
0x80E486: mov     ecx, esi
0x80E488: call    edx
0x80E48A: cmp     edi, ebp
0x80E48C: mov     [ebx], edi
0x80E48E: jz      short loc_80E4C0
0x80E490: add     edi, 4
0x80E493: push    edi; lpAddend
0x80E494: call    dword ptr ds:0A28078h
0x80E49A: jmp     short loc_80E4C0
0x80E49C: mov     esi, [ebx]
0x80E49E: cmp     esi, ebp
0x80E4A0: jz      short loc_80E4C0
0x80E4A2: lea     eax, [esi+4]
0x80E4A5: push    eax; lpAddend
0x80E4A6: call    dword ptr ds:0A2807Ch
0x80E4AC: test    eax, eax
0x80E4AE: jnz     short loc_80E4BE
0x80E4B0: cmp     esi, ebp
0x80E4B2: jz      short loc_80E4BE
0x80E4B4: mov     edx, [esi]
0x80E4B6: mov     eax, [edx]
0x80E4B8: push    1
0x80E4BA: mov     ecx, esi
0x80E4BC: call    eax
0x80E4BE: mov     [ebx], ebp
0x80E4C0: mov     esi, [esp+3F0h+var_3DC]
0x80E4C4: mov     edi, [esp+3F0h+var_3E0]
0x80E4C8: add     esi, 1
0x80E4CB: add     edi, 4Ch ; 'L'
0x80E4CE: add     ebx, 4
0x80E4D1: cmp     esi, 2
0x80E4D4: mov     [esp+3F0h+var_3DC], esi
0x80E4D8: mov     [esp+3F0h+var_3E0], edi
0x80E4DC: jl      loc_80E410
0x80E4E2: mov     ecx, [esp+3F0h+var_4]
0x80E4E9: pop     edi
0x80E4EA: pop     esi
0x80E4EB: pop     ebp
0x80E4EC: pop     ebx
0x80E4ED: xor     ecx, esp
0x80E4EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x80E4F4: add     esp, 3E0h
0x80E4FA: retn
