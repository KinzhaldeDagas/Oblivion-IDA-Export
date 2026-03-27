0x800750: sub     esp, 2A4h
0x800756: mov     eax, ds:0B30AACh
0x80075B: xor     eax, esp
0x80075D: mov     [esp+2A4h+var_4], eax
0x800764: push    ebx
0x800765: push    ebp
0x800766: push    esi
0x800767: push    edi
0x800768: xor     ebp, ebp
0x80076A: push    38h ; '8'
0x80076C: lea     eax, [esp+2B8h+var_290]
0x800770: push    ebp
0x800771: push    eax
0x800772: mov     esi, ecx
0x800774: mov     [esp+2C0h+FullPath], offset aImagespace1xVB; "imagespace\\1x\\v\\base.v.hlsl"
0x80077C: mov     [esp+2C0h+var_2A0], offset aTex2; "TEX2"
0x800784: mov     [esp+2C0h+var_29C], offset EmptyString
0x80078C: mov     [esp+2C0h+var_298], ebp
0x800790: mov     [esp+2C0h+var_294], ebp
0x800794: call    __memset
0x800799: push    3Ch ; '<'
0x80079B: lea     ecx, [esp+2C4h+var_248]
0x80079F: push    ebp
0x8007A0: push    ecx
0x8007A1: mov     [esp+2CCh+var_258], offset aImagespace2xPR; "imagespace\\2x\\p\\refraction_P20.p.hls"...
0x8007A9: mov     [esp+2CCh+var_254], ebp
0x8007AD: mov     [esp+2CCh+var_250], ebp
0x8007B1: mov     [esp+2CCh+var_24C], ebp
0x8007B8: call    __memset
0x8007BD: mov     eax, [esp+2CCh+FullPath]
0x8007C1: add     esp, 18h
0x8007C4: cmp     eax, ebp
0x8007C6: jz      loc_800853
0x8007CC: lea     edx, [esp+2B4h+FileName]
0x8007D3: push    edx; int
0x8007D4: push    eax; FullPath
0x8007D5: call    sub_801030
0x8007DA: push    ebp
0x8007DB: lea     eax, [esp+2C0h+var_20C]
0x8007E2: push    offset aRefract203i_vs; "REFRACT2%03i.vso"
0x8007E7: push    eax
0x8007E8: call    __sprintf
0x8007ED: add     esp, 14h
0x8007F0: push    ebp; int
0x8007F1: push    ebp; int
0x8007F2: lea     ecx, [esp+2BCh+var_20C]
0x8007F9: push    ecx; int
0x8007FA: push    offset aVs_1_1; "vs_1_1"
0x8007FF: lea     edx, [esp+2C4h+var_2A0]
0x800803: push    edx; int
0x800804: lea     eax, [esp+2C8h+FileName]
0x80080B: push    eax; lpFileName
0x80080C: mov     ecx, esi
0x80080E: call    CreateVertexShader
0x800813: mov     edi, [esi+90h]
0x800819: mov     ebx, eax
0x80081B: cmp     edi, ebx
0x80081D: jz      short loc_800853
0x80081F: cmp     edi, ebp
0x800821: jz      short loc_80083F
0x800823: lea     ecx, [edi+4]
0x800826: push    ecx; lpAddend
0x800827: call    dword ptr ds:0A2807Ch
0x80082D: test    eax, eax
0x80082F: jnz     short loc_80083F
0x800831: cmp     edi, ebp
0x800833: jz      short loc_80083F
0x800835: mov     edx, [edi]
0x800837: mov     eax, [edx]
0x800839: push    1
0x80083B: mov     ecx, edi
0x80083D: call    eax
0x80083F: cmp     ebx, ebp
0x800841: mov     [esi+90h], ebx
0x800847: jz      short loc_800853
0x800849: add     ebx, 4
0x80084C: push    ebx; lpAddend
0x80084D: call    dword ptr ds:0A28078h
0x800853: mov     eax, [esp+2B4h+var_258]
0x800857: cmp     eax, ebp
0x800859: jz      loc_8008E6
0x80085F: lea     ecx, [esp+2B4h+FileName]
0x800866: push    ecx; int
0x800867: push    eax; FullPath
0x800868: call    sub_801030
0x80086D: push    ebp
0x80086E: lea     edx, [esp+2C0h+var_20C]
0x800875: push    offset aRefract203i_ps; "REFRACT2%03i.pso"
0x80087A: push    edx
0x80087B: call    __sprintf
0x800880: add     esp, 14h
0x800883: push    ebp; int
0x800884: push    ebp; int
0x800885: lea     eax, [esp+2BCh+var_20C]
0x80088C: push    eax; int
0x80088D: push    offset aPs_2_0; "ps_2_0"
0x800892: lea     ecx, [esp+2C4h+var_254]
0x800896: push    ecx; int
0x800897: lea     edx, [esp+2C8h+FileName]
0x80089E: push    edx; lpFileName
0x80089F: mov     ecx, esi
0x8008A1: call    CreatePixelShader
0x8008A6: mov     edi, [esi+94h]
0x8008AC: mov     ebx, eax
0x8008AE: cmp     edi, ebx
0x8008B0: jz      short loc_8008E6
0x8008B2: cmp     edi, ebp
0x8008B4: jz      short loc_8008D2
0x8008B6: lea     eax, [edi+4]
0x8008B9: push    eax; lpAddend
0x8008BA: call    dword ptr ds:0A2807Ch
0x8008C0: test    eax, eax
0x8008C2: jnz     short loc_8008D2
0x8008C4: cmp     edi, ebp
0x8008C6: jz      short loc_8008D2
0x8008C8: mov     edx, [edi]
0x8008CA: mov     eax, [edx]
0x8008CC: push    1
0x8008CE: mov     ecx, edi
0x8008D0: call    eax
0x8008D2: cmp     ebx, ebp
0x8008D4: mov     [esi+94h], ebx
0x8008DA: jz      short loc_8008E6
0x8008DC: add     ebx, 4
0x8008DF: push    ebx; lpAddend
0x8008E0: call    dword ptr ds:0A28078h
0x8008E6: mov     ecx, [esp+2B4h+var_4]
0x8008ED: pop     edi
0x8008EE: pop     esi
0x8008EF: pop     ebp
0x8008F0: pop     ebx
0x8008F1: xor     ecx, esp
0x8008F3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8008F8: add     esp, 2A4h
0x8008FE: retn
