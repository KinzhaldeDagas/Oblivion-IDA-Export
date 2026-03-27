0x7EBC80: sub     esp, 3DCh
0x7EBC86: mov     eax, ds:0B30AACh
0x7EBC8B: xor     eax, esp
0x7EBC8D: mov     [esp+3DCh+var_4], eax
0x7EBC94: push    ebx
0x7EBC95: push    ebp
0x7EBC96: push    esi
0x7EBC97: push    edi
0x7EBC98: xor     ebp, ebp
0x7EBC9A: push    44h ; 'D'
0x7EBC9C: lea     eax, [esp+3F0h+var_3CC]
0x7EBCA0: mov     edi, ecx
0x7EBCA2: push    ebp
0x7EBCA3: mov     esi, offset aImagespace1xVB; "imagespace\\1x\\v\\base.v.hlsl"
0x7EBCA8: push    eax
0x7EBCA9: mov     [esp+3F8h+var_3D8], edi
0x7EBCAD: mov     [esp+3F8h+FullPath], esi
0x7EBCB1: mov     [esp+3F8h+var_3D0], ebp
0x7EBCB5: call    __memset
0x7EBCBA: push    44h ; 'D'
0x7EBCBC: lea     ecx, [esp+3FCh+var_380]
0x7EBCC0: push    ebp
0x7EBCC1: push    ecx
0x7EBCC2: mov     [esp+404h+var_388], esi
0x7EBCC6: mov     [esp+404h+var_384], ebp
0x7EBCCD: call    __memset
0x7EBCD2: push    3Ch ; '<'
0x7EBCD4: lea     edx, [esp+408h+var_32C]
0x7EBCDB: push    ebp
0x7EBCDC: push    edx
0x7EBCDD: mov     [esp+410h+var_33C], esi
0x7EBCE4: mov     [esp+410h+var_338], offset aTex2; "TEX2"
0x7EBCEF: mov     [esp+410h+var_334], offset EmptyString
0x7EBCFA: mov     [esp+410h+var_330], ebp
0x7EBD01: call    __memset
0x7EBD06: push    44h ; 'D'
0x7EBD08: lea     eax, [esp+414h+var_2E8]
0x7EBD0F: push    ebp
0x7EBD10: push    eax
0x7EBD11: mov     [esp+41Ch+var_2F0], offset aImagespace1xPC; "imagespace\\1x\\p\\copy.p.hlsl"
0x7EBD1C: mov     [esp+41Ch+var_2EC], ebp
0x7EBD23: call    __memset
0x7EBD28: push    44h ; 'D'
0x7EBD2A: lea     ecx, [esp+420h+var_29C]
0x7EBD31: push    ebp
0x7EBD32: push    ecx
0x7EBD33: mov     [esp+428h+var_2A4], offset aImagespace2xPB; "imagespace\\2x\\p\\blur_20.p.hlsl"
0x7EBD3E: mov     [esp+428h+var_2A0], ebp
0x7EBD45: call    __memset
0x7EBD4A: push    44h ; 'D'
0x7EBD4C: lea     edx, [esp+42Ch+var_250]
0x7EBD53: push    ebp
0x7EBD54: push    edx
0x7EBD55: mov     [esp+434h+var_258], offset aImagespace2xPD; "imagespace\\2x\\p\\doublevis_P20.p.hlsl"
0x7EBD60: mov     [esp+434h+var_254], ebp
0x7EBD67: call    __memset
0x7EBD6C: add     esp, 48h
0x7EBD6F: mov     [esp+3ECh+var_3DC], ebp
0x7EBD73: lea     ebx, [edi+0A0h]
0x7EBD79: jmp     short loc_7EBD84
0x7EBD7B: jmp     short loc_7EBD80
0x7EBD7D: align 10h
0x7EBD80: mov     edi, [esp+3ECh+var_3D8]
0x7EBD84: mov     eax, [esp+ebp+3ECh+FullPath]
0x7EBD88: test    eax, eax
0x7EBD8A: jz      loc_7EBE17
0x7EBD90: lea     ecx, [esp+3ECh+FileName]
0x7EBD97: push    ecx; int
0x7EBD98: push    eax; FullPath
0x7EBD99: call    sub_801030
0x7EBD9E: mov     edx, [esp+3F4h+var_3DC]
0x7EBDA2: push    edx
0x7EBDA3: lea     eax, [esp+3F8h+var_20C]
0x7EBDAA: push    offset aIshit203i_vso; "ISHIT2%03i.vso"
0x7EBDAF: push    eax
0x7EBDB0: call    __sprintf
0x7EBDB5: add     esp, 14h
0x7EBDB8: push    0; int
0x7EBDBA: push    0; int
0x7EBDBC: lea     ecx, [esp+3F4h+var_20C]
0x7EBDC3: push    ecx; int
0x7EBDC4: push    offset aVs_1_1; "vs_1_1"
0x7EBDC9: lea     edx, [esp+ebp+3FCh+var_3D0]
0x7EBDCD: push    edx; int
0x7EBDCE: lea     eax, [esp+400h+FileName]
0x7EBDD5: push    eax; lpFileName
0x7EBDD6: mov     ecx, edi
0x7EBDD8: call    CreateVertexShader
0x7EBDDD: mov     esi, [ebx-0Ch]
0x7EBDE0: mov     edi, eax
0x7EBDE2: cmp     esi, edi
0x7EBDE4: jz      short loc_7EBE17
0x7EBDE6: test    esi, esi
0x7EBDE8: jz      short loc_7EBE06
0x7EBDEA: lea     ecx, [esi+4]
0x7EBDED: push    ecx; lpAddend
0x7EBDEE: call    dword ptr ds:0A2807Ch
0x7EBDF4: test    eax, eax
0x7EBDF6: jnz     short loc_7EBE06
0x7EBDF8: test    esi, esi
0x7EBDFA: jz      short loc_7EBE06
0x7EBDFC: mov     edx, [esi]
0x7EBDFE: mov     eax, [edx]
0x7EBE00: push    1
0x7EBE02: mov     ecx, esi
0x7EBE04: call    eax
0x7EBE06: test    edi, edi
0x7EBE08: mov     [ebx-0Ch], edi
0x7EBE0B: jz      short loc_7EBE17
0x7EBE0D: add     edi, 4
0x7EBE10: push    edi; lpAddend
0x7EBE11: call    dword ptr ds:0A28078h
0x7EBE17: mov     eax, [esp+ebp+3ECh+var_2F0]
0x7EBE1E: test    eax, eax
0x7EBE20: jz      loc_7EBEB0
0x7EBE26: lea     ecx, [esp+3ECh+FileName]
0x7EBE2D: push    ecx; int
0x7EBE2E: push    eax; FullPath
0x7EBE2F: call    sub_801030
0x7EBE34: mov     edx, [esp+3F4h+var_3DC]
0x7EBE38: push    edx
0x7EBE39: lea     eax, [esp+3F8h+var_20C]
0x7EBE40: push    offset aIshit203i_pso; "ISHIT2%03i.pso"
0x7EBE45: push    eax
0x7EBE46: call    __sprintf
0x7EBE4B: add     esp, 14h
0x7EBE4E: push    0; int
0x7EBE50: push    0; int
0x7EBE52: lea     ecx, [esp+3F4h+var_20C]
0x7EBE59: push    ecx; int
0x7EBE5A: mov     ecx, [esp+3F8h+var_3D8]
0x7EBE5E: push    offset aPs_2_0; "ps_2_0"
0x7EBE63: lea     edx, [esp+ebp+3FCh+var_2EC]
0x7EBE6A: push    edx; int
0x7EBE6B: lea     eax, [esp+400h+FileName]
0x7EBE72: push    eax; lpFileName
0x7EBE73: call    CreatePixelShader
0x7EBE78: mov     esi, [ebx]
0x7EBE7A: mov     edi, eax
0x7EBE7C: cmp     esi, edi
0x7EBE7E: jz      short loc_7EBEB0
0x7EBE80: test    esi, esi
0x7EBE82: jz      short loc_7EBEA0
0x7EBE84: lea     ecx, [esi+4]
0x7EBE87: push    ecx; lpAddend
0x7EBE88: call    dword ptr ds:0A2807Ch
0x7EBE8E: test    eax, eax
0x7EBE90: jnz     short loc_7EBEA0
0x7EBE92: test    esi, esi
0x7EBE94: jz      short loc_7EBEA0
0x7EBE96: mov     edx, [esi]
0x7EBE98: mov     eax, [edx]
0x7EBE9A: push    1
0x7EBE9C: mov     ecx, esi
0x7EBE9E: call    eax
0x7EBEA0: test    edi, edi
0x7EBEA2: mov     [ebx], edi
0x7EBEA4: jz      short loc_7EBEB0
0x7EBEA6: add     edi, 4
0x7EBEA9: push    edi; lpAddend
0x7EBEAA: call    dword ptr ds:0A28078h
0x7EBEB0: add     [esp+3ECh+var_3DC], 1
0x7EBEB5: add     ebp, 4Ch ; 'L'
0x7EBEB8: add     ebx, 4
0x7EBEBB: cmp     ebp, 0E4h ; 'ä'
0x7EBEC1: jl      loc_7EBD80
0x7EBEC7: mov     ecx, [esp+3ECh+var_4]
0x7EBECE: pop     edi
0x7EBECF: pop     esi
0x7EBED0: pop     ebp
0x7EBED1: pop     ebx
0x7EBED2: xor     ecx, esp
0x7EBED4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7EBED9: add     esp, 3DCh
0x7EBEDF: retn
