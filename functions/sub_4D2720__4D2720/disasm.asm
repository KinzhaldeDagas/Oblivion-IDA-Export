0x4D2720: push    0FFFFFFFFh
0x4D2722: push    offset SEH_4D2720
0x4D2727: mov     eax, large fs:0
0x4D272D: push    eax
0x4D272E: sub     esp, 0ECh
0x4D2734: push    ebx
0x4D2735: push    ebp
0x4D2736: push    esi
0x4D2737: push    edi
0x4D2738: mov     eax, ds:0B30AACh
0x4D273D: xor     eax, esp
0x4D273F: push    eax
0x4D2740: lea     eax, [esp+10Ch+var_C]
0x4D2747: mov     large fs:0, eax
0x4D274D: mov     ebx, ecx
0x4D274F: test    byte ptr [ebx+24h], 1
0x4D2753: jz      loc_4D2BEB
0x4D2759: mov     esi, [esp+10Ch+arg_0]
0x4D2760: mov     ecx, [esi+4]
0x4D2763: mov     eax, [esi]
0x4D2765: mov     edx, [esi+8]
0x4D2768: mov     [esp+10Ch+var_D4], ecx
0x4D276C: lea     ecx, [ebx+28h]
0x4D276F: mov     [esp+10Ch+var_D8], eax
0x4D2773: mov     [esp+10Ch+var_D0], edx
0x4D2777: call    sub_420C40
0x4D277C: fstp    [esp+10Ch+var_F4]
0x4D2780: fldz
0x4D2782: fcomp   [esp+10Ch+var_F4]
0x4D2786: fnstsw  ax
0x4D2788: test    ah, 44h
0x4D278B: jnp     loc_4D2917
0x4D2791: push    1; float
0x4D2793: lea     eax, [esp+110h+var_D8]
0x4D2797: push    eax; int
0x4D2798: push    esi; int
0x4D2799: mov     ecx, ebx
0x4D279B: call    sub_4CCE20
0x4D27A0: xor     eax, eax
0x4D27A2: push    6Ch ; 'l'
0x4D27A4: push    eax
0x4D27A5: lea     ecx, [esp+114h+var_78]
0x4D27AC: push    ecx
0x4D27AD: mov     [esp+118h+var_A8], eax
0x4D27B1: mov     [esp+118h+var_A4], eax
0x4D27B5: mov     [esp+118h+var_A0], eax
0x4D27B9: mov     [esp+118h+var_9C], eax
0x4D27BD: mov     [esp+118h+var_98], eax
0x4D27C4: mov     [esp+118h+var_94], eax
0x4D27CB: mov     [esp+118h+var_90], eax
0x4D27D2: mov     [esp+118h+var_8C], eax
0x4D27D9: mov     [esp+118h+var_88], eax
0x4D27E0: call    __memset
0x4D27E5: add     esp, 0Ch
0x4D27E8: fld     [esp+10Ch+var_D8]
0x4D27EC: fistp   [esp+10Ch+var_F0]
0x4D27F0: mov     ecx, [esp+10Ch+var_F0]
0x4D27F4: add     ecx, 0FFFFF800h
0x4D27FA: sar     ecx, 0Ch
0x4D27FD: mov     [esp+10Ch+var_C0], ecx
0x4D2801: fld     [esp+10Ch+var_D4]
0x4D2805: fistp   [esp+10Ch+var_F0]
0x4D2809: mov     eax, [esp+10Ch+var_F0]
0x4D280D: add     eax, 0FFFFF800h
0x4D2812: sar     eax, 0Ch
0x4D2815: mov     edx, eax
0x4D2817: shl     edx, 0Ch
0x4D281A: add     edx, 0FFFFF800h
0x4D2820: mov     [esp+10Ch+var_CC], edx
0x4D2824: mov     edx, ecx
0x4D2826: shl     edx, 0Ch
0x4D2829: xor     ebp, ebp
0x4D282B: sub     edx, 800h
0x4D2831: mov     [esp+10Ch+var_F4], eax
0x4D2835: mov     [esp+10Ch+var_E0], 0FFFFFFFFh
0x4D283D: mov     [esp+10Ch+var_F0], edx
0x4D2841: jmp     short loc_4D284B
0x4D2843: mov     ecx, [esp+10Ch+var_C0]
0x4D2847: mov     eax, [esp+10Ch+var_F4]
0x4D284B: mov     edx, [esp+10Ch+var_E0]
0x4D284F: fild    [esp+10Ch+var_F0]
0x4D2853: or      edi, 0FFFFFFFFh
0x4D2856: add     edx, ecx
0x4D2858: mov     ecx, [esp+10Ch+var_CC]
0x4D285C: fstp    [esp+10Ch+var_EC]
0x4D2860: lea     esi, [ebp+ebp*2+0]
0x4D2864: mov     [esp+10Ch+var_F8], edx
0x4D2868: lea     esi, [esp+esi*4+10Ch+var_78]
0x4D286F: mov     [esp+10Ch+var_DC], ecx
0x4D2873: jmp     short loc_4D2879
0x4D2875: mov     eax, [esp+10Ch+var_F4]
0x4D2879: push    1
0x4D287B: lea     edx, [edi+eax]
0x4D287E: mov     eax, [esp+110h+var_F8]
0x4D2882: push    edx
0x4D2883: push    eax
0x4D2884: mov     ecx, ebx
0x4D2886: call    sub_4CCEE0
0x4D288B: fild    [esp+10Ch+var_DC]
0x4D288F: mov     ecx, [esp+10Ch+var_EC]
0x4D2893: add     [esp+10Ch+var_DC], 1000h
0x4D289B: fstp    [esp+10Ch+var_E8]
0x4D289F: mov     edx, [esp+10Ch+var_E8]
0x4D28A3: fld     [esp+10Ch+var_D0]
0x4D28A7: mov     [esp+ebp*4+10Ch+var_A8], eax
0x4D28AB: mov     [esi], ecx
0x4D28AD: fstp    [esp+10Ch+var_E4]
0x4D28B1: mov     eax, [esp+10Ch+var_E4]
0x4D28B5: mov     [esi+4], edx
0x4D28B8: mov     [esi+8], eax
0x4D28BB: add     edi, 1
0x4D28BE: add     ebp, 1
0x4D28C1: add     esi, 0Ch
0x4D28C4: cmp     edi, 1
0x4D28C7: jle     short loc_4D2875
0x4D28C9: mov     eax, [esp+10Ch+var_E0]
0x4D28CD: add     [esp+10Ch+var_F0], 1000h
0x4D28D5: add     eax, 1
0x4D28D8: cmp     eax, 1
0x4D28DB: mov     [esp+10Ch+var_E0], eax
0x4D28DF: jle     loc_4D2843
0x4D28E5: xor     esi, esi
0x4D28E7: lea     edi, [esp+10Ch+var_78]
0x4D28EE: mov     edi, edi
0x4D28F0: mov     ecx, [esp+esi*4+10Ch+var_A8]
0x4D28F4: test    ecx, ecx
0x4D28F6: jz      loc_4D2CDA
0x4D28FC: push    edi
0x4D28FD: lea     edx, [esp+110h+var_D8]
0x4D2901: push    edx
0x4D2902: call    sub_4126C0
0x4D2907: add     esi, 1
0x4D290A: add     edi, 0Ch
0x4D290D: cmp     esi, 9
0x4D2910: jl      short loc_4D28F0
0x4D2912: jmp     loc_4D2CDA
0x4D2917: xor     eax, eax
0x4D2919: push    30h ; '0'
0x4D291B: push    eax
0x4D291C: mov     [esp+114h+var_B8], eax
0x4D2920: mov     [esp+114h+var_B4], eax
0x4D2924: mov     [esp+114h+var_B0], eax
0x4D2928: mov     [esp+114h+var_AC], eax
0x4D292C: lea     eax, [esp+114h+var_A8]
0x4D2930: push    eax
0x4D2931: call    __memset
0x4D2936: add     esp, 0Ch
0x4D2939: fld     [esp+10Ch+var_D8]
0x4D293D: fistp   [esp+10Ch+var_F4]
0x4D2941: mov     esi, [esp+10Ch+var_F4]
0x4D2945: add     esi, 0FFFFF800h
0x4D294B: sar     esi, 0Ch
0x4D294E: fld     [esp+10Ch+var_D4]
0x4D2952: fistp   [esp+10Ch+var_F4]
0x4D2956: mov     edi, [esp+10Ch+var_F4]
0x4D295A: add     edi, 0FFFFF800h
0x4D2960: mov     ebp, 1
0x4D2965: push    ebp
0x4D2966: sar     edi, 0Ch
0x4D2969: push    edi
0x4D296A: push    esi
0x4D296B: mov     ecx, ebx
0x4D296D: call    sub_4CCEE0
0x4D2972: mov     [esp+10Ch+var_B8], eax
0x4D2976: mov     eax, esi
0x4D2978: shl     eax, 0Ch
0x4D297B: lea     ecx, [eax+800h]
0x4D2981: mov     [esp+10Ch+var_F8], ecx
0x4D2985: fild    [esp+10Ch+var_F8]
0x4D2989: mov     ecx, edi
0x4D298B: shl     ecx, 0Ch
0x4D298E: fstp    [esp+10Ch+var_F4]
0x4D2992: lea     edx, [ecx+800h]
0x4D2998: fld     [esp+10Ch+var_F4]
0x4D299C: mov     [esp+10Ch+var_F8], edx
0x4D29A0: fst     [esp+10Ch+var_EC]
0x4D29A4: mov     edx, [esp+10Ch+var_EC]
0x4D29A8: fild    [esp+10Ch+var_F8]
0x4D29AC: add     eax, 1000800h
0x4D29B1: add     ecx, 1000800h
0x4D29B7: mov     [esp+10Ch+var_A8], edx
0x4D29BB: fstp    [esp+10Ch+var_F8]
0x4D29BF: fld     [esp+10Ch+var_F8]
0x4D29C3: mov     [esp+10Ch+var_F8], eax
0x4D29C7: fst     [esp+10Ch+var_E8]
0x4D29CB: mov     edx, [esp+10Ch+var_E8]
0x4D29CF: fld     [esp+10Ch+var_D0]
0x4D29D3: xor     eax, eax
0x4D29D5: fst     [esp+10Ch+var_E4]
0x4D29D9: mov     [esp+10Ch+var_E0], eax
0x4D29DD: fxch    st(2)
0x4D29DF: mov     [esp+10Ch+var_DC], eax
0x4D29E3: fst     [esp+10Ch+var_CC]
0x4D29E7: mov     [esp+10Ch+var_A4], edx
0x4D29EB: fxch    st(1)
0x4D29ED: mov     edx, [esp+10Ch+var_E4]
0x4D29F1: fst     [esp+10Ch+var_C8]
0x4D29F5: mov     [esp+10Ch+var_A0], edx
0x4D29F9: fild    [esp+10Ch+var_F8]
0x4D29FD: mov     [esp+10Ch+var_F8], ecx
0x4D2A01: fstp    [esp+10Ch+var_C0]
0x4D2A05: fild    [esp+10Ch+var_F8]
0x4D2A09: fstp    [esp+10Ch+var_BC]
0x4D2A0D: fld     [esp+10Ch+var_D8]
0x4D2A11: fld     st
0x4D2A13: fld     dword ptr ds:0B35C14h
0x4D2A19: fld     st
0x4D2A1B: fsubp   st(2), st
0x4D2A1D: fld     [esp+10Ch+var_CC]
0x4D2A21: fcomp   st(2)
0x4D2A23: fnstsw  ax
0x4D2A25: fstp    st(1)
0x4D2A27: test    ah, 1
0x4D2A2A: jnz     short loc_4D2A38
0x4D2A2C: fstp    st(1)
0x4D2A2E: mov     [esp+10Ch+var_E0], 0FFFFFFFFh
0x4D2A36: jmp     short loc_4D2A4F
0x4D2A38: fld     st
0x4D2A3A: faddp   st(2), st
0x4D2A3C: fld     [esp+10Ch+var_C0]
0x4D2A40: fcomp   st(2)
0x4D2A42: fnstsw  ax
0x4D2A44: fstp    st(1)
0x4D2A46: test    ah, 41h
0x4D2A49: jp      short loc_4D2A4F
0x4D2A4B: mov     [esp+10Ch+var_E0], ebp
0x4D2A4F: fld     [esp+10Ch+var_D4]
0x4D2A53: fld     st
0x4D2A55: fsub    st, st(2)
0x4D2A57: fld     [esp+10Ch+var_C8]
0x4D2A5B: fcompp
0x4D2A5D: fnstsw  ax
0x4D2A5F: test    ah, 1
0x4D2A62: jnz     short loc_4D2A72
0x4D2A64: fstp    st(1)
0x4D2A66: mov     [esp+10Ch+var_DC], 0FFFFFFFFh
0x4D2A6E: fstp    st
0x4D2A70: jmp     short loc_4D2A85
0x4D2A72: faddp   st(1), st
0x4D2A74: fld     [esp+10Ch+var_BC]
0x4D2A78: fcompp
0x4D2A7A: fnstsw  ax
0x4D2A7C: test    ah, 41h
0x4D2A7F: jp      short loc_4D2A85
0x4D2A81: mov     [esp+10Ch+var_DC], ebp
0x4D2A85: mov     eax, [esp+10Ch+var_E0]
0x4D2A89: test    eax, eax
0x4D2A8B: jz      short loc_4D2AE9
0x4D2A8D: add     eax, esi
0x4D2A8F: fstp    st(1)
0x4D2A91: mov     ecx, eax
0x4D2A93: shl     ecx, 0Ch
0x4D2A96: add     ecx, 800h
0x4D2A9C: mov     [esp+10Ch+var_F8], ecx
0x4D2AA0: fild    [esp+10Ch+var_F8]
0x4D2AA4: push    1
0x4D2AA6: push    edi
0x4D2AA7: fstp    [esp+114h+var_EC]
0x4D2AAB: mov     edx, [esp+114h+var_EC]
0x4D2AAF: mov     [esp+114h+var_9C], edx
0x4D2AB3: fstp    [esp+114h+var_E8]
0x4D2AB7: mov     ecx, [esp+114h+var_E8]
0x4D2ABB: mov     [esp+114h+var_98], ecx
0x4D2ABF: fstp    [esp+114h+var_E4]
0x4D2AC3: mov     edx, [esp+114h+var_E4]
0x4D2AC7: push    eax
0x4D2AC8: mov     ecx, ebx
0x4D2ACA: mov     [esp+118h+var_94], edx
0x4D2AD1: call    sub_4CCEE0
0x4D2AD6: fld     [esp+10Ch+var_D0]
0x4D2ADA: fld     [esp+10Ch+var_F4]
0x4D2ADE: mov     [esp+10Ch+var_B4], eax
0x4D2AE2: mov     ebp, 2
0x4D2AE7: jmp     short loc_4D2AEB
0x4D2AE9: fstp    st
0x4D2AEB: mov     ecx, [esp+10Ch+var_DC]
0x4D2AEF: test    ecx, ecx
0x4D2AF1: jz      short loc_4D2B47
0x4D2AF3: add     ecx, edi
0x4D2AF5: fstp    [esp+10Ch+var_EC]
0x4D2AF9: mov     edx, [esp+10Ch+var_EC]
0x4D2AFD: mov     eax, ecx
0x4D2AFF: shl     eax, 0Ch
0x4D2B02: add     eax, 800h
0x4D2B07: mov     [esp+10Ch+var_F8], eax
0x4D2B0B: fild    [esp+10Ch+var_F8]
0x4D2B0F: lea     eax, [ebp+ebp*2+0]
0x4D2B13: lea     eax, [esp+eax*4+10Ch+var_A8]
0x4D2B17: mov     [eax], edx
0x4D2B19: fstp    [esp+10Ch+var_E8]
0x4D2B1D: mov     edx, [esp+10Ch+var_E8]
0x4D2B21: push    1
0x4D2B23: fstp    [esp+110h+var_E4]
0x4D2B27: mov     [eax+4], edx
0x4D2B2A: mov     edx, [esp+110h+var_E4]
0x4D2B2E: push    ecx
0x4D2B2F: push    esi
0x4D2B30: mov     ecx, ebx
0x4D2B32: mov     [eax+8], edx
0x4D2B35: call    sub_4CCEE0
0x4D2B3A: fld     [esp+10Ch+var_D0]
0x4D2B3E: mov     [esp+ebp*4+10Ch+var_B8], eax
0x4D2B42: add     ebp, 1
0x4D2B45: jmp     short loc_4D2B49
0x4D2B47: fstp    st
0x4D2B49: mov     ecx, [esp+10Ch+var_E0]
0x4D2B4D: test    ecx, ecx
0x4D2B4F: jz      short loc_4D2BBC
0x4D2B51: mov     eax, [esp+10Ch+var_DC]
0x4D2B55: test    eax, eax
0x4D2B57: jz      short loc_4D2BBC
0x4D2B59: add     esi, ecx
0x4D2B5B: add     edi, eax
0x4D2B5D: mov     ecx, esi
0x4D2B5F: shl     ecx, 0Ch
0x4D2B62: add     ecx, 800h
0x4D2B68: mov     [esp+10Ch+var_F8], ecx
0x4D2B6C: fild    [esp+10Ch+var_F8]
0x4D2B70: mov     edx, edi
0x4D2B72: shl     edx, 0Ch
0x4D2B75: add     edx, 800h
0x4D2B7B: fstp    [esp+10Ch+var_EC]
0x4D2B7F: mov     ecx, [esp+10Ch+var_EC]
0x4D2B83: mov     [esp+10Ch+var_F8], edx
0x4D2B87: fild    [esp+10Ch+var_F8]
0x4D2B8B: lea     eax, [ebp+ebp*2+0]
0x4D2B8F: lea     eax, [esp+eax*4+10Ch+var_A8]
0x4D2B93: fstp    [esp+10Ch+var_E8]
0x4D2B97: mov     edx, [esp+10Ch+var_E8]
0x4D2B9B: mov     [eax], ecx
0x4D2B9D: push    1
0x4D2B9F: fstp    [esp+110h+var_E4]
0x4D2BA3: mov     ecx, [esp+110h+var_E4]
0x4D2BA7: mov     [eax+4], edx
0x4D2BAA: push    edi
0x4D2BAB: mov     [eax+8], ecx
0x4D2BAE: push    esi
0x4D2BAF: mov     ecx, ebx
0x4D2BB1: call    sub_4CCEE0
0x4D2BB6: mov     [esp+ebp*4+10Ch+var_B8], eax
0x4D2BBA: jmp     short loc_4D2BBE
0x4D2BBC: fstp    st
0x4D2BBE: xor     esi, esi
0x4D2BC0: lea     edi, [esp+10Ch+var_A8]
0x4D2BC4: mov     ecx, [esp+esi*4+10Ch+var_B8]
0x4D2BC8: test    ecx, ecx
0x4D2BCA: jz      loc_4D2CDA
0x4D2BD0: push    edi
0x4D2BD1: lea     edx, [esp+110h+var_D8]
0x4D2BD5: push    edx
0x4D2BD6: call    sub_4126C0
0x4D2BDB: add     esi, 1
0x4D2BDE: add     edi, 0Ch
0x4D2BE1: cmp     esi, 4
0x4D2BE4: jl      short loc_4D2BC4
0x4D2BE6: jmp     loc_4D2CDA
0x4D2BEB: test    byte ptr [ebx+25h], 1
0x4D2BEF: jnz     loc_4D2CDA
0x4D2BF5: lea     edi, [ebx+28h]
0x4D2BF8: mov     ecx, edi
0x4D2BFA: call    sub_420B50
0x4D2BFF: mov     esi, eax
0x4D2C01: test    esi, esi
0x4D2C03: jnz     short loc_4D2C4C
0x4D2C05: push    24h ; '$'; Size
0x4D2C07: call    FormHeapAlloc
0x4D2C0C: add     esp, 4
0x4D2C0F: mov     [esp+10Ch+var_F8], eax
0x4D2C13: test    eax, eax
0x4D2C15: mov     [esp+10Ch+var_4], esi
0x4D2C1C: jz      short loc_4D2C27
0x4D2C1E: mov     ecx, eax
0x4D2C20: call    SeenData__SeenData__
0x4D2C25: jmp     short loc_4D2C29
0x4D2C27: xor     eax, eax
0x4D2C29: push    eax
0x4D2C2A: mov     ecx, edi
0x4D2C2C: mov     [esp+110h+var_4], 0FFFFFFFFh
0x4D2C37: mov     esi, eax
0x4D2C39: call    sub_420B70
0x4D2C3E: mov     eax, [ebx]
0x4D2C40: mov     edx, [eax+48h]
0x4D2C43: push    10000000h
0x4D2C48: mov     ecx, ebx
0x4D2C4A: call    edx
0x4D2C4C: mov     dl, [ebx+24h]
0x4D2C4F: and     dl, 1
0x4D2C52: jnz     short loc_4D2C60
0x4D2C54: mov     eax, [ebx+3Ch]
0x4D2C57: test    eax, eax
0x4D2C59: jz      short loc_4D2C60
0x4D2C5B: mov     ecx, [eax+4]
0x4D2C5E: jmp     short loc_4D2C62
0x4D2C60: xor     ecx, ecx
0x4D2C62: test    dl, dl
0x4D2C64: jnz     short loc_4D2C71
0x4D2C66: mov     eax, [ebx+3Ch]
0x4D2C69: test    eax, eax
0x4D2C6B: jz      short loc_4D2C71
0x4D2C6D: mov     eax, [eax]
0x4D2C6F: jmp     short loc_4D2C73
0x4D2C71: xor     eax, eax
0x4D2C73: shl     eax, 0Ch
0x4D2C76: mov     [esp+10Ch+var_F8], eax
0x4D2C7A: fild    [esp+10Ch+var_F8]
0x4D2C7E: mov     eax, [esp+10Ch+arg_0]
0x4D2C85: shl     ecx, 0Ch
0x4D2C88: fstp    [esp+10Ch+var_CC]
0x4D2C8C: mov     [esp+10Ch+var_F8], ecx
0x4D2C90: fild    [esp+10Ch+var_F8]
0x4D2C94: lea     ecx, [esp+10Ch+var_CC]
0x4D2C98: push    ecx
0x4D2C99: push    eax
0x4D2C9A: fstp    [esp+114h+var_C8]
0x4D2C9E: mov     ecx, esi
0x4D2CA0: fld     dword ptr [eax+8]
0x4D2CA3: fstp    [esp+114h+var_C4]
0x4D2CA7: call    sub_4126C0
0x4D2CAC: test    al, al
0x4D2CAE: jz      short loc_4D2CDA
0x4D2CB0: push    0
0x4D2CB2: mov     ecx, edi
0x4D2CB4: call    sub_420B70
0x4D2CB9: mov     edx, [ebx]
0x4D2CBB: mov     eax, [edx+44h]
0x4D2CBE: and     byte ptr [ebx+25h], 0FEh
0x4D2CC2: push    16000000h
0x4D2CC7: mov     ecx, ebx
0x4D2CC9: call    eax
0x4D2CCB: mov     edx, [ebx]
0x4D2CCD: mov     eax, [edx+40h]
0x4D2CD0: or      byte ptr [ebx+25h], 1
0x4D2CD4: push    8
0x4D2CD6: mov     ecx, ebx
0x4D2CD8: call    eax
0x4D2CDA: mov     ecx, dword ptr [esp+10Ch+var_C]
0x4D2CE1: mov     large fs:0, ecx
0x4D2CE8: pop     ecx
0x4D2CE9: pop     edi
0x4D2CEA: pop     esi
0x4D2CEB: pop     ebp
0x4D2CEC: pop     ebx
0x4D2CED: add     esp, 0F8h
0x4D2CF3: retn    4
