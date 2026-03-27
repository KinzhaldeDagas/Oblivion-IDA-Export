0x6A5510: sub     esp, 0ACh
0x6A5516: push    ebx
0x6A5517: push    ebp
0x6A5518: push    esi
0x6A5519: mov     esi, [esp+0B8h+arg_4]
0x6A5520: push    edi
0x6A5521: mov     edi, ecx
0x6A5523: mov     ecx, esi; this
0x6A5525: call    TESObjectREFR_GetParentCell
0x6A552A: mov     ecx, eax
0x6A552C: call    sub_4AF170
0x6A5531: test    eax, eax
0x6A5533: mov     ecx, esi; this
0x6A5535: jz      loc_6A5820
0x6A553B: mov     eax, [esi]
0x6A553D: mov     edx, [eax+174h]
0x6A5543: xor     ebx, ebx
0x6A5545: push    ebx
0x6A5546: push    1
0x6A5548: push    esi
0x6A5549: mov     [esp+0C8h+a3], ebx
0x6A554D: mov     [esp+0C8h+var_78], ebx
0x6A5551: call    edx
0x6A5553: push    eax
0x6A5554: call    sub_67D820
0x6A5559: mov     esi, eax
0x6A555B: add     esp, 10h
0x6A555E: cmp     esi, ebx
0x6A5560: jz      loc_6A59FA
0x6A5566: fld     dword ptr ds:0A34A80h
0x6A556C: lea     eax, [esp+0BCh+a3]
0x6A5570: push    eax; int
0x6A5571: push    ecx
0x6A5572: mov     ecx, esi
0x6A5574: fstp    [esp+0C4h+var_C4]; float
0x6A5577: call    sub_4E80B0
0x6A557C: push    esi
0x6A557D: lea     ecx, [esp+0C0h+a3]
0x6A5581: call    BSSimpleList_PushFront
0x6A5586: xor     eax, eax
0x6A5588: lea     ecx, [esp+0BCh+a3]
0x6A558C: lea     esp, [esp+0]
0x6A5590: cmp     [ecx], ebx
0x6A5592: jz      short loc_6A5597
0x6A5594: add     eax, 1
0x6A5597: mov     ecx, [ecx+4]
0x6A559A: cmp     ecx, ebx
0x6A559C: jnz     short loc_6A5590
0x6A559E: imul    eax, 0Dh
0x6A55A1: add     eax, 1
0x6A55A4: xor     ecx, ecx
0x6A55A6: mov     [esp+0BCh+var_74], eax
0x6A55AA: mov     edx, 0Ch
0x6A55AF: mul     edx
0x6A55B1: seto    cl
0x6A55B4: neg     ecx
0x6A55B6: or      ecx, eax
0x6A55B8: push    ecx; Size
0x6A55B9: call    FormHeapAlloc
0x6A55BE: fldz
0x6A55C0: fld     qword ptr ds:0A3F3D0h
0x6A55C6: mov     ebx, [esp+0C0h+arg_0]
0x6A55CD: fmul    st, st(1)
0x6A55CF: mov     [ebx], eax
0x6A55D1: mov     ecx, [edi+48h]
0x6A55D4: mov     [eax], ecx
0x6A55D6: mov     edx, [edi+4Ch]
0x6A55D9: fstp    [esp+0C0h+var_54]
0x6A55DD: mov     [eax+4], edx
0x6A55E0: fld     [esp+0C0h+var_54]
0x6A55E4: mov     ecx, [edi+50h]
0x6A55E7: fstp    [esp+0C0h+var_44]
0x6A55EB: lea     edx, [esp+0C0h+a3]
0x6A55EF: add     esp, 4
0x6A55F2: fmul    qword ptr ds:0A3F450h
0x6A55F8: mov     [eax+8], ecx
0x6A55FB: mov     [esp+0BCh+var_A4], edx
0x6A55FF: mov     esi, 0Ch
0x6A5604: fstp    [esp+0BCh+var_34]
0x6A560B: fld     [esp+0BCh+var_34]
0x6A5612: fstp    [esp+0BCh+var_A0]
0x6A5616: jmp     short loc_6A5620
0x6A5618: align 10h
0x6A5620: mov     eax, [esp+0BCh+var_A4]
0x6A5624: mov     ecx, [eax]
0x6A5626: call    sub_4BEF40
0x6A562B: mov     ecx, [eax]
0x6A562D: mov     edx, [eax+4]
0x6A5630: mov     edi, [eax+8]
0x6A5633: mov     eax, [ebx]
0x6A5635: add     eax, esi
0x6A5637: mov     [eax], ecx
0x6A5639: mov     [eax+4], edx
0x6A563C: push    0; Seed
0x6A563E: mov     [esp+0C0h+a2], ecx
0x6A5642: mov     [esp+0C0h+var_84], edx
0x6A5646: mov     [esp+0C0h+var_80], edi
0x6A564A: mov     [eax+8], edi
0x6A564D: add     esi, 0Ch
0x6A5650: call    GetRandomLargeInteger?
0x6A5655: mov     [esp+0C0h+var_AC], eax
0x6A5659: fild    [esp+0C0h+var_AC]
0x6A565D: add     esp, 4
0x6A5660: mov     edi, esi
0x6A5662: mov     ebp, 4
0x6A5667: fmul    qword ptr ds:0A6E740h
0x6A566D: add     esi, 30h ; '0'
0x6A5670: fdiv    qword ptr ds:0A3D5A8h
0x6A5676: fstp    [esp+0BCh+var_AC]
0x6A567A: fld     [esp+0BCh+var_80]
0x6A567E: fst     [esp+0BCh+var_70]
0x6A5682: fadd    [esp+0BCh+var_44]
0x6A5686: fstp    [esp+0BCh+var_48]
0x6A568A: lea     ebx, [ebx+0]
0x6A5690: fld     [esp+0BCh+var_AC]
0x6A5694: call    __CIcos
0x6A5699: fstp    [esp+0BCh+var_A8]
0x6A569D: fld     [esp+0BCh+var_A8]
0x6A56A1: fstp    [esp+0BCh+var_30]
0x6A56A8: fld     [esp+0BCh+var_AC]
0x6A56AC: call    __CIsin
0x6A56B1: fstp    [esp+0BCh+var_A8]
0x6A56B5: fld     [esp+0BCh+var_A8]
0x6A56B9: mov     eax, [ebx]
0x6A56BB: fstp    [esp+0BCh+var_2C]
0x6A56C2: add     eax, edi
0x6A56C4: fld     [esp+0BCh+var_30]
0x6A56CB: add     edi, 0Ch
0x6A56CE: sub     ebp, 1
0x6A56D1: fld     qword ptr ds:0A3F3D0h
0x6A56D7: fmul    st(1), st
0x6A56D9: fxch    st(1)
0x6A56DB: fstp    [esp+0BCh+var_5C]
0x6A56DF: fmul    [esp+0BCh+var_2C]
0x6A56E6: fstp    [esp+0BCh+var_58]
0x6A56EA: fld     [esp+0BCh+var_5C]
0x6A56EE: fadd    [esp+0BCh+a2]
0x6A56F2: fstp    [esp+0BCh+var_50]
0x6A56F6: mov     ecx, [esp+0BCh+var_50]
0x6A56FA: fld     [esp+0BCh+var_84]
0x6A56FE: mov     [eax], ecx
0x6A5700: fadd    [esp+0BCh+var_58]
0x6A5704: mov     ecx, [esp+0BCh+var_48]
0x6A5708: fstp    [esp+0BCh+var_4C]
0x6A570C: mov     edx, [esp+0BCh+var_4C]
0x6A5710: fld     [esp+0BCh+var_AC]
0x6A5714: mov     [eax+4], edx
0x6A5717: fadd    qword ptr ds:0A6E740h
0x6A571D: mov     [eax+8], ecx
0x6A5720: fstp    [esp+0BCh+var_AC]
0x6A5724: jnz     loc_6A5690
0x6A572A: push    0; Seed
0x6A572C: call    GetRandomLargeInteger?
0x6A5731: mov     [esp+0C0h+var_A8], eax
0x6A5735: fild    [esp+0C0h+var_A8]
0x6A5739: add     esp, 4
0x6A573C: mov     edi, esi
0x6A573E: mov     ebp, 8
0x6A5743: fmul    qword ptr ds:0A4D918h
0x6A5749: add     esi, 60h ; '`'
0x6A574C: fdiv    qword ptr ds:0A3D5A8h
0x6A5752: fstp    [esp+0BCh+var_AC]
0x6A5756: fld     [esp+0BCh+var_A0]
0x6A575A: fadd    [esp+0BCh+var_70]
0x6A575E: fstp    [esp+0BCh+var_60]
0x6A5762: fld     [esp+0BCh+var_AC]
0x6A5766: call    __CIcos
0x6A576B: fstp    [esp+0BCh+var_A8]
0x6A576F: fld     [esp+0BCh+var_A8]
0x6A5773: fstp    [esp+0BCh+var_94]
0x6A5777: fld     [esp+0BCh+var_AC]
0x6A577B: call    __CIsin
0x6A5780: fstp    [esp+0BCh+var_A8]
0x6A5784: fld     [esp+0BCh+var_A8]
0x6A5788: mov     eax, [ebx]
0x6A578A: fstp    [esp+0BCh+var_90]
0x6A578E: add     eax, edi
0x6A5790: fld     [esp+0BCh+var_94]
0x6A5794: add     edi, 0Ch
0x6A5797: sub     ebp, 1
0x6A579A: fld     qword ptr ds:0A3F450h
0x6A57A0: fmul    st(1), st
0x6A57A2: fxch    st(1)
0x6A57A4: fstp    [esp+0BCh+var_3C]
0x6A57AB: fmul    [esp+0BCh+var_90]
0x6A57AF: fstp    [esp+0BCh+var_38]
0x6A57B6: fld     [esp+0BCh+var_3C]
0x6A57BD: fadd    [esp+0BCh+a2]
0x6A57C1: fstp    [esp+0BCh+var_68]
0x6A57C5: mov     edx, [esp+0BCh+var_68]
0x6A57C9: fld     [esp+0BCh+var_38]
0x6A57D0: mov     [eax], edx
0x6A57D2: fadd    [esp+0BCh+var_84]
0x6A57D6: mov     edx, [esp+0BCh+var_60]
0x6A57DA: fstp    [esp+0BCh+var_64]
0x6A57DE: mov     ecx, [esp+0BCh+var_64]
0x6A57E2: fld     [esp+0BCh+var_AC]
0x6A57E6: mov     [eax+4], ecx
0x6A57E9: fadd    qword ptr ds:0A4D918h
0x6A57EF: mov     [eax+8], edx
0x6A57F2: fstp    [esp+0BCh+var_AC]
0x6A57F6: jnz     loc_6A5762
0x6A57FC: mov     eax, [esp+0BCh+var_A4]
0x6A5800: mov     eax, [eax+4]
0x6A5803: test    eax, eax
0x6A5805: mov     [esp+0BCh+var_A4], eax
0x6A5809: jnz     loc_6A5620
0x6A580F: mov     eax, [esp+0BCh+var_74]
0x6A5813: pop     edi
0x6A5814: pop     esi
0x6A5815: pop     ebp
0x6A5816: pop     ebx
0x6A5817: add     esp, 0ACh
0x6A581D: retn    0Ch
0x6A5820: call    TESObjectREFR_GetParentCell
0x6A5825: mov     ecx, eax; this
0x6A5827: call    TESObjectCELL_IsInterior
0x6A582C: test    al, al
0x6A582E: jnz     loc_6A59FA
0x6A5834: xor     ecx, ecx
0x6A5836: mov     eax, 64h ; 'd'
0x6A583B: mov     [esp+0BCh+var_74], eax
0x6A583F: mov     edx, 0Ch
0x6A5844: mul     edx
0x6A5846: seto    cl
0x6A5849: neg     ecx
0x6A584B: or      ecx, eax
0x6A584D: push    ecx; Size
0x6A584E: call    FormHeapAlloc
0x6A5853: mov     ebx, [esp+0C0h+arg_0]
0x6A585A: mov     [ebx], eax
0x6A585C: mov     eax, [esi]
0x6A585E: mov     edx, [eax+174h]
0x6A5864: add     esp, 4
0x6A5867: mov     ecx, esi
0x6A5869: call    edx
0x6A586B: mov     ecx, [eax]
0x6A586D: mov     edx, [eax+4]
0x6A5870: mov     eax, [eax+8]
0x6A5873: mov     dword ptr [esp+0BCh+var_A0], ecx
0x6A5877: mov     ecx, [esi+20h]
0x6A587A: mov     [esp+0BCh+var_98], eax
0x6A587E: mov     eax, [esi+28h]
0x6A5881: mov     dword ptr [esp+0BCh+var_A0+4], edx
0x6A5885: mov     edx, [esi+24h]
0x6A5888: mov     [esp+0BCh+var_8C], eax
0x6A588C: fld     [esp+0BCh+var_8C]
0x6A5890: push    ecx
0x6A5891: mov     [esp+0C0h+var_94], ecx
0x6A5895: fstp    [esp+0C0h+var_C0]; float
0x6A5898: lea     ecx, [esp+0C0h+var_24]
0x6A589F: mov     [esp+0C0h+var_90], edx
0x6A58A3: call    NiMatrix33_InitRotationTransform
0x6A58A8: fldz
0x6A58AA: fst     [esp+0BCh+var_94]
0x6A58AE: lea     ecx, [esp+0BCh+var_94]
0x6A58B2: fld     dword ptr ds:0A2FE78h
0x6A58B8: push    ecx
0x6A58B9: fstp    [esp+0C0h+var_90]
0x6A58BD: lea     edx, [esp+0C0h+var_30]
0x6A58C4: push    edx
0x6A58C5: lea     ecx, [esp+0C4h+var_24]
0x6A58CC: fstp    [esp+0C4h+var_8C]
0x6A58D0: call    sub_7101F0
0x6A58D5: fld     dword ptr [eax]
0x6A58D7: xor     ebp, ebp
0x6A58D9: fadd    dword ptr [esp+0BCh+var_A0]
0x6A58DD: mov     [esp+0BCh+var_A4], ebp
0x6A58E1: fstp    dword ptr [esp+0BCh+var_A0]
0x6A58E5: fld     dword ptr [eax+4]
0x6A58E8: fadd    dword ptr [esp+0BCh+var_A0+4]
0x6A58EC: fstp    dword ptr [esp+0BCh+var_A0+4]
0x6A58F0: fld     dword ptr [eax+8]
0x6A58F3: fadd    [esp+0BCh+var_98]
0x6A58F7: fstp    [esp+0BCh+var_98]
0x6A58FB: fld     dword ptr [esp+0BCh+var_A0]
0x6A58FF: fld     qword ptr ds:0A529C0h
0x6A5905: fsub    st(1), st
0x6A5907: fxch    st(1)
0x6A5909: fstp    dword ptr [esp+0BCh+var_A0]
0x6A590D: fsubr   dword ptr [esp+0BCh+var_A0+4]
0x6A5911: fstp    dword ptr [esp+0BCh+var_A0+4]
0x6A5915: fld     [esp+0BCh+var_98]
0x6A5919: fldz
0x6A591B: fsub    st(1), st
0x6A591D: fxch    st(1)
0x6A591F: fstp    [esp+0BCh+var_98]
0x6A5923: fld     dword ptr [esp+0BCh+var_A0]
0x6A5927: fstp    [esp+0BCh+var_70]
0x6A592B: fadd    [esp+0BCh+var_98]
0x6A592F: fstp    dword ptr [esp+0BCh+var_44]
0x6A5933: fild    [esp+0BCh+var_A4]
0x6A5937: xor     edi, edi
0x6A5939: mov     esi, ebp
0x6A593B: mov     [esp+0BCh+var_AC], edi
0x6A593F: fmul    qword ptr ds:0A3F3D0h
0x6A5945: add     ebp, 78h ; 'x'
0x6A5948: fstp    [esp+0BCh+var_94]
0x6A594C: fld     [esp+0BCh+var_94]
0x6A5950: fadd    [esp+0BCh+var_70]
0x6A5954: fstp    [esp+0BCh+var_A8]
0x6A5958: jmp     short loc_6A5960
0x6A595A: align 10h
0x6A5960: fild    [esp+0BCh+var_AC]
0x6A5964: lea     eax, [esp+0BCh+a3]
0x6A5968: push    eax; a3
0x6A5969: lea     ecx, [esp+0C0h+a2]
0x6A596D: fmul    qword ptr ds:0A3F3D0h
0x6A5973: push    ecx; a2
0x6A5974: mov     ecx, ds:0B333A0h; this
0x6A597A: fstp    [esp+0C4h+var_90]
0x6A597E: fld     [esp+0C4h+var_A8]
0x6A5982: fstp    [esp+0C4h+a2]
0x6A5986: fld     [esp+0C4h+var_90]
0x6A598A: fadd    dword ptr [esp+0C4h+var_A0+4]
0x6A598E: fstp    [esp+0C4h+var_84]
0x6A5992: fld     dword ptr [esp+0C4h+var_44]
0x6A5999: fstp    [esp+0C4h+var_80]
0x6A599D: call    GetTerrainHeight
0x6A59A2: test    al, al
0x6A59A4: jz      short loc_6A59AE
0x6A59A6: fld     [esp+0BCh+a3]
0x6A59AA: fstp    [esp+0BCh+var_80]
0x6A59AE: mov     eax, [ebx]
0x6A59B0: mov     edx, [esp+0BCh+a2]
0x6A59B4: add     eax, esi
0x6A59B6: mov     [eax], edx
0x6A59B8: mov     ecx, [esp+0BCh+var_84]
0x6A59BC: mov     [eax+4], ecx
0x6A59BF: mov     edx, [esp+0BCh+var_80]
0x6A59C3: add     edi, 1
0x6A59C6: add     esi, 0Ch
0x6A59C9: cmp     edi, 0Ah
0x6A59CC: mov     [eax+8], edx
0x6A59CF: mov     [esp+0BCh+var_AC], edi
0x6A59D3: jl      short loc_6A5960
0x6A59D5: mov     eax, [esp+0BCh+var_A4]
0x6A59D9: add     eax, 1
0x6A59DC: cmp     eax, 0Ah
0x6A59DF: mov     [esp+0BCh+var_A4], eax
0x6A59E3: jl      loc_6A5933
0x6A59E9: mov     eax, [esp+0BCh+var_74]
0x6A59ED: pop     edi
0x6A59EE: pop     esi
0x6A59EF: pop     ebp
0x6A59F0: pop     ebx
0x6A59F1: add     esp, 0ACh
0x6A59F7: retn    0Ch
0x6A59FA: pop     edi
0x6A59FB: pop     esi
0x6A59FC: pop     ebp
0x6A59FD: xor     eax, eax
0x6A59FF: pop     ebx
0x6A5A00: add     esp, 0ACh
0x6A5A06: retn    0Ch
