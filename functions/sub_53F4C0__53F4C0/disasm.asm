0x53F4C0: sub     esp, 20h
0x53F4C3: push    ebx
0x53F4C4: push    ebp
0x53F4C5: push    esi
0x53F4C6: mov     esi, ecx
0x53F4C8: push    edi
0x53F4C9: mov     [esp+30h+var_1C], esi
0x53F4CD: call    Sky_CreateOrGetGlobalObject
0x53F4D2: mov     ebx, eax
0x53F4D4: mov     eax, [ebx+0DCh]
0x53F4DA: xor     ebp, ebp
0x53F4DC: cmp     eax, 1
0x53F4DF: jz      short loc_53F4EA
0x53F4E1: cmp     eax, ebp
0x53F4E3: mov     [esp+30h+var_1D], 0
0x53F4E8: jnz     short loc_53F4EF
0x53F4EA: mov     [esp+30h+var_1D], 1
0x53F4EF: mov     edi, [ebx+10h]
0x53F4F2: fld     dword ptr [ebx+0D8h]
0x53F4F8: cmp     edi, ebp
0x53F4FA: fstp    [esp+30h+var_10]
0x53F4FE: mov     eax, [ebx+14h]
0x53F501: fld     qword ptr ds:0A3F398h
0x53F507: jz      short loc_53F529
0x53F509: movzx   ecx, byte ptr [edi+4Eh]
0x53F50D: mov     [esp+30h+var_C], ecx
0x53F511: fild    [esp+30h+var_C]
0x53F515: fmul    st, st(1)
0x53F517: fld     qword ptr ds:0A3F460h
0x53F51D: fldz
0x53F51F: fsub    st(1), st
0x53F521: fxch    st(2)
0x53F523: fmulp   st(1), st
0x53F525: faddp   st(1), st
0x53F527: jmp     short loc_53F52B
0x53F529: fldz
0x53F52B: cmp     eax, ebp
0x53F52D: fstp    dword ptr [esp+30h+var_18+4]
0x53F531: jz      short loc_53F54F
0x53F533: movzx   edx, byte ptr [eax+4Fh]
0x53F537: mov     [esp+30h+var_C], edx
0x53F53B: fild    [esp+30h+var_C]
0x53F53F: fmulp   st(1), st
0x53F541: fmul    qword ptr ds:0A48DD8h
0x53F547: fadd    qword ptr ds:0A30E40h
0x53F54D: jmp     short loc_53F557
0x53F54F: fstp    st
0x53F551: fld     dword ptr ds:0A37080h
0x53F557: mov     ecx, ds:0B33B00h
0x53F55D: fstp    [esp+30h+var_C]
0x53F561: call    sub_45A500
0x53F566: test    al, al
0x53F568: jz      loc_53F677
0x53F56E: mov     eax, [esi+8]
0x53F571: cmp     eax, ebp
0x53F573: jz      short loc_53F5D4
0x53F575: mov     ecx, [esi+0Ch]
0x53F578: mov     edx, [ecx]
0x53F57A: mov     edx, [edx+88h]
0x53F580: push    eax
0x53F581: lea     eax, [esp+34h+var_18]
0x53F585: push    eax
0x53F586: call    edx
0x53F588: mov     eax, dword ptr [esp+30h+var_18]
0x53F58C: cmp     eax, ebp
0x53F58E: jz      short loc_53F5AE
0x53F590: mov     edi, eax
0x53F592: add     eax, 4
0x53F595: push    eax; lpAddend
0x53F596: call    dword ptr ds:0A2807Ch
0x53F59C: test    eax, eax
0x53F59E: jnz     short loc_53F5AE
0x53F5A0: cmp     edi, ebp
0x53F5A2: jz      short loc_53F5AE
0x53F5A4: mov     eax, [edi]
0x53F5A6: mov     edx, [eax]
0x53F5A8: push    1
0x53F5AA: mov     ecx, edi
0x53F5AC: call    edx
0x53F5AE: mov     edi, [esi+8]
0x53F5B1: cmp     edi, ebp
0x53F5B3: jz      short loc_53F5D4
0x53F5B5: lea     eax, [edi+4]
0x53F5B8: push    eax; lpAddend
0x53F5B9: call    dword ptr ds:0A2807Ch
0x53F5BF: test    eax, eax
0x53F5C1: jnz     short loc_53F5D1
0x53F5C3: cmp     edi, ebp
0x53F5C5: jz      short loc_53F5D1
0x53F5C7: mov     edx, [edi]
0x53F5C9: mov     eax, [edx]
0x53F5CB: push    1
0x53F5CD: mov     ecx, edi
0x53F5CF: call    eax
0x53F5D1: mov     [esi+8], ebp
0x53F5D4: mov     eax, [esi+4]
0x53F5D7: cmp     eax, ebp
0x53F5D9: jz      short loc_53F63A
0x53F5DB: mov     ecx, [esi+0Ch]
0x53F5DE: mov     edx, [ecx]
0x53F5E0: mov     edx, [edx+88h]
0x53F5E6: push    eax
0x53F5E7: lea     eax, [esp+34h+var_18]
0x53F5EB: push    eax
0x53F5EC: call    edx
0x53F5EE: mov     eax, dword ptr [esp+30h+var_18]
0x53F5F2: cmp     eax, ebp
0x53F5F4: jz      short loc_53F614
0x53F5F6: mov     edi, eax
0x53F5F8: add     eax, 4
0x53F5FB: push    eax; lpAddend
0x53F5FC: call    dword ptr ds:0A2807Ch
0x53F602: test    eax, eax
0x53F604: jnz     short loc_53F614
0x53F606: cmp     edi, ebp
0x53F608: jz      short loc_53F614
0x53F60A: mov     eax, [edi]
0x53F60C: mov     edx, [eax]
0x53F60E: push    1
0x53F610: mov     ecx, edi
0x53F612: call    edx
0x53F614: mov     edi, [esi+4]
0x53F617: cmp     edi, ebp
0x53F619: jz      short loc_53F63A
0x53F61B: lea     eax, [edi+4]
0x53F61E: push    eax; lpAddend
0x53F61F: call    dword ptr ds:0A2807Ch
0x53F625: test    eax, eax
0x53F627: jnz     short loc_53F637
0x53F629: cmp     edi, ebp
0x53F62B: jz      short loc_53F637
0x53F62D: mov     edx, [edi]
0x53F62F: mov     eax, [edx]
0x53F631: push    1
0x53F633: mov     ecx, edi
0x53F635: call    eax
0x53F637: mov     [esi+4], ebp
0x53F63A: mov     eax, [ebx+14h]
0x53F63D: cmp     eax, ebp
0x53F63F: jz      short loc_53F654
0x53F641: mov     edx, [eax+30h]
0x53F644: lea     ecx, [eax+30h]
0x53F647: mov     eax, [edx+14h]
0x53F64A: call    eax
0x53F64C: push    eax
0x53F64D: mov     ecx, esi
0x53F64F: call    sub_53F1F0
0x53F654: mov     eax, [ebx+10h]
0x53F657: cmp     eax, ebp
0x53F659: jz      loc_53F74E
0x53F65F: mov     edx, [eax+30h]
0x53F662: lea     ecx, [eax+30h]
0x53F665: mov     eax, [edx+14h]
0x53F668: call    eax
0x53F66A: push    eax
0x53F66B: mov     ecx, esi
0x53F66D: call    sub_53F1F0
0x53F672: jmp     loc_53F74E
0x53F677: mov     eax, [esi+14h]
0x53F67A: cmp     eax, ebp
0x53F67C: jz      loc_53F736
0x53F682: add     edi, 30h ; '0'
0x53F685: cmp     edi, ebp
0x53F687: jz      loc_53F731
0x53F68D: movzx   ecx, word ptr [eax+8]
0x53F691: cmp     cx, 0FFFFh
0x53F696: jnz     short loc_53F6AF
0x53F698: mov     eax, [eax+4]
0x53F69B: lea     edx, [eax+1]
0x53F69E: mov     edi, edi
0x53F6A0: mov     cl, [eax]
0x53F6A2: add     eax, 1
0x53F6A5: test    cl, cl
0x53F6A7: jnz     short loc_53F6A0
0x53F6A9: sub     eax, edx
0x53F6AB: mov     ebx, eax
0x53F6AD: jmp     short loc_53F6B2
0x53F6AF: movzx   ebx, cx
0x53F6B2: movzx   eax, word ptr [edi+8]
0x53F6B6: cmp     ax, 0FFFFh
0x53F6BA: jnz     short loc_53F6CF
0x53F6BC: mov     eax, [edi+4]
0x53F6BF: lea     edx, [eax+1]
0x53F6C2: mov     cl, [eax]
0x53F6C4: add     eax, 1
0x53F6C7: test    cl, cl
0x53F6C9: jnz     short loc_53F6C2
0x53F6CB: sub     eax, edx
0x53F6CD: jmp     short loc_53F6D2
0x53F6CF: movzx   eax, ax
0x53F6D2: cmp     ebx, eax
0x53F6D4: jnz     short loc_53F731
0x53F6D6: mov     edx, [edi]
0x53F6D8: mov     eax, [edx+14h]
0x53F6DB: mov     ebx, [esi+14h]
0x53F6DE: mov     ecx, edi
0x53F6E0: call    eax
0x53F6E2: mov     edx, [ebx]
0x53F6E4: push    eax; Str2
0x53F6E5: mov     eax, [edx+14h]
0x53F6E8: mov     ecx, ebx
0x53F6EA: call    eax
0x53F6EC: push    eax; Str1
0x53F6ED: call    __strcmp
0x53F6F2: add     esp, 8
0x53F6F5: test    eax, eax
0x53F6F7: jnz     short loc_53F731
0x53F6F9: mov     edx, [edi]
0x53F6FB: mov     eax, [edx+14h]
0x53F6FE: mov     ecx, edi
0x53F700: call    eax
0x53F702: mov     ecx, ds:0B33A1Ch
0x53F708: mov     edi, eax
0x53F70A: push    edi
0x53F70B: call    ModelLoader_IsModelLoaded??
0x53F710: test    eax, eax
0x53F712: jz      short loc_53F74E
0x53F714: push    edi
0x53F715: mov     ecx, esi
0x53F717: mov     [esi+14h], ebp
0x53F71A: call    sub_53F1F0
0x53F71F: mov     ecx, ds:0B33A1Ch
0x53F725: push    1
0x53F727: push    1
0x53F729: push    edi
0x53F72A: call    QueuedModelLoader_RemoveModel
0x53F72F: jmp     short loc_53F74E
0x53F731: mov     [esi+14h], ebp
0x53F734: jmp     short loc_53F746
0x53F736: test    byte ptr [ebx+0FCh], 3
0x53F73D: jbe     short loc_53F74E
0x53F73F: cmp     edi, ebp
0x53F741: jz      short loc_53F74E
0x53F743: add     edi, 30h ; '0'
0x53F746: push    edi
0x53F747: mov     ecx, esi
0x53F749: call    sub_53F420
0x53F74E: fld1
0x53F750: fcomp   [esp+30h+var_10]
0x53F754: fnstsw  ax
0x53F756: test    ah, 41h
0x53F759: jp      short loc_53F7C1
0x53F75B: mov     eax, [esi+8]
0x53F75E: cmp     eax, ebp
0x53F760: jz      short loc_53F7C1
0x53F762: mov     ecx, [esi+0Ch]
0x53F765: mov     edx, [ecx]
0x53F767: mov     edx, [edx+88h]
0x53F76D: push    eax
0x53F76E: lea     eax, [esp+34h+var_18]
0x53F772: push    eax
0x53F773: call    edx
0x53F775: mov     eax, dword ptr [esp+30h+var_18]
0x53F779: cmp     eax, ebp
0x53F77B: jz      short loc_53F79B
0x53F77D: mov     edi, eax
0x53F77F: add     eax, 4
0x53F782: push    eax; lpAddend
0x53F783: call    dword ptr ds:0A2807Ch
0x53F789: test    eax, eax
0x53F78B: jnz     short loc_53F79B
0x53F78D: cmp     edi, ebp
0x53F78F: jz      short loc_53F79B
0x53F791: mov     eax, [edi]
0x53F793: mov     edx, [eax]
0x53F795: push    1
0x53F797: mov     ecx, edi
0x53F799: call    edx
0x53F79B: mov     edi, [esi+8]
0x53F79E: cmp     edi, ebp
0x53F7A0: jz      short loc_53F7C1
0x53F7A2: lea     eax, [edi+4]
0x53F7A5: push    eax; lpAddend
0x53F7A6: call    dword ptr ds:0A2807Ch
0x53F7AC: test    eax, eax
0x53F7AE: jnz     short loc_53F7BE
0x53F7B0: cmp     edi, ebp
0x53F7B2: jz      short loc_53F7BE
0x53F7B4: mov     edx, [edi]
0x53F7B6: mov     eax, [edx]
0x53F7B8: push    1
0x53F7BA: mov     ecx, edi
0x53F7BC: call    eax
0x53F7BE: mov     [esi+8], ebp
0x53F7C1: cmp     [esi+4], ebp
0x53F7C4: fldz
0x53F7C6: fstp    dword ptr [esi+10h]
0x53F7C9: jnz     short loc_53F7D6
0x53F7CB: cmp     [esi+8], ebp
0x53F7CE: jz      loc_53FAD9
0x53F7D4: xor     ebp, ebp
0x53F7D6: fld     dword ptr ds:0B2DAECh
0x53F7DC: mov     ecx, ds:0B333C4h; this
0x53F7E2: cmp     ecx, ebp
0x53F7E4: fadd    [esp+30h+arg_0]
0x53F7E8: fstp    dword ptr ds:0B2DAECh
0x53F7EE: jz      short loc_53F855
0x53F7F0: call    TESObjectREFR_GetParentCell
0x53F7F5: test    eax, eax
0x53F7F7: jz      short loc_53F855
0x53F7F9: mov     ecx, ds:0B333C4h; this
0x53F7FF: call    TESObjectREFR_GetParentCell
0x53F804: movzx   ecx, byte ptr [eax+24h]
0x53F808: shr     ecx, 1
0x53F80A: test    cl, 1
0x53F80D: jz      short loc_53F855
0x53F80F: mov     eax, ds:0B333CCh
0x53F814: cmp     [eax+0B6h], bp
0x53F81B: ja      short loc_53F821
0x53F81D: xor     eax, eax
0x53F81F: jmp     short loc_53F829
0x53F821: mov     edx, [eax+0B0h]
0x53F827: mov     eax, [edx]
0x53F829: fld     dword ptr [eax+90h]
0x53F82F: mov     ecx, ds:0B333C4h; this
0x53F835: fstp    [esp+30h+var_8]
0x53F839: call    TESObjectREFR_GetParentCell
0x53F83E: mov     ecx, eax
0x53F840: call    TESObjectCELL_GetWaterHeight
0x53F845: fcomp   [esp+30h+var_8]
0x53F849: fnstsw  ax
0x53F84B: test    ah, 41h
0x53F84E: jnz     short loc_53F855
0x53F850: mov     [esp+30h+var_1D], 1
0x53F855: cmp     [esi+4], ebp
0x53F858: jz      loc_53F999
0x53F85E: fldz
0x53F860: fstp    dword ptr [esp+30h+var_18]
0x53F864: fld     [esp+30h+var_10]
0x53F868: fld     dword ptr [esp+30h+var_18+4]
0x53F86C: fcom    st(1)
0x53F86E: fnstsw  ax
0x53F870: test    ah, 5
0x53F873: jp      short loc_53F885
0x53F875: fld     st
0x53F877: fsubp   st(2), st
0x53F879: fld1
0x53F87B: fsubrp  st(1), st
0x53F87D: fdivp   st(1), st
0x53F87F: fstp    dword ptr [esp+30h+var_18]
0x53F883: jmp     short loc_53F889
0x53F885: fstp    st
0x53F887: fstp    st
0x53F889: mov     dword ptr [esp+30h+var_18+4], 0
0x53F891: mov     edi, dword ptr [esp+30h+var_18+4]
0x53F895: jmp     short loc_53F8A0
0x53F897: align 10h
0x53F8A0: mov     eax, [esp+30h+var_1C]
0x53F8A4: mov     eax, [eax+4]
0x53F8A7: movzx   ecx, word ptr [eax+0B6h]
0x53F8AE: cmp     ecx, edi
0x53F8B0: ja      short loc_53F8B6
0x53F8B2: xor     esi, esi
0x53F8B4: jmp     short loc_53F8BF
0x53F8B6: mov     edx, [eax+0B0h]
0x53F8BC: mov     esi, [edx+edi*4]
0x53F8BF: add     edi, 1
0x53F8C2: test    esi, esi
0x53F8C4: mov     dword ptr [esp+30h+var_18+4], edi
0x53F8C8: jz      loc_53F999
0x53F8CE: push    4
0x53F8D0: mov     ecx, esi
0x53F8D2: call    NiNode_GetNiPropertyByID
0x53F8D7: test    eax, eax
0x53F8D9: jz      short loc_53F8A0
0x53F8DB: push    4
0x53F8DD: mov     ecx, esi
0x53F8DF: call    NiNode_GetNiPropertyByID
0x53F8E4: mov     edx, [eax]
0x53F8E6: mov     ecx, eax
0x53F8E8: mov     eax, [edx+54h]
0x53F8EB: call    eax
0x53F8ED: xor     ecx, ecx
0x53F8EF: cmp     eax, 0Fh
0x53F8F2: setz    cl
0x53F8F5: mov     eax, ecx
0x53F8F7: test    eax, eax
0x53F8F9: jz      short loc_53F8A0
0x53F8FB: push    4
0x53F8FD: mov     ecx, esi
0x53F8FF: call    NiNode_GetNiPropertyByID
0x53F904: mov     ebx, eax
0x53F906: test    ebx, ebx
0x53F908: jz      short loc_53F8A0
0x53F90A: mov     esi, [esi+0B4h]
0x53F910: movzx   eax, word ptr [esi+40h]
0x53F914: mov     ecx, [ebx+6Ch]
0x53F917: cdq
0x53F918: idiv    ecx
0x53F91A: mov     [esp+30h+arg_0], ecx
0x53F91E: fild    [esp+30h+arg_0]
0x53F922: fnstcw  word ptr [esp+30h+arg_0]
0x53F926: fmul    dword ptr [esp+30h+var_18]
0x53F92A: movzx   ecx, ax
0x53F92D: movzx   eax, word ptr [esp+30h+arg_0]
0x53F932: or      eax, 0C00h
0x53F937: mov     dword ptr [esp+30h+var_8], eax
0x53F93B: mov     eax, [esi]
0x53F93D: fldcw   word ptr [esp+30h+var_8]
0x53F941: fistp   dword ptr [esp+30h+var_8]
0x53F945: mov     dx, word ptr [esp+30h+var_8]
0x53F94A: movzx   ebp, dx
0x53F94D: mov     edx, [eax+5Ch]
0x53F950: fldcw   word ptr [esp+30h+arg_0]
0x53F954: mov     edi, ebp
0x53F956: imul    edi, ecx
0x53F959: mov     ecx, esi
0x53F95B: call    edx
0x53F95D: cmp     di, ax
0x53F960: jz      short loc_53F983
0x53F962: mov     eax, [esi]
0x53F964: mov     edx, [eax+58h]
0x53F967: push    edi
0x53F968: mov     ecx, esi
0x53F96A: call    edx
0x53F96C: test    bp, bp
0x53F96F: mov     eax, [esi]
0x53F971: mov     edx, [eax+4Ch]
0x53F974: jbe     short loc_53F97D
0x53F976: movzx   ecx, word ptr [esi+8]
0x53F97A: push    ecx
0x53F97B: jmp     short loc_53F97F
0x53F97D: push    0
0x53F97F: mov     ecx, esi
0x53F981: call    edx
0x53F983: fild    dword ptr [ebx+6Ch]
0x53F986: mov     eax, [esp+30h+var_1C]
0x53F98A: fmul    dword ptr [esp+30h+var_18]
0x53F98E: fadd    dword ptr [eax+10h]
0x53F991: fstp    dword ptr [eax+10h]
0x53F994: jmp     loc_53F891
0x53F999: mov     eax, [esp+30h+var_1C]
0x53F99D: cmp     dword ptr [eax+8], 0
0x53F9A1: jz      loc_53FAD9
0x53F9A7: fldz
0x53F9A9: fstp    dword ptr [esp+30h+var_18+4]
0x53F9AD: fld     [esp+30h+var_10]
0x53F9B1: fld     [esp+30h+var_C]
0x53F9B5: fcom    st(1)
0x53F9B7: fnstsw  ax
0x53F9B9: test    ah, 41h
0x53F9BC: jnz     short loc_53F9CC
0x53F9BE: fdivp   st(1), st
0x53F9C0: xor     edi, edi
0x53F9C2: fld1
0x53F9C4: fsubrp  st(1), st
0x53F9C6: fstp    dword ptr [esp+30h+var_18+4]
0x53F9CA: jmp     short loc_53F9E0
0x53F9CC: fstp    st
0x53F9CE: xor     edi, edi
0x53F9D0: fstp    st
0x53F9D2: jmp     short loc_53F9E0
0x53F9D4: mov     edi, [esp+30h+var_C]
0x53F9D8: jmp     short loc_53F9E0
0x53F9DA: align 10h
0x53F9E0: mov     ecx, [esp+30h+var_1C]
0x53F9E4: mov     eax, [ecx+8]
0x53F9E7: movzx   edx, word ptr [eax+0B6h]
0x53F9EE: cmp     edx, edi
0x53F9F0: ja      short loc_53F9F6
0x53F9F2: xor     esi, esi
0x53F9F4: jmp     short loc_53F9FF
0x53F9F6: mov     eax, [eax+0B0h]
0x53F9FC: mov     esi, [eax+edi*4]
0x53F9FF: add     edi, 1
0x53FA02: test    esi, esi
0x53FA04: mov     [esp+30h+var_C], edi
0x53FA08: jz      loc_53FAD9
0x53FA0E: push    4
0x53FA10: mov     ecx, esi
0x53FA12: call    NiNode_GetNiPropertyByID
0x53FA17: test    eax, eax
0x53FA19: jz      short loc_53F9E0
0x53FA1B: push    4
0x53FA1D: mov     ecx, esi
0x53FA1F: call    NiNode_GetNiPropertyByID
0x53FA24: mov     edx, [eax]
0x53FA26: mov     ecx, eax
0x53FA28: mov     eax, [edx+54h]
0x53FA2B: call    eax
0x53FA2D: xor     ecx, ecx
0x53FA2F: cmp     eax, 0Fh
0x53FA32: setz    cl
0x53FA35: mov     eax, ecx
0x53FA37: test    eax, eax
0x53FA39: jz      short loc_53F9E0
0x53FA3B: push    4
0x53FA3D: mov     ecx, esi
0x53FA3F: call    NiNode_GetNiPropertyByID
0x53FA44: mov     ebx, eax
0x53FA46: test    ebx, ebx
0x53FA48: jz      short loc_53F9D4
0x53FA4A: mov     esi, [esi+0B4h]
0x53FA50: movzx   eax, word ptr [esi+40h]
0x53FA54: mov     ecx, [ebx+6Ch]
0x53FA57: cdq
0x53FA58: idiv    ecx
0x53FA5A: mov     [esp+30h+arg_0], ecx
0x53FA5E: fild    [esp+30h+arg_0]
0x53FA62: fnstcw  word ptr [esp+30h+arg_0]
0x53FA66: fmul    dword ptr [esp+30h+var_18+4]
0x53FA6A: movzx   ecx, ax
0x53FA6D: movzx   eax, word ptr [esp+30h+arg_0]
0x53FA72: or      eax, 0C00h
0x53FA77: mov     dword ptr [esp+30h+var_8], eax
0x53FA7B: mov     eax, [esi]
0x53FA7D: fldcw   word ptr [esp+30h+var_8]
0x53FA81: fistp   dword ptr [esp+30h+var_8]
0x53FA85: mov     dx, word ptr [esp+30h+var_8]
0x53FA8A: movzx   ebp, dx
0x53FA8D: mov     edx, [eax+5Ch]
0x53FA90: fldcw   word ptr [esp+30h+arg_0]
0x53FA94: mov     edi, ebp
0x53FA96: imul    edi, ecx
0x53FA99: mov     ecx, esi
0x53FA9B: call    edx
0x53FA9D: cmp     di, ax
0x53FAA0: jz      short loc_53FAC3
0x53FAA2: mov     eax, [esi]
0x53FAA4: mov     edx, [eax+58h]
0x53FAA7: push    edi
0x53FAA8: mov     ecx, esi
0x53FAAA: call    edx
0x53FAAC: test    bp, bp
0x53FAAF: mov     eax, [esi]
0x53FAB1: mov     edx, [eax+4Ch]
0x53FAB4: jbe     short loc_53FABD
0x53FAB6: movzx   ecx, word ptr [esi+8]
0x53FABA: push    ecx
0x53FABB: jmp     short loc_53FABF
0x53FABD: push    0
0x53FABF: mov     ecx, esi
0x53FAC1: call    edx
0x53FAC3: fild    dword ptr [ebx+6Ch]
0x53FAC6: mov     eax, [esp+30h+var_1C]
0x53FACA: fmul    dword ptr [esp+30h+var_18+4]
0x53FACE: fadd    dword ptr [eax+10h]
0x53FAD1: fstp    dword ptr [eax+10h]
0x53FAD4: jmp     loc_53F9D4
0x53FAD9: mov     ecx, [esp+30h+var_1C]
0x53FADD: mov     eax, [ecx+4]
0x53FAE0: test    eax, eax
0x53FAE2: mov     esi, 0FFFEh
0x53FAE7: jz      short loc_53FAFB
0x53FAE9: cmp     [esp+30h+var_1D], 0
0x53FAEE: jz      short loc_53FAF7
0x53FAF0: or      word ptr [eax+18h], 1
0x53FAF5: jmp     short loc_53FAFB
0x53FAF7: and     [eax+18h], si
0x53FAFB: mov     eax, [ecx+8]
0x53FAFE: test    eax, eax
0x53FB00: jz      short loc_53FB1C
0x53FB02: cmp     [esp+30h+var_1D], 0
0x53FB07: jz      short loc_53FB18
0x53FB09: or      word ptr [eax+18h], 1
0x53FB0E: pop     edi
0x53FB0F: pop     esi
0x53FB10: pop     ebp
0x53FB11: pop     ebx
0x53FB12: add     esp, 20h
0x53FB15: retn    4
0x53FB18: and     [eax+18h], si
0x53FB1C: pop     edi
0x53FB1D: pop     esi
0x53FB1E: pop     ebp
0x53FB1F: pop     ebx
0x53FB20: add     esp, 20h
0x53FB23: retn    4
