0x4D43F0: push    0FFFFFFFFh
0x4D43F2: push    offset SEH_4D43F0
0x4D43F7: mov     eax, large fs:0
0x4D43FD: push    eax
0x4D43FE: sub     esp, 68h
0x4D4401: push    ebx
0x4D4402: push    ebp
0x4D4403: push    esi
0x4D4404: push    edi
0x4D4405: mov     eax, ds:0B30AACh
0x4D440A: xor     eax, esp
0x4D440C: push    eax
0x4D440D: lea     eax, [esp+88h+var_C]
0x4D4411: mov     large fs:0, eax
0x4D4417: xor     edi, edi
0x4D4419: cmp     [esp+88h+arg_10], edi
0x4D4420: jz      loc_4D4770
0x4D4426: cmp     [esp+88h+arg_4], edi
0x4D442D: jz      loc_4D4770
0x4D4433: mov     ebp, [esp+88h+arg_0]
0x4D443A: cmp     ebp, edi
0x4D443C: jz      loc_4D4770
0x4D4442: mov     ecx, ebp
0x4D4444: call    TESFile_GetRecordType
0x4D4449: cmp     eax, 30h ; '0'
0x4D444C: jnz     loc_4D4770
0x4D4452: push    1
0x4D4454: mov     ecx, ebp
0x4D4456: call    TESFile_NextRecordEx; NextForm?
0x4D445B: mov     eax, [ebp+23Ch]
0x4D4461: cmp     eax, ds:0B05E20h
0x4D4467: lea     esi, [ebp+23Ch]
0x4D446D: jnz     loc_4D4770
0x4D4473: cmp     dword ptr [esi+0Ch], 6
0x4D4477: jnz     loc_4D4770
0x4D447D: push    1
0x4D447F: mov     ecx, ebp
0x4D4481: call    TESFile_NextRecordEx; NextForm?
0x4D4486: mov     ecx, [esi]
0x4D4488: cmp     ecx, ds:0B05E20h
0x4D448E: jnz     loc_4D4770
0x4D4494: cmp     dword ptr [esi+0Ch], 8
0x4D4498: jnz     short loc_4D44A1
0x4D449A: mov     ecx, ebp
0x4D449C: call    TESFile__NextGroup
0x4D44A1: mov     edx, ds:0B05E20h
0x4D44A7: cmp     [esi], edx
0x4D44A9: jnz     loc_4D4770
0x4D44AF: cmp     dword ptr [esi+0Ch], 0Ah
0x4D44B3: jnz     loc_4D4770
0x4D44B9: push    1
0x4D44BB: mov     ecx, ebp
0x4D44BD: call    TESFile_NextRecordEx; NextForm?
0x4D44C2: mov     ecx, ebp
0x4D44C4: call    TESFile_GetRecordType
0x4D44C9: cmp     eax, 31h ; '1'
0x4D44CC: jnz     loc_4D4770
0x4D44D2: mov     ebx, 5Ah ; 'Z'
0x4D44D7: jmp     short loc_4D44E0
0x4D44D9: align 10h
0x4D44E0: test    byte ptr [ebp+244h], 20h
0x4D44E7: jnz     loc_4D4757
0x4D44ED: lea     eax, [esp+88h+a2]
0x4D44F1: push    eax
0x4D44F2: push    ebp
0x4D44F3: call    sub_4D8440
0x4D44F8: add     esp, 8
0x4D44FB: test    al, al
0x4D44FD: jz      loc_4D4757
0x4D4503: mov     eax, [esp+88h+a2]
0x4D4507: cmp     eax, edi
0x4D4509: jz      loc_4D4757
0x4D450F: lea     ecx, [esp+88h+var_68]
0x4D4513: push    ecx
0x4D4514: mov     ecx, [esp+8Ch+arg_10]
0x4D451B: push    eax
0x4D451C: mov     [esp+90h+var_68], edi
0x4D4520: call    NiTMap_GetAt
0x4D4525: test    al, al
0x4D4527: jz      short loc_4D4531
0x4D4529: mov     esi, [esp+88h+var_68]
0x4D452D: cmp     esi, edi
0x4D452F: jnz     short loc_4D4585
0x4D4531: push    34h ; '4'; Size
0x4D4533: call    FormHeapAlloc
0x4D4538: add     esp, 4
0x4D453B: mov     [esp+88h+var_60], eax
0x4D453F: cmp     eax, edi
0x4D4541: mov     [esp+88h+var_4], edi
0x4D4548: jz      short loc_4D4553
0x4D454A: mov     ecx, eax
0x4D454C: call    sub_4CC7C0
0x4D4551: jmp     short loc_4D4555
0x4D4553: xor     eax, eax
0x4D4555: mov     ecx, [esp+88h+arg_10]; this
0x4D455C: mov     word ptr [eax+2Eh], 1Eh
0x4D4562: mov     [eax+1Eh], bx
0x4D4566: mov     [eax+0Eh], bx
0x4D456A: mov     [eax+30h], edi
0x4D456D: mov     edx, [esp+88h+a2]
0x4D4571: push    eax; a3
0x4D4572: push    edx; a2
0x4D4573: mov     [esp+90h+var_4], 0FFFFFFFFh
0x4D457E: mov     esi, eax
0x4D4580: call    NiTMap_SetAt
0x4D4585: mov     eax, ds:0B3F9A8h
0x4D458A: fldz
0x4D458C: mov     ecx, ds:0B3F9ACh
0x4D4592: fstp    [esp+88h+var_74]
0x4D4596: mov     edx, ds:0B3F9B0h
0x4D459C: mov     dword ptr [esp+88h+var_5C], eax
0x4D45A0: mov     eax, [esp+88h+var_28]
0x4D45A4: mov     dword ptr [esp+88h+var_5C+4], ecx
0x4D45A8: mov     ecx, [esp+88h+var_24]
0x4D45AC: mov     [esp+88h+var_54], edx
0x4D45B0: mov     edx, [esp+88h+var_20]
0x4D45B4: mov     [esp+88h+var_50], eax
0x4D45B8: mov     [esp+88h+var_4C], ecx
0x4D45BC: lea     eax, [esp+88h+var_5C]
0x4D45C0: push    eax
0x4D45C1: lea     ecx, [esp+8Ch+var_74]
0x4D45C5: mov     [esp+8Ch+var_48], edx
0x4D45C9: push    ecx
0x4D45CA: mov     ecx, [esp+90h+arg_4]
0x4D45D1: lea     edx, [esp+90h+var_50]
0x4D45D5: push    edx
0x4D45D6: call    sub_4EF7E0
0x4D45DB: mov     ecx, eax
0x4D45DD: call    sub_4EB370
0x4D45E2: test    al, al
0x4D45E4: jz      loc_4D46F9
0x4D45EA: fld     [esp+88h+var_74]
0x4D45EE: fstp    [esp+88h+var_48]
0x4D45F2: fld     [esp+88h+var_48]
0x4D45F6: fistp   [esp+88h+var_70]
0x4D45FA: mov     eax, [esp+88h+var_70]
0x4D45FE: mov     [esp+88h+var_60], eax
0x4D4602: fld     [esp+88h+var_4C]
0x4D4606: fistp   [esp+88h+var_6C]
0x4D460A: mov     ecx, [esp+88h+var_6C]
0x4D460E: mov     [esp+88h+var_68], ecx
0x4D4612: fld     [esp+88h+var_50]
0x4D4616: fistp   [esp+88h+var_64]
0x4D461A: fild    [esp+88h+var_64]
0x4D461E: fstp    [esp+88h+var_44]
0x4D4622: mov     edx, [esp+88h+var_44]
0x4D4626: fild    [esp+88h+var_68]
0x4D462A: mov     [esp+88h+var_50], edx
0x4D462E: fstp    [esp+88h+var_40]
0x4D4632: mov     eax, [esp+88h+var_40]
0x4D4636: fild    [esp+88h+var_60]
0x4D463A: mov     [esp+88h+var_4C], eax
0x4D463E: fstp    [esp+88h+var_3C]
0x4D4642: mov     ecx, [esp+88h+var_3C]
0x4D4646: fld     dword ptr [esp+88h+var_5C]
0x4D464A: mov     [esp+88h+var_48], ecx
0x4D464E: fld     qword ptr ds:0A2FAA0h
0x4D4654: fmul    st(1), st
0x4D4656: fadd    st(1), st
0x4D4658: fxch    st(1)
0x4D465A: fstp    dword ptr [esp+88h+var_5C]
0x4D465E: fld     dword ptr [esp+88h+var_5C]
0x4D4662: fld     qword ptr ds:0A46B18h
0x4D4668: fcom    st(1)
0x4D466A: fnstsw  ax
0x4D466C: fstp    st(1)
0x4D466E: test    ah, 41h
0x4D4671: fld     dword ptr ds:0A34F5Ch
0x4D4677: jp      short loc_4D467D
0x4D4679: fst     dword ptr [esp+88h+var_5C]
0x4D467D: fld     dword ptr [esp+88h+var_5C+4]
0x4D4681: fmul    st, st(3)
0x4D4683: fadd    st, st(3)
0x4D4685: fstp    dword ptr [esp+88h+var_5C+4]
0x4D4689: fld     dword ptr [esp+88h+var_5C+4]
0x4D468D: fcomp   st(2)
0x4D468F: fnstsw  ax
0x4D4691: test    ah, 1
0x4D4694: jnz     short loc_4D469A
0x4D4696: fst     dword ptr [esp+88h+var_5C+4]
0x4D469A: fld     [esp+88h+var_54]
0x4D469E: fmul    st, st(3)
0x4D46A0: faddp   st(3), st
0x4D46A2: fxch    st(2)
0x4D46A4: fstp    [esp+88h+var_54]
0x4D46A8: fld     [esp+88h+var_54]
0x4D46AC: fcompp
0x4D46AE: fnstsw  ax
0x4D46B0: test    ah, 1
0x4D46B3: jnz     short loc_4D46BB
0x4D46B5: fstp    [esp+88h+var_54]
0x4D46B9: jmp     short loc_4D46BD
0x4D46BB: fstp    st
0x4D46BD: fld     [esp+88h+var_44]
0x4D46C1: fadd    dword ptr [esp+88h+var_5C]
0x4D46C5: fstp    [esp+88h+var_38]
0x4D46C9: mov     edx, [esp+88h+var_38]
0x4D46CD: fld     [esp+88h+var_40]
0x4D46D1: mov     [esp+88h+var_28], edx
0x4D46D5: fadd    dword ptr [esp+88h+var_5C+4]
0x4D46D9: fstp    [esp+88h+var_34]
0x4D46DD: mov     eax, [esp+88h+var_34]
0x4D46E1: fld     [esp+88h+var_3C]
0x4D46E5: mov     [esp+88h+var_24], eax
0x4D46E9: fadd    [esp+88h+var_54]
0x4D46ED: fstp    [esp+88h+var_30]
0x4D46F1: mov     ecx, [esp+88h+var_30]
0x4D46F5: mov     [esp+88h+var_20], ecx
0x4D46F9: lea     edx, [esp+88h+var_28]
0x4D46FD: lea     edi, [esi+10h]
0x4D4700: push    edx
0x4D4701: mov     ecx, edi
0x4D4703: call    sub_4D31D0
0x4D4708: lea     eax, [esp+88h+var_24]
0x4D470C: push    eax
0x4D470D: mov     ecx, edi
0x4D470F: call    sub_4D31D0
0x4D4714: lea     ecx, [esp+88h+var_20]
0x4D4718: push    ecx
0x4D4719: mov     ecx, edi
0x4D471B: call    sub_4D31D0
0x4D4720: lea     edx, [esp+88h+var_18]
0x4D4724: push    edx
0x4D4725: mov     ecx, esi
0x4D4727: call    sub_4D31D0
0x4D472C: lea     eax, [esp+88h+var_14]
0x4D4730: push    eax
0x4D4731: mov     ecx, esi
0x4D4733: call    sub_4D31D0
0x4D4738: lea     ecx, [esp+88h+var_10]
0x4D473C: push    ecx
0x4D473D: mov     ecx, esi
0x4D473F: call    sub_4D31D0
0x4D4744: lea     edx, [esp+88h+var_1C]
0x4D4748: push    edx
0x4D4749: lea     ecx, [esi+20h]
0x4D474C: call    sub_4D31D0
0x4D4751: add     dword ptr [esi+30h], 1
0x4D4755: xor     edi, edi
0x4D4757: push    1
0x4D4759: mov     ecx, ebp
0x4D475B: call    TESFile_NextRecordEx; NextForm?
0x4D4760: mov     ecx, ebp
0x4D4762: call    TESFile_GetRecordType
0x4D4767: cmp     eax, 31h ; '1'
0x4D476A: jz      loc_4D44E0
0x4D4770: xor     al, al
0x4D4772: mov     ecx, dword ptr [esp+88h+var_C]
0x4D4776: mov     large fs:0, ecx
0x4D477D: pop     ecx
0x4D477E: pop     edi
0x4D477F: pop     esi
0x4D4780: pop     ebp
0x4D4781: pop     ebx
0x4D4782: add     esp, 74h
0x4D4785: retn
