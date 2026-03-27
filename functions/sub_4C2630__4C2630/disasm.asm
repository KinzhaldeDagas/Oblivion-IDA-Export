0x4C2630: push    0FFFFFFFFh
0x4C2632: push    offset SEH_4C2630
0x4C2637: mov     eax, large fs:0
0x4C263D: push    eax
0x4C263E: sub     esp, 8Ch
0x4C2644: push    ebx
0x4C2645: push    ebp
0x4C2646: push    esi
0x4C2647: push    edi
0x4C2648: mov     eax, ds:0B30AACh
0x4C264D: xor     eax, esp
0x4C264F: push    eax
0x4C2650: lea     eax, [esp+0ACh+var_C]
0x4C2657: mov     large fs:0, eax
0x4C265D: mov     esi, ecx
0x4C265F: mov     [esp+0ACh+var_24], esi
0x4C2666: xor     ebx, ebx
0x4C2668: mov     [esp+0ACh+var_98], ebx
0x4C266C: mov     eax, [esi+24h]
0x4C266F: test    eax, eax
0x4C2671: jz      loc_4C3014
0x4C2677: cmp     [eax], ebx
0x4C2679: jz      loc_4C3014
0x4C267F: mov     eax, [eax]
0x4C2681: cmp     [eax], ebx
0x4C2683: jz      loc_4C3014
0x4C2689: test    byte ptr [esi+1Ch], 2
0x4C268D: fld1
0x4C268F: fst     [esp+0ACh+var_1C]
0x4C2696: fst     [esp+0ACh+var_18]
0x4C269D: fstp    [esp+0ACh+var_14]
0x4C26A4: fldz
0x4C26A6: fstp    [esp+0ACh+var_10]
0x4C26AD: jnz     short loc_4C2706
0x4C26AF: mov     ebp, [esp+0ACh+var_10]
0x4C26B6: xor     edi, edi
0x4C26B8: xor     ecx, ecx
0x4C26BA: mov     edx, 11h
0x4C26BF: mov     eax, [esi+24h]
0x4C26C2: mov     eax, [eax+0Ch]
0x4C26C5: mov     eax, [eax+edi]
0x4C26C8: mov     ebx, [esp+0ACh+var_1C]
0x4C26CF: add     eax, ecx
0x4C26D1: mov     [eax], ebx
0x4C26D3: mov     ebx, [esp+0ACh+var_18]
0x4C26DA: mov     [eax+4], ebx
0x4C26DD: mov     ebx, [esp+0ACh+var_14]
0x4C26E4: add     ecx, 10h
0x4C26E7: sub     edx, 1
0x4C26EA: mov     [eax+8], ebx
0x4C26ED: mov     [eax+0Ch], ebp
0x4C26F0: jnz     short loc_4C26BF
0x4C26F2: cmp     ecx, 1210h
0x4C26F8: jl      short loc_4C26BA
0x4C26FA: add     edi, 4
0x4C26FD: cmp     edi, 10h
0x4C2700: jl      short loc_4C26B8
0x4C2702: mov     ebx, [esp+0ACh+var_98]
0x4C2706: or      dword ptr [esi+1Ch], 8
0x4C270A: xor     ebp, ebp
0x4C270C: mov     [esp+0ACh+var_70], ebp
0x4C2710: mov     ecx, [esi+24h]
0x4C2713: add     ecx, 40h ; '@'
0x4C2716: jz      short loc_4C2781
0x4C2718: push    14h; Size
0x4C271A: call    FormHeapAlloc
0x4C271F: mov     edi, eax
0x4C2721: add     esp, 4
0x4C2724: mov     [esp+0ACh+var_8C], edi
0x4C2728: test    edi, edi
0x4C272A: mov     [esp+0ACh+var_4], 0
0x4C2735: jz      short loc_4C2761
0x4C2737: mov     edx, [esi+24h]
0x4C273A: mov     eax, [edx+ebp*4+40h]
0x4C273E: mov     ecx, [eax]
0x4C2740: mov     [esp+0ACh+var_78], ecx
0x4C2744: mov     ecx, edi
0x4C2746: call    sub_721350
0x4C274B: mov     edx, [esp+0ACh+var_78]
0x4C274F: mov     dword ptr [edi], offset ??_7NiBinaryExtraData@@6B@; const NiBinaryExtraData::`vftable'
0x4C2755: mov     dword ptr [edi+10h], 2420h
0x4C275C: mov     [edi+0Ch], edx
0x4C275F: jmp     short loc_4C2763
0x4C2761: xor     edi, edi
0x4C2763: mov     eax, [esi+24h]
0x4C2766: mov     ecx, [eax]
0x4C2768: mov     ecx, [ecx+ebp*4]
0x4C276B: push    edi
0x4C276C: push    offset aTex; "tex %"
0x4C2771: mov     [esp+0B4h+var_4], 0FFFFFFFFh
0x4C277C: call    sub_6FF820
0x4C2781: mov     edx, [esi+24h]
0x4C2784: mov     eax, [edx]
0x4C2786: mov     ecx, [eax+ebp*4]
0x4C2789: push    1
0x4C278B: push    1
0x4C278D: push    1
0x4C278F: push    ecx
0x4C2790: call    sub_7B8940
0x4C2795: mov     edx, [esi+24h]
0x4C2798: mov     eax, [edx]
0x4C279A: mov     eax, [eax+ebp*4]
0x4C279D: add     esp, 10h
0x4C27A0: cmp     word ptr [eax+0B6h], 0
0x4C27A8: ja      short loc_4C27AE
0x4C27AA: xor     ecx, ecx
0x4C27AC: jmp     short loc_4C27B6
0x4C27AE: mov     ecx, [eax+0B0h]
0x4C27B4: mov     ecx, [ecx]
0x4C27B6: push    4
0x4C27B8: call    NiNode_GetNiPropertyByID
0x4C27BD: mov     edi, eax
0x4C27BF: test    edi, edi
0x4C27C1: jz      short loc_4C27E6
0x4C27C3: mov     edx, [edi]
0x4C27C5: mov     eax, [edx+54h]
0x4C27C8: mov     ecx, edi
0x4C27CA: call    eax
0x4C27CC: cmp     eax, 5
0x4C27CF: jl      short loc_4C27E6
0x4C27D1: mov     edx, [edi]
0x4C27D3: mov     eax, [edx+54h]
0x4C27D6: mov     ecx, edi
0x4C27D8: call    eax
0x4C27DA: cmp     eax, 0Ah
0x4C27DD: jg      short loc_4C27E6
0x4C27DF: mov     eax, 1
0x4C27E4: jmp     short loc_4C27E8
0x4C27E6: xor     eax, eax
0x4C27E8: neg     eax
0x4C27EA: sbb     eax, eax
0x4C27EC: and     eax, edi
0x4C27EE: mov     [esp+0ACh+var_78], eax
0x4C27F2: jz      loc_4C2FF9
0x4C27F8: mov     ecx, [esi+24h]
0x4C27FB: cmp     dword ptr [ecx+ebp*4+20h], 0
0x4C2800: lea     eax, [ecx+ebp*4+20h]
0x4C2804: jz      short loc_4C280D
0x4C2806: mov     ecx, [eax]
0x4C2808: call    sub_4C95B0
0x4C280D: xor     edi, edi
0x4C280F: mov     edx, [esi+24h]
0x4C2812: mov     eax, [edx+ebp*4+30h]
0x4C2816: add     eax, edi
0x4C2818: cmp     dword ptr [eax], 0
0x4C281B: jz      short loc_4C2824
0x4C281D: mov     ecx, [eax]
0x4C281F: call    sub_4C95B0
0x4C2824: add     edi, 4
0x4C2827: cmp     edi, 20h ; ' '
0x4C282A: jl      short loc_4C280F
0x4C282C: mov     ecx, [esi+24h]
0x4C282F: mov     eax, [ecx+ebp*4+30h]
0x4C2833: cmp     dword ptr [eax+1Ch], 0
0x4C2837: jz      short loc_4C2852
0x4C2839: mov     ecx, [eax+1Ch]
0x4C283C: lea     edx, [esp+0ACh+var_2C]
0x4C2843: push    edx
0x4C2844: call    sub_4C1670
0x4C2849: mov     [esp+0ACh+var_50], eax
0x4C284D: or      ebx, 1
0x4C2850: jmp     short loc_4C2865
0x4C2852: mov     [esp+0ACh+var_58], 0
0x4C285A: lea     eax, [esp+0ACh+var_58]
0x4C285E: mov     [esp+0ACh+var_50], eax
0x4C2862: or      ebx, 2
0x4C2865: mov     ecx, [esi+24h]
0x4C2868: mov     eax, [ecx+ebp*4+30h]
0x4C286C: xor     edi, edi
0x4C286E: cmp     [eax+18h], edi
0x4C2871: jz      short loc_4C2889
0x4C2873: mov     ecx, [eax+18h]
0x4C2876: lea     edx, [esp+0ACh+var_34]
0x4C287A: push    edx
0x4C287B: call    sub_4C1670
0x4C2880: mov     [esp+0ACh+var_6C], eax
0x4C2884: or      ebx, 4
0x4C2887: jmp     short loc_4C2898
0x4C2889: mov     [esp+0ACh+var_60], edi
0x4C288D: lea     eax, [esp+0ACh+var_60]
0x4C2891: mov     [esp+0ACh+var_6C], eax
0x4C2895: or      ebx, 8
0x4C2898: mov     ecx, [esi+24h]
0x4C289B: mov     eax, [ecx+ebp*4+30h]
0x4C289F: cmp     [eax+14h], edi
0x4C28A2: jz      short loc_4C28BA
0x4C28A4: mov     ecx, [eax+14h]
0x4C28A7: lea     edx, [esp+0ACh+var_3C]
0x4C28AB: push    edx
0x4C28AC: call    sub_4C1670
0x4C28B1: mov     [esp+0ACh+var_7C], eax
0x4C28B5: or      ebx, 10h
0x4C28B8: jmp     short loc_4C28C9
0x4C28BA: mov     [esp+0ACh+var_68], edi
0x4C28BE: lea     eax, [esp+0ACh+var_68]
0x4C28C2: mov     [esp+0ACh+var_7C], eax
0x4C28C6: or      ebx, 20h
0x4C28C9: mov     ecx, [esi+24h]
0x4C28CC: mov     eax, [ecx+ebp*4+30h]
0x4C28D0: cmp     [eax+10h], edi
0x4C28D3: jz      short loc_4C28EB
0x4C28D5: mov     ecx, [eax+10h]
0x4C28D8: lea     edx, [esp+0ACh+var_40]
0x4C28DC: push    edx
0x4C28DD: call    sub_4C1670
0x4C28E2: mov     [esp+0ACh+var_84], eax
0x4C28E6: or      ebx, 40h
0x4C28E9: jmp     short loc_4C28FD
0x4C28EB: mov     [esp+0ACh+var_74], edi
0x4C28EF: lea     eax, [esp+0ACh+var_74]
0x4C28F3: mov     [esp+0ACh+var_84], eax
0x4C28F7: or      ebx, 80h
0x4C28FD: mov     ecx, [esi+24h]
0x4C2900: mov     eax, [ecx+ebp*4+30h]
0x4C2904: cmp     [eax+0Ch], edi
0x4C2907: jz      short loc_4C2922
0x4C2909: mov     ecx, [eax+0Ch]
0x4C290C: lea     edx, [esp+0ACh+var_30]
0x4C2910: push    edx
0x4C2911: call    sub_4C1670
0x4C2916: mov     [esp+0ACh+var_80], eax
0x4C291A: or      ebx, 100h
0x4C2920: jmp     short loc_4C2934
0x4C2922: mov     [esp+0ACh+var_5C], edi
0x4C2926: lea     eax, [esp+0ACh+var_5C]
0x4C292A: mov     [esp+0ACh+var_80], eax
0x4C292E: or      ebx, 200h
0x4C2934: mov     ecx, [esi+24h]
0x4C2937: mov     eax, [ecx+ebp*4+30h]
0x4C293B: cmp     [eax+8], edi
0x4C293E: jz      short loc_4C295C
0x4C2940: mov     ecx, [eax+8]
0x4C2943: lea     edx, [esp+0ACh+var_28]
0x4C294A: push    edx
0x4C294B: call    sub_4C1670
0x4C2950: mov     [esp+0ACh+var_88], eax
0x4C2954: or      ebx, 400h
0x4C295A: jmp     short loc_4C296E
0x4C295C: mov     [esp+0ACh+var_54], edi
0x4C2960: lea     eax, [esp+0ACh+var_54]
0x4C2964: mov     [esp+0ACh+var_88], eax
0x4C2968: or      ebx, 800h
0x4C296E: mov     ecx, [esi+24h]
0x4C2971: mov     eax, [ecx+ebp*4+30h]
0x4C2975: cmp     [eax+4], edi
0x4C2978: jz      short loc_4C2993
0x4C297A: mov     ecx, [eax+4]
0x4C297D: lea     edx, [esp+0ACh+var_38]
0x4C2981: push    edx
0x4C2982: call    sub_4C1670
0x4C2987: mov     [esp+0ACh+var_94], eax
0x4C298B: or      ebx, 1000h
0x4C2991: jmp     short loc_4C29A5
0x4C2993: mov     [esp+0ACh+var_64], edi
0x4C2997: lea     eax, [esp+0ACh+var_64]
0x4C299B: mov     [esp+0ACh+var_94], eax
0x4C299F: or      ebx, 2000h
0x4C29A5: mov     ecx, [esi+24h]
0x4C29A8: mov     eax, [ecx+ebp*4+30h]
0x4C29AC: cmp     [eax], edi
0x4C29AE: jz      short loc_4C29CB
0x4C29B0: mov     ecx, [eax]
0x4C29B2: lea     edx, [esp+0ACh+var_20]
0x4C29B9: push    edx
0x4C29BA: call    sub_4C1670
0x4C29BF: mov     [esp+0ACh+var_90], eax
0x4C29C3: or      ebx, 4000h
0x4C29C9: jmp     short loc_4C29DD
0x4C29CB: mov     [esp+0ACh+var_4C], edi
0x4C29CF: lea     eax, [esp+0ACh+var_4C]
0x4C29D3: mov     [esp+0ACh+var_90], eax
0x4C29D7: or      ebx, 8000h
0x4C29DD: mov     ecx, [esi+24h]
0x4C29E0: cmp     [ecx+ebp*4+20h], edi
0x4C29E4: lea     ebp, [ecx+ebp*4+20h]
0x4C29E8: jz      short loc_4C2A0E
0x4C29EA: mov     ecx, [ebp+0]
0x4C29ED: lea     edx, [esp+0ACh+var_44]
0x4C29F1: push    edx
0x4C29F2: call    sub_4C1670
0x4C29F7: mov     [esp+0ACh+var_8C], eax
0x4C29FB: mov     [esp+0ACh+var_4], 11h
0x4C2A06: or      ebx, 10000h
0x4C2A0C: jmp     short loc_4C2A2B
0x4C2A0E: mov     [esp+0ACh+var_48], edi
0x4C2A12: lea     eax, [esp+0ACh+var_48]
0x4C2A16: mov     [esp+0ACh+var_8C], eax
0x4C2A1A: mov     [esp+0ACh+var_4], 12h
0x4C2A25: or      ebx, 20000h
0x4C2A2B: mov     ecx, [esp+0ACh+var_50]
0x4C2A2F: mov     ecx, [ecx]
0x4C2A31: mov     eax, [esp+0ACh+var_7C]
0x4C2A35: mov     esi, [eax]
0x4C2A37: mov     edx, [esp+0ACh+var_6C]
0x4C2A3B: mov     edx, [edx]
0x4C2A3D: mov     eax, [esp+0ACh+var_84]
0x4C2A41: mov     edi, [eax]
0x4C2A43: mov     eax, [esp+0ACh+var_80]
0x4C2A47: mov     ebp, [eax]
0x4C2A49: mov     eax, [esp+0ACh+var_88]
0x4C2A4D: mov     eax, [eax]
0x4C2A4F: push    ecx
0x4C2A50: mov     [esp+0B0h+var_98], ebx
0x4C2A54: mov     ebx, [esp+0B0h+var_94]
0x4C2A58: mov     ebx, [ebx]
0x4C2A5A: push    edx
0x4C2A5B: push    esi
0x4C2A5C: mov     [esp+0B8h+var_94], ebx
0x4C2A60: mov     ebx, [esp+0B8h+var_90]
0x4C2A64: mov     ebx, [ebx]
0x4C2A66: mov     ecx, [esp+0B8h+var_94]
0x4C2A6A: push    edi
0x4C2A6B: push    ebp
0x4C2A6C: push    eax
0x4C2A6D: mov     [esp+0C4h+var_90], ebx
0x4C2A71: mov     edx, [esp+0C4h+var_90]
0x4C2A75: mov     ebx, [esp+0C4h+var_8C]
0x4C2A79: mov     ebx, [ebx]
0x4C2A7B: push    ecx
0x4C2A7C: mov     ecx, [esp+0C8h+var_78]
0x4C2A80: push    edx
0x4C2A81: push    ebx
0x4C2A82: call    sub_7D8BA0
0x4C2A87: mov     ebx, [esp+0ACh+var_98]
0x4C2A8B: test    ebx, 20000h
0x4C2A91: mov     ebp, ds:0A2807Ch
0x4C2A97: mov     [esp+0ACh+var_4], 11h
0x4C2AA2: jz      short loc_4C2ACA
0x4C2AA4: mov     esi, [esp+0ACh+var_48]
0x4C2AA8: and     ebx, 0FFFDFFFFh
0x4C2AAE: test    esi, esi
0x4C2AB0: mov     [esp+0ACh+var_98], ebx
0x4C2AB4: jz      short loc_4C2ACA
0x4C2AB6: lea     eax, [esi+4]
0x4C2AB9: push    eax; lpAddend
0x4C2ABA: call    ebp ; InterlockedDecrement
0x4C2ABC: test    eax, eax
0x4C2ABE: jnz     short loc_4C2ACA
0x4C2AC0: mov     edx, [esi]
0x4C2AC2: mov     eax, [edx]
0x4C2AC4: push    1
0x4C2AC6: mov     ecx, esi
0x4C2AC8: call    eax
0x4C2ACA: xor     edi, edi
0x4C2ACC: test    ebx, 10000h
0x4C2AD2: mov     [esp+0ACh+var_4], 10h
0x4C2ADD: jz      short loc_4C2B0B
0x4C2ADF: mov     eax, [esp+0ACh+var_44]
0x4C2AE3: and     ebx, 0FFFEFFFFh
0x4C2AE9: cmp     eax, edi
0x4C2AEB: mov     [esp+0ACh+var_98], ebx
0x4C2AEF: jz      short loc_4C2B0B
0x4C2AF1: mov     esi, eax
0x4C2AF3: add     eax, 4
0x4C2AF6: push    eax; lpAddend
0x4C2AF7: call    ebp ; InterlockedDecrement
0x4C2AF9: test    eax, eax
0x4C2AFB: jnz     short loc_4C2B0B
0x4C2AFD: cmp     esi, edi
0x4C2AFF: jz      short loc_4C2B0B
0x4C2B01: mov     edx, [esi]
0x4C2B03: mov     eax, [edx]
0x4C2B05: push    1
0x4C2B07: mov     ecx, esi
0x4C2B09: call    eax
0x4C2B0B: test    ebx, 8000h
0x4C2B11: mov     [esp+0ACh+var_4], 0Fh
0x4C2B1C: jz      short loc_4C2B44
0x4C2B1E: mov     esi, [esp+0ACh+var_4C]
0x4C2B22: and     ebx, 0FFFF7FFFh
0x4C2B28: cmp     esi, edi
0x4C2B2A: mov     [esp+0ACh+var_98], ebx
0x4C2B2E: jz      short loc_4C2B44
0x4C2B30: lea     ecx, [esi+4]
0x4C2B33: push    ecx; lpAddend
0x4C2B34: call    ebp ; InterlockedDecrement
0x4C2B36: test    eax, eax
0x4C2B38: jnz     short loc_4C2B44
0x4C2B3A: mov     edx, [esi]
0x4C2B3C: mov     eax, [edx]
0x4C2B3E: push    1
0x4C2B40: mov     ecx, esi
0x4C2B42: call    eax
0x4C2B44: test    ebx, 4000h
0x4C2B4A: mov     [esp+0ACh+var_4], 0Eh
0x4C2B55: jz      short loc_4C2B86
0x4C2B57: mov     eax, [esp+0ACh+var_20]
0x4C2B5E: and     ebx, 0FFFFBFFFh
0x4C2B64: cmp     eax, edi
0x4C2B66: mov     [esp+0ACh+var_98], ebx
0x4C2B6A: jz      short loc_4C2B86
0x4C2B6C: mov     esi, eax
0x4C2B6E: add     eax, 4
0x4C2B71: push    eax; lpAddend
0x4C2B72: call    ebp ; InterlockedDecrement
0x4C2B74: test    eax, eax
0x4C2B76: jnz     short loc_4C2B86
0x4C2B78: cmp     esi, edi
0x4C2B7A: jz      short loc_4C2B86
0x4C2B7C: mov     edx, [esi]
0x4C2B7E: mov     eax, [edx]
0x4C2B80: push    1
0x4C2B82: mov     ecx, esi
0x4C2B84: call    eax
0x4C2B86: test    ebx, 2000h
0x4C2B8C: mov     [esp+0ACh+var_4], 0Dh
0x4C2B97: jz      short loc_4C2BBF
0x4C2B99: mov     esi, [esp+0ACh+var_64]
0x4C2B9D: and     ebx, 0FFFFDFFFh
0x4C2BA3: cmp     esi, edi
0x4C2BA5: mov     [esp+0ACh+var_98], ebx
0x4C2BA9: jz      short loc_4C2BBF
0x4C2BAB: lea     ecx, [esi+4]
0x4C2BAE: push    ecx; lpAddend
0x4C2BAF: call    ebp ; InterlockedDecrement
0x4C2BB1: test    eax, eax
0x4C2BB3: jnz     short loc_4C2BBF
0x4C2BB5: mov     edx, [esi]
0x4C2BB7: mov     eax, [edx]
0x4C2BB9: push    1
0x4C2BBB: mov     ecx, esi
0x4C2BBD: call    eax
0x4C2BBF: test    ebx, 1000h
0x4C2BC5: mov     [esp+0ACh+var_4], 0Ch
0x4C2BD0: jz      short loc_4C2BFE
0x4C2BD2: mov     eax, [esp+0ACh+var_38]
0x4C2BD6: and     ebx, 0FFFFEFFFh
0x4C2BDC: cmp     eax, edi
0x4C2BDE: mov     [esp+0ACh+var_98], ebx
0x4C2BE2: jz      short loc_4C2BFE
0x4C2BE4: mov     esi, eax
0x4C2BE6: add     eax, 4
0x4C2BE9: push    eax; lpAddend
0x4C2BEA: call    ebp ; InterlockedDecrement
0x4C2BEC: test    eax, eax
0x4C2BEE: jnz     short loc_4C2BFE
0x4C2BF0: cmp     esi, edi
0x4C2BF2: jz      short loc_4C2BFE
0x4C2BF4: mov     edx, [esi]
0x4C2BF6: mov     eax, [edx]
0x4C2BF8: push    1
0x4C2BFA: mov     ecx, esi
0x4C2BFC: call    eax
0x4C2BFE: test    ebx, 800h
0x4C2C04: mov     [esp+0ACh+var_4], 0Bh
0x4C2C0F: jz      short loc_4C2C37
0x4C2C11: mov     esi, [esp+0ACh+var_54]
0x4C2C15: and     ebx, 0FFFFF7FFh
0x4C2C1B: cmp     esi, edi
0x4C2C1D: mov     [esp+0ACh+var_98], ebx
0x4C2C21: jz      short loc_4C2C37
0x4C2C23: lea     ecx, [esi+4]
0x4C2C26: push    ecx; lpAddend
0x4C2C27: call    ebp ; InterlockedDecrement
0x4C2C29: test    eax, eax
0x4C2C2B: jnz     short loc_4C2C37
0x4C2C2D: mov     edx, [esi]
0x4C2C2F: mov     eax, [edx]
0x4C2C31: push    1
0x4C2C33: mov     ecx, esi
0x4C2C35: call    eax
0x4C2C37: test    ebx, 400h
0x4C2C3D: mov     [esp+0ACh+var_4], 0Ah
0x4C2C48: jz      short loc_4C2C79
0x4C2C4A: mov     eax, [esp+0ACh+var_28]
0x4C2C51: and     ebx, 0FFFFFBFFh
0x4C2C57: cmp     eax, edi
0x4C2C59: mov     [esp+0ACh+var_98], ebx
0x4C2C5D: jz      short loc_4C2C79
0x4C2C5F: mov     esi, eax
0x4C2C61: add     eax, 4
0x4C2C64: push    eax; lpAddend
0x4C2C65: call    ebp ; InterlockedDecrement
0x4C2C67: test    eax, eax
0x4C2C69: jnz     short loc_4C2C79
0x4C2C6B: cmp     esi, edi
0x4C2C6D: jz      short loc_4C2C79
0x4C2C6F: mov     edx, [esi]
0x4C2C71: mov     eax, [edx]
0x4C2C73: push    1
0x4C2C75: mov     ecx, esi
0x4C2C77: call    eax
0x4C2C79: test    ebx, 200h
0x4C2C7F: mov     [esp+0ACh+var_4], 9
0x4C2C8A: jz      short loc_4C2CB2
0x4C2C8C: mov     esi, [esp+0ACh+var_5C]
0x4C2C90: and     ebx, 0FFFFFDFFh
0x4C2C96: cmp     esi, edi
0x4C2C98: mov     [esp+0ACh+var_98], ebx
0x4C2C9C: jz      short loc_4C2CB2
0x4C2C9E: lea     ecx, [esi+4]
0x4C2CA1: push    ecx; lpAddend
0x4C2CA2: call    ebp ; InterlockedDecrement
0x4C2CA4: test    eax, eax
0x4C2CA6: jnz     short loc_4C2CB2
0x4C2CA8: mov     edx, [esi]
0x4C2CAA: mov     eax, [edx]
0x4C2CAC: push    1
0x4C2CAE: mov     ecx, esi
0x4C2CB0: call    eax
0x4C2CB2: test    ebx, 100h
0x4C2CB8: mov     [esp+0ACh+var_4], 8
0x4C2CC3: jz      short loc_4C2CF1
0x4C2CC5: mov     eax, [esp+0ACh+var_30]
0x4C2CC9: and     ebx, 0FFFFFEFFh
0x4C2CCF: cmp     eax, edi
0x4C2CD1: mov     [esp+0ACh+var_98], ebx
0x4C2CD5: jz      short loc_4C2CF1
0x4C2CD7: mov     esi, eax
0x4C2CD9: add     eax, 4
0x4C2CDC: push    eax; lpAddend
0x4C2CDD: call    ebp ; InterlockedDecrement
0x4C2CDF: test    eax, eax
0x4C2CE1: jnz     short loc_4C2CF1
0x4C2CE3: cmp     esi, edi
0x4C2CE5: jz      short loc_4C2CF1
0x4C2CE7: mov     edx, [esi]
0x4C2CE9: mov     eax, [edx]
0x4C2CEB: push    1
0x4C2CED: mov     ecx, esi
0x4C2CEF: call    eax
0x4C2CF1: test    bl, bl
0x4C2CF3: mov     [esp+0ACh+var_4], 7
0x4C2CFE: jns     short loc_4C2D26
0x4C2D00: mov     esi, [esp+0ACh+var_74]
0x4C2D04: and     ebx, 0FFFFFF7Fh
0x4C2D0A: cmp     esi, edi
0x4C2D0C: mov     [esp+0ACh+var_98], ebx
0x4C2D10: jz      short loc_4C2D26
0x4C2D12: lea     ecx, [esi+4]
0x4C2D15: push    ecx; lpAddend
0x4C2D16: call    ebp ; InterlockedDecrement
0x4C2D18: test    eax, eax
0x4C2D1A: jnz     short loc_4C2D26
0x4C2D1C: mov     edx, [esi]
0x4C2D1E: mov     eax, [edx]
0x4C2D20: push    1
0x4C2D22: mov     ecx, esi
0x4C2D24: call    eax
0x4C2D26: test    bl, 40h
0x4C2D29: mov     [esp+0ACh+var_4], 6
0x4C2D34: jz      short loc_4C2D5F
0x4C2D36: mov     eax, [esp+0ACh+var_40]
0x4C2D3A: and     ebx, 0FFFFFFBFh
0x4C2D3D: cmp     eax, edi
0x4C2D3F: mov     [esp+0ACh+var_98], ebx
0x4C2D43: jz      short loc_4C2D5F
0x4C2D45: mov     esi, eax
0x4C2D47: add     eax, 4
0x4C2D4A: push    eax; lpAddend
0x4C2D4B: call    ebp ; InterlockedDecrement
0x4C2D4D: test    eax, eax
0x4C2D4F: jnz     short loc_4C2D5F
0x4C2D51: cmp     esi, edi
0x4C2D53: jz      short loc_4C2D5F
0x4C2D55: mov     edx, [esi]
0x4C2D57: mov     eax, [edx]
0x4C2D59: push    1
0x4C2D5B: mov     ecx, esi
0x4C2D5D: call    eax
0x4C2D5F: test    bl, 20h
0x4C2D62: mov     [esp+0ACh+var_4], 5
0x4C2D6D: jz      short loc_4C2D92
0x4C2D6F: mov     esi, [esp+0ACh+var_68]
0x4C2D73: and     ebx, 0FFFFFFDFh
0x4C2D76: cmp     esi, edi
0x4C2D78: mov     [esp+0ACh+var_98], ebx
0x4C2D7C: jz      short loc_4C2D92
0x4C2D7E: lea     ecx, [esi+4]
0x4C2D81: push    ecx; lpAddend
0x4C2D82: call    ebp ; InterlockedDecrement
0x4C2D84: test    eax, eax
0x4C2D86: jnz     short loc_4C2D92
0x4C2D88: mov     edx, [esi]
0x4C2D8A: mov     eax, [edx]
0x4C2D8C: push    1
0x4C2D8E: mov     ecx, esi
0x4C2D90: call    eax
0x4C2D92: test    bl, 10h
0x4C2D95: mov     [esp+0ACh+var_4], 4
0x4C2DA0: jz      short loc_4C2DCB
0x4C2DA2: mov     eax, [esp+0ACh+var_3C]
0x4C2DA6: and     ebx, 0FFFFFFEFh
0x4C2DA9: cmp     eax, edi
0x4C2DAB: mov     [esp+0ACh+var_98], ebx
0x4C2DAF: jz      short loc_4C2DCB
0x4C2DB1: mov     esi, eax
0x4C2DB3: add     eax, 4
0x4C2DB6: push    eax; lpAddend
0x4C2DB7: call    ebp ; InterlockedDecrement
0x4C2DB9: test    eax, eax
0x4C2DBB: jnz     short loc_4C2DCB
0x4C2DBD: cmp     esi, edi
0x4C2DBF: jz      short loc_4C2DCB
0x4C2DC1: mov     edx, [esi]
0x4C2DC3: mov     eax, [edx]
0x4C2DC5: push    1
0x4C2DC7: mov     ecx, esi
0x4C2DC9: call    eax
0x4C2DCB: test    bl, 8
0x4C2DCE: mov     [esp+0ACh+var_4], 3
0x4C2DD9: jz      short loc_4C2DFE
0x4C2DDB: mov     esi, [esp+0ACh+var_60]
0x4C2DDF: and     ebx, 0FFFFFFF7h
0x4C2DE2: cmp     esi, edi
0x4C2DE4: mov     [esp+0ACh+var_98], ebx
0x4C2DE8: jz      short loc_4C2DFE
0x4C2DEA: lea     ecx, [esi+4]
0x4C2DED: push    ecx; lpAddend
0x4C2DEE: call    ebp ; InterlockedDecrement
0x4C2DF0: test    eax, eax
0x4C2DF2: jnz     short loc_4C2DFE
0x4C2DF4: mov     edx, [esi]
0x4C2DF6: mov     eax, [edx]
0x4C2DF8: push    1
0x4C2DFA: mov     ecx, esi
0x4C2DFC: call    eax
0x4C2DFE: test    bl, 4
0x4C2E01: mov     [esp+0ACh+var_4], 2
0x4C2E0C: jz      short loc_4C2E37
0x4C2E0E: mov     eax, [esp+0ACh+var_34]
0x4C2E12: and     ebx, 0FFFFFFFBh
0x4C2E15: cmp     eax, edi
0x4C2E17: mov     [esp+0ACh+var_98], ebx
0x4C2E1B: jz      short loc_4C2E37
0x4C2E1D: mov     esi, eax
0x4C2E1F: add     eax, 4
0x4C2E22: push    eax; lpAddend
0x4C2E23: call    ebp ; InterlockedDecrement
0x4C2E25: test    eax, eax
0x4C2E27: jnz     short loc_4C2E37
0x4C2E29: cmp     esi, edi
0x4C2E2B: jz      short loc_4C2E37
0x4C2E2D: mov     edx, [esi]
0x4C2E2F: mov     eax, [edx]
0x4C2E31: push    1
0x4C2E33: mov     ecx, esi
0x4C2E35: call    eax
0x4C2E37: test    bl, 2
0x4C2E3A: mov     [esp+0ACh+var_4], 1
0x4C2E45: jz      short loc_4C2E6A
0x4C2E47: mov     esi, [esp+0ACh+var_58]
0x4C2E4B: and     ebx, 0FFFFFFFDh
0x4C2E4E: cmp     esi, edi
0x4C2E50: mov     [esp+0ACh+var_98], ebx
0x4C2E54: jz      short loc_4C2E6A
0x4C2E56: lea     ecx, [esi+4]
0x4C2E59: push    ecx; lpAddend
0x4C2E5A: call    ebp ; InterlockedDecrement
0x4C2E5C: test    eax, eax
0x4C2E5E: jnz     short loc_4C2E6A
0x4C2E60: mov     edx, [esi]
0x4C2E62: mov     eax, [edx]
0x4C2E64: push    1
0x4C2E66: mov     ecx, esi
0x4C2E68: call    eax
0x4C2E6A: test    bl, 1
0x4C2E6D: mov     [esp+0ACh+var_4], 0FFFFFFFFh
0x4C2E78: jz      short loc_4C2EA2
0x4C2E7A: mov     eax, [esp+0ACh+var_2C]
0x4C2E81: and     ebx, 0FFFFFFFEh
0x4C2E84: cmp     eax, edi
0x4C2E86: jz      short loc_4C2EA2
0x4C2E88: mov     esi, eax
0x4C2E8A: add     eax, 4
0x4C2E8D: push    eax; lpAddend
0x4C2E8E: call    ebp ; InterlockedDecrement
0x4C2E90: test    eax, eax
0x4C2E92: jnz     short loc_4C2EA2
0x4C2E94: cmp     esi, edi
0x4C2E96: jz      short loc_4C2EA2
0x4C2E98: mov     edx, [esi]
0x4C2E9A: mov     eax, [edx]
0x4C2E9C: push    1
0x4C2E9E: mov     ecx, esi
0x4C2EA0: call    eax
0x4C2EA2: mov     esi, [esp+0ACh+var_24]
0x4C2EA9: mov     ecx, [esi+24h]
0x4C2EAC: mov     ebp, [esp+0ACh+var_70]
0x4C2EB0: mov     eax, [ecx+ebp*4+30h]
0x4C2EB4: cmp     [eax+1Ch], edi
0x4C2EB7: jz      short loc_4C2ECA
0x4C2EB9: mov     ecx, [eax+1Ch]
0x4C2EBC: call    sub_4C8D20
0x4C2EC1: movzx   edx, al
0x4C2EC4: mov     [esp+0ACh+var_8C], edx
0x4C2EC8: jmp     short loc_4C2ECE
0x4C2ECA: mov     [esp+0ACh+var_8C], edi
0x4C2ECE: mov     eax, [esi+24h]
0x4C2ED1: mov     eax, [eax+ebp*4+30h]
0x4C2ED5: cmp     [eax+18h], edi
0x4C2ED8: jz      short loc_4C2EEB
0x4C2EDA: mov     ecx, [eax+18h]
0x4C2EDD: call    sub_4C8D20
0x4C2EE2: movzx   ecx, al
0x4C2EE5: mov     [esp+0ACh+var_90], ecx
0x4C2EE9: jmp     short loc_4C2EEF
0x4C2EEB: mov     [esp+0ACh+var_90], edi
0x4C2EEF: mov     edx, [esi+24h]
0x4C2EF2: mov     eax, [edx+ebp*4+30h]
0x4C2EF6: cmp     [eax+14h], edi
0x4C2EF9: jz      short loc_4C2F0C
0x4C2EFB: mov     ecx, [eax+14h]
0x4C2EFE: call    sub_4C8D20
0x4C2F03: movzx   eax, al
0x4C2F06: mov     [esp+0ACh+var_94], eax
0x4C2F0A: jmp     short loc_4C2F10
0x4C2F0C: mov     [esp+0ACh+var_94], edi
0x4C2F10: mov     ecx, [esi+24h]
0x4C2F13: mov     eax, [ecx+ebp*4+30h]
0x4C2F17: cmp     [eax+10h], edi
0x4C2F1A: jz      short loc_4C2F2D
0x4C2F1C: mov     ecx, [eax+10h]
0x4C2F1F: call    sub_4C8D20
0x4C2F24: movzx   edx, al
0x4C2F27: mov     [esp+0ACh+var_88], edx
0x4C2F2B: jmp     short loc_4C2F31
0x4C2F2D: mov     [esp+0ACh+var_88], edi
0x4C2F31: mov     eax, [esi+24h]
0x4C2F34: mov     eax, [eax+ebp*4+30h]
0x4C2F38: cmp     [eax+0Ch], edi
0x4C2F3B: jz      short loc_4C2F4E
0x4C2F3D: mov     ecx, [eax+0Ch]
0x4C2F40: call    sub_4C8D20
0x4C2F45: movzx   ecx, al
0x4C2F48: mov     [esp+0ACh+var_80], ecx
0x4C2F4C: jmp     short loc_4C2F52
0x4C2F4E: mov     [esp+0ACh+var_80], edi
0x4C2F52: mov     edx, [esi+24h]
0x4C2F55: mov     eax, [edx+ebp*4+30h]
0x4C2F59: cmp     [eax+8], edi
0x4C2F5C: jz      short loc_4C2F6F
0x4C2F5E: mov     ecx, [eax+8]
0x4C2F61: call    sub_4C8D20
0x4C2F66: movzx   eax, al
0x4C2F69: mov     [esp+0ACh+var_84], eax
0x4C2F6D: jmp     short loc_4C2F73
0x4C2F6F: mov     [esp+0ACh+var_84], edi
0x4C2F73: mov     ecx, [esi+24h]
0x4C2F76: mov     eax, [ecx+ebp*4+30h]
0x4C2F7A: cmp     [eax+4], edi
0x4C2F7D: jz      short loc_4C2F90
0x4C2F7F: mov     ecx, [eax+4]
0x4C2F82: call    sub_4C8D20
0x4C2F87: movzx   edx, al
0x4C2F8A: mov     [esp+0ACh+var_7C], edx
0x4C2F8E: jmp     short loc_4C2F94
0x4C2F90: mov     [esp+0ACh+var_7C], edi
0x4C2F94: mov     eax, [esi+24h]
0x4C2F97: mov     eax, [eax+ebp*4+30h]
0x4C2F9B: cmp     [eax], edi
0x4C2F9D: jz      short loc_4C2FAB
0x4C2F9F: mov     ecx, [eax]
0x4C2FA1: call    sub_4C8D20
0x4C2FA6: movzx   edi, al
0x4C2FA9: jmp     short loc_4C2FAD
0x4C2FAB: xor     edi, edi
0x4C2FAD: mov     ecx, [esi+24h]
0x4C2FB0: cmp     dword ptr [ecx+ebp*4+20h], 0
0x4C2FB5: lea     eax, [ecx+ebp*4+20h]
0x4C2FB9: jz      short loc_4C2FC7
0x4C2FBB: mov     ecx, [eax]
0x4C2FBD: call    sub_4C8D20
0x4C2FC2: movzx   eax, al
0x4C2FC5: jmp     short loc_4C2FC9
0x4C2FC7: xor     eax, eax
0x4C2FC9: mov     edx, [esp+0ACh+var_8C]
0x4C2FCD: mov     ecx, [esp+0ACh+var_90]
0x4C2FD1: push    0
0x4C2FD3: push    edx
0x4C2FD4: mov     edx, [esp+0B4h+var_94]
0x4C2FD8: push    ecx
0x4C2FD9: mov     ecx, [esp+0B8h+var_88]
0x4C2FDD: push    edx
0x4C2FDE: mov     edx, [esp+0BCh+var_80]
0x4C2FE2: push    ecx
0x4C2FE3: mov     ecx, [esp+0C0h+var_84]
0x4C2FE7: push    edx
0x4C2FE8: mov     edx, [esp+0C4h+var_7C]
0x4C2FEC: push    ecx
0x4C2FED: mov     ecx, [esp+0C8h+var_78]
0x4C2FF1: push    edx
0x4C2FF2: push    edi
0x4C2FF3: push    eax
0x4C2FF4: call    sub_7D7400
0x4C2FF9: add     ebp, 1
0x4C2FFC: cmp     ebp, 4
0x4C2FFF: mov     [esp+0ACh+var_70], ebp
0x4C3003: jl      loc_4C2710
0x4C3009: mov     ecx, esi; int
0x4C300B: call    sub_4C2300
0x4C3010: mov     al, 1
0x4C3012: jmp     short loc_4C3016
0x4C3014: xor     al, al
0x4C3016: mov     ecx, [esp+0ACh+var_C]
0x4C301D: mov     large fs:0, ecx
0x4C3024: pop     ecx
0x4C3025: pop     edi
0x4C3026: pop     esi
0x4C3027: pop     ebp
0x4C3028: pop     ebx
0x4C3029: add     esp, 98h
0x4C302F: retn
