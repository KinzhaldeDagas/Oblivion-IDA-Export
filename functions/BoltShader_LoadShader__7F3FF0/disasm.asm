0x7F3FF0: sub     esp, 2A4h
0x7F3FF6: mov     eax, ds:0B30AACh
0x7F3FFB: xor     eax, esp
0x7F3FFD: mov     [esp+2A4h+var_4], eax
0x7F4004: push    ebx
0x7F4005: push    ebp
0x7F4006: push    esi
0x7F4007: push    edi
0x7F4008: xor     ebp, ebp
0x7F400A: push    3Ch ; '<'
0x7F400C: lea     eax, [esp+2B8h+var_248]
0x7F4010: push    ebp
0x7F4011: push    eax
0x7F4012: mov     esi, ecx
0x7F4014: mov     [esp+2C0h+FullPath], offset aBoltVBolt_v_hl; "bolt\\v\\bolt.v.hlsl"
0x7F401C: mov     [esp+2C0h+var_254], ebp
0x7F4020: mov     [esp+2C0h+var_250], ebp
0x7F4024: mov     [esp+2C0h+var_24C], ebp
0x7F4028: call    __memset
0x7F402D: mov     edx, [esp+2C0h+FullPath]
0x7F4031: lea     ecx, [esp+2C0h+FileName]
0x7F4038: push    ecx; int
0x7F4039: push    edx; FullPath
0x7F403A: call    sub_801030
0x7F403F: lea     eax, [esp+2C8h+var_20C]
0x7F4046: push    offset aBolt_vso; "BOLT.vso"
0x7F404B: push    eax
0x7F404C: call    __sprintf
0x7F4051: add     esp, 1Ch
0x7F4054: push    ebp; int
0x7F4055: push    ebp; int
0x7F4056: lea     ecx, [esp+2BCh+var_20C]
0x7F405D: push    ecx; int
0x7F405E: push    offset aVs_1_1; "vs_1_1"
0x7F4063: lea     edx, [esp+2C4h+var_254]
0x7F4067: push    edx; int
0x7F4068: lea     eax, [esp+2C8h+FileName]
0x7F406F: push    eax; lpFileName
0x7F4070: mov     ecx, esi
0x7F4072: call    CreateVertexShader
0x7F4077: mov     edi, [esi+19Ch]
0x7F407D: mov     ebx, eax
0x7F407F: cmp     edi, ebx
0x7F4081: jz      short loc_7F40B7
0x7F4083: cmp     edi, ebp
0x7F4085: jz      short loc_7F40A3
0x7F4087: lea     ecx, [edi+4]
0x7F408A: push    ecx; lpAddend
0x7F408B: call    dword ptr ds:0A2807Ch
0x7F4091: test    eax, eax
0x7F4093: jnz     short loc_7F40A3
0x7F4095: cmp     edi, ebp
0x7F4097: jz      short loc_7F40A3
0x7F4099: mov     edx, [edi]
0x7F409B: mov     eax, [edx]
0x7F409D: push    1
0x7F409F: mov     ecx, edi
0x7F40A1: call    eax
0x7F40A3: cmp     ebx, ebp
0x7F40A5: mov     [esi+19Ch], ebx
0x7F40AB: jz      short loc_7F40B7
0x7F40AD: add     ebx, 4
0x7F40B0: push    ebx; lpAddend
0x7F40B1: call    dword ptr ds:0A28078h
0x7F40B7: cmp     dword ptr ds:0B42F48h, 2
0x7F40BE: mov     edi, offset aPs_1_3; "ps_1_3"
0x7F40C3: jl      short loc_7F40CA
0x7F40C5: mov     edi, offset aPs_2_0; "ps_2_0"
0x7F40CA: push    3Ch ; '<'
0x7F40CC: lea     ecx, [esp+2B8h+var_294]
0x7F40D0: push    ebp
0x7F40D1: push    ecx
0x7F40D2: mov     [esp+2C0h+var_2A4], offset aBoltPBolt_p_hl; "bolt\\p\\bolt.p.hlsl"
0x7F40DA: mov     [esp+2C0h+var_2A0], ebp
0x7F40DE: mov     [esp+2C0h+var_29C], ebp
0x7F40E2: mov     [esp+2C0h+var_298], ebp
0x7F40E6: call    __memset
0x7F40EB: mov     eax, [esp+2C0h+var_2A4]
0x7F40EF: lea     edx, [esp+2C0h+FileName]
0x7F40F6: push    edx; int
0x7F40F7: push    eax; FullPath
0x7F40F8: call    sub_801030
0x7F40FD: lea     ecx, [esp+2C8h+var_20C]
0x7F4104: push    offset aBolt_pso; "BOLT.pso"
0x7F4109: push    ecx
0x7F410A: call    __sprintf
0x7F410F: add     esp, 1Ch
0x7F4112: push    ebp; int
0x7F4113: push    ebp; int
0x7F4114: lea     edx, [esp+2BCh+var_20C]
0x7F411B: push    edx; int
0x7F411C: push    edi; Str1
0x7F411D: lea     eax, [esp+2C4h+var_2A0]
0x7F4121: push    eax; int
0x7F4122: lea     ecx, [esp+2C8h+FileName]
0x7F4129: push    ecx; lpFileName
0x7F412A: mov     ecx, esi
0x7F412C: call    CreatePixelShader
0x7F4131: mov     edi, [esi+1A0h]
0x7F4137: mov     ebx, eax
0x7F4139: cmp     edi, ebx
0x7F413B: jz      short loc_7F4171
0x7F413D: cmp     edi, ebp
0x7F413F: jz      short loc_7F415D
0x7F4141: lea     edx, [edi+4]
0x7F4144: push    edx; lpAddend
0x7F4145: call    dword ptr ds:0A2807Ch
0x7F414B: test    eax, eax
0x7F414D: jnz     short loc_7F415D
0x7F414F: cmp     edi, ebp
0x7F4151: jz      short loc_7F415D
0x7F4153: mov     eax, [edi]
0x7F4155: mov     edx, [eax]
0x7F4157: push    1
0x7F4159: mov     ecx, edi
0x7F415B: call    edx
0x7F415D: cmp     ebx, ebp
0x7F415F: mov     [esi+1A0h], ebx
0x7F4165: jz      short loc_7F4171
0x7F4167: add     ebx, 4
0x7F416A: push    ebx; lpAddend
0x7F416B: call    dword ptr ds:0A28078h
0x7F4171: mov     ecx, [esp+2B4h+var_4]
0x7F4178: pop     edi
0x7F4179: pop     esi
0x7F417A: pop     ebp
0x7F417B: pop     ebx
0x7F417C: xor     ecx, esp
0x7F417E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7F4183: add     esp, 2A4h
0x7F4189: retn
