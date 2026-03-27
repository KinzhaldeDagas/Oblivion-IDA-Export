0x7E44E0: push    0FFFFFFFFh
0x7E44E2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x7E44E7: mov     eax, large fs:0
0x7E44ED: push    eax
0x7E44EE: push    ecx
0x7E44EF: push    ebx
0x7E44F0: push    esi
0x7E44F1: push    edi
0x7E44F2: mov     eax, ds:0B30AACh
0x7E44F7: xor     eax, esp
0x7E44F9: push    eax
0x7E44FA: lea     eax, [esp+20h+var_C]
0x7E44FE: mov     large fs:0, eax
0x7E4504: mov     ebx, ecx
0x7E4506: mov     edi, [esp+20h+arg_0]
0x7E450A: push    4
0x7E450C: mov     ecx, edi
0x7E450E: call    NiNode_GetNiPropertyByID
0x7E4513: test    eax, eax
0x7E4515: jz      short loc_7E4566
0x7E4517: mov     edx, [eax]
0x7E4519: mov     ecx, eax
0x7E451B: mov     eax, [edx+54h]
0x7E451E: call    eax
0x7E4520: xor     ecx, ecx
0x7E4522: cmp     eax, 0Eh
0x7E4525: setz    cl
0x7E4528: mov     eax, ecx
0x7E452A: test    eax, eax
0x7E452C: jnz     loc_7E45CD
0x7E4532: push    4
0x7E4534: lea     edx, [esp+24h+arg_0]
0x7E4538: push    edx
0x7E4539: mov     ecx, edi
0x7E453B: call    sub_708560
0x7E4540: mov     eax, [esp+20h+arg_0]
0x7E4544: test    eax, eax
0x7E4546: jz      short loc_7E4566
0x7E4548: mov     esi, eax
0x7E454A: add     eax, 4
0x7E454D: push    eax; lpAddend
0x7E454E: call    dword ptr ds:0A2807Ch
0x7E4554: test    eax, eax
0x7E4556: jnz     short loc_7E4566
0x7E4558: test    esi, esi
0x7E455A: jz      short loc_7E4566
0x7E455C: mov     eax, [esi]
0x7E455E: mov     edx, [eax]
0x7E4560: push    1
0x7E4562: mov     ecx, esi
0x7E4564: call    edx
0x7E4566: push    128h; Size
0x7E456B: call    FormHeapAlloc
0x7E4570: add     esp, 4
0x7E4573: mov     [esp+20h+var_10], eax
0x7E4577: test    eax, eax
0x7E4579: mov     [esp+20h+var_4], 0
0x7E4581: jz      short loc_7E458E
0x7E4583: mov     ecx, eax; this
0x7E4585: call    ??0ParticleShaderProperty@@QAE@XZ; ParticleShaderProperty::ParticleShaderProperty(void)
0x7E458A: mov     esi, eax
0x7E458C: jmp     short loc_7E4590
0x7E458E: xor     esi, esi
0x7E4590: push    esi; a2
0x7E4591: mov     ecx, edi; this
0x7E4593: mov     [esp+24h+var_4], 0FFFFFFFFh
0x7E459B: call    sub_405680
0x7E45A0: mov     eax, [esi]
0x7E45A2: mov     edx, [eax+58h]
0x7E45A5: push    edi
0x7E45A6: mov     ecx, esi
0x7E45A8: call    edx
0x7E45AA: test    al, al
0x7E45AC: jnz     short loc_7E45CD
0x7E45AE: push    esi
0x7E45AF: mov     ecx, edi
0x7E45B1: call    sub_4A1220
0x7E45B6: xor     al, al
0x7E45B8: mov     ecx, [esp+20h+var_C]
0x7E45BC: mov     large fs:0, ecx
0x7E45C3: pop     ecx
0x7E45C4: pop     edi
0x7E45C5: pop     esi
0x7E45C6: pop     ebx
0x7E45C7: add     esp, 10h
0x7E45CA: retn    4
0x7E45CD: push    edi; a2
0x7E45CE: mov     ecx, ebx; this
0x7E45D0: call    sub_77AA60
0x7E45D5: mov     ecx, [esp+20h+var_C]
0x7E45D9: mov     large fs:0, ecx
0x7E45E0: pop     ecx
0x7E45E1: pop     edi
0x7E45E2: pop     esi
0x7E45E3: pop     ebx
0x7E45E4: add     esp, 10h
0x7E45E7: retn    4
