0x741760: sub     esp, 0B0h
0x741766: cmp     [esp+0B0h+arg_8], 0
0x74176E: push    ebx
0x74176F: push    ebp
0x741770: mov     ebp, [esp+0B8h+arg_0]
0x741777: push    esi
0x741778: push    edi
0x741779: mov     esi, ecx
0x74177B: jz      loc_7418FB
0x741781: lea     ebx, [esi+30h]
0x741784: push    ebx
0x741785: lea     eax, [esp+0C4h+var_24]
0x74178C: push    eax
0x74178D: mov     ecx, ebp
0x74178F: call    NiMAtrix33_Multiply
0x741794: push    eax
0x741795: lea     ecx, [esp+0C4h+var_54]
0x741799: push    ecx
0x74179A: mov     ecx, ebx
0x74179C: call    sub_710490
0x7417A1: lea     edi, [esi+54h]
0x7417A4: push    edi
0x7417A5: lea     edx, [esp+0C4h+var_30]
0x7417AC: push    edx
0x7417AD: mov     ecx, ebp
0x7417AF: call    sub_7101F0
0x7417B4: mov     ecx, [esp+0C0h+arg_4]
0x7417BB: fld     dword ptr [ecx]
0x7417BD: push    ebx
0x7417BE: fadd    dword ptr [eax]
0x7417C0: fstp    [esp+0C4h+var_9C]
0x7417C4: fld     dword ptr [eax+4]
0x7417C7: fadd    dword ptr [ecx+4]
0x7417CA: fstp    [esp+0C4h+var_98]
0x7417CE: fld     dword ptr [eax+8]
0x7417D1: lea     eax, [esp+0C4h+var_90]
0x7417D5: fadd    dword ptr [ecx+8]
0x7417D8: push    eax
0x7417D9: lea     ecx, [esp+0C8h+var_84]
0x7417DD: push    ecx
0x7417DE: fstp    [esp+0CCh+var_94]
0x7417E2: fld     [esp+0CCh+var_9C]
0x7417E6: fsub    dword ptr [edi]
0x7417E8: fstp    [esp+0CCh+var_90]
0x7417EC: fld     [esp+0CCh+var_98]
0x7417F0: fsub    dword ptr [edi+4]
0x7417F3: fstp    [esp+0CCh+var_8C]
0x7417F7: fld     [esp+0CCh+var_94]
0x7417FB: fsub    dword ptr [edi+8]
0x7417FE: fstp    [esp+0CCh+var_88]
0x741802: fld     dword ptr [esi+60h]
0x741805: fstp    [esp+0CCh+var_AC]
0x741809: call    sub_710250
0x74180E: fld     [esp+0CCh+var_AC]
0x741812: add     esp, 0Ch
0x741815: fld1
0x741817: lea     edx, [esp+0C0h+var_78]
0x74181B: fdivrp  st(1), st
0x74181D: push    edx
0x74181E: lea     ecx, [esp+0C4h+var_54]
0x741822: fstp    [esp+0C4h+var_AC]
0x741826: fld     dword ptr [eax+4]
0x741829: fld     [esp+0C4h+var_AC]
0x74182D: fld     st
0x74182F: fmulp   st(2), st
0x741831: fxch    st(1)
0x741833: fstp    [esp+0C4h+var_AC]
0x741837: fld     dword ptr [eax+8]
0x74183A: fmul    st, st(1)
0x74183C: fstp    [esp+0C4h+var_B0]
0x741840: fmul    dword ptr [eax]
0x741842: fstp    [esp+0C4h+var_A8]
0x741846: fld     [esp+0C4h+var_AC]
0x74184A: fstp    [esp+0C4h+var_A4]
0x74184E: fld     [esp+0C4h+var_B0]
0x741852: fstp    [esp+0C4h+var_A0]
0x741856: call    sub_7102B0
0x74185B: lea     eax, [esp+0C0h+var_78]
0x74185F: push    eax
0x741860: lea     edi, [esi+0DCh]
0x741866: lea     ecx, [esp+0C4h+var_84]
0x74186A: push    edi
0x74186B: push    ecx
0x74186C: call    sub_710250
0x741871: mov     edx, [eax]
0x741873: mov     [edi], edx
0x741875: mov     ecx, [eax+4]
0x741878: mov     [edi+4], ecx
0x74187B: mov     edx, [eax+8]
0x74187E: add     esp, 0Ch
0x741881: mov     [edi+8], edx
0x741884: fld     dword ptr [edi+4]
0x741887: fmul    [esp+0C0h+var_A4]
0x74188B: fld     dword ptr [edi]
0x74188D: fmul    [esp+0C0h+var_A8]
0x741891: faddp   st(1), st
0x741893: fld     dword ptr [edi+8]
0x741896: xor     edi, edi
0x741898: cmp     [esi+0B6h], di
0x74189F: fmul    [esp+0C0h+var_A0]
0x7418A3: faddp   st(1), st
0x7418A5: fstp    [esp+0C0h+var_B0]
0x7418A9: fld     [esp+0C0h+var_B0]
0x7418AD: fadd    dword ptr [esi+0E8h]
0x7418B3: fstp    dword ptr [esi+0E8h]
0x7418B9: jbe     loc_741996
0x7418BF: nop
0x7418C0: mov     eax, [esi+0B0h]
0x7418C6: mov     ecx, [eax+edi*4]
0x7418C9: test    ecx, ecx
0x7418CB: jz      short loc_7418E0
0x7418CD: mov     edx, [ecx]
0x7418CF: mov     edx, [edx+54h]
0x7418D2: push    1
0x7418D4: lea     eax, [esp+0C4h+var_A8]
0x7418D8: push    eax
0x7418D9: lea     eax, [esp+0C8h+var_54]
0x7418DD: push    eax
0x7418DE: call    edx
0x7418E0: movzx   eax, word ptr [esi+0B6h]
0x7418E7: add     edi, 1
0x7418EA: cmp     edi, eax
0x7418EC: jb      short loc_7418C0
0x7418EE: pop     edi
0x7418EF: pop     esi
0x7418F0: pop     ebp
0x7418F1: pop     ebx
0x7418F2: add     esp, 0B0h
0x7418F8: retn    0Ch
0x7418FB: lea     ecx, [esp+0C0h+var_78]
0x7418FF: push    ecx
0x741900: mov     ecx, ebp
0x741902: call    sub_7102B0
0x741907: lea     edx, [esp+0C0h+var_78]
0x74190B: push    edx
0x74190C: lea     edi, [esi+0DCh]
0x741912: lea     eax, [esp+0C4h+var_84]
0x741916: push    edi
0x741917: push    eax
0x741918: call    sub_710250
0x74191D: mov     ecx, [eax]
0x74191F: mov     ebx, [esp+0CCh+arg_4]
0x741926: mov     [edi], ecx
0x741928: mov     edx, [eax+4]
0x74192B: mov     [edi+4], edx
0x74192E: mov     eax, [eax+8]
0x741931: mov     [edi+8], eax
0x741934: fld     dword ptr [edi+4]
0x741937: fmul    dword ptr [ebx+4]
0x74193A: add     esp, 0Ch
0x74193D: fld     dword ptr [ebx]
0x74193F: fmul    dword ptr [edi]
0x741941: faddp   st(1), st
0x741943: fld     dword ptr [edi+8]
0x741946: xor     edi, edi
0x741948: cmp     [esi+0B6h], di
0x74194F: fmul    dword ptr [ebx+8]
0x741952: faddp   st(1), st
0x741954: fstp    [esp+0C0h+var_B0]
0x741958: fld     [esp+0C0h+var_B0]
0x74195C: fadd    dword ptr [esi+0E8h]
0x741962: fstp    dword ptr [esi+0E8h]
0x741968: jbe     short loc_741996
0x74196A: lea     ebx, [ebx+0]
0x741970: mov     ecx, [esi+0B0h]
0x741976: mov     ecx, [ecx+edi*4]
0x741979: test    ecx, ecx
0x74197B: jz      short loc_741988
0x74197D: mov     edx, [ecx]
0x74197F: mov     eax, [edx+54h]
0x741982: push    1
0x741984: push    ebx
0x741985: push    ebp
0x741986: call    eax
0x741988: movzx   ecx, word ptr [esi+0B6h]
0x74198F: add     edi, 1
0x741992: cmp     edi, ecx
0x741994: jb      short loc_741970
0x741996: pop     edi
0x741997: pop     esi
0x741998: pop     ebp
0x741999: pop     ebx
0x74199A: add     esp, 0B0h
0x7419A0: retn    0Ch
