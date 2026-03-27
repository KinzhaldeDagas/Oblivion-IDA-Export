0x7EF1C0: sub     esp, 2A8h
0x7EF1C6: mov     eax, ds:0B30AACh
0x7EF1CB: xor     eax, esp
0x7EF1CD: mov     [esp+2A8h+var_4], eax
0x7EF1D4: push    ebx
0x7EF1D5: push    ebp
0x7EF1D6: push    esi
0x7EF1D7: push    edi
0x7EF1D8: xor     edi, edi
0x7EF1DA: push    44h ; 'D'
0x7EF1DC: lea     eax, [esp+2BCh+var_29C]
0x7EF1E0: push    edi
0x7EF1E1: mov     esi, offset aPrecipitatio_0; "precipitation\\precipitation.p.hlsl"
0x7EF1E6: push    eax
0x7EF1E7: mov     [esp+2C4h+var_2A8], ecx
0x7EF1EB: mov     [esp+2C4h+var_2A4], esi
0x7EF1EF: mov     [esp+2C4h+var_2A0], edi
0x7EF1F3: call    __memset
0x7EF1F8: push    3Ch ; '<'
0x7EF1FA: lea     ecx, [esp+2C8h+var_248]
0x7EF201: push    edi
0x7EF202: push    ecx
0x7EF203: mov     [esp+2D0h+var_258], esi
0x7EF207: mov     [esp+2D0h+var_254], offset aSnow; "SNOW"
0x7EF20F: mov     [esp+2D0h+var_250], edi
0x7EF216: mov     [esp+2D0h+var_24C], edi
0x7EF21D: call    __memset
0x7EF222: add     esp, 18h
0x7EF225: lea     ebp, [esp+2B8h+var_2A0]
0x7EF229: lea     esp, [esp+0]
0x7EF230: mov     eax, [ebp-4]
0x7EF233: lea     edx, [esp+2B8h+FileName]
0x7EF23A: push    edx; int
0x7EF23B: push    eax; FullPath
0x7EF23C: call    sub_801030
0x7EF241: push    edi
0x7EF242: lea     ecx, [esp+2C4h+var_20C]
0x7EF249: push    offset aPrecip03i_pso; "PRECIP%03i.pso"
0x7EF24E: push    ecx
0x7EF24F: call    __sprintf
0x7EF254: add     esp, 14h
0x7EF257: push    0; int
0x7EF259: push    0; int
0x7EF25B: lea     edx, [esp+2C0h+var_20C]
0x7EF262: push    edx; int
0x7EF263: push    0
0x7EF265: call    sub_7B4780
0x7EF26A: mov     ecx, [esp+2C8h+var_2A8]
0x7EF26E: add     esp, 4
0x7EF271: push    eax; Str1
0x7EF272: push    ebp; int
0x7EF273: lea     eax, [esp+2CCh+FileName]
0x7EF27A: push    eax; lpFileName
0x7EF27B: call    CreatePixelShader
0x7EF280: mov     esi, ds:0B46708h[edi*4]
0x7EF287: mov     ebx, eax
0x7EF289: cmp     esi, ebx
0x7EF28B: jz      short loc_7EF2C2
0x7EF28D: test    esi, esi
0x7EF28F: jz      short loc_7EF2AD
0x7EF291: lea     ecx, [esi+4]
0x7EF294: push    ecx; lpAddend
0x7EF295: call    dword ptr ds:0A2807Ch
0x7EF29B: test    eax, eax
0x7EF29D: jnz     short loc_7EF2AD
0x7EF29F: test    esi, esi
0x7EF2A1: jz      short loc_7EF2AD
0x7EF2A3: mov     edx, [esi]
0x7EF2A5: mov     eax, [edx]
0x7EF2A7: push    1
0x7EF2A9: mov     ecx, esi
0x7EF2AB: call    eax
0x7EF2AD: test    ebx, ebx
0x7EF2AF: mov     ds:0B46708h[edi*4], ebx
0x7EF2B6: jz      short loc_7EF2C2
0x7EF2B8: add     ebx, 4
0x7EF2BB: push    ebx; lpAddend
0x7EF2BC: call    dword ptr ds:0A28078h
0x7EF2C2: add     edi, 1
0x7EF2C5: add     ebp, 4Ch ; 'L'
0x7EF2C8: cmp     edi, 2
0x7EF2CB: jl      loc_7EF230
0x7EF2D1: mov     ecx, [esp+2B8h+var_4]
0x7EF2D8: pop     edi
0x7EF2D9: pop     esi
0x7EF2DA: pop     ebp
0x7EF2DB: pop     ebx
0x7EF2DC: xor     ecx, esp
0x7EF2DE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7EF2E3: add     esp, 2A8h
0x7EF2E9: retn
