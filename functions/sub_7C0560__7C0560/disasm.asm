0x7C0560: push    0FFFFFFFFh
0x7C0562: push    offset SEH_7C0560
0x7C0567: mov     eax, large fs:0
0x7C056D: push    eax
0x7C056E: sub     esp, 10h
0x7C0571: push    ebx
0x7C0572: push    ebp
0x7C0573: push    esi
0x7C0574: push    edi
0x7C0575: mov     eax, ds:0B30AACh
0x7C057A: xor     eax, esp
0x7C057C: push    eax
0x7C057D: lea     eax, [esp+30h+var_C]
0x7C0581: mov     large fs:0, eax
0x7C0587: mov     ebp, ecx
0x7C0589: mov     eax, [ebp+0]
0x7C058C: mov     edx, [eax+80h]
0x7C0592: call    edx
0x7C0594: xor     ebx, ebx
0x7C0596: xor     edi, edi
0x7C0598: mov     [esp+30h+var_18], ebx
0x7C059C: xor     ecx, ecx
0x7C059E: mov     [esp+30h+var_4], edi
0x7C05A2: mov     [esp+30h+var_1C], ecx
0x7C05A6: mov     eax, [ebp+0D0h]
0x7C05AC: cmp     eax, 0Ch; switch 13 cases
0x7C05AF: mov     byte ptr [esp+30h+var_4], 1
0x7C05B4: ja      def_7C05BA
0x7C05BA: jmp     ds:jpt_7C05BA[eax*4]; switch jump
0x7C05C1: lea     eax, [ebp+0D4h]; jumptable 007C05BA case 0
0x7C05C7: push    eax
0x7C05C8: lea     ecx, [esp+34h+var_18]
0x7C05CC: call    sub_76C890
0x7C05D1: mov     ebx, [esp+30h+var_18]
0x7C05D5: mov     ecx, [ebx+24h]
0x7C05D8: mov     eax, [ecx]
0x7C05DA: jmp     loc_7C0AC7
0x7C05DF: call    sub_5070E0; jumptable 007C05BA case 1
0x7C05E4: call    Double_To_SInt32
0x7C05E9: add     eax, 0FFFFFFFFh
0x7C05EC: cmp     eax, 6
0x7C05EF: jg      short loc_7C0600
0x7C05F1: cmp     eax, edi
0x7C05F3: jge     short loc_7C05FB
0x7C05F5: mov     [esp+30h+var_14], edi
0x7C05F9: jmp     short loc_7C060E
0x7C05FB: cmp     eax, 6
0x7C05FE: jle     short loc_7C060A
0x7C0600: mov     [esp+30h+var_14], 6
0x7C0608: jmp     short loc_7C060E
0x7C060A: mov     [esp+30h+var_14], eax
0x7C060E: lea     edx, [ebp+0D8h]
0x7C0614: push    edx
0x7C0615: lea     ecx, [esp+34h+var_18]
0x7C0619: call    sub_76C890
0x7C061E: mov     ebx, [esp+30h+var_18]
0x7C0622: mov     eax, [ebx+24h]
0x7C0625: mov     eax, [eax]
0x7C0627: push    eax
0x7C0628: lea     ecx, [esp+34h+var_1C]
0x7C062C: call    sub_7AEC20
0x7C0631: mov     ecx, [ebp+7Ch]; this
0x7C0634: call    BSRenderedTexture__GetInnerTexture
0x7C0639: mov     ecx, [esp+30h+var_1C]; this
0x7C063D: push    eax; a2
0x7C063E: call    sub_76C910
0x7C0643: mov     eax, [ebp+7Ch]
0x7C0646: mov     ecx, [eax+20h]
0x7C0649: cmp     ecx, edi
0x7C064B: jz      short loc_7C0656
0x7C064D: mov     edx, [ecx]
0x7C064F: mov     eax, [edx+4Ch]
0x7C0652: call    eax
0x7C0654: jmp     short loc_7C0658
0x7C0656: xor     eax, eax
0x7C0658: test    eax, eax
0x7C065A: mov     [esp+30h+var_10], eax
0x7C065E: fild    [esp+30h+var_10]
0x7C0662: jge     short loc_7C066A
0x7C0664: fadd    dword ptr ds:0A2FC78h
0x7C066A: fld1
0x7C066C: mov     esi, [esp+30h+var_14]
0x7C0670: fdivrp  st(1), st
0x7C0672: imul    esi, 0F0h ; 'ð'
0x7C0678: add     esi, offset unk_A8F918
0x7C067E: mov     ecx, 3Ch ; '<'
0x7C0683: mov     edi, offset unk_B43228
0x7C0688: rep movsd
0x7C068A: mov     ecx, [esp+30h+var_14]
0x7C068E: mov     eax, offset unk_B43240
0x7C0693: fstp    dword ptr ds:0B2C794h
0x7C0699: fldz
0x7C069B: fstp    dword ptr ds:0B2C798h
0x7C06A1: fld     dword ptr ds:0A8F8F8h[ecx*4]
0x7C06A8: fld     dword ptr [eax-10h]
0x7C06AB: add     eax, 50h ; 'P'
0x7C06AE: cmp     eax, offset flt_B43330
0x7C06B3: fdiv    st, st(1)
0x7C06B5: fstp    dword ptr [eax-60h]
0x7C06B8: fld     dword ptr [eax-50h]
0x7C06BB: fdiv    st, st(1)
0x7C06BD: fstp    dword ptr [eax-50h]
0x7C06C0: fld     dword ptr [eax-40h]
0x7C06C3: fdiv    st, st(1)
0x7C06C5: fstp    dword ptr [eax-40h]
0x7C06C8: fld     dword ptr [eax-30h]
0x7C06CB: fdiv    st, st(1)
0x7C06CD: fstp    dword ptr [eax-30h]
0x7C06D0: fld     dword ptr [eax-20h]
0x7C06D3: fdiv    st, st(1)
0x7C06D5: fstp    dword ptr [eax-20h]
0x7C06D8: jl      short loc_7C06A8
0x7C06DA: fstp    st
0x7C06DC: jmp     loc_7C0AE3
0x7C06E1: call    sub_5070E0; jumptable 007C05BA case 2
0x7C06E6: call    Double_To_SInt32
0x7C06EB: add     eax, 0FFFFFFFFh
0x7C06EE: cmp     eax, 6
0x7C06F1: jg      short loc_7C0702
0x7C06F3: cmp     eax, edi
0x7C06F5: jge     short loc_7C06FD
0x7C06F7: mov     [esp+30h+var_14], edi
0x7C06FB: jmp     short loc_7C0710
0x7C06FD: cmp     eax, 6
0x7C0700: jle     short loc_7C070C
0x7C0702: mov     [esp+30h+var_14], 6
0x7C070A: jmp     short loc_7C0710
0x7C070C: mov     [esp+30h+var_14], eax
0x7C0710: lea     edx, [ebp+0DCh]
0x7C0716: push    edx
0x7C0717: lea     ecx, [esp+34h+var_18]
0x7C071B: call    sub_76C890
0x7C0720: mov     ebx, [esp+30h+var_18]
0x7C0724: mov     eax, [ebx+24h]
0x7C0727: mov     eax, [eax]
0x7C0729: push    eax
0x7C072A: lea     ecx, [esp+34h+var_1C]
0x7C072E: call    sub_7AEC20
0x7C0733: mov     ecx, [ebp+7Ch]; this
0x7C0736: call    BSRenderedTexture__GetInnerTexture
0x7C073B: mov     ecx, [esp+30h+var_1C]; this
0x7C073F: push    eax; a2
0x7C0740: call    sub_76C910
0x7C0745: fldz
0x7C0747: fstp    dword ptr ds:0B2C794h
0x7C074D: mov     eax, [ebp+7Ch]
0x7C0750: mov     ecx, [eax+20h]
0x7C0753: cmp     ecx, edi
0x7C0755: jz      short loc_7C0760
0x7C0757: mov     edx, [ecx]
0x7C0759: mov     eax, [edx+4Ch]
0x7C075C: call    eax
0x7C075E: jmp     short loc_7C0762
0x7C0760: xor     eax, eax
0x7C0762: test    eax, eax
0x7C0764: mov     [esp+30h+var_10], eax
0x7C0768: fild    [esp+30h+var_10]
0x7C076C: jge     short loc_7C0774
0x7C076E: fadd    dword ptr ds:0A2FC78h
0x7C0774: fld1
0x7C0776: mov     esi, [esp+30h+var_14]
0x7C077A: fdivrp  st(1), st
0x7C077C: imul    esi, 0F0h ; 'ð'
0x7C0782: add     esi, offset unk_A8F918
0x7C0788: mov     ecx, 3Ch ; '<'
0x7C078D: mov     edi, offset unk_B43228
0x7C0792: rep movsd
0x7C0794: mov     ecx, [esp+30h+var_14]
0x7C0798: mov     eax, offset unk_B43240
0x7C079D: fstp    dword ptr ds:0B2C798h
0x7C07A3: fld     dword ptr ds:0A8F8F8h[ecx*4]
0x7C07AA: fld     dword ptr [eax-10h]
0x7C07AD: add     eax, 50h ; 'P'
0x7C07B0: cmp     eax, offset flt_B43330
0x7C07B5: fdiv    st, st(1)
0x7C07B7: fstp    dword ptr [eax-60h]
0x7C07BA: fld     dword ptr [eax-50h]
0x7C07BD: fdiv    st, st(1)
0x7C07BF: fstp    dword ptr [eax-50h]
0x7C07C2: fld     dword ptr [eax-40h]
0x7C07C5: fdiv    st, st(1)
0x7C07C7: fstp    dword ptr [eax-40h]
0x7C07CA: fld     dword ptr [eax-30h]
0x7C07CD: fdiv    st, st(1)
0x7C07CF: fstp    dword ptr [eax-30h]
0x7C07D2: fld     dword ptr [eax-20h]
0x7C07D5: fdiv    st, st(1)
0x7C07D7: fstp    dword ptr [eax-20h]
0x7C07DA: jl      short loc_7C07AA
0x7C07DC: fstp    st
0x7C07DE: jmp     loc_7C0AE3
0x7C07E3: lea     edx, [ebp+0E0h]; jumptable 007C05BA cases 3-6
0x7C07E9: push    edx
0x7C07EA: lea     ecx, [esp+34h+var_18]
0x7C07EE: call    sub_76C890
0x7C07F3: mov     ebx, [esp+30h+var_18]
0x7C07F7: mov     eax, [ebx+24h]
0x7C07FA: mov     eax, [eax]
0x7C07FC: push    eax
0x7C07FD: lea     ecx, [esp+34h+var_1C]
0x7C0801: call    sub_7AEC20
0x7C0806: mov     ecx, [ebp+7Ch]; this
0x7C0809: call    BSRenderedTexture__GetInnerTexture
0x7C080E: mov     ecx, [esp+30h+var_1C]; this
0x7C0812: push    eax; a2
0x7C0813: call    sub_76C910
0x7C0818: mov     eax, [ebp+0D0h]
0x7C081E: cmp     eax, 3
0x7C0821: jz      short loc_7C0854
0x7C0823: cmp     eax, 4
0x7C0826: jz      short loc_7C0854
0x7C0828: cmp     eax, 6
0x7C082B: jnz     short loc_7C089B
0x7C082D: mov     ecx, 24h ; '$'
0x7C0832: mov     esi, offset unk_B2C8E8
0x7C0837: mov     edi, offset unk_B43228
0x7C083C: rep movsd
0x7C083E: mov     eax, [ebp+94h]
0x7C0844: push    eax; a2
0x7C0845: mov     ecx, ebx; this
0x7C0847: call    sub_7AECB0
0x7C084C: mov     eax, [ebp+0B4h]
0x7C0852: jmp     short loc_7C0893
0x7C0854: cmp     byte ptr ds:0B43071h, 0
0x7C085B: jnz     short loc_7C086E
0x7C085D: mov     ecx, 40h ; '@'
0x7C0862: mov     esi, offset unk_B2C7E8
0x7C0867: mov     edi, offset unk_B43228
0x7C086C: jmp     short loc_7C087D
0x7C086E: mov     ecx, 10h
0x7C0873: mov     esi, offset unk_B2C7A8
0x7C0878: mov     edi, offset unk_B43228
0x7C087D: rep movsd
0x7C087F: mov     eax, [ebp+90h]
0x7C0885: push    eax; a2
0x7C0886: mov     ecx, ebx; this
0x7C0888: call    sub_7AECB0
0x7C088D: mov     eax, [ebp+0B0h]
0x7C0893: push    eax; a2
0x7C0894: mov     ecx, ebx; this
0x7C0896: call    sub_7AEC60
0x7C089B: mov     eax, [ebp+7Ch]
0x7C089E: mov     ecx, [eax+20h]
0x7C08A1: test    ecx, ecx
0x7C08A3: jz      short loc_7C08AE
0x7C08A5: mov     edx, [ecx]
0x7C08A7: mov     eax, [edx+4Ch]
0x7C08AA: call    eax
0x7C08AC: jmp     short loc_7C08B0
0x7C08AE: xor     eax, eax
0x7C08B0: test    eax, eax
0x7C08B2: mov     [esp+30h+var_10], eax
0x7C08B6: fild    [esp+30h+var_10]
0x7C08BA: jge     short loc_7C08C2
0x7C08BC: fadd    dword ptr ds:0A2FC78h
0x7C08C2: fld1
0x7C08C4: fdivrp  st(1), st
0x7C08C6: fstp    dword ptr ds:0B2C794h
0x7C08CC: mov     eax, [ebp+7Ch]
0x7C08CF: mov     ecx, [eax+20h]
0x7C08D2: test    ecx, ecx
0x7C08D4: jz      short loc_7C08DF
0x7C08D6: mov     edx, [ecx]
0x7C08D8: mov     eax, [edx+50h]
0x7C08DB: call    eax
0x7C08DD: jmp     short loc_7C08E1
0x7C08DF: xor     eax, eax
0x7C08E1: test    eax, eax
0x7C08E3: mov     [esp+30h+var_10], eax
0x7C08E7: fild    [esp+30h+var_10]
0x7C08EB: jge     short loc_7C08F3
0x7C08ED: fadd    dword ptr ds:0A2FC78h
0x7C08F3: fld1
0x7C08F5: fdivrp  st(1), st
0x7C08F7: fstp    dword ptr ds:0B2C798h
0x7C08FD: jmp     loc_7C0AE3
0x7C0902: lea     ecx, [ebp+0F0h]; jumptable 007C05BA case 7
0x7C0908: push    ecx
0x7C0909: lea     ecx, [esp+34h+var_18]
0x7C090D: call    sub_76C890
0x7C0912: mov     ebx, [esp+30h+var_18]
0x7C0916: mov     edx, [ebx+24h]
0x7C0919: mov     eax, [edx]
0x7C091B: jmp     loc_7C0AC7
0x7C0920: lea     eax, [ebp+0F4h]; jumptable 007C05BA case 8
0x7C0926: jmp     loc_7C05C7
0x7C092B: call    sub_5071A0; jumptable 007C05BA case 9
0x7C0930: fstp    dword ptr [ebp+108h]
0x7C0936: lea     edx, [ebp+0F8h]
0x7C093C: push    edx
0x7C093D: lea     ecx, [esp+34h+var_18]
0x7C0941: call    sub_76C890
0x7C0946: mov     ebx, [esp+30h+var_18]
0x7C094A: mov     eax, [ebx+24h]
0x7C094D: mov     eax, [eax]
0x7C094F: push    eax
0x7C0950: lea     ecx, [esp+34h+var_1C]
0x7C0954: call    sub_7AEC20
0x7C0959: mov     ecx, [ebp+7Ch]; this
0x7C095C: call    BSRenderedTexture__GetInnerTexture
0x7C0961: mov     ecx, [esp+30h+var_1C]; this
0x7C0965: push    eax; a2
0x7C0966: call    sub_76C910
0x7C096B: mov     ecx, [ebx+24h]
0x7C096E: mov     eax, [ecx+4]
0x7C0971: push    eax
0x7C0972: lea     ecx, [esp+34h+var_1C]
0x7C0976: call    sub_7AEC20
0x7C097B: mov     eax, [ebp+118h]
0x7C0981: mov     ecx, [esp+30h+var_1C]; this
0x7C0985: push    eax; a2
0x7C0986: call    sub_76C910
0x7C098B: mov     edx, [ebx+24h]
0x7C098E: mov     eax, [edx+8]
0x7C0991: push    eax
0x7C0992: lea     ecx, [esp+34h+var_1C]
0x7C0996: call    sub_7AEC20
0x7C099B: mov     eax, [ebp+11Ch]
0x7C09A1: jmp     loc_7C0AD9
0x7C09A6: call    sub_507060; jumptable 007C05BA case 10
0x7C09AB: fstp    dword ptr [ebp+108h]
0x7C09B1: call    sub_5070A0
0x7C09B6: fstp    dword ptr [ebp+10Ch]
0x7C09BC: lea     eax, [ebp+0FCh]
0x7C09C2: jmp     loc_7C05C7
0x7C09C7: push    1; jumptable 007C05BA case 11
0x7C09C9: push    1
0x7C09CB: call    GetTimer
0x7C09D0: fmul    qword ptr ds:0A492F0h
0x7C09D6: add     esp, 8
0x7C09D9: fcomp   qword ptr ds:0A2FC68h
0x7C09DF: fnstsw  ax
0x7C09E1: test    ah, 5
0x7C09E4: jnp     short loc_7C0A07
0x7C09E6: push    1
0x7C09E8: push    1
0x7C09EA: call    GetTimer
0x7C09EF: fmul    qword ptr ds:0A492F0h
0x7C09F5: fld1
0x7C09F7: add     esp, 8
0x7C09FA: fcom    st(1)
0x7C09FC: fnstsw  ax
0x7C09FE: fstp    st(1)
0x7C0A00: test    ah, 5
0x7C0A03: jnp     short loc_7C0A3A
0x7C0A05: fstp    st
0x7C0A07: push    1
0x7C0A09: push    1
0x7C0A0B: call    GetTimer
0x7C0A10: fmul    qword ptr ds:0A492F0h
0x7C0A16: fldz
0x7C0A18: add     esp, 8
0x7C0A1B: fcom    st(1)
0x7C0A1D: fnstsw  ax
0x7C0A1F: fstp    st(1)
0x7C0A21: test    ah, 41h
0x7C0A24: jz      short loc_7C0A3A
0x7C0A26: push    1
0x7C0A28: fstp    st
0x7C0A2A: push    1
0x7C0A2C: call    GetTimer
0x7C0A31: fmul    qword ptr ds:0A492F0h
0x7C0A37: add     esp, 8
0x7C0A3A: fstp    dword ptr [ebp+88h]
0x7C0A40: call    sub_507110
0x7C0A45: fstp    dword ptr [ebp+110h]
0x7C0A4B: call    sub_507170
0x7C0A50: lea     edx, [ebp+100h]
0x7C0A56: fstp    dword ptr [ebp+114h]
0x7C0A5C: push    edx
0x7C0A5D: lea     ecx, [esp+34h+var_18]
0x7C0A61: call    sub_76C890
0x7C0A66: mov     ebx, [esp+30h+var_18]
0x7C0A6A: mov     eax, [ebx+24h]
0x7C0A6D: mov     eax, [eax]
0x7C0A6F: push    eax
0x7C0A70: lea     ecx, [esp+34h+var_1C]
0x7C0A74: call    sub_7AEC20
0x7C0A79: mov     ecx, [ebp+7Ch]; this
0x7C0A7C: call    BSRenderedTexture__GetInnerTexture
0x7C0A81: mov     ecx, [esp+30h+var_1C]; this
0x7C0A85: push    eax; a2
0x7C0A86: call    sub_76C910
0x7C0A8B: mov     ecx, [ebx+24h]
0x7C0A8E: mov     eax, [ecx+4]
0x7C0A91: push    eax
0x7C0A92: lea     ecx, [esp+34h+var_1C]
0x7C0A96: call    sub_7AEC20
0x7C0A9B: mov     eax, [ebp+118h]
0x7C0AA1: jmp     short loc_7C0AD9
0x7C0AA3: call    sub_507170; jumptable 007C05BA case 12
0x7C0AA8: fstp    dword ptr [ebp+108h]
0x7C0AAE: lea     edx, [ebp+104h]
0x7C0AB4: push    edx
0x7C0AB5: lea     ecx, [esp+34h+var_18]
0x7C0AB9: call    sub_76C890
0x7C0ABE: mov     ebx, [esp+30h+var_18]
0x7C0AC2: mov     eax, [ebx+24h]
0x7C0AC5: mov     eax, [eax]
0x7C0AC7: push    eax
0x7C0AC8: lea     ecx, [esp+34h+var_1C]
0x7C0ACC: call    sub_7AEC20
0x7C0AD1: mov     ecx, [ebp+7Ch]; this
0x7C0AD4: call    BSRenderedTexture__GetInnerTexture
0x7C0AD9: mov     ecx, [esp+30h+var_1C]; this
0x7C0ADD: push    eax; a2
0x7C0ADE: call    sub_76C910
0x7C0AE3: mov     edx, [ebp+38h]
0x7C0AE6: lea     ecx, [esp+30h+var_18]
0x7C0AEA: push    ecx
0x7C0AEB: push    edx
0x7C0AEC: lea     ecx, [ebp+40h]
0x7C0AEF: call    sub_76CE40
0x7C0AF4: add     dword ptr [ebp+38h], 1
0x7C0AF8: mov     ecx, [esp+30h+var_1C]
0x7C0AFC: xor     edi, edi
