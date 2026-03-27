0x5B7550: push    ebp
0x5B7551: mov     ebp, esp
0x5B7553: and     esp, 0FFFFFFF8h
0x5B7556: push    0FFFFFFFFh
0x5B7558: push    offset SEH_5B7550
0x5B755D: mov     eax, large fs:0
0x5B7563: push    eax
0x5B7564: sub     esp, 15Ch
0x5B756A: push    ebx
0x5B756B: push    ebp
0x5B756C: push    esi
0x5B756D: push    edi
0x5B756E: mov     eax, ds:0B30AACh
0x5B7573: xor     eax, esp
0x5B7575: push    eax
0x5B7576: lea     eax, [esp+17Ch+var_C]
0x5B757D: mov     large fs:0, eax
0x5B7583: mov     ebx, ecx
0x5B7585: mov     [esp+17Ch+var_F4], ebx
0x5B758C: mov     esi, [ebx+0C8h]
0x5B7592: cmp     dword ptr [esi+4], 0
0x5B7596: jz      short loc_5B75AE
0x5B7598: mov     eax, [esi+4]
0x5B759B: mov     edi, [eax+4]
0x5B759E: push    eax
0x5B759F: call    FormHeapFree
0x5B75A4: add     esp, 4
0x5B75A7: test    edi, edi
0x5B75A9: mov     [esi+4], edi
0x5B75AC: jnz     short loc_5B7598
0x5B75AE: mov     dword ptr [esi], 0
0x5B75B4: mov     eax, [ebx+64h]
0x5B75B7: mov     ebp, [eax+24h]
0x5B75BA: test    ebp, ebp
0x5B75BC: mov     [esp+17Ch+var_128], ebp
0x5B75C0: jnz     short loc_5B75DB
0x5B75C2: xor     eax, eax
0x5B75C4: mov     ecx, [esp+17Ch+var_C]
0x5B75CB: mov     large fs:0, ecx
0x5B75D2: pop     ecx
0x5B75D3: pop     edi
0x5B75D4: pop     esi
0x5B75D5: pop     ebp
0x5B75D6: pop     ebx
0x5B75D7: mov     esp, ebp
0x5B75D9: pop     ebp
0x5B75DA: retn
0x5B75DB: push    3
0x5B75DD: call    nullsub_returnTrue_0arg
0x5B75E2: movzx   eax, word ptr [ebp+0B6h]
0x5B75E9: mov     ebx, ds:0A2807Ch
0x5B75EF: add     esp, 4
0x5B75F2: xor     esi, esi
0x5B75F4: test    eax, eax
0x5B75F6: jbe     short loc_5B764C
0x5B75F8: cmp     eax, esi
0x5B75FA: jbe     short loc_5B763E
0x5B75FC: mov     ecx, [ebp+0B0h]
0x5B7602: mov     eax, [ecx+esi*4]
0x5B7605: test    eax, eax
0x5B7607: jz      short loc_5B763E
0x5B7609: mov     edx, [ebp+0]
0x5B760C: mov     edx, [edx+88h]
0x5B7612: push    eax
0x5B7613: lea     eax, [esp+180h+var_120]
0x5B7617: push    eax
0x5B7618: mov     ecx, ebp
0x5B761A: call    edx
0x5B761C: mov     eax, [esp+17Ch+var_120]
0x5B7620: test    eax, eax
0x5B7622: jz      short loc_5B763E
0x5B7624: mov     edi, eax
0x5B7626: add     eax, 4
0x5B7629: push    eax; lpAddend
0x5B762A: call    ebx ; InterlockedDecrement
0x5B762C: test    eax, eax
0x5B762E: jnz     short loc_5B763E
0x5B7630: test    edi, edi
0x5B7632: jz      short loc_5B763E
0x5B7634: mov     eax, [edi]
0x5B7636: mov     edx, [eax]
0x5B7638: push    1
0x5B763A: mov     ecx, edi
0x5B763C: call    edx
0x5B763E: movzx   eax, word ptr [ebp+0B6h]
0x5B7645: add     esi, 1
0x5B7648: cmp     eax, esi
0x5B764A: ja      short loc_5B75FC
0x5B764C: push    2
0x5B764E: call    nullsub_returnTrue_0arg
0x5B7653: mov     ecx, ds:0B333C4h
0x5B7659: mov     eax, [ecx]
0x5B765B: mov     edx, [eax+174h]
0x5B7661: add     esp, 4
0x5B7664: call    edx
0x5B7666: mov     ecx, [eax]
0x5B7668: mov     edi, ds:0B06A2Ch
0x5B766E: mov     [esp+17Ch+var_11C], ecx
0x5B7672: mov     edx, [eax+4]
0x5B7675: mov     [esp+17Ch+var_118], edx
0x5B7679: mov     eax, [eax+8]
0x5B767C: mov     [esp+17Ch+var_114], eax
0x5B7680: fld     [esp+17Ch+var_114]
0x5B7684: fadd    qword ptr ds:0A3F3E8h
0x5B768A: mov     eax, edi
0x5B768C: imul    eax, edi
0x5B768F: fstp    [esp+17Ch+var_114]
0x5B7693: mov     ecx, edi
0x5B7695: shl     ecx, 9
0x5B7698: cmp     byte ptr ds:0B42D40h, 0
0x5B769F: mov     [esp+17Ch+var_12C], edi
0x5B76A3: mov     [esp+17Ch+var_140], eax
0x5B76A7: mov     [esp+17Ch+var_120], ecx
0x5B76AB: jz      short loc_5B76C4
0x5B76AD: cmp     byte ptr ds:0B42F3Eh, 0
0x5B76B4: jz      short loc_5B76C4
0x5B76B6: cmp     dword ptr ds:0B42F48h, 2
0x5B76BD: mov     byte ptr [esp+17Ch+var_164+3], 1
0x5B76C2: jge     short loc_5B76C9
0x5B76C4: mov     byte ptr [esp+17Ch+var_164+3], 0
0x5B76C9: mov     byte ptr [esp+17Ch+var_15C+2], 1
0x5B76CE: call    sub_411F00
0x5B76D3: fstp    [esp+17Ch+var_DC]
0x5B76DA: cmp     byte ptr [esp+17Ch+var_164+3], 0
0x5B76DF: jz      loc_5B7771
0x5B76E5: push    0; char
0x5B76E7: push    1; char
0x5B76E9: lea     edx, [esp+184h+var_124]
0x5B76ED: push    offset aDataTextures_4; "Data\\Textures\\Menus\\Map\\local\\MapP"...
0x5B76F2: push    edx; int
0x5B76F3: call    sub_7B8200
0x5B76F8: add     esp, 10h
0x5B76FB: mov     ebp, eax
0x5B76FD: mov     esi, ds:0B42D44h
0x5B7703: cmp     esi, [ebp+0]
0x5B7706: mov     [esp+17Ch+var_4], 0
0x5B7711: jz      short loc_5B7746
0x5B7713: test    esi, esi
0x5B7715: jz      short loc_5B772F
0x5B7717: lea     eax, [esi+4]
0x5B771A: push    eax; lpAddend
0x5B771B: call    ebx ; InterlockedDecrement
0x5B771D: test    eax, eax
0x5B771F: jnz     short loc_5B772F
0x5B7721: test    esi, esi
0x5B7723: jz      short loc_5B772F
0x5B7725: mov     edx, [esi]
0x5B7727: mov     eax, [edx]
0x5B7729: push    1
0x5B772B: mov     ecx, esi
0x5B772D: call    eax
0x5B772F: mov     ebp, [ebp+0]
0x5B7732: test    ebp, ebp
0x5B7734: mov     ds:0B42D44h, ebp
0x5B773A: jz      short loc_5B7746
0x5B773C: add     ebp, 4
0x5B773F: push    ebp; lpAddend
0x5B7740: call    dword ptr ds:0A28078h
0x5B7746: mov     esi, [esp+17Ch+var_124]
0x5B774A: test    esi, esi
0x5B774C: mov     [esp+17Ch+var_4], 0FFFFFFFFh
0x5B7757: jz      short loc_5B7771
0x5B7759: lea     ecx, [esi+4]
0x5B775C: push    ecx; lpAddend
0x5B775D: call    ebx ; InterlockedDecrement
0x5B775F: test    eax, eax
0x5B7761: jnz     short loc_5B7771
0x5B7763: test    esi, esi
0x5B7765: jz      short loc_5B7771
0x5B7767: mov     edx, [esi]
0x5B7769: mov     eax, [edx]
0x5B776B: push    1
0x5B776D: mov     ecx, esi
0x5B776F: call    eax
0x5B7771: mov     ecx, ds:0B45E04h
0x5B7777: mov     edx, ds:0B45E08h
0x5B777D: mov     eax, ds:0B45E0Ch
0x5B7782: mov     [esp+17Ch+var_3C], ecx
0x5B7789: mov     ecx, ds:0B45E10h
0x5B778F: mov     [esp+17Ch+var_30], ecx
0x5B7796: mov     ecx, ds:0B25AD8h
0x5B779C: mov     [esp+17Ch+var_38], edx
0x5B77A3: mov     edx, ds:0B25AD0h
0x5B77A9: mov     [esp+17Ch+var_34], eax
0x5B77B0: mov     eax, ds:0B25AD4h
0x5B77B5: mov     ds:0B45E0Ch, ecx
0x5B77BB: mov     ecx, ds:0B35234h
0x5B77C1: mov     ds:0B45E04h, edx
0x5B77C7: mov     edx, ds:0B25ADCh
0x5B77CD: mov     ds:0B45E08h, eax
0x5B77D2: mov     al, ds:0B45DC0h
0x5B77D7: xor     ebp, ebp
0x5B77D9: cmp     ecx, ebp
0x5B77DB: mov     ds:0B45E10h, edx
0x5B77E1: mov     byte ptr [esp+17Ch+var_13C+2], al
0x5B77E5: mov     byte ptr ds:0B45DC0h, 1
0x5B77EC: mov     byte ptr [esp+17Ch+var_15C+3], 1
0x5B77F1: jz      short loc_5B7801
0x5B77F3: mov     al, [ecx+18h]
0x5B77F6: and     al, 1
0x5B77F8: or      word ptr [ecx+18h], 1
0x5B77FD: mov     byte ptr [esp+17Ch+var_15C+3], al
0x5B7801: mov     esi, ds:0B333A8h
0x5B7807: mov     al, [esi+18h]
0x5B780A: and     al, 1
0x5B780C: mov     [esp+17Ch+var_E8], esi
0x5B7813: mov     byte ptr [esp+17Ch+var_13C+3], al
0x5B7817: jnz     short loc_5B781E
0x5B7819: or      word ptr [esi+18h], 1
0x5B781E: mov     ecx, ds:0B333A0h
0x5B7824: mov     eax, [ecx+34h]
0x5B7827: cmp     eax, ebp
0x5B7829: mov     [esp+17Ch+var_134], ebp
0x5B782D: jnz     loc_5B793D
0x5B7833: mov     edx, [esp+17Ch+var_140]
0x5B7837: push    1
0x5B7839: lea     eax, ds:0[edx*4]
0x5B7840: push    eax
0x5B7841: mov     ecx, offset FormHeap
0x5B7846: call    j_MemoryHeap_Alloc
0x5B784B: cmp     edi, ebp
0x5B784D: mov     [esp+17Ch+var_134], eax
0x5B7851: mov     [esp+17Ch+var_148], ebp
0x5B7855: jle     loc_5B793D
0x5B785B: jmp     short loc_5B7860
0x5B785D: align 10h
0x5B7860: mov     [esp+17Ch+var_14C], 0
0x5B7868: jmp     short loc_5B7870
0x5B786A: align 10h
0x5B7870: mov     ecx, [esp+17Ch+var_14C]
0x5B7874: mov     edx, [esp+17Ch+var_148]
0x5B7878: mov     eax, ds:0B333A0h
0x5B787D: push    ecx
0x5B787E: mov     ecx, [eax+8]
0x5B7881: push    edx
0x5B7882: call    GetGridEntry
0x5B7887: mov     edi, eax
0x5B7889: test    edi, edi
0x5B788B: jz      short loc_5B790C
0x5B788D: cmp     dword ptr [edi], 0
0x5B7890: jz      short loc_5B790C
0x5B7892: xor     ebx, ebx
0x5B7894: mov     esi, 8
0x5B7899: lea     esp, [esp+0]
0x5B78A0: mov     ecx, [edi]; this
0x5B78A2: call    TESObjectCELL_GetNiNode?
0x5B78A7: test    eax, eax
0x5B78A9: jz      short loc_5B78DA
0x5B78AB: movzx   ecx, word ptr [eax+0B6h]
0x5B78B2: lea     edx, [ebx+2]
0x5B78B5: cmp     ecx, edx
0x5B78B7: jbe     short loc_5B78DA
0x5B78B9: mov     eax, [eax+0B0h]
0x5B78BF: mov     eax, [esi+eax]
0x5B78C2: test    eax, eax
0x5B78C4: jz      short loc_5B78DA
0x5B78C6: cmp     word ptr [eax+0B6h], 0
0x5B78CE: jbe     short loc_5B78DA
0x5B78D0: mov     ecx, [eax+0B0h]
0x5B78D6: mov     eax, [ecx]
0x5B78D8: jmp     short loc_5B78DC
0x5B78DA: xor     eax, eax
0x5B78DC: test    eax, eax
0x5B78DE: jz      short loc_5B78F6
0x5B78E0: test    byte ptr [eax+18h], 1
0x5B78E4: jz      short loc_5B78F6
0x5B78E6: mov     edx, [esp+17Ch+var_134]
0x5B78EA: and     word ptr [eax+18h], 0FFFEh
0x5B78F0: mov     byte ptr [edx+ebp], 1
0x5B78F4: jmp     short loc_5B78FE
0x5B78F6: mov     eax, [esp+17Ch+var_134]
0x5B78FA: mov     byte ptr [eax+ebp], 0
0x5B78FE: add     esi, 4
0x5B7901: add     ebp, 1
0x5B7904: add     ebx, 1
0x5B7907: cmp     esi, 18h
0x5B790A: jl      short loc_5B78A0
0x5B790C: mov     eax, [esp+17Ch+var_14C]
0x5B7910: mov     ecx, [esp+17Ch+var_12C]
0x5B7914: add     eax, 1
0x5B7917: cmp     eax, ecx
0x5B7919: mov     [esp+17Ch+var_14C], eax
0x5B791D: jl      loc_5B7870
0x5B7923: mov     eax, [esp+17Ch+var_148]
0x5B7927: add     eax, 1
0x5B792A: cmp     eax, ecx
0x5B792C: mov     [esp+17Ch+var_148], eax
0x5B7930: jl      loc_5B7860
0x5B7936: mov     esi, [esp+17Ch+var_E8]
0x5B793D: xor     eax, eax
0x5B793F: cmp     [esp+17Ch+var_140], eax
0x5B7943: mov     [esp+17Ch+var_124], eax
0x5B7947: jle     loc_5B85AE
0x5B794D: fldz
0x5B794F: fst     [esp+17Ch+var_AC]
0x5B7956: fst     [esp+17Ch+var_A4]
0x5B795D: fld1
0x5B795F: fstp    [esp+17Ch+var_A0]
0x5B7966: fstp    [esp+17Ch+var_9C]
0x5B796D: fld     [esp+17Ch+var_DC]
0x5B7974: fstp    [esp+17Ch+var_68]
0x5B797B: fild    [esp+17Ch+var_120]
0x5B797F: fstp    [esp+17Ch+var_130]
0x5B7983: fld     dword ptr ds:0A58DA8h
0x5B7989: fstp    dword ptr [esp+17Ch+var_80+4]
0x5B7990: xor     edx, edx
0x5B7992: div     dword ptr ds:0B06A2Ch
0x5B7998: mov     [esp+17Ch+var_148], 0
0x5B79A0: mov     ebx, edx
0x5B79A2: mov     [esp+17Ch+var_D8], ebx
0x5B79A9: mov     [esp+17Ch+var_14C], eax
0x5B79AD: mov     ecx, ds:0B3F9A8h
0x5B79B3: mov     edx, ds:0B3F9ACh
0x5B79B9: mov     eax, ds:0B3F9B0h
0x5B79BE: mov     dword ptr [esp+17Ch+var_108], ecx
0x5B79C2: mov     ecx, ds:0B333C4h; this
0x5B79C8: mov     [esp+17Ch+var_4], 1
0x5B79D3: mov     dword ptr [esp+17Ch+var_108+4], edx
0x5B79D7: mov     [esp+17Ch+var_100], eax
0x5B79DB: call    sub_4D8B90
0x5B79E0: test    al, al
0x5B79E2: mov     ecx, ds:0B333C4h; this
0x5B79E8: jz      loc_5B7B4D
0x5B79EE: call    TESObjectREFR_GetParentCell
0x5B79F3: mov     ebp, eax
0x5B79F5: test    ebp, ebp
0x5B79F7: jz      loc_5B7C5F
0x5B79FD: push    1; float
0x5B79FF: lea     ecx, [esp+180h+var_1C]
0x5B7A06: push    ecx; int
0x5B7A07: lea     edx, [esp+184h+var_11C]
0x5B7A0B: push    edx; int
0x5B7A0C: mov     ecx, ebp
0x5B7A0E: call    sub_4CCE20
0x5B7A13: fld     [esp+17Ch+var_1C]
0x5B7A1A: fistp   [esp+17Ch+var_D4]
0x5B7A21: mov     eax, [esp+17Ch+var_D4]
0x5B7A28: add     eax, 0FFFFF800h
0x5B7A2D: sar     eax, 0Ch
0x5B7A30: fld     [esp+17Ch+var_18]
0x5B7A37: fistp   [esp+17Ch+var_C0]
0x5B7A3E: mov     edx, [esp+17Ch+var_12C]
0x5B7A42: mov     ecx, [esp+17Ch+var_C0]
0x5B7A49: add     ecx, 0FFFFF800h
0x5B7A4F: sar     edx, 1
0x5B7A51: sub     eax, edx
0x5B7A53: sar     ecx, 0Ch
0x5B7A56: add     eax, ebx
0x5B7A58: sub     ecx, edx
0x5B7A5A: add     ecx, [esp+17Ch+var_14C]
0x5B7A5E: mov     esi, eax
0x5B7A60: shl     eax, 0Ch
0x5B7A63: mov     edi, ecx
0x5B7A65: add     eax, 800h
0x5B7A6A: mov     [esp+17Ch+Src], eax
0x5B7A6E: fild    [esp+17Ch+Src]
0x5B7A72: shl     ecx, 0Ch
0x5B7A75: add     ecx, 800h
0x5B7A7B: mov     [esp+17Ch+Src], ecx
0x5B7A7F: fstp    dword ptr [esp+17Ch+var_58]
0x5B7A86: mov     edx, dword ptr [esp+17Ch+var_58]
0x5B7A8D: fild    [esp+17Ch+Src]
0x5B7A91: push    0
0x5B7A93: push    edi
0x5B7A94: push    esi
0x5B7A95: fstp    dword ptr [esp+188h+var_58+4]
0x5B7A9C: mov     eax, dword ptr [esp+188h+var_58+4]
0x5B7AA3: fldz
0x5B7AA5: mov     dword ptr [esp+188h+var_108], edx
0x5B7AAC: fstp    [esp+188h+var_50]
0x5B7AB3: mov     dword ptr [esp+188h+var_108+4], eax
0x5B7ABA: mov     ecx, [esp+188h+var_50]
0x5B7AC1: mov     [esp+188h+var_100], ecx
0x5B7AC8: mov     ecx, ebp
0x5B7ACA: call    sub_4CCEE0
0x5B7ACF: push    edi
0x5B7AD0: push    esi
0x5B7AD1: lea     edx, [esp+184h+var_98]
0x5B7AD8: push    edx
0x5B7AD9: mov     ecx, ebp
0x5B7ADB: call    sub_4D4250
0x5B7AE0: mov     eax, [eax]
0x5B7AE2: test    eax, eax
0x5B7AE4: jz      short loc_5B7AF4
0x5B7AE6: mov     [esp+17Ch+var_148], eax
0x5B7AEA: add     eax, 4
0x5B7AED: push    eax; lpAddend
0x5B7AEE: call    dword ptr ds:0A28078h
0x5B7AF4: mov     esi, [esp+17Ch+var_98]
0x5B7AFB: test    esi, esi
0x5B7AFD: mov     byte ptr [esp+17Ch+var_4], 1
0x5B7B05: jz      short loc_5B7B23
0x5B7B07: lea     eax, [esi+4]
0x5B7B0A: push    eax; lpAddend
0x5B7B0B: call    dword ptr ds:0A2807Ch
0x5B7B11: test    eax, eax
0x5B7B13: jnz     short loc_5B7B23
0x5B7B15: test    esi, esi
0x5B7B17: jz      short loc_5B7B23
0x5B7B19: mov     edx, [esi]
0x5B7B1B: mov     eax, [edx]
0x5B7B1D: push    1
0x5B7B1F: mov     ecx, esi
0x5B7B21: call    eax
0x5B7B23: cmp     byte ptr [esp+17Ch+var_15C+2], 0
0x5B7B28: jz      loc_5B7C5F
0x5B7B2E: mov     ecx, [esp+17Ch+var_F4]
0x5B7B35: mov     edx, [ecx+0C8h]
0x5B7B3B: push    edx
0x5B7B3C: mov     ecx, ebp
0x5B7B3E: call    sub_4CBDB0
0x5B7B43: mov     byte ptr [esp+17Ch+var_15C+2], 0
0x5B7B48: jmp     loc_5B7C5F
0x5B7B4D: call    TESObjectREFR_GetWorldSpace
0x5B7B52: fld     [esp+17Ch+var_11C]
0x5B7B56: fistp   [esp+17Ch+var_C4]
0x5B7B5D: mov     edx, [esp+17Ch+var_C4]
0x5B7B64: sar     edx, 0Ch
0x5B7B67: fld     [esp+17Ch+var_118]
0x5B7B6B: fistp   [esp+17Ch+var_CC]
0x5B7B72: mov     edi, [esp+17Ch+var_12C]
0x5B7B76: mov     esi, [esp+17Ch+var_CC]
0x5B7B7D: sar     edi, 1
0x5B7B7F: sub     edx, edi
0x5B7B81: sar     esi, 0Ch
0x5B7B84: add     edx, ebx
0x5B7B86: sub     esi, edi
0x5B7B88: add     esi, [esp+17Ch+var_14C]
0x5B7B8C: mov     ecx, edx
0x5B7B8E: shl     ecx, 0Ch
0x5B7B91: mov     [esp+17Ch+Src], ecx
0x5B7B95: fild    [esp+17Ch+Src]
0x5B7B99: mov     ecx, esi
0x5B7B9B: shl     ecx, 0Ch
0x5B7B9E: test    eax, eax
0x5B7BA0: fstp    [esp+17Ch+var_74]
0x5B7BA7: mov     [esp+17Ch+Src], ecx
0x5B7BAB: fild    [esp+17Ch+Src]
0x5B7BAF: mov     ecx, [esp+17Ch+var_74]
0x5B7BB6: mov     dword ptr [esp+17Ch+var_108], ecx
0x5B7BBA: fstp    [esp+17Ch+var_70]
0x5B7BC1: mov     ecx, [esp+17Ch+var_70]
0x5B7BC8: fldz
0x5B7BCA: mov     dword ptr [esp+17Ch+var_108+4], ecx
0x5B7BCE: fstp    [esp+17Ch+var_6C]
0x5B7BD5: mov     ecx, [esp+17Ch+var_6C]
0x5B7BDC: mov     [esp+17Ch+var_100], ecx
0x5B7BE0: jz      short loc_5B7C5F
0x5B7BE2: push    esi; signed int
0x5B7BE3: push    edx; signed int
0x5B7BE4: mov     ecx, eax; this
0x5B7BE6: call    TESWorldSpace__GetCellAtCellCoord
0x5B7BEB: mov     esi, eax
0x5B7BED: test    esi, esi
0x5B7BEF: jz      short loc_5B7C5F
0x5B7BF1: mov     ecx, esi
0x5B7BF3: call    sub_4CCED0
0x5B7BF8: lea     edx, [esp+17Ch+var_5C]
0x5B7BFF: push    edx
0x5B7C00: mov     ecx, esi
0x5B7C02: call    sub_4D41A0
0x5B7C07: mov     eax, [eax]
0x5B7C09: test    eax, eax
0x5B7C0B: jz      short loc_5B7C1B
0x5B7C0D: mov     [esp+17Ch+var_148], eax
0x5B7C11: add     eax, 4
0x5B7C14: push    eax; lpAddend
0x5B7C15: call    dword ptr ds:0A28078h
0x5B7C1B: mov     edi, [esp+17Ch+var_5C]
0x5B7C22: test    edi, edi
0x5B7C24: mov     byte ptr [esp+17Ch+var_4], 1
0x5B7C2C: jz      short loc_5B7C4A
0x5B7C2E: lea     eax, [edi+4]
0x5B7C31: push    eax; lpAddend
0x5B7C32: call    dword ptr ds:0A2807Ch
0x5B7C38: test    eax, eax
0x5B7C3A: jnz     short loc_5B7C4A
0x5B7C3C: test    edi, edi
0x5B7C3E: jz      short loc_5B7C4A
0x5B7C40: mov     edx, [edi]
0x5B7C42: mov     eax, [edx]
0x5B7C44: push    1
0x5B7C46: mov     ecx, edi
0x5B7C48: call    eax
0x5B7C4A: mov     ecx, [esp+17Ch+var_F4]
0x5B7C51: mov     edx, [ecx+0C8h]
0x5B7C57: push    edx
0x5B7C58: mov     ecx, esi
0x5B7C5A: call    sub_4CBDB0
0x5B7C5F: xor     ecx, ecx
0x5B7C61: mov     eax, 121h
0x5B7C66: mov     edx, 0Ch
0x5B7C6B: mul     edx
0x5B7C6D: seto    cl
0x5B7C70: neg     ecx
0x5B7C72: or      ecx, eax
0x5B7C74: push    ecx; Size
0x5B7C75: call    FormHeapAlloc
0x5B7C7A: mov     ebp, eax
0x5B7C7C: xor     ecx, ecx
0x5B7C7E: mov     eax, 121h
0x5B7C83: mov     edx, 0Ch
0x5B7C88: mul     edx
0x5B7C8A: seto    cl
0x5B7C8D: mov     [esp+180h+Src], ebp
0x5B7C91: neg     ecx
0x5B7C93: or      ecx, eax
0x5B7C95: push    ecx; Size
0x5B7C96: call    FormHeapAlloc
0x5B7C9B: mov     [esp+184h+var_144], eax
0x5B7C9F: xor     ecx, ecx
0x5B7CA1: mov     eax, 121h
0x5B7CA6: mov     edx, 8
0x5B7CAB: mul     edx
0x5B7CAD: seto    cl
0x5B7CB0: neg     ecx
0x5B7CB2: or      ecx, eax
0x5B7CB4: push    ecx; Size
0x5B7CB5: call    FormHeapAlloc
0x5B7CBA: mov     [esp+188h+var_EC], eax
0x5B7CC1: xor     ecx, ecx
0x5B7CC3: mov     eax, 121h
0x5B7CC8: mov     edx, 10h
0x5B7CCD: mul     edx
0x5B7CCF: seto    cl
0x5B7CD2: neg     ecx
0x5B7CD4: or      ecx, eax
0x5B7CD6: push    ecx; Size
0x5B7CD7: call    FormHeapAlloc
0x5B7CDC: xor     ebx, ebx
0x5B7CDE: add     esp, 10h
0x5B7CE1: cmp     eax, ebx
0x5B7CE3: jz      short loc_5B7D0B
0x5B7CE5: fldz
0x5B7CE7: mov     edx, 120h
0x5B7CEC: lea     ecx, [eax+8]
0x5B7CEF: fst     dword ptr [ecx-8]
0x5B7CF2: add     ecx, 10h
0x5B7CF5: sub     edx, 1
0x5B7CF8: fst     dword ptr [ecx-14h]
0x5B7CFB: fst     dword ptr [ecx-10h]
0x5B7CFE: fst     dword ptr [ecx-0Ch]
0x5B7D01: jns     short loc_5B7CEF
0x5B7D03: fstp    st
0x5B7D05: mov     [esp+17Ch+var_10C], eax
0x5B7D09: jmp     short loc_5B7D0F
0x5B7D0B: mov     [esp+17Ch+var_10C], ebx
0x5B7D0F: xor     ecx, ecx
0x5B7D11: mov     eax, 600h
0x5B7D16: mov     edx, 2
0x5B7D1B: mul     edx
0x5B7D1D: seto    cl
0x5B7D20: neg     ecx
0x5B7D22: or      ecx, eax
0x5B7D24: push    ecx; Size
0x5B7D25: call    FormHeapAlloc
0x5B7D2A: add     esp, 4
0x5B7D2D: cmp     byte ptr [esp+17Ch+var_164+3], 0
0x5B7D32: mov     esi, eax
0x5B7D34: mov     [esp+17Ch+Dst], ebx
0x5B7D3B: mov     [esp+17Ch+var_F0], ebx
0x5B7D42: mov     [esp+17Ch+var_110], ebx
0x5B7D46: mov     [esp+17Ch+var_C8], ebx
0x5B7D4D: jz      loc_5B7DDB
0x5B7D53: xor     ecx, ecx
0x5B7D55: mov     eax, 121h
0x5B7D5A: mov     edx, 0Ch
0x5B7D5F: mul     edx
0x5B7D61: seto    cl
0x5B7D64: neg     ecx
0x5B7D66: or      ecx, eax
0x5B7D68: push    ecx; Size
0x5B7D69: call    FormHeapAlloc
0x5B7D6E: mov     [esp+180h+Dst], eax
0x5B7D75: xor     ecx, ecx
0x5B7D77: mov     eax, 121h
0x5B7D7C: mov     edx, 0Ch
0x5B7D81: mul     edx
0x5B7D83: seto    cl
0x5B7D86: neg     ecx
0x5B7D88: or      ecx, eax
0x5B7D8A: push    ecx; Size
0x5B7D8B: call    FormHeapAlloc
0x5B7D90: mov     [esp+184h+var_F0], eax
0x5B7D97: xor     ecx, ecx
0x5B7D99: mov     eax, 121h
0x5B7D9E: mov     edx, 8
0x5B7DA3: mul     edx
0x5B7DA5: seto    cl
0x5B7DA8: neg     ecx
0x5B7DAA: or      ecx, eax
0x5B7DAC: push    ecx; Size
0x5B7DAD: call    FormHeapAlloc
0x5B7DB2: mov     [esp+188h+var_110], eax
0x5B7DB6: xor     ecx, ecx
0x5B7DB8: mov     eax, 600h
0x5B7DBD: mov     edx, 2
0x5B7DC2: mul     edx
0x5B7DC4: seto    cl
0x5B7DC7: neg     ecx
0x5B7DC9: or      ecx, eax
0x5B7DCB: push    ecx; Size
0x5B7DCC: call    FormHeapAlloc
0x5B7DD1: add     esp, 10h
0x5B7DD4: mov     [esp+17Ch+var_C8], eax
0x5B7DDB: fld     qword ptr ds:0A3B1B8h
0x5B7DE1: mov     edi, [esp+17Ch+var_AC]
0x5B7DE8: mov     [esp+17Ch+var_158], ebx
0x5B7DEC: jmp     short loc_5B7DF0
0x5B7DEE: xor     ebx, ebx
0x5B7DF0: fild    [esp+17Ch+var_158]
0x5B7DF4: xor     ecx, ecx
0x5B7DF6: mov     eax, ebp
0x5B7DF8: mov     [esp+17Ch+var_138], ecx
0x5B7DFC: fsub    st, st(1)
0x5B7DFE: add     ebp, 0CCh ; 'Ì'
0x5B7E04: fstp    [esp+17Ch+var_A8]
0x5B7E0B: mov     edx, [esp+17Ch+var_A8]
0x5B7E12: fild    [esp+17Ch+var_138]
0x5B7E16: add     ecx, 20h ; ' '
0x5B7E19: add     eax, 0Ch
0x5B7E1C: cmp     ecx, 220h
0x5B7E22: fsub    st, st(1)
0x5B7E24: mov     [esp+17Ch+var_138], ecx
0x5B7E28: fstp    [esp+17Ch+var_B0]
0x5B7E2F: mov     ebx, [esp+17Ch+var_B0]
0x5B7E36: mov     [eax-0Ch], ebx
0x5B7E39: mov     [eax-8], edi
0x5B7E3C: mov     [eax-4], edx
0x5B7E3F: jl      short loc_5B7E12
0x5B7E41: mov     eax, [esp+17Ch+var_158]
0x5B7E45: add     eax, 20h ; ' '
0x5B7E48: cmp     eax, 220h
0x5B7E4D: mov     [esp+17Ch+var_158], eax
0x5B7E51: jl      short loc_5B7DEE
0x5B7E53: cmp     byte ptr [esp+17Ch+var_164+3], 0
0x5B7E58: fstp    st
0x5B7E5A: jz      short loc_5B7E76
0x5B7E5C: mov     eax, [esp+17Ch+Src]
0x5B7E60: mov     ecx, [esp+17Ch+Dst]
0x5B7E67: push    0D8Ch; Size
0x5B7E6C: push    eax; Src
0x5B7E6D: push    ecx; Dst
0x5B7E6E: call    _memcpy
0x5B7E73: add     esp, 0Ch
0x5B7E76: fld     [esp+17Ch+var_100]
0x5B7E7A: mov     edx, [esp+17Ch+var_144]
0x5B7E7E: fadd    qword ptr ds:0A2FC68h
0x5B7E84: mov     eax, [esp+17Ch+var_EC]
0x5B7E8B: mov     ecx, [esp+17Ch+var_10C]
0x5B7E8F: mov     [esp+17Ch+var_158], 0
0x5B7E97: fstp    [esp+17Ch+var_160]
0x5B7E9B: mov     [esp+17Ch+var_E0], edx
0x5B7EA2: fld     qword ptr ds:0A3C770h
0x5B7EA8: mov     [esp+17Ch+var_D0], eax
0x5B7EAF: fld     qword ptr ds:0A492E0h
0x5B7EB5: mov     [esp+17Ch+var_E4], ecx
0x5B7EBC: fld1
0x5B7EBE: fld     [esp+17Ch+var_68]
0x5B7EC5: jmp     short loc_5B7EC9
0x5B7EC7: fxch    st(1)
0x5B7EC9: fild    [esp+17Ch+var_158]
0x5B7ECD: mov     eax, [esp+17Ch+var_E4]
0x5B7ED4: mov     ecx, [esp+17Ch+var_D0]
0x5B7EDB: mov     edx, [esp+17Ch+var_E0]
0x5B7EE2: fld     st
0x5B7EE4: mov     ebx, eax
0x5B7EE6: fdiv    st, st(4)
0x5B7EE8: mov     ebp, ecx
0x5B7EEA: add     eax, 110h
0x5B7EEF: add     ecx, 88h ; 'ˆ'
0x5B7EF5: mov     edi, edx
0x5B7EF7: add     edx, 0CCh ; 'Ì'
0x5B7EFD: mov     [esp+17Ch+var_138], 0
0x5B7F05: mov     [esp+17Ch+var_E4], eax
0x5B7F0C: mov     [esp+17Ch+var_D0], ecx
0x5B7F13: mov     [esp+17Ch+var_E0], edx
0x5B7F1A: fld1
0x5B7F1C: fsubrp  st(1), st
0x5B7F1E: fstp    [esp+17Ch+var_84]
0x5B7F25: fmulp   st(1), st
0x5B7F27: fstp    [esp+17Ch+var_F8]
0x5B7F2E: jmp     short loc_5B7F32
0x5B7F30: fstp    st(1)
0x5B7F32: fild    [esp+17Ch+var_138]
0x5B7F36: mov     edx, [esp+17Ch+var_A4]
0x5B7F3D: mov     eax, [esp+17Ch+var_A0]
0x5B7F44: mov     ecx, [esp+17Ch+var_9C]
0x5B7F4B: fstp    [esp+17Ch+var_150]
0x5B7F4F: mov     [edi], edx
0x5B7F51: fld     [esp+17Ch+var_150]
0x5B7F55: mov     [edi+4], eax
0x5B7F58: fld     st
0x5B7F5A: mov     eax, [esp+17Ch+var_84]
0x5B7F61: fdiv    st, st(3)
0x5B7F63: mov     [edi+8], ecx
0x5B7F66: mov     [ebp+4], eax
0x5B7F69: fstp    [esp+17Ch+var_88]
0x5B7F70: fld     [esp+17Ch+var_DC]
0x5B7F77: fst     [esp+17Ch+var_68]
0x5B7F7E: mov     edx, [esp+17Ch+var_88]
0x5B7F85: fmul    st(1), st
0x5B7F87: mov     [ebp+0], edx
0x5B7F8A: cmp     byte ptr ds:0B1437Ch, 0
0x5B7F91: fxch    st(1)
0x5B7F93: fstp    [esp+17Ch+var_BC]
0x5B7F9A: fld     [esp+17Ch+var_F8]
0x5B7FA1: fstp    [esp+17Ch+var_B8]
0x5B7FA8: fld     [esp+17Ch+var_BC]
0x5B7FAF: fadd    dword ptr [esp+17Ch+var_108]
0x5B7FB3: fstp    [esp+17Ch+var_BC]
0x5B7FBA: fld     dword ptr [esp+17Ch+var_108+4]
0x5B7FBE: fadd    [esp+17Ch+var_B8]
0x5B7FC5: fstp    [esp+17Ch+var_B8]
0x5B7FCC: fld     [esp+17Ch+var_160]
0x5B7FD0: fstp    [esp+17Ch+var_B4]
0x5B7FD7: fld     dword ptr ds:0A46B10h
0x5B7FDD: fstp    [esp+17Ch+var_150]
0x5B7FE1: jz      short loc_5B801C
0x5B7FE3: fstp    st
0x5B7FE5: lea     ecx, [esp+17Ch+var_BC]
0x5B7FEC: fstp    st(1)
0x5B7FEE: push    ecx
0x5B7FEF: fstp    st
0x5B7FF1: fstp    st
0x5B7FF3: call    sub_4D2D00
0x5B7FF8: mov     [esp+180h+var_150], eax
0x5B7FFC: fild    [esp+180h+var_150]
0x5B8000: add     esp, 4
0x5B8003: fstp    [esp+17Ch+var_150]
0x5B8007: fld     qword ptr ds:0A3C770h
0x5B800D: fld     qword ptr ds:0A492E0h
0x5B8013: fld1
0x5B8015: fld     [esp+17Ch+var_68]
0x5B801C: cmp     byte ptr [esp+17Ch+var_164+3], 0
0x5B8021: jz      short loc_5B8070
0x5B8023: fxch    st(1)
0x5B8025: fst     [esp+17Ch+var_4C]
0x5B802C: mov     edx, [esp+17Ch+var_4C]
0x5B8033: fst     [esp+17Ch+var_48]
0x5B803A: mov     eax, [esp+17Ch+var_48]
0x5B8041: fst     [esp+17Ch+var_44]
0x5B8048: mov     ecx, [esp+17Ch+var_44]
0x5B804F: fld     [esp+17Ch+var_150]
0x5B8053: mov     [ebx], edx
0x5B8055: fmul    st, st(4)
0x5B8057: mov     [ebx+4], eax
0x5B805A: mov     [ebx+8], ecx
0x5B805D: fstp    [esp+17Ch+var_40]
0x5B8064: mov     edx, [esp+17Ch+var_40]
0x5B806B: mov     [ebx+0Ch], edx
0x5B806E: jmp     short loc_5B80C3
0x5B8070: fld     [esp+17Ch+var_150]
0x5B8074: fmul    st, st(4)
0x5B8076: fstp    [esp+17Ch+var_150]
0x5B807A: fld     [esp+17Ch+var_150]
0x5B807E: fst     [esp+17Ch+var_2C]
0x5B8085: mov     eax, [esp+17Ch+var_2C]
0x5B808C: fst     [esp+17Ch+var_28]
0x5B8093: mov     ecx, [esp+17Ch+var_28]
0x5B809A: fstp    [esp+17Ch+var_24]
0x5B80A1: mov     edx, [esp+17Ch+var_24]
0x5B80A8: mov     [ebx], eax
0x5B80AA: fxch    st(1)
0x5B80AC: fst     [esp+17Ch+var_20]
0x5B80B3: mov     eax, [esp+17Ch+var_20]
0x5B80BA: mov     [ebx+4], ecx
0x5B80BD: mov     [ebx+8], edx
0x5B80C0: mov     [ebx+0Ch], eax
0x5B80C3: mov     eax, [esp+17Ch+var_138]
0x5B80C7: add     eax, 1
0x5B80CA: add     edi, 0Ch
0x5B80CD: add     ebp, 8
0x5B80D0: add     ebx, 10h
0x5B80D3: cmp     eax, 11h
0x5B80D6: mov     [esp+17Ch+var_138], eax
0x5B80DA: jl      loc_5B7F30
0x5B80E0: mov     eax, [esp+17Ch+var_158]
0x5B80E4: add     eax, 1
0x5B80E7: cmp     eax, 11h
0x5B80EA: mov     [esp+17Ch+var_158], eax
0x5B80EE: jl      loc_5B7EC7
0x5B80F4: cmp     byte ptr [esp+17Ch+var_164+3], 0
0x5B80F9: fstp    st(1)
0x5B80FB: fstp    st(1)
0x5B80FD: fstp    st
0x5B80FF: fstp    st
0x5B8101: jz      short loc_5B8134
0x5B8103: mov     ecx, [esp+17Ch+var_144]
0x5B8107: mov     edx, [esp+17Ch+var_F0]
0x5B810E: push    0D8Ch; Size
0x5B8113: push    ecx; Src
0x5B8114: push    edx; Dst
0x5B8115: call    _memcpy
0x5B811A: mov     eax, [esp+188h+var_EC]
0x5B8121: mov     ecx, [esp+188h+var_110]
0x5B8125: push    908h; Size
0x5B812A: push    eax; Src
0x5B812B: push    ecx; Dst
0x5B812C: call    _memcpy
0x5B8131: add     esp, 18h
0x5B8134: xor     eax, eax
0x5B8136: xor     ecx, ecx
0x5B8138: mov     [esp+17Ch+var_158], ecx
0x5B813C: mov     ebx, ecx
0x5B813E: xor     ebp, ebp
0x5B8140: and     ebx, 80000001h
0x5B8146: jns     short loc_5B814D
0x5B8148: dec     ebx
0x5B8149: or      ebx, 0FFFFFFFEh
0x5B814C: inc     ebx
0x5B814D: movzx   ecx, cx
0x5B8150: mov     edx, ecx
0x5B8152: shl     edx, 4
0x5B8155: add     edx, ecx
0x5B8157: add     ecx, 1
0x5B815A: mov     edi, ecx
0x5B815C: shl     edi, 4
0x5B815F: mov     [esp+17Ch+var_160], ebx
0x5B8163: add     edi, ecx
0x5B8165: jmp     short loc_5B8174
0x5B8167: jmp     short loc_5B8170
0x5B8169: align 10h
0x5B8170: mov     ebx, [esp+17Ch+var_160]
0x5B8174: mov     ecx, ebp
0x5B8176: and     ecx, 80000001h
0x5B817C: jns     short loc_5B8183
0x5B817E: dec     ecx
0x5B817F: or      ecx, 0FFFFFFFEh
0x5B8182: inc     ecx
0x5B8183: xor     ecx, ebx
0x5B8185: jz      short loc_5B81B7
0x5B8187: movzx   ebx, bp
0x5B818A: lea     ecx, [edi+ebx]
0x5B818D: mov     [esi+eax*2], cx
0x5B8191: add     eax, 1
0x5B8194: add     ebx, edx
0x5B8196: mov     [esi+eax*2], bx
0x5B819A: add     ebx, 1
0x5B819D: add     eax, 1
0x5B81A0: mov     [esi+eax*2], bx
0x5B81A4: add     eax, 1
0x5B81A7: mov     [esi+eax*2], bx
0x5B81AB: add     eax, 1
0x5B81AE: lea     ebx, [ecx+1]
0x5B81B1: mov     [esi+eax*2], bx
0x5B81B5: jmp     short loc_5B81F5
0x5B81B7: movzx   ecx, bp
0x5B81BA: lea     ebx, [edi+ecx+1]
0x5B81BE: mov     [esi+eax*2], bx
0x5B81C2: add     eax, 1
0x5B81C5: mov     [esp+17Ch+var_F8], ebx
0x5B81CC: lea     ebx, [edi+ecx]
0x5B81CF: mov     [esi+eax*2], bx
0x5B81D3: add     eax, 1
0x5B81D6: add     ecx, edx
0x5B81D8: mov     [esi+eax*2], cx
0x5B81DC: add     eax, 1
0x5B81DF: mov     [esi+eax*2], cx
0x5B81E3: add     eax, 1
0x5B81E6: add     ecx, 1
0x5B81E9: mov     [esi+eax*2], cx
0x5B81ED: mov     cx, word ptr [esp+17Ch+var_F8]
0x5B81F5: add     eax, 1
0x5B81F8: mov     [esi+eax*2], cx
0x5B81FC: add     ebp, 1
0x5B81FF: add     eax, 1
0x5B8202: cmp     ebp, 10h
0x5B8205: jl      loc_5B8170
0x5B820B: mov     ecx, [esp+17Ch+var_158]
0x5B820F: add     ecx, 1
0x5B8212: cmp     ecx, 10h
0x5B8215: mov     [esp+17Ch+var_158], ecx
0x5B8219: jl      loc_5B813C
0x5B821F: cmp     byte ptr [esp+17Ch+var_164+3], 0
0x5B8224: jz      loc_5B8385
0x5B822A: mov     ebp, [esp+17Ch+var_C8]
0x5B8231: push    0C00h; Size
0x5B8236: push    esi; Src
0x5B8237: push    ebp; Dst
0x5B8238: call    _memcpy
0x5B823D: push    0D0h ; 'Ð'; Size
0x5B8242: call    FormHeapAlloc
0x5B8247: mov     edi, eax
0x5B8249: add     esp, 10h
0x5B824C: mov     [esp+17Ch+var_160], edi
0x5B8250: test    edi, edi
0x5B8252: mov     byte ptr [esp+17Ch+var_4], 4
0x5B825A: jz      short loc_5B82A7
0x5B825C: call    sub_57D7F0
0x5B8261: call    Double_To_SInt32
0x5B8266: push    eax
0x5B8267: call    sub_57D7A0
0x5B826C: call    Double_To_SInt32
0x5B8271: mov     edx, [esp+180h+var_110]
0x5B8275: mov     ecx, [esp+180h+Dst]
0x5B827C: push    eax
0x5B827D: mov     eax, [esp+184h+var_F0]
0x5B8284: push    0
0x5B8286: push    0
0x5B8288: push    ebp
0x5B8289: push    200h
0x5B828E: push    0
0x5B8290: push    1
0x5B8292: push    edx
0x5B8293: push    0
0x5B8295: push    eax
0x5B8296: push    ecx
0x5B8297: push    121h
0x5B829C: mov     ecx, edi
0x5B829E: call    sub_4A1780
0x5B82A3: mov     edi, eax
0x5B82A5: jmp     short loc_5B82A9
0x5B82A7: xor     edi, edi
0x5B82A9: push    30h ; '0'; Size
0x5B82AB: mov     byte ptr [esp+180h+var_4], 1
0x5B82B3: call    FormHeapAlloc
0x5B82B8: add     esp, 4
0x5B82BB: mov     [esp+17Ch+var_160], eax
0x5B82BF: test    eax, eax
0x5B82C1: mov     byte ptr [esp+17Ch+var_4], 5
0x5B82C9: jz      short loc_5B82D6
0x5B82CB: mov     ecx, eax
0x5B82CD: call    NiTexturingProperty__NiTexturingProperty
0x5B82D2: mov     ebp, eax
0x5B82D4: jmp     short loc_5B82D8
0x5B82D6: xor     ebp, ebp
0x5B82D8: mov     edx, ds:0B42D44h
0x5B82DE: push    edx
0x5B82DF: mov     ecx, ebp
0x5B82E1: mov     byte ptr [esp+180h+var_4], 1
0x5B82E9: call    NiTexturingProperty__SetUnk08
0x5B82EE: push    0
0x5B82F0: mov     ecx, ebp
0x5B82F2: call    sub_405870
0x5B82F7: and     word ptr [ebp+18h], 0FFF1h
0x5B82FD: push    ebp; a2
0x5B82FE: mov     ecx, edi; this
0x5B8300: call    sub_405680
0x5B8305: mov     ecx, edi; this
0x5B8307: call    NiAVObject_InitializePropertyState
0x5B830C: mov     ebx, [esp+17Ch+var_D8]
0x5B8313: mov     ecx, [esp+17Ch+var_14C]
0x5B8317: mov     eax, ebx
0x5B8319: shl     eax, 9
0x5B831C: mov     [esp+17Ch+var_160], eax
0x5B8320: fild    [esp+17Ch+var_160]
0x5B8324: fld     qword ptr ds:0A3B1B8h
0x5B832A: shl     ecx, 9
0x5B832D: mov     [esp+17Ch+var_160], ecx
0x5B8331: fadd    st(1), st
0x5B8333: push    1
0x5B8335: fxch    st(1)
0x5B8337: push    edi
0x5B8338: fstp    [esp+184h+var_94]
0x5B833F: mov     edx, [esp+184h+var_94]
0x5B8346: fldz
0x5B8348: mov     [edi+54h], edx
0x5B834B: fstp    [esp+184h+var_90]
0x5B8352: mov     eax, [esp+184h+var_90]
0x5B8359: mov     [edi+58h], eax
0x5B835C: fiadd   [esp+184h+var_160]
0x5B8360: fsub    [esp+184h+var_130]
0x5B8364: fstp    [esp+184h+var_8C]
0x5B836B: mov     ecx, [esp+184h+var_8C]
0x5B8372: mov     [edi+5Ch], ecx
0x5B8375: mov     ecx, [esp+184h+var_128]
0x5B8379: mov     edx, [ecx]
0x5B837B: mov     eax, [edx+84h]
0x5B8381: call    eax
0x5B8383: jmp     short loc_5B838C
0x5B8385: mov     ebx, [esp+17Ch+var_D8]
0x5B838C: push    0D0h ; 'Ð'; Size
0x5B8391: call    FormHeapAlloc
0x5B8396: mov     edi, eax
0x5B8398: add     esp, 4
0x5B839B: mov     [esp+17Ch+var_160], edi
0x5B839F: test    edi, edi
0x5B83A1: mov     byte ptr [esp+17Ch+var_4], 6
0x5B83A9: jz      short loc_5B83F6
0x5B83AB: call    sub_57D7F0
0x5B83B0: call    Double_To_SInt32
0x5B83B5: push    eax
0x5B83B6: call    sub_57D7A0
0x5B83BB: call    Double_To_SInt32
0x5B83C0: mov     ecx, [esp+180h+var_EC]
0x5B83C7: mov     edx, [esp+180h+var_10C]
0x5B83CB: push    eax
0x5B83CC: mov     eax, [esp+184h+var_144]
0x5B83D0: push    0
0x5B83D2: push    0
0x5B83D4: push    esi
0x5B83D5: push    200h
0x5B83DA: push    0
0x5B83DC: push    1
0x5B83DE: push    ecx
0x5B83DF: mov     ecx, [esp+1A0h+Src]
0x5B83E3: push    edx
0x5B83E4: push    eax
0x5B83E5: push    ecx
0x5B83E6: push    121h
0x5B83EB: mov     ecx, edi
0x5B83ED: call    sub_4A1780
0x5B83F2: mov     esi, eax
0x5B83F4: jmp     short loc_5B83F8
0x5B83F6: xor     esi, esi
0x5B83F8: mov     ebp, [esp+17Ch+var_148]
0x5B83FC: test    ebp, ebp
0x5B83FE: mov     byte ptr [esp+17Ch+var_4], 1
0x5B8406: jz      short loc_5B8480
0x5B8408: push    30h ; '0'; Size
0x5B840A: call    FormHeapAlloc
0x5B840F: add     esp, 4
0x5B8412: mov     [esp+17Ch+var_160], eax
0x5B8416: test    eax, eax
0x5B8418: mov     byte ptr [esp+17Ch+var_4], 7
0x5B8420: jz      short loc_5B842D
0x5B8422: mov     ecx, eax
0x5B8424: call    NiTexturingProperty__NiTexturingProperty
0x5B8429: mov     edi, eax
0x5B842B: jmp     short loc_5B842F
0x5B842D: xor     edi, edi
0x5B842F: push    ebp
0x5B8430: mov     ecx, edi
0x5B8432: mov     byte ptr [esp+180h+var_4], 1
0x5B843A: call    NiTexturingProperty__SetUnk08
0x5B843F: push    0
0x5B8441: mov     ecx, edi
0x5B8443: call    sub_405870
0x5B8448: mov     dx, [edi+18h]
0x5B844C: and     dx, 0FFF5h
0x5B8451: or      dx, 4
0x5B8455: push    edi; a2
0x5B8456: mov     ecx, esi; this
0x5B8458: mov     [edi+18h], dx
0x5B845C: call    sub_405680
0x5B8461: lea     eax, [ebp+4]
0x5B8464: push    eax; lpAddend
0x5B8465: call    dword ptr ds:0A2807Ch
0x5B846B: test    eax, eax
0x5B846D: jnz     short loc_5B847A
0x5B846F: mov     edx, [ebp+0]
0x5B8472: mov     eax, [edx]
0x5B8474: push    1
0x5B8476: mov     ecx, ebp
0x5B8478: call    eax
0x5B847A: xor     ebp, ebp
0x5B847C: mov     [esp+17Ch+var_148], ebp
0x5B8480: push    7
0x5B8482: mov     ecx, esi
0x5B8484: call    NiNode_GetNiPropertyByID
0x5B8489: test    eax, eax
0x5B848B: jnz     short loc_5B849A
0x5B848D: call    sub_4E70B0
0x5B8492: push    eax; a2
0x5B8493: mov     ecx, esi; this
0x5B8495: call    sub_405680
0x5B849A: cmp     byte ptr [esp+17Ch+var_164+3], 0
0x5B849F: jz      short loc_5B84FA
0x5B84A1: push    1Ch; Size
0x5B84A3: call    FormHeapAlloc
0x5B84A8: mov     edi, eax
0x5B84AA: add     esp, 4
0x5B84AD: mov     [esp+17Ch+var_160], edi
0x5B84B1: test    edi, edi
0x5B84B3: mov     byte ptr [esp+17Ch+var_4], 8
0x5B84BB: jz      short loc_5B84D6
0x5B84BD: mov     ecx, edi; this
0x5B84BF: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x5B84C4: mov     dword ptr [edi], offset ??_7NiAlphaProperty@@6B@; const NiAlphaProperty::`vftable'
0x5B84CA: mov     word ptr [edi+18h], 0ECh ; 'ì'
0x5B84D0: mov     byte ptr [edi+1Ah], 0
0x5B84D4: jmp     short loc_5B84D8
0x5B84D6: xor     edi, edi
0x5B84D8: mov     cx, [edi+18h]
0x5B84DC: and     cx, 0FEEDh
0x5B84E1: or      cx, 0EDh
0x5B84E6: mov     [edi+18h], cx
0x5B84EA: push    edi; a2
0x5B84EB: mov     ecx, esi; this
0x5B84ED: mov     byte ptr [esp+180h+var_4], 1
0x5B84F5: call    sub_405680
0x5B84FA: mov     ecx, esi; this
0x5B84FC: call    NiAVObject_InitializePropertyState
0x5B8501: mov     eax, [esp+17Ch+var_14C]
0x5B8505: shl     ebx, 9
0x5B8508: mov     [esp+17Ch+var_160], ebx
0x5B850C: fild    [esp+17Ch+var_160]
0x5B8510: fld     qword ptr ds:0A3B1B8h
0x5B8516: mov     ebx, [esp+17Ch+var_128]
0x5B851A: shl     eax, 9
0x5B851D: fadd    st(1), st
0x5B851F: mov     [esp+17Ch+var_160], eax
0x5B8523: mov     eax, dword ptr [esp+17Ch+var_80+4]
0x5B852A: fxch    st(1)
0x5B852C: push    1
0x5B852E: fstp    dword ptr [esp+180h+var_80]
0x5B8535: mov     edx, dword ptr [esp+180h+var_80]
0x5B853C: mov     [esi+54h], edx
0x5B853F: fiadd   [esp+180h+var_160]
0x5B8543: mov     [esi+58h], eax
0x5B8546: push    esi
0x5B8547: fsub    [esp+184h+var_130]
0x5B854B: fstp    [esp+184h+var_78]
0x5B8552: mov     ecx, [esp+184h+var_78]
0x5B8559: mov     [esi+5Ch], ecx
0x5B855C: mov     edx, [ebx]
0x5B855E: mov     eax, [edx+84h]
0x5B8564: mov     ecx, ebx
0x5B8566: call    eax
0x5B8568: test    ebp, ebp
0x5B856A: mov     [esp+17Ch+var_4], 0FFFFFFFFh
0x5B8575: jz      short loc_5B8590
0x5B8577: lea     ecx, [ebp+4]
0x5B857A: push    ecx; lpAddend
0x5B857B: call    dword ptr ds:0A2807Ch
0x5B8581: test    eax, eax
0x5B8583: jnz     short loc_5B8590
0x5B8585: mov     edx, [ebp+0]
0x5B8588: mov     eax, [edx]
0x5B858A: push    1
0x5B858C: mov     ecx, ebp
0x5B858E: call    eax
0x5B8590: mov     eax, [esp+17Ch+var_124]
0x5B8594: add     eax, 1
0x5B8597: cmp     eax, [esp+17Ch+var_140]
0x5B859B: mov     [esp+17Ch+var_124], eax
0x5B859F: jl      loc_5B7990
0x5B85A5: mov     esi, [esp+17Ch+var_E8]
0x5B85AC: jmp     short loc_5B85B2
0x5B85AE: mov     ebx, [esp+17Ch+var_128]
0x5B85B2: mov     ecx, ds:0B333A0h
0x5B85B8: xor     edi, edi
0x5B85BA: cmp     [ecx+34h], edi
0x5B85BD: jnz     loc_5B86A6
0x5B85C3: cmp     [esp+17Ch+var_12C], edi
0x5B85C7: mov     [esp+17Ch+var_144], edi
0x5B85CB: jle     loc_5B868C
0x5B85D1: mov     [esp+17Ch+var_140], 0
0x5B85D9: mov     edx, [esp+17Ch+var_140]
0x5B85DD: mov     eax, [esp+17Ch+var_144]
0x5B85E1: mov     ecx, ds:0B333A0h
0x5B85E7: mov     ecx, [ecx+8]
0x5B85EA: push    edx
0x5B85EB: push    eax
0x5B85EC: call    GetGridEntry
0x5B85F1: mov     ebp, eax
0x5B85F3: test    ebp, ebp
0x5B85F5: jz      short loc_5B8662
0x5B85F7: cmp     dword ptr [ebp+0], 0
0x5B85FB: jz      short loc_5B8662
0x5B85FD: xor     ebx, ebx
0x5B85FF: mov     esi, 8
0x5B8604: mov     edx, [esp+17Ch+var_134]
0x5B8608: cmp     byte ptr [edi+edx], 0
0x5B860C: jz      short loc_5B8654
0x5B860E: mov     ecx, [ebp+0]; this
0x5B8611: call    TESObjectCELL_GetNiNode?
0x5B8616: test    eax, eax
0x5B8618: jz      short loc_5B8649
0x5B861A: movzx   ecx, word ptr [eax+0B6h]
0x5B8621: lea     edx, [ebx+2]
0x5B8624: cmp     ecx, edx
0x5B8626: jbe     short loc_5B8649
0x5B8628: mov     eax, [eax+0B0h]
0x5B862E: mov     eax, [esi+eax]
0x5B8631: test    eax, eax
0x5B8633: jz      short loc_5B8649
0x5B8635: cmp     word ptr [eax+0B6h], 0
0x5B863D: jbe     short loc_5B8649
0x5B863F: mov     ecx, [eax+0B0h]
0x5B8645: mov     eax, [ecx]
0x5B8647: jmp     short loc_5B864B
0x5B8649: xor     eax, eax
0x5B864B: test    eax, eax
0x5B864D: jz      short loc_5B8654
0x5B864F: or      word ptr [eax+18h], 1
0x5B8654: add     esi, 4
0x5B8657: add     edi, 1
0x5B865A: add     ebx, 1
0x5B865D: cmp     esi, 18h
0x5B8660: jl      short loc_5B8604
0x5B8662: mov     eax, [esp+17Ch+var_140]
0x5B8666: mov     ecx, [esp+17Ch+var_12C]
0x5B866A: add     eax, 1
0x5B866D: cmp     eax, ecx
0x5B866F: mov     [esp+17Ch+var_140], eax
0x5B8673: jl      loc_5B85D9
0x5B8679: mov     eax, [esp+17Ch+var_144]
0x5B867D: add     eax, 1
0x5B8680: cmp     eax, ecx
0x5B8682: mov     [esp+17Ch+var_144], eax
0x5B8686: jl      loc_5B85D1
0x5B868C: mov     edx, [esp+17Ch+var_134]
0x5B8690: push    edx; void *
0x5B8691: mov     ecx, offset FormHeap
0x5B8696: call    MemoryHeap_Free_checked
0x5B869B: mov     ebx, [esp+17Ch+var_128]
0x5B869F: mov     esi, [esp+17Ch+var_E8]
0x5B86A6: cmp     byte ptr [esp+17Ch+var_15C+3], 0
0x5B86AB: mov     eax, [esp+17Ch+var_3C]
0x5B86B2: mov     ecx, [esp+17Ch+var_38]
0x5B86B9: mov     edx, [esp+17Ch+var_34]
0x5B86C0: mov     ds:0B45E04h, eax
0x5B86C5: mov     eax, [esp+17Ch+var_30]
0x5B86CC: mov     ds:0B45E08h, ecx
0x5B86D2: mov     cl, byte ptr [esp+17Ch+var_13C+2]
0x5B86D6: mov     ds:0B45E0Ch, edx
0x5B86DC: mov     ds:0B45E10h, eax
0x5B86E1: mov     ds:0B45DC0h, cl
0x5B86E7: jnz     short loc_5B86F4
0x5B86E9: mov     eax, ds:0B35234h
0x5B86EE: and     word ptr [eax+18h], 0FFFEh
0x5B86F4: cmp     byte ptr [esp+17Ch+var_13C+3], 0
0x5B86F9: jnz     short loc_5B8701
0x5B86FB: and     word ptr [esi+18h], 0FFFEh
0x5B8701: mov     esi, ds:0B42D44h
0x5B8707: test    esi, esi
0x5B8709: jz      short loc_5B8731
0x5B870B: lea     edx, [esi+4]
0x5B870E: push    edx; a3
0x5B870F: call    dword ptr ds:0A2807Ch
0x5B8715: test    eax, eax
0x5B8717: jnz     short loc_5B8727
0x5B8719: test    esi, esi
0x5B871B: jz      short loc_5B8727
0x5B871D: mov     eax, [esi]
0x5B871F: mov     edx, [eax]
0x5B8721: push    1; a3
0x5B8723: mov     ecx, esi
0x5B8725: call    edx
0x5B8727: mov     dword ptr ds:0B42D44h, 0
0x5B8731: fld1
0x5B8733: mov     esi, [esp+17Ch+var_F4]
0x5B873A: push    ecx
0x5B873B: fstp    [esp+180h+a3]; a3
0x5B873E: mov     ecx, [esi+64h]; this
0x5B8741: push    0FC8h; a2
0x5B8746: call    Tile_SetFloat
0x5B874B: fld     dword ptr ds:0A379B4h
0x5B8751: push    ecx
0x5B8752: mov     ecx, [esi+64h]; this
0x5B8755: fstp    [esp+180h+a3]; a3
0x5B8758: push    0FC8h; a2
0x5B875D: call    Tile_SetFloat
0x5B8762: fild    [esp+17Ch+var_120]
0x5B8766: push    ecx
0x5B8767: mov     ecx, [esi+64h]; this
0x5B876A: fstp    [esp+180h+var_130]
0x5B876E: fld     [esp+180h+var_130]
0x5B8772: fstp    [esp+180h+a3]; a3
0x5B8775: push    0FAEh; a2
0x5B877A: call    Tile_SetFloat
0x5B877F: fld     [esp+17Ch+var_130]
0x5B8783: push    ecx
0x5B8784: mov     ecx, [esi+64h]; this
0x5B8787: fstp    [esp+180h+a3]; a3
0x5B878A: push    0FAFh; a2
0x5B878F: call    Tile_SetFloat
0x5B8794: mov     eax, ebx
0x5B8796: mov     ecx, [esp+17Ch+var_C]
0x5B879D: mov     large fs:0, ecx
0x5B87A4: pop     ecx
0x5B87A5: pop     edi
0x5B87A6: pop     esi
0x5B87A7: pop     ebp
0x5B87A8: pop     ebx
0x5B87A9: mov     esp, ebp
0x5B87AB: pop     ebp
0x5B87AC: retn
