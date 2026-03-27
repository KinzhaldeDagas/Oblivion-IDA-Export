0x7DE710: push    0FFFFFFFFh
0x7DE712: push    offset SEH_8122A0
0x7DE717: mov     eax, large fs:0
0x7DE71D: push    eax
0x7DE71E: push    ecx
0x7DE71F: push    ebx
0x7DE720: push    esi
0x7DE721: push    edi
0x7DE722: mov     eax, ds:0B30AACh
0x7DE727: xor     eax, esp
0x7DE729: push    eax
0x7DE72A: lea     eax, [esp+20h+var_C]
0x7DE72E: mov     large fs:0, eax
0x7DE734: push    8; Size
0x7DE736: call    FormHeapAlloc
0x7DE73B: add     esp, 4
0x7DE73E: mov     [esp+20h+var_10], eax
0x7DE742: xor     edi, edi
0x7DE744: cmp     eax, edi
0x7DE746: mov     [esp+20h+var_4], edi
0x7DE74A: jz      short loc_7DE755
0x7DE74C: mov     ecx, eax
0x7DE74E: call    ShaderDefinition__Init
0x7DE753: mov     edi, eax
0x7DE755: mov     eax, ds:0B43104h
0x7DE75A: push    1; StreamCount
0x7DE75C: push    2; a2
0x7DE75E: push    eax; a1
0x7DE75F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7DE767: call    CreateDX9ShaderDeclaration
0x7DE76C: mov     esi, [edi]
0x7DE76E: mov     ebx, eax
0x7DE770: add     esp, 0Ch
0x7DE773: cmp     esi, ebx
0x7DE775: jz      short loc_7DE7A7
0x7DE777: test    esi, esi
0x7DE779: jz      short loc_7DE797
0x7DE77B: lea     ecx, [esi+4]
0x7DE77E: push    ecx; lpAddend
0x7DE77F: call    dword ptr ds:0A2807Ch
0x7DE785: test    eax, eax
0x7DE787: jnz     short loc_7DE797
0x7DE789: test    esi, esi
0x7DE78B: jz      short loc_7DE797
0x7DE78D: mov     edx, [esi]
0x7DE78F: mov     eax, [edx]
0x7DE791: push    1
0x7DE793: mov     ecx, esi
0x7DE795: call    eax
0x7DE797: test    ebx, ebx
0x7DE799: mov     [edi], ebx
0x7DE79B: jz      short loc_7DE7A7
0x7DE79D: add     ebx, 4
0x7DE7A0: push    ebx; lpAddend
0x7DE7A1: call    dword ptr ds:0A28078h
0x7DE7A7: mov     ecx, [edi]
0x7DE7A9: mov     edx, [ecx]
0x7DE7AB: mov     eax, [edx+50h]
0x7DE7AE: push    0
0x7DE7B0: push    2
0x7DE7B2: push    0
0x7DE7B4: push    0
0x7DE7B6: push    0
0x7DE7B8: call    eax
0x7DE7BA: mov     ecx, [edi]
0x7DE7BC: mov     edx, [ecx]
0x7DE7BE: mov     eax, [edx+50h]
0x7DE7C1: push    0
0x7DE7C3: push    1
0x7DE7C5: push    5
0x7DE7C7: push    7
0x7DE7C9: push    1
0x7DE7CB: call    eax
0x7DE7CD: mov     ecx, [edi]
0x7DE7CF: test    ecx, ecx
0x7DE7D1: jz      short loc_7DE7EE
0x7DE7D3: mov     edx, [ecx]
0x7DE7D5: mov     eax, [edx+4]
0x7DE7D8: call    eax
0x7DE7DA: test    eax, eax
0x7DE7DC: jz      short loc_7DE7EE
0x7DE7DE: mov     edi, edi
0x7DE7E0: cmp     eax, offset dword_B3F684
0x7DE7E5: jz      short loc_7DE7EE
0x7DE7E7: mov     eax, [eax+4]
0x7DE7EA: test    eax, eax
0x7DE7EC: jnz     short loc_7DE7E0
0x7DE7EE: push    128h; Size
0x7DE7F3: call    FormHeapAlloc
0x7DE7F8: add     esp, 4
0x7DE7FB: mov     [esp+20h+var_10], eax
0x7DE7FF: test    eax, eax
0x7DE801: mov     [esp+20h+var_4], 1
0x7DE809: jz      short loc_7DE816
0x7DE80B: mov     ecx, eax; this
0x7DE80D: call    ??0WaterShaderDisplacement@@QAE@XZ; WaterShaderDisplacement::WaterShaderDisplacement(void)
0x7DE812: mov     esi, eax
0x7DE814: jmp     short loc_7DE818
0x7DE816: xor     esi, esi
0x7DE818: mov     edx, [esi]
0x7DE81A: mov     eax, [edx+84h]
0x7DE820: mov     ecx, esi
0x7DE822: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7DE82A: call    eax
0x7DE82C: mov     ecx, esi
0x7DE82E: call    sub_7DD920
0x7DE833: mov     ecx, esi
0x7DE835: call    sub_7DDD90
0x7DE83A: mov     edx, [esi]
0x7DE83C: mov     eax, [edx+88h]
0x7DE842: mov     ecx, esi
0x7DE844: call    eax
0x7DE846: mov     edx, [esi]
0x7DE848: mov     eax, [edi]
0x7DE84A: mov     edx, [edx+54h]
0x7DE84D: push    eax
0x7DE84E: mov     ecx, esi
0x7DE850: call    edx
0x7DE852: mov     ebx, [edi+4]
0x7DE855: cmp     ebx, esi
0x7DE857: jz      short loc_7DE886
0x7DE859: test    ebx, ebx
0x7DE85B: jz      short loc_7DE879
0x7DE85D: lea     eax, [ebx+4]
0x7DE860: push    eax; lpAddend
0x7DE861: call    dword ptr ds:0A2807Ch
0x7DE867: test    eax, eax
0x7DE869: jnz     short loc_7DE879
0x7DE86B: test    ebx, ebx
0x7DE86D: jz      short loc_7DE879
0x7DE86F: mov     edx, [ebx]
0x7DE871: mov     eax, [edx]
0x7DE873: push    1
0x7DE875: mov     ecx, ebx
0x7DE877: call    eax
0x7DE879: mov     [edi+4], esi
0x7DE87C: add     esi, 4
0x7DE87F: push    esi; lpAddend
0x7DE880: call    dword ptr ds:0A28078h
0x7DE886: mov     eax, edi
0x7DE888: mov     ecx, dword ptr [esp+20h+var_C]
0x7DE88C: mov     large fs:0, ecx
0x7DE893: pop     ecx
0x7DE894: pop     edi
0x7DE895: pop     esi
0x7DE896: pop     ebx
0x7DE897: add     esp, 10h
0x7DE89A: retn
