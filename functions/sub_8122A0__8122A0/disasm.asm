0x8122A0: push    0FFFFFFFFh
0x8122A2: push    offset SEH_8122A0
0x8122A7: mov     eax, large fs:0
0x8122AD: push    eax
0x8122AE: push    ecx
0x8122AF: push    ebx
0x8122B0: push    esi
0x8122B1: push    edi
0x8122B2: mov     eax, ds:0B30AACh
0x8122B7: xor     eax, esp
0x8122B9: push    eax
0x8122BA: lea     eax, [esp+20h+var_C]
0x8122BE: mov     large fs:0, eax
0x8122C4: push    8; Size
0x8122C6: call    FormHeapAlloc
0x8122CB: add     esp, 4
0x8122CE: mov     [esp+20h+var_10], eax
0x8122D2: xor     esi, esi
0x8122D4: cmp     eax, esi
0x8122D6: mov     [esp+20h+var_4], esi
0x8122DA: jz      short loc_8122E5
0x8122DC: mov     ecx, eax
0x8122DE: call    ShaderDefinition__Init
0x8122E3: mov     esi, eax
0x8122E5: mov     eax, ds:0B43104h
0x8122EA: push    1; StreamCount
0x8122EC: push    4; a2
0x8122EE: push    eax; a1
0x8122EF: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x8122F7: call    CreateDX9ShaderDeclaration
0x8122FC: mov     edi, [esi]
0x8122FE: mov     ebx, eax
0x812300: add     esp, 0Ch
0x812303: cmp     edi, ebx
0x812305: jz      short loc_812337
0x812307: test    edi, edi
0x812309: jz      short loc_812327
0x81230B: lea     ecx, [edi+4]
0x81230E: push    ecx; lpAddend
0x81230F: call    dword ptr ds:0A2807Ch
0x812315: test    eax, eax
0x812317: jnz     short loc_812327
0x812319: test    edi, edi
0x81231B: jz      short loc_812327
0x81231D: mov     edx, [edi]
0x81231F: mov     eax, [edx]
0x812321: push    1
0x812323: mov     ecx, edi
0x812325: call    eax
0x812327: test    ebx, ebx
0x812329: mov     [esi], ebx
0x81232B: jz      short loc_812337
0x81232D: add     ebx, 4
0x812330: push    ebx; lpAddend
0x812331: call    dword ptr ds:0A28078h
0x812337: mov     ecx, [esi]
0x812339: mov     edx, [ecx]
0x81233B: mov     eax, [edx+50h]
0x81233E: push    0
0x812340: push    2
0x812342: push    0
0x812344: push    0
0x812346: push    0
0x812348: call    eax
0x81234A: mov     ecx, [esi]
0x81234C: mov     edx, [ecx]
0x81234E: mov     eax, [edx+50h]
0x812351: push    0
0x812353: push    3
0x812355: push    4
0x812357: push    5
0x812359: push    1
0x81235B: call    eax
0x81235D: mov     ecx, [esi]
0x81235F: mov     edx, [ecx]
0x812361: mov     eax, [edx+50h]
0x812364: push    0
0x812366: push    1
0x812368: push    5
0x81236A: push    7
0x81236C: push    2
0x81236E: call    eax
0x812370: mov     ecx, [esi]
0x812372: mov     edx, [ecx]
0x812374: mov     eax, [edx+4Ch]
0x812377: push    0
0x812379: push    1
0x81237B: push    5
0x81237D: push    0
0x81237F: push    80000000h
0x812384: push    6
0x812386: push    3
0x812388: push    0
0x81238A: call    eax
0x81238C: mov     edi, [esi]
0x81238E: test    edi, edi
0x812390: jz      short loc_8123B8
0x812392: mov     edx, [edi]
0x812394: mov     eax, [edx+4]
0x812397: mov     ecx, edi
0x812399: call    eax
0x81239B: test    eax, eax
0x81239D: jz      short loc_8123AE
0x81239F: nop
0x8123A0: cmp     eax, offset dword_B3F684
0x8123A5: jz      short loc_8123E1
0x8123A7: mov     eax, [eax+4]
0x8123AA: test    eax, eax
0x8123AC: jnz     short loc_8123A0
0x8123AE: xor     al, al
0x8123B0: neg     al
0x8123B2: sbb     eax, eax
0x8123B4: and     eax, edi
0x8123B6: mov     edi, eax
0x8123B8: push    110h; Size
0x8123BD: call    FormHeapAlloc
0x8123C2: add     esp, 4
0x8123C5: mov     [esp+20h+var_10], eax
0x8123C9: test    eax, eax
0x8123CB: mov     [esp+20h+var_4], 1
0x8123D3: jz      short loc_8123E5
0x8123D5: push    edi
0x8123D6: mov     ecx, eax; this
0x8123D8: call    ??0DistantLODShader@@QAE@XZ; DistantLODShader::DistantLODShader(void)
0x8123DD: mov     edi, eax
0x8123DF: jmp     short loc_8123E7
0x8123E1: mov     al, 1
0x8123E3: jmp     short loc_8123B0
0x8123E5: xor     edi, edi
0x8123E7: mov     edx, [edi]
0x8123E9: mov     eax, [edx+84h]
0x8123EF: mov     ecx, edi
0x8123F1: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8123F9: call    eax
0x8123FB: mov     edx, [edi]
0x8123FD: mov     eax, [edx+0A8h]
0x812403: mov     ecx, edi
0x812405: call    eax
0x812407: mov     edx, [edi]
0x812409: mov     eax, [edx+0ACh]
0x81240F: mov     ecx, edi
0x812411: call    eax
0x812413: mov     ebx, [esi+4]
0x812416: cmp     ebx, edi
0x812418: jz      short loc_812447
0x81241A: test    ebx, ebx
0x81241C: jz      short loc_81243A
0x81241E: lea     ecx, [ebx+4]
0x812421: push    ecx; lpAddend
0x812422: call    dword ptr ds:0A2807Ch
0x812428: test    eax, eax
0x81242A: jnz     short loc_81243A
0x81242C: test    ebx, ebx
0x81242E: jz      short loc_81243A
0x812430: mov     edx, [ebx]
0x812432: mov     eax, [edx]
0x812434: push    1
0x812436: mov     ecx, ebx
0x812438: call    eax
0x81243A: mov     [esi+4], edi
0x81243D: add     edi, 4
0x812440: push    edi; lpAddend
0x812441: call    dword ptr ds:0A28078h
0x812447: mov     ecx, [esi+4]
0x81244A: mov     edx, [ecx]
0x81244C: mov     eax, [esi]
0x81244E: mov     edx, [edx+54h]
0x812451: push    eax
0x812452: call    edx
0x812454: mov     eax, esi
0x812456: mov     ecx, dword ptr [esp+20h+var_C]
0x81245A: mov     large fs:0, ecx
0x812461: pop     ecx
0x812462: pop     edi
0x812463: pop     esi
0x812464: pop     ebx
0x812465: add     esp, 10h
0x812468: retn
