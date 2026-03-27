0x7E3590: sub     esp, 2A4h
0x7E3596: mov     eax, ds:0B30AACh
0x7E359B: xor     eax, esp
0x7E359D: mov     [esp+2A4h+var_4], eax
0x7E35A4: push    ebx
0x7E35A5: push    ebp
0x7E35A6: push    esi
0x7E35A7: push    edi
0x7E35A8: xor     ebp, ebp
0x7E35AA: push    3Ch ; '<'
0x7E35AC: lea     eax, [esp+2B8h+var_248]
0x7E35B0: push    ebp
0x7E35B1: push    eax
0x7E35B2: mov     esi, ecx
0x7E35B4: mov     [esp+2C0h+FullPath], offset aParticleVParti; "particle\\v\\particle.v.hlsl"
0x7E35BC: mov     [esp+2C0h+var_254], ebp
0x7E35C0: mov     [esp+2C0h+var_250], ebp
0x7E35C4: mov     [esp+2C0h+var_24C], ebp
0x7E35C8: call    __memset
0x7E35CD: mov     edx, [esp+2C0h+FullPath]
0x7E35D1: lea     ecx, [esp+2C0h+FileName]
0x7E35D8: push    ecx; int
0x7E35D9: push    edx; FullPath
0x7E35DA: call    sub_801030
0x7E35DF: lea     eax, [esp+2C8h+var_20C]
0x7E35E6: push    offset aParticle_vso; "PARTICLE.vso"
0x7E35EB: push    eax
0x7E35EC: call    __sprintf
0x7E35F1: add     esp, 1Ch
0x7E35F4: push    ebp; int
0x7E35F5: push    ebp; int
0x7E35F6: lea     ecx, [esp+2BCh+var_20C]
0x7E35FD: push    ecx; int
0x7E35FE: push    offset aVs_2_0; "vs_2_0"
0x7E3603: lea     edx, [esp+2C4h+var_254]
0x7E3607: push    edx; int
0x7E3608: lea     eax, [esp+2C8h+FileName]
0x7E360F: push    eax; lpFileName
0x7E3610: mov     ecx, esi
0x7E3612: call    CreateVertexShader
0x7E3617: mov     edi, [esi+88h]
0x7E361D: mov     ebx, eax
0x7E361F: cmp     edi, ebx
0x7E3621: jz      short loc_7E3657
0x7E3623: cmp     edi, ebp
0x7E3625: jz      short loc_7E3643
0x7E3627: lea     ecx, [edi+4]
0x7E362A: push    ecx; lpAddend
0x7E362B: call    dword ptr ds:0A2807Ch
0x7E3631: test    eax, eax
0x7E3633: jnz     short loc_7E3643
0x7E3635: cmp     edi, ebp
0x7E3637: jz      short loc_7E3643
0x7E3639: mov     edx, [edi]
0x7E363B: mov     eax, [edx]
0x7E363D: push    1
0x7E363F: mov     ecx, edi
0x7E3641: call    eax
0x7E3643: cmp     ebx, ebp
0x7E3645: mov     [esi+88h], ebx
0x7E364B: jz      short loc_7E3657
0x7E364D: add     ebx, 4
0x7E3650: push    ebx; lpAddend
0x7E3651: call    dword ptr ds:0A28078h
0x7E3657: cmp     dword ptr ds:0B42F48h, 2
0x7E365E: mov     edi, offset aPs_1_3; "ps_1_3"
0x7E3663: jl      short loc_7E366A
0x7E3665: mov     edi, offset aPs_2_0; "ps_2_0"
0x7E366A: push    3Ch ; '<'
0x7E366C: lea     ecx, [esp+2B8h+var_294]
0x7E3670: push    ebp
0x7E3671: push    ecx
0x7E3672: mov     [esp+2C0h+var_2A4], offset aParticlePParti; "particle\\p\\particle.p.hlsl"
0x7E367A: mov     [esp+2C0h+var_2A0], ebp
0x7E367E: mov     [esp+2C0h+var_29C], ebp
0x7E3682: mov     [esp+2C0h+var_298], ebp
0x7E3686: call    __memset
0x7E368B: mov     eax, [esp+2C0h+var_2A4]
0x7E368F: lea     edx, [esp+2C0h+FileName]
0x7E3696: push    edx; int
0x7E3697: push    eax; FullPath
0x7E3698: call    sub_801030
0x7E369D: lea     ecx, [esp+2C8h+var_20C]
0x7E36A4: push    offset aParticle_pso; "PARTICLE.pso"
0x7E36A9: push    ecx
0x7E36AA: call    __sprintf
0x7E36AF: add     esp, 1Ch
0x7E36B2: push    ebp; int
0x7E36B3: push    ebp; int
0x7E36B4: lea     edx, [esp+2BCh+var_20C]
0x7E36BB: push    edx; int
0x7E36BC: push    edi; Str1
0x7E36BD: lea     eax, [esp+2C4h+var_2A0]
0x7E36C1: push    eax; int
0x7E36C2: lea     ecx, [esp+2C8h+FileName]
0x7E36C9: push    ecx; lpFileName
0x7E36CA: mov     ecx, esi
0x7E36CC: call    CreatePixelShader
0x7E36D1: mov     edi, [esi+8Ch]
0x7E36D7: mov     ebx, eax
0x7E36D9: cmp     edi, ebx
0x7E36DB: jz      short loc_7E3711
0x7E36DD: cmp     edi, ebp
0x7E36DF: jz      short loc_7E36FD
0x7E36E1: lea     edx, [edi+4]
0x7E36E4: push    edx; lpAddend
0x7E36E5: call    dword ptr ds:0A2807Ch
0x7E36EB: test    eax, eax
0x7E36ED: jnz     short loc_7E36FD
0x7E36EF: cmp     edi, ebp
0x7E36F1: jz      short loc_7E36FD
0x7E36F3: mov     eax, [edi]
0x7E36F5: mov     edx, [eax]
0x7E36F7: push    1
0x7E36F9: mov     ecx, edi
0x7E36FB: call    edx
0x7E36FD: cmp     ebx, ebp
0x7E36FF: mov     [esi+8Ch], ebx
0x7E3705: jz      short loc_7E3711
0x7E3707: add     ebx, 4
0x7E370A: push    ebx; lpAddend
0x7E370B: call    dword ptr ds:0A28078h
0x7E3711: mov     ecx, [esp+2B4h+var_4]
0x7E3718: pop     edi
0x7E3719: pop     esi
0x7E371A: pop     ebp
0x7E371B: pop     ebx
0x7E371C: xor     ecx, esp
0x7E371E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7E3723: add     esp, 2A4h
0x7E3729: retn
