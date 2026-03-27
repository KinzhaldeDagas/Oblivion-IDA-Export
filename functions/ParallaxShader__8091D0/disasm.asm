0x8091D0: push    0FFFFFFFFh
0x8091D2: push    offset SEH_8122A0
0x8091D7: mov     eax, large fs:0
0x8091DD: push    eax
0x8091DE: push    ecx
0x8091DF: push    ebx
0x8091E0: push    esi
0x8091E1: push    edi
0x8091E2: mov     eax, ds:0B30AACh
0x8091E7: xor     eax, esp
0x8091E9: push    eax
0x8091EA: lea     eax, [esp+20h+var_C]
0x8091EE: mov     large fs:0, eax
0x8091F4: push    8; Size
0x8091F6: call    FormHeapAlloc
0x8091FB: add     esp, 4
0x8091FE: mov     [esp+20h+var_10], eax
0x809202: xor     edi, edi
0x809204: cmp     eax, edi
0x809206: mov     [esp+20h+var_4], edi
0x80920A: jz      short loc_809215
0x80920C: mov     ecx, eax
0x80920E: call    ShaderDefinition__Init
0x809213: mov     edi, eax
0x809215: mov     eax, ds:0B43104h
0x80921A: push    1; StreamCount
0x80921C: push    6; a2
0x80921E: push    eax; a1
0x80921F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x809227: call    CreateDX9ShaderDeclaration
0x80922C: mov     esi, [edi]
0x80922E: mov     ebx, eax
0x809230: add     esp, 0Ch
0x809233: cmp     esi, ebx
0x809235: jz      short loc_809267
0x809237: test    esi, esi
0x809239: jz      short loc_809257
0x80923B: lea     ecx, [esi+4]
0x80923E: push    ecx; lpAddend
0x80923F: call    dword ptr ds:0A2807Ch
0x809245: test    eax, eax
0x809247: jnz     short loc_809257
0x809249: test    esi, esi
0x80924B: jz      short loc_809257
0x80924D: mov     edx, [esi]
0x80924F: mov     eax, [edx]
0x809251: push    1
0x809253: mov     ecx, esi
0x809255: call    eax
0x809257: test    ebx, ebx
0x809259: mov     [edi], ebx
0x80925B: jz      short loc_809267
0x80925D: add     ebx, 4
0x809260: push    ebx; lpAddend
0x809261: call    dword ptr ds:0A28078h
0x809267: mov     ecx, ds:0B43104h
0x80926D: push    1; StreamCount
0x80926F: push    8; a2
0x809271: push    ecx; a1
0x809272: call    CreateDX9ShaderDeclaration
0x809277: mov     ecx, [edi]
0x809279: mov     edx, [ecx]
0x80927B: add     esp, 0Ch
0x80927E: push    0
0x809280: push    2
0x809282: push    0
0x809284: push    0
0x809286: mov     esi, eax
0x809288: mov     eax, [edx+50h]
0x80928B: push    0
0x80928D: call    eax
0x80928F: mov     ecx, [edi]
0x809291: mov     edx, [ecx]
0x809293: mov     eax, [edx+50h]
0x809296: push    0
0x809298: push    2
0x80929A: push    3
0x80929C: push    3
0x80929E: push    1
0x8092A0: call    eax
0x8092A2: mov     ecx, [edi]
0x8092A4: mov     edx, [ecx]
0x8092A6: mov     eax, [edx+50h]
0x8092A9: push    0
0x8092AB: push    3
0x8092AD: push    4
0x8092AF: push    5
0x8092B1: push    2
0x8092B3: call    eax
0x8092B5: mov     ecx, [edi]
0x8092B7: mov     edx, [ecx]
0x8092B9: mov     eax, [edx+50h]
0x8092BC: push    0
0x8092BE: push    1
0x8092C0: push    5
0x8092C2: push    7
0x8092C4: push    3
0x8092C6: call    eax
0x8092C8: mov     ecx, [edi]
0x8092CA: mov     edx, [ecx]
0x8092CC: mov     eax, [edx+4Ch]
0x8092CF: push    0
0x8092D1: push    0
0x8092D3: push    6
0x8092D5: push    2
0x8092D7: push    80000000h
0x8092DC: push    0Eh
0x8092DE: push    4
0x8092E0: push    0
0x8092E2: call    eax
0x8092E4: mov     ecx, [edi]
0x8092E6: mov     edx, [ecx]
0x8092E8: mov     eax, [edx+4Ch]
0x8092EB: push    0
0x8092ED: push    0
0x8092EF: push    7
0x8092F1: push    2
0x8092F3: push    80000001h
0x8092F8: push    0Fh
0x8092FA: push    5
0x8092FC: push    0
0x8092FE: call    eax
0x809300: mov     edx, [esi]
0x809302: mov     eax, [edx+50h]
0x809305: push    0
0x809307: push    2
0x809309: push    0
0x80930B: push    0
0x80930D: push    0
0x80930F: mov     ecx, esi
0x809311: call    eax
0x809313: mov     edx, [esi]
0x809315: push    0
0x809317: push    3
0x809319: push    1
0x80931B: push    1
0x80931D: mov     eax, [edx+50h]
0x809320: push    1
0x809322: mov     ecx, esi
0x809324: call    eax
0x809326: mov     edx, [esi]
0x809328: mov     eax, [edx+50h]
0x80932B: push    0
0x80932D: push    4
0x80932F: push    2
0x809331: push    2
0x809333: push    2
0x809335: mov     ecx, esi
0x809337: call    eax
0x809339: mov     edx, [esi]
0x80933B: mov     eax, [edx+50h]
0x80933E: push    0
0x809340: push    2
0x809342: push    3
0x809344: push    3
0x809346: push    3
0x809348: mov     ecx, esi
0x80934A: call    eax
0x80934C: mov     edx, [esi]
0x80934E: mov     eax, [edx+50h]
0x809351: push    0
0x809353: push    3
0x809355: push    4
0x809357: push    5
0x809359: push    4
0x80935B: mov     ecx, esi
0x80935D: call    eax
0x80935F: mov     edx, [esi]
0x809361: mov     eax, [edx+50h]
0x809364: push    0
0x809366: push    1
0x809368: push    5
0x80936A: push    7
0x80936C: push    5
0x80936E: mov     ecx, esi
0x809370: call    eax
0x809372: mov     edx, [esi]
0x809374: mov     eax, [edx+4Ch]
0x809377: push    0
0x809379: push    0
0x80937B: push    6
0x80937D: push    2
0x80937F: push    80000000h
0x809384: push    0Eh
0x809386: push    6
0x809388: push    0
0x80938A: mov     ecx, esi
0x80938C: call    eax
0x80938E: mov     edx, [esi]
0x809390: mov     eax, [edx+4Ch]
0x809393: push    0
0x809395: push    0
0x809397: push    7
0x809399: push    2
0x80939B: push    80000001h
0x8093A0: push    0Fh
0x8093A2: push    7
0x8093A4: push    0
0x8093A6: mov     ecx, esi
0x8093A8: call    eax
0x8093AA: mov     ebx, [edi]
0x8093AC: test    ebx, ebx
0x8093AE: jz      short loc_8093D8
0x8093B0: mov     edx, [ebx]
0x8093B2: mov     eax, [edx+4]
0x8093B5: mov     ecx, ebx
0x8093B7: call    eax
0x8093B9: test    eax, eax
0x8093BB: jz      short loc_8093CE
0x8093BD: lea     ecx, [ecx+0]
0x8093C0: cmp     eax, offset dword_B3F684
0x8093C5: jz      short loc_809427
0x8093C7: mov     eax, [eax+4]
0x8093CA: test    eax, eax
0x8093CC: jnz     short loc_8093C0
0x8093CE: xor     al, al
0x8093D0: neg     al
0x8093D2: sbb     eax, eax
0x8093D4: and     eax, ebx
0x8093D6: mov     ebx, eax
0x8093D8: mov     edx, [esi]
0x8093DA: mov     eax, [edx+4]
0x8093DD: mov     ecx, esi
0x8093DF: call    eax
0x8093E1: test    eax, eax
0x8093E3: jz      short loc_8093F3
0x8093E5: cmp     eax, offset dword_B3F684
0x8093EA: jz      short loc_80942B
0x8093EC: mov     eax, [eax+4]
0x8093EF: test    eax, eax
0x8093F1: jnz     short loc_8093E5
0x8093F3: xor     al, al
0x8093F5: neg     al
0x8093F7: push    1A4h; Size
0x8093FC: sbb     eax, eax
0x8093FE: and     eax, esi
0x809400: mov     esi, eax
0x809402: call    FormHeapAlloc
0x809407: add     esp, 4
0x80940A: mov     [esp+20h+var_10], eax
0x80940E: test    eax, eax
0x809410: mov     [esp+20h+var_4], 1
0x809418: jz      short loc_80942F
0x80941A: push    esi
0x80941B: push    ebx
0x80941C: mov     ecx, eax; this
0x80941E: call    ??0ParallaxShader@@QAE@XZ; ParallaxShader::ParallaxShader(void)
0x809423: mov     esi, eax
0x809425: jmp     short loc_809431
0x809427: mov     al, 1
0x809429: jmp     short loc_8093D0
0x80942B: mov     al, 1
0x80942D: jmp     short loc_8093F5
0x80942F: xor     esi, esi
0x809431: mov     edx, [esi]
0x809433: mov     eax, [edx+84h]
0x809439: mov     ecx, esi
0x80943B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x809443: call    eax
0x809445: mov     edx, [esi]
0x809447: mov     eax, [edx+0A8h]
0x80944D: mov     ecx, esi
0x80944F: call    eax
0x809451: mov     edx, [esi]
0x809453: mov     eax, [edx+0B4h]
0x809459: mov     ecx, esi
0x80945B: call    eax
0x80945D: mov     edx, [esi]
0x80945F: mov     eax, [edx+0B8h]
0x809465: mov     ecx, esi
0x809467: call    eax
0x809469: mov     edx, [esi]
0x80946B: mov     eax, [edx+88h]
0x809471: mov     ecx, esi
0x809473: call    eax
0x809475: mov     ebx, [edi+4]
0x809478: cmp     ebx, esi
0x80947A: jz      short loc_8094A9
0x80947C: test    ebx, ebx
0x80947E: jz      short loc_80949C
0x809480: lea     ecx, [ebx+4]
0x809483: push    ecx; lpAddend
0x809484: call    dword ptr ds:0A2807Ch
0x80948A: test    eax, eax
0x80948C: jnz     short loc_80949C
0x80948E: test    ebx, ebx
0x809490: jz      short loc_80949C
0x809492: mov     edx, [ebx]
0x809494: mov     eax, [edx]
0x809496: push    1
0x809498: mov     ecx, ebx
0x80949A: call    eax
0x80949C: mov     [edi+4], esi
0x80949F: add     esi, 4
0x8094A2: push    esi; lpAddend
0x8094A3: call    dword ptr ds:0A28078h
0x8094A9: mov     ecx, [edi+4]
0x8094AC: mov     edx, [ecx]
0x8094AE: mov     eax, [edi]
0x8094B0: mov     edx, [edx+54h]
0x8094B3: push    eax
0x8094B4: call    edx
0x8094B6: mov     eax, edi
0x8094B8: mov     ecx, dword ptr [esp+20h+var_C]
0x8094BC: mov     large fs:0, ecx
0x8094C3: pop     ecx
0x8094C4: pop     edi
0x8094C5: pop     esi
0x8094C6: pop     ebx
0x8094C7: add     esp, 10h
0x8094CA: retn
