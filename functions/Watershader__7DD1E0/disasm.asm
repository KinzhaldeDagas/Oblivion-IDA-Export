0x7DD1E0: push    0FFFFFFFFh
0x7DD1E2: push    offset SEH_8122A0
0x7DD1E7: mov     eax, large fs:0
0x7DD1ED: push    eax
0x7DD1EE: push    ecx
0x7DD1EF: push    ebx
0x7DD1F0: push    esi
0x7DD1F1: push    edi
0x7DD1F2: mov     eax, ds:0B30AACh
0x7DD1F7: xor     eax, esp
0x7DD1F9: push    eax
0x7DD1FA: lea     eax, [esp+20h+var_C]
0x7DD1FE: mov     large fs:0, eax
0x7DD204: push    8; Size
0x7DD206: call    FormHeapAlloc
0x7DD20B: add     esp, 4
0x7DD20E: mov     [esp+20h+var_10], eax
0x7DD212: xor     edi, edi
0x7DD214: cmp     eax, edi
0x7DD216: mov     [esp+20h+var_4], edi
0x7DD21A: jz      short loc_7DD225
0x7DD21C: mov     ecx, eax
0x7DD21E: call    ShaderDefinition__Init
0x7DD223: mov     edi, eax
0x7DD225: mov     eax, ds:0B43104h
0x7DD22A: push    1; StreamCount
0x7DD22C: push    2; a2
0x7DD22E: push    eax; a1
0x7DD22F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7DD237: call    CreateDX9ShaderDeclaration
0x7DD23C: mov     esi, [edi]
0x7DD23E: mov     ebx, eax
0x7DD240: add     esp, 0Ch
0x7DD243: cmp     esi, ebx
0x7DD245: jz      short loc_7DD277
0x7DD247: test    esi, esi
0x7DD249: jz      short loc_7DD267
0x7DD24B: lea     ecx, [esi+4]
0x7DD24E: push    ecx; lpAddend
0x7DD24F: call    dword ptr ds:0A2807Ch
0x7DD255: test    eax, eax
0x7DD257: jnz     short loc_7DD267
0x7DD259: test    esi, esi
0x7DD25B: jz      short loc_7DD267
0x7DD25D: mov     edx, [esi]
0x7DD25F: mov     eax, [edx]
0x7DD261: push    1
0x7DD263: mov     ecx, esi
0x7DD265: call    eax
0x7DD267: test    ebx, ebx
0x7DD269: mov     [edi], ebx
0x7DD26B: jz      short loc_7DD277
0x7DD26D: add     ebx, 4
0x7DD270: push    ebx; lpAddend
0x7DD271: call    dword ptr ds:0A28078h
0x7DD277: mov     ecx, [edi]
0x7DD279: mov     edx, [ecx]
0x7DD27B: mov     eax, [edx+50h]
0x7DD27E: push    0
0x7DD280: push    2
0x7DD282: push    0
0x7DD284: push    0
0x7DD286: push    0
0x7DD288: call    eax
0x7DD28A: mov     ecx, [edi]
0x7DD28C: mov     edx, [ecx]
0x7DD28E: mov     eax, [edx+50h]
0x7DD291: push    0
0x7DD293: push    1
0x7DD295: push    5
0x7DD297: push    7
0x7DD299: push    1
0x7DD29B: call    eax
0x7DD29D: mov     ecx, [edi]
0x7DD29F: test    ecx, ecx
0x7DD2A1: jz      short loc_7DD2BE
0x7DD2A3: mov     edx, [ecx]
0x7DD2A5: mov     eax, [edx+4]
0x7DD2A8: call    eax
0x7DD2AA: test    eax, eax
0x7DD2AC: jz      short loc_7DD2BE
0x7DD2AE: mov     edi, edi
0x7DD2B0: cmp     eax, offset dword_B3F684
0x7DD2B5: jz      short loc_7DD2BE
0x7DD2B7: mov     eax, [eax+4]
0x7DD2BA: test    eax, eax
0x7DD2BC: jnz     short loc_7DD2B0
0x7DD2BE: push    118h; Size
0x7DD2C3: call    FormHeapAlloc
0x7DD2C8: add     esp, 4
0x7DD2CB: mov     [esp+20h+var_10], eax
0x7DD2CF: test    eax, eax
0x7DD2D1: mov     [esp+20h+var_4], 1
0x7DD2D9: jz      short loc_7DD2E6
0x7DD2DB: mov     ecx, eax; this
0x7DD2DD: call    ??0WaterShader@@QAE@XZ; WaterShader::WaterShader(void)
0x7DD2E2: mov     esi, eax
0x7DD2E4: jmp     short loc_7DD2E8
0x7DD2E6: xor     esi, esi
0x7DD2E8: mov     edx, [esi]
0x7DD2EA: mov     eax, [edx+84h]
0x7DD2F0: mov     ecx, esi
0x7DD2F2: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7DD2FA: call    eax
0x7DD2FC: mov     ecx, esi
0x7DD2FE: call    LoadWaterShaders
0x7DD303: mov     ecx, esi
0x7DD305: call    sub_7DC1A0
0x7DD30A: mov     edx, [esi]
0x7DD30C: mov     eax, [edx+88h]
0x7DD312: mov     ecx, esi
0x7DD314: call    eax
0x7DD316: mov     edx, [esi]
0x7DD318: mov     eax, [edi]
0x7DD31A: mov     edx, [edx+54h]
0x7DD31D: push    eax
0x7DD31E: mov     ecx, esi
0x7DD320: call    edx
0x7DD322: mov     ebx, [edi+4]
0x7DD325: cmp     ebx, esi
0x7DD327: jz      short loc_7DD356
0x7DD329: test    ebx, ebx
0x7DD32B: jz      short loc_7DD349
0x7DD32D: lea     eax, [ebx+4]
0x7DD330: push    eax; lpAddend
0x7DD331: call    dword ptr ds:0A2807Ch
0x7DD337: test    eax, eax
0x7DD339: jnz     short loc_7DD349
0x7DD33B: test    ebx, ebx
0x7DD33D: jz      short loc_7DD349
0x7DD33F: mov     edx, [ebx]
0x7DD341: mov     eax, [edx]
0x7DD343: push    1
0x7DD345: mov     ecx, ebx
0x7DD347: call    eax
0x7DD349: mov     [edi+4], esi
0x7DD34C: add     esi, 4
0x7DD34F: push    esi; lpAddend
0x7DD350: call    dword ptr ds:0A28078h
0x7DD356: mov     eax, edi
0x7DD358: mov     ecx, dword ptr [esp+20h+var_C]
0x7DD35C: mov     large fs:0, ecx
0x7DD363: pop     ecx
0x7DD364: pop     edi
0x7DD365: pop     esi
0x7DD366: pop     ebx
0x7DD367: add     esp, 10h
0x7DD36A: retn
