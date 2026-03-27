0x8451B0: push    0FFFFFFFFh
0x8451B2: push    offset SEH_8451B0
0x8451B7: mov     eax, large fs:0
0x8451BD: push    eax
0x8451BE: sub     esp, 18h
0x8451C1: push    ebx
0x8451C2: push    ebp
0x8451C3: push    esi
0x8451C4: push    edi
0x8451C5: mov     eax, ds:0B30AACh
0x8451CA: xor     eax, esp
0x8451CC: push    eax
0x8451CD: lea     eax, [esp+38h+var_C]
0x8451D1: mov     large fs:0, eax
0x8451D7: mov     esi, ecx
0x8451D9: mov     eax, [esi]
0x8451DB: mov     ebx, [esp+38h+arg_0]
0x8451DF: mov     edx, [eax+0BCh]
0x8451E5: mov     edi, ds:0B45BBCh
0x8451EB: push    0
0x8451ED: push    0
0x8451EF: push    ebx
0x8451F0: call    edx
0x8451F2: fld     dword ptr [ebx+20h]
0x8451F5: cmp     byte ptr ds:0B42CE3h, 0
0x8451FC: fsub    dword ptr ds:0B3F92Ch
0x845202: mov     eax, ds:0B43114h
0x845207: mov     ecx, [esp+38h+arg_C]
0x84520B: fstp    [esp+38h+arg_0]
0x84520F: fld     dword ptr [ebx+24h]
0x845212: fsub    dword ptr ds:0B3F930h
0x845218: fstp    [esp+38h+var_24]
0x84521C: fld     dword ptr [ebx+28h]
0x84521F: fsub    dword ptr ds:0B3F934h
0x845225: fstp    [esp+38h+var_20]
0x845229: fld     [esp+38h+arg_0]
0x84522D: mov     [esp+38h+arg_0], eax
0x845231: fstp    dword ptr ds:0B44F28h
0x845237: fld     [esp+38h+var_24]
0x84523B: fstp    dword ptr ds:0B44F2Ch
0x845241: fld     [esp+38h+var_20]
0x845245: fstp    dword ptr ds:0B44F30h
0x84524B: jnz     short loc_8452A5
0x84524D: fld     dword ptr [ecx+0A4h]
0x845253: fmul    dword ptr ds:0B464A4h
0x845259: fstp    dword ptr ds:0B464A4h
0x84525F: call    sub_7ED1A0
0x845264: test    eax, eax
0x845266: jz      short loc_845275
0x845268: cmp     byte ptr [eax+0FCh], 0
0x84526F: jnz     loc_8452F6
0x845275: mov     ecx, ds:0B46498h
0x84527B: mov     edx, ds:0B4649Ch
0x845281: mov     eax, ds:0B464A0h
0x845286: mov     ds:0B464A8h, ecx
0x84528C: mov     ecx, ds:0B464A4h
0x845292: mov     ds:0B464ACh, edx
0x845298: mov     ds:0B464B0h, eax
0x84529D: mov     ds:0B464B4h, ecx
0x8452A3: jmp     short loc_8452F6
0x8452A5: call    sub_7ED1A0
0x8452AA: test    eax, eax
0x8452AC: jz      short loc_8452B7
0x8452AE: cmp     byte ptr [eax+0FCh], 0
0x8452B5: jnz     short loc_8452F6
0x8452B7: fld     dword ptr ds:0A3D65Ch
0x8452BD: fst     [esp+38h+var_1C]
0x8452C1: mov     edx, [esp+38h+var_1C]
0x8452C5: fst     [esp+38h+var_18]
0x8452C9: mov     eax, [esp+38h+var_18]
0x8452CD: fstp    [esp+38h+var_14]
0x8452D1: mov     ecx, [esp+38h+var_14]
0x8452D5: fld1
0x8452D7: mov     ds:0B464A8h, edx
0x8452DD: fstp    [esp+38h+var_10]
0x8452E1: mov     ds:0B464ACh, eax
0x8452E6: mov     edx, [esp+38h+var_10]
0x8452EA: mov     ds:0B464B0h, ecx
0x8452F0: mov     ds:0B464B4h, edx
0x8452F6: mov     ecx, [esp+38h+arg_C]
0x8452FA: mov     eax, [edi+24h]
0x8452FD: mov     ebp, [eax]
0x8452FF: push    0
0x845301: push    ecx
0x845302: mov     ecx, esi
0x845304: call    sub_848FD0
0x845309: mov     ebx, [ebp+4]
0x84530C: cmp     ebx, eax
0x84530E: mov     [esp+38h+var_24], eax
0x845312: jz      short loc_845349
0x845314: test    ebx, ebx
0x845316: jz      short loc_845338
0x845318: lea     edx, [ebx+4]
0x84531B: push    edx; lpAddend
0x84531C: call    dword ptr ds:0A2807Ch
0x845322: test    eax, eax
0x845324: jnz     short loc_845334
0x845326: test    ebx, ebx
0x845328: jz      short loc_845334
0x84532A: mov     eax, [ebx]
0x84532C: mov     edx, [eax]
0x84532E: push    1
0x845330: mov     ecx, ebx
0x845332: call    edx
0x845334: mov     eax, [esp+38h+var_24]
0x845338: test    eax, eax
0x84533A: mov     [ebp+4], eax
0x84533D: jz      short loc_845349
0x84533F: add     eax, 4
0x845342: push    eax; lpAddend
0x845343: call    dword ptr ds:0A28078h
0x845349: mov     eax, [esp+38h+arg_C]
0x84534D: push    eax
0x84534E: push    ebp
0x84534F: mov     ecx, esi
0x845351: call    sub_848FA0
0x845356: mov     ecx, [edi+24h]
0x845359: mov     ebp, [ecx+4]
0x84535C: mov     ebx, [ebp+4]
0x84535F: mov     eax, [esp+38h+arg_0]
0x845363: cmp     ebx, eax
0x845365: jz      short loc_84539C
0x845367: test    ebx, ebx
0x845369: jz      short loc_84538B
0x84536B: lea     edx, [ebx+4]
0x84536E: push    edx; lpAddend
0x84536F: call    dword ptr ds:0A2807Ch
0x845375: test    eax, eax
0x845377: jnz     short loc_845387
0x845379: test    ebx, ebx
0x84537B: jz      short loc_845387
0x84537D: mov     eax, [ebx]
0x84537F: mov     edx, [eax]
0x845381: push    1
0x845383: mov     ecx, ebx
0x845385: call    edx
0x845387: mov     eax, [esp+38h+arg_0]
0x84538B: test    eax, eax
0x84538D: mov     [ebp+4], eax
0x845390: jz      short loc_84539C
0x845392: add     eax, 4
0x845395: push    eax; lpAddend
0x845396: call    dword ptr ds:0A28078h
0x84539C: mov     ebx, 1
0x8453A1: add     [edi+60h], ebx
0x8453A4: mov     [esp+38h+arg_C], edi
0x8453A8: mov     ecx, [esi+38h]
0x8453AB: lea     eax, [esp+38h+arg_C]
0x8453AF: push    eax
0x8453B0: push    ecx
0x8453B1: lea     ecx, [esi+40h]
0x8453B4: mov     [esp+40h+var_4], 0
0x8453BC: call    sub_76CE40
0x8453C1: or      eax, 0FFFFFFFFh
0x8453C4: add     [edi+60h], eax
0x8453C7: mov     [esp+38h+var_4], eax
0x8453CB: jnz     short loc_8453D4
0x8453CD: mov     ecx, edi
0x8453CF: call    sub_7604D0
0x8453D4: add     [esi+38h], ebx
0x8453D7: mov     ecx, [esp+38h+var_C]
0x8453DB: mov     large fs:0, ecx
0x8453E2: pop     ecx
0x8453E3: pop     edi
0x8453E4: pop     esi
0x8453E5: pop     ebp
0x8453E6: pop     ebx
0x8453E7: add     esp, 24h
0x8453EA: retn    10h
