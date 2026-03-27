0x7E9840: push    0FFFFFFFFh
0x7E9842: push    offset SEH_8122A0
0x7E9847: mov     eax, large fs:0
0x7E984D: push    eax
0x7E984E: push    ecx
0x7E984F: push    ebx
0x7E9850: push    esi
0x7E9851: push    edi
0x7E9852: mov     eax, ds:0B30AACh
0x7E9857: xor     eax, esp
0x7E9859: push    eax
0x7E985A: lea     eax, [esp+20h+var_C]
0x7E985E: mov     large fs:0, eax
0x7E9864: push    8; Size
0x7E9866: call    FormHeapAlloc
0x7E986B: add     esp, 4
0x7E986E: mov     [esp+20h+var_10], eax
0x7E9872: xor     esi, esi
0x7E9874: cmp     eax, esi
0x7E9876: mov     [esp+20h+var_4], esi
0x7E987A: jz      short loc_7E9885
0x7E987C: mov     ecx, eax
0x7E987E: call    ShaderDefinition__Init
0x7E9883: mov     esi, eax
0x7E9885: mov     eax, ds:0B43104h
0x7E988A: push    1; StreamCount
0x7E988C: push    5; a2
0x7E988E: push    eax; a1
0x7E988F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7E9897: call    CreateDX9ShaderDeclaration
0x7E989C: mov     edi, [esi]
0x7E989E: mov     ebx, eax
0x7E98A0: add     esp, 0Ch
0x7E98A3: cmp     edi, ebx
0x7E98A5: jz      short loc_7E98D7
0x7E98A7: test    edi, edi
0x7E98A9: jz      short loc_7E98C7
0x7E98AB: lea     ecx, [edi+4]
0x7E98AE: push    ecx; lpAddend
0x7E98AF: call    dword ptr ds:0A2807Ch
0x7E98B5: test    eax, eax
0x7E98B7: jnz     short loc_7E98C7
0x7E98B9: test    edi, edi
0x7E98BB: jz      short loc_7E98C7
0x7E98BD: mov     edx, [edi]
0x7E98BF: mov     eax, [edx]
0x7E98C1: push    1
0x7E98C3: mov     ecx, edi
0x7E98C5: call    eax
0x7E98C7: test    ebx, ebx
0x7E98C9: mov     [esi], ebx
0x7E98CB: jz      short loc_7E98D7
0x7E98CD: add     ebx, 4
0x7E98D0: push    ebx; lpAddend
0x7E98D1: call    dword ptr ds:0A28078h
0x7E98D7: mov     ecx, [esi]
0x7E98D9: mov     edx, [ecx]
0x7E98DB: mov     eax, [edx+50h]
0x7E98DE: push    0
0x7E98E0: push    2
0x7E98E2: push    0
0x7E98E4: push    0
0x7E98E6: push    0
0x7E98E8: call    eax
0x7E98EA: mov     ecx, [esi]
0x7E98EC: mov     edx, [ecx]
0x7E98EE: mov     eax, [edx+50h]
0x7E98F1: push    0
0x7E98F3: push    2
0x7E98F5: push    3
0x7E98F7: push    3
0x7E98F9: push    1
0x7E98FB: call    eax
0x7E98FD: mov     ecx, [esi]
0x7E98FF: mov     edx, [ecx]
0x7E9901: mov     eax, [edx+50h]
0x7E9904: push    0
0x7E9906: push    3
0x7E9908: push    4
0x7E990A: push    5
0x7E990C: push    2
0x7E990E: call    eax
0x7E9910: mov     ecx, [esi]
0x7E9912: mov     edx, [ecx]
0x7E9914: mov     eax, [edx+50h]
0x7E9917: push    0
0x7E9919: push    1
0x7E991B: push    5
0x7E991D: push    7
0x7E991F: push    3
0x7E9921: call    eax
0x7E9923: mov     ecx, [esi]
0x7E9925: mov     edx, [ecx]
0x7E9927: mov     eax, [edx+4Ch]
0x7E992A: push    0
0x7E992C: push    1
0x7E992E: push    5
0x7E9930: push    0
0x7E9932: push    80000000h
0x7E9937: push    6
0x7E9939: push    4
0x7E993B: push    0
0x7E993D: call    eax
0x7E993F: mov     edi, [esi]
0x7E9941: test    edi, edi
0x7E9943: jz      short loc_7E996A
0x7E9945: mov     edx, [edi]
0x7E9947: mov     eax, [edx+4]
0x7E994A: mov     ecx, edi
0x7E994C: call    eax
0x7E994E: test    eax, eax
0x7E9950: jz      short loc_7E9960
0x7E9952: cmp     eax, offset dword_B3F684
0x7E9957: jz      short loc_7E9993
0x7E9959: mov     eax, [eax+4]
0x7E995C: test    eax, eax
0x7E995E: jnz     short loc_7E9952
0x7E9960: xor     al, al
0x7E9962: neg     al
0x7E9964: sbb     eax, eax
0x7E9966: and     eax, edi
0x7E9968: mov     edi, eax
0x7E996A: push    194h; Size
0x7E996F: call    FormHeapAlloc
0x7E9974: add     esp, 4
0x7E9977: mov     [esp+20h+var_10], eax
0x7E997B: test    eax, eax
0x7E997D: mov     [esp+20h+var_4], 1
0x7E9985: jz      short loc_7E9997
0x7E9987: push    edi
0x7E9988: mov     ecx, eax; this
0x7E998A: call    ??0TallGrassShader@@QAE@XZ; TallGrassShader::TallGrassShader(void)
0x7E998F: mov     edi, eax
0x7E9991: jmp     short loc_7E9999
0x7E9993: mov     al, 1
0x7E9995: jmp     short loc_7E9962
0x7E9997: xor     edi, edi
0x7E9999: mov     edx, [edi]
0x7E999B: mov     eax, [edx+84h]
0x7E99A1: mov     ecx, edi
0x7E99A3: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7E99AB: call    eax
0x7E99AD: mov     edx, [edi]
0x7E99AF: mov     eax, [edx+0A8h]
0x7E99B5: mov     ecx, edi
0x7E99B7: call    eax
0x7E99B9: mov     edx, [edi]
0x7E99BB: mov     eax, [edx+0ACh]
0x7E99C1: mov     ecx, edi
0x7E99C3: call    eax
0x7E99C5: mov     ebx, [esi+4]
0x7E99C8: cmp     ebx, edi
0x7E99CA: jz      short loc_7E99F9
0x7E99CC: test    ebx, ebx
0x7E99CE: jz      short loc_7E99EC
0x7E99D0: lea     ecx, [ebx+4]
0x7E99D3: push    ecx; lpAddend
0x7E99D4: call    dword ptr ds:0A2807Ch
0x7E99DA: test    eax, eax
0x7E99DC: jnz     short loc_7E99EC
0x7E99DE: test    ebx, ebx
0x7E99E0: jz      short loc_7E99EC
0x7E99E2: mov     edx, [ebx]
0x7E99E4: mov     eax, [edx]
0x7E99E6: push    1
0x7E99E8: mov     ecx, ebx
0x7E99EA: call    eax
0x7E99EC: mov     [esi+4], edi
0x7E99EF: add     edi, 4
0x7E99F2: push    edi; lpAddend
0x7E99F3: call    dword ptr ds:0A28078h
0x7E99F9: mov     ecx, [esi+4]
0x7E99FC: mov     edx, [ecx]
0x7E99FE: mov     eax, [esi]
0x7E9A00: mov     edx, [edx+54h]
0x7E9A03: push    eax
0x7E9A04: call    edx
0x7E9A06: mov     eax, esi
0x7E9A08: mov     ecx, dword ptr [esp+20h+var_C]
0x7E9A0C: mov     large fs:0, ecx
0x7E9A13: pop     ecx
0x7E9A14: pop     edi
0x7E9A15: pop     esi
0x7E9A16: pop     ebx
0x7E9A17: add     esp, 10h
0x7E9A1A: retn
