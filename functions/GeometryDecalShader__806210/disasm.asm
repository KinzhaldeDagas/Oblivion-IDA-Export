0x806210: push    0FFFFFFFFh
0x806212: push    offset SEH_806210
0x806217: mov     eax, large fs:0
0x80621D: push    eax
0x80621E: push    ecx
0x80621F: push    ebx
0x806220: push    ebp
0x806221: push    esi
0x806222: push    edi
0x806223: mov     eax, ds:0B30AACh
0x806228: xor     eax, esp
0x80622A: push    eax
0x80622B: lea     eax, [esp+24h+var_C]
0x80622F: mov     large fs:0, eax
0x806235: push    8; Size
0x806237: call    FormHeapAlloc
0x80623C: add     esp, 4
0x80623F: mov     [esp+24h+var_10], eax
0x806243: test    eax, eax
0x806245: mov     [esp+24h+var_4], 0
0x80624D: jz      short loc_80625A
0x80624F: mov     ecx, eax
0x806251: call    ShaderDefinition__Init
0x806256: mov     edi, eax
0x806258: jmp     short loc_80625C
0x80625A: xor     edi, edi
0x80625C: mov     eax, ds:0B43104h
0x806261: push    1; StreamCount
0x806263: push    2; a2
0x806265: push    eax; a1
0x806266: mov     [esp+30h+var_4], 0FFFFFFFFh
0x80626E: call    CreateDX9ShaderDeclaration
0x806273: mov     ebp, ds:0A2807Ch
0x806279: mov     esi, eax
0x80627B: mov     eax, ds:0B47604h
0x806280: add     esp, 0Ch
0x806283: cmp     eax, esi
0x806285: jz      short loc_8062BF
0x806287: test    eax, eax
0x806289: jz      short loc_8062A5
0x80628B: mov     ebx, eax
0x80628D: add     eax, 4
0x806290: push    eax; lpAddend
0x806291: call    ebp ; InterlockedDecrement
0x806293: test    eax, eax
0x806295: jnz     short loc_8062A5
0x806297: test    ebx, ebx
0x806299: jz      short loc_8062A5
0x80629B: mov     edx, [ebx]
0x80629D: mov     eax, [edx]
0x80629F: push    1
0x8062A1: mov     ecx, ebx
0x8062A3: call    eax
0x8062A5: test    esi, esi
0x8062A7: mov     eax, esi
0x8062A9: mov     ds:0B47604h, eax
0x8062AE: jz      short loc_8062BF
0x8062B0: add     esi, 4
0x8062B3: push    esi; lpAddend
0x8062B4: call    dword ptr ds:0A28078h
0x8062BA: mov     eax, ds:0B47604h
0x8062BF: mov     esi, [edi]
0x8062C1: cmp     esi, eax
0x8062C3: mov     ebx, eax
0x8062C5: jz      short loc_8062F3
0x8062C7: test    esi, esi
0x8062C9: jz      short loc_8062E3
0x8062CB: lea     ecx, [esi+4]
0x8062CE: push    ecx; lpAddend
0x8062CF: call    ebp ; InterlockedDecrement
0x8062D1: test    eax, eax
0x8062D3: jnz     short loc_8062E3
0x8062D5: test    esi, esi
0x8062D7: jz      short loc_8062E3
0x8062D9: mov     edx, [esi]
0x8062DB: mov     eax, [edx]
0x8062DD: push    1
0x8062DF: mov     ecx, esi
0x8062E1: call    eax
0x8062E3: test    ebx, ebx
0x8062E5: mov     [edi], ebx
0x8062E7: jz      short loc_8062F3
0x8062E9: add     ebx, 4
0x8062EC: push    ebx; lpAddend
0x8062ED: call    dword ptr ds:0A28078h
0x8062F3: mov     ecx, ds:0B43104h
0x8062F9: push    1; StreamCount
0x8062FB: push    4; a2
0x8062FD: push    ecx; a1
0x8062FE: call    CreateDX9ShaderDeclaration
0x806303: mov     esi, eax
0x806305: mov     eax, ds:0B47608h
0x80630A: add     esp, 0Ch
0x80630D: cmp     eax, esi
0x80630F: jz      short loc_806343
0x806311: test    eax, eax
0x806313: jz      short loc_80632F
0x806315: mov     ebx, eax
0x806317: add     eax, 4
0x80631A: push    eax; lpAddend
0x80631B: call    ebp ; InterlockedDecrement
0x80631D: test    eax, eax
0x80631F: jnz     short loc_80632F
0x806321: test    ebx, ebx
0x806323: jz      short loc_80632F
0x806325: mov     edx, [ebx]
0x806327: mov     eax, [edx]
0x806329: push    1
0x80632B: mov     ecx, ebx
0x80632D: call    eax
0x80632F: test    esi, esi
0x806331: mov     ds:0B47608h, esi
0x806337: jz      short loc_806343
0x806339: add     esi, 4
0x80633C: push    esi; lpAddend
0x80633D: call    dword ptr ds:0A28078h
0x806343: mov     ecx, [edi]
0x806345: mov     edx, [ecx]
0x806347: mov     eax, [edx+50h]
0x80634A: push    0
0x80634C: push    2
0x80634E: push    0
0x806350: push    0
0x806352: push    0
0x806354: call    eax
0x806356: mov     ecx, [edi]
0x806358: mov     edx, [ecx]
0x80635A: mov     eax, [edx+50h]
0x80635D: push    0
0x80635F: push    2
0x806361: push    3
0x806363: push    3
0x806365: push    1
0x806367: call    eax
0x806369: mov     ecx, ds:0B47608h
0x80636F: mov     edx, [ecx]
0x806371: mov     eax, [edx+50h]
0x806374: push    0
0x806376: push    2
0x806378: push    0
0x80637A: push    0
0x80637C: push    0
0x80637E: call    eax
0x806380: mov     ecx, ds:0B47608h
0x806386: mov     edx, [ecx]
0x806388: mov     eax, [edx+50h]
0x80638B: push    0
0x80638D: push    3
0x80638F: push    1
0x806391: push    1
0x806393: push    1
0x806395: call    eax
0x806397: mov     ecx, ds:0B47608h
0x80639D: mov     edx, [ecx]
0x80639F: mov     eax, [edx+50h]
0x8063A2: push    0
0x8063A4: push    4
0x8063A6: push    2
0x8063A8: push    2
0x8063AA: push    2
0x8063AC: call    eax
0x8063AE: mov     ecx, ds:0B47608h
0x8063B4: mov     edx, [ecx]
0x8063B6: mov     eax, [edx+50h]
0x8063B9: push    0
0x8063BB: push    2
0x8063BD: push    3
0x8063BF: push    3
0x8063C1: push    3
0x8063C3: call    eax
0x8063C5: mov     ecx, [edi]
0x8063C7: test    ecx, ecx
0x8063C9: jz      short loc_8063E4
0x8063CB: mov     edx, [ecx]
0x8063CD: mov     eax, [edx+4]
0x8063D0: call    eax
0x8063D2: test    eax, eax
0x8063D4: jz      short loc_8063E4
0x8063D6: cmp     eax, offset dword_B3F684
0x8063DB: jz      short loc_8063E4
0x8063DD: mov     eax, [eax+4]
0x8063E0: test    eax, eax
0x8063E2: jnz     short loc_8063D6
0x8063E4: push    0A0h ; ' '; Size
0x8063E9: call    FormHeapAlloc
0x8063EE: add     esp, 4
0x8063F1: mov     [esp+24h+var_10], eax
0x8063F5: test    eax, eax
0x8063F7: mov     [esp+24h+var_4], 1
0x8063FF: jz      short loc_80640C
0x806401: mov     ecx, eax; this
0x806403: call    ??0GeometryDecalShader@@QAE@XZ; GeometryDecalShader::GeometryDecalShader(void)
0x806408: mov     esi, eax
0x80640A: jmp     short loc_80640E
0x80640C: xor     esi, esi
0x80640E: mov     edx, [esi]
0x806410: mov     eax, [edx+84h]
0x806416: mov     ecx, esi
0x806418: mov     [esp+24h+var_4], 0FFFFFFFFh
0x806420: call    eax
0x806422: mov     ecx, esi
0x806424: call    sub_805320
0x806429: mov     ecx, esi
0x80642B: call    sub_805670
0x806430: mov     edx, [esi]
0x806432: mov     eax, [edx+88h]
0x806438: mov     ecx, esi
0x80643A: call    eax
0x80643C: mov     edx, [esi]
0x80643E: mov     eax, [edi]
0x806440: mov     edx, [edx+54h]
0x806443: push    eax
0x806444: mov     ecx, esi
0x806446: call    edx
0x806448: mov     ebx, [edi+4]
0x80644B: cmp     ebx, esi
0x80644D: jz      short loc_806478
0x80644F: test    ebx, ebx
0x806451: jz      short loc_80646B
0x806453: lea     eax, [ebx+4]
0x806456: push    eax; lpAddend
0x806457: call    ebp ; InterlockedDecrement
0x806459: test    eax, eax
0x80645B: jnz     short loc_80646B
0x80645D: test    ebx, ebx
0x80645F: jz      short loc_80646B
0x806461: mov     edx, [ebx]
0x806463: mov     eax, [edx]
0x806465: push    1
0x806467: mov     ecx, ebx
0x806469: call    eax
0x80646B: mov     [edi+4], esi
0x80646E: add     esi, 4
0x806471: push    esi; lpAddend
0x806472: call    dword ptr ds:0A28078h
0x806478: mov     eax, edi
0x80647A: mov     ecx, dword ptr [esp+24h+var_C]
0x80647E: mov     large fs:0, ecx
0x806485: pop     ecx
0x806486: pop     edi
0x806487: pop     esi
0x806488: pop     ebp
0x806489: pop     ebx
0x80648A: add     esp, 10h
0x80648D: retn
