0x5F2820: push    ebp
0x5F2821: mov     ebp, esp
0x5F2823: and     esp, 0FFFFFFF0h
0x5F2826: push    0FFFFFFFFh
0x5F2828: push    offset SEH_5F2820
0x5F282D: mov     eax, large fs:0
0x5F2833: push    eax
0x5F2834: sub     esp, 198h
0x5F283A: mov     eax, ds:0B30AACh
0x5F283F: xor     eax, esp
0x5F2841: mov     [esp+1A4h+var_14], eax
0x5F2848: push    ebx
0x5F2849: push    esi
0x5F284A: push    edi
0x5F284B: mov     eax, ds:0B30AACh
0x5F2850: xor     eax, esp
0x5F2852: push    eax
0x5F2853: lea     eax, [esp+1B4h+var_C]
0x5F285A: mov     large fs:0, eax
0x5F2860: mov     ebx, [ebp+a3]
0x5F2863: test    ebx, ebx
0x5F2865: mov     eax, [ebp+arg_C]
0x5F2868: mov     esi, ecx
0x5F286A: mov     [esp+1B4h+var_188], ebx
0x5F286E: mov     [esp+1B4h+var_190], eax
0x5F2872: mov     [esp+1B4h+var_199], 0
0x5F2877: mov     [esp+1B4h+var_18C], 0
0x5F287F: jz      loc_5F2E48
0x5F2885: mov     edx, [ebx]
0x5F2887: mov     eax, [edx+154h]
0x5F288D: mov     ecx, ebx
0x5F288F: call    eax
0x5F2891: test    eax, eax
0x5F2893: jz      loc_5F2E48
0x5F2899: mov     edx, [ebx]
0x5F289B: mov     eax, [edx+198h]
0x5F28A1: push    0
0x5F28A3: mov     ecx, ebx
0x5F28A5: call    eax
0x5F28A7: test    al, al
0x5F28A9: jz      short loc_5F28C1
0x5F28AB: mov     edx, [esi]
0x5F28AD: mov     eax, [edx+334h]
0x5F28B3: push    1
0x5F28B5: mov     ecx, esi
0x5F28B7: call    eax
0x5F28B9: test    al, al
0x5F28BB: jnz     loc_5F2E48
0x5F28C1: fld     dword ptr ds:0B33E9Ch
0x5F28C7: mov     eax, [esi+58h]
0x5F28CA: mov     edi, ds:0B14904h
0x5F28D0: fstp    [esp+1B4h+var_198]
0x5F28D4: fld     dword ptr [eax+10h]
0x5F28D7: add     edi, 0FFFFFFFBh
0x5F28DA: fld     [esp+1B4h+var_198]
0x5F28DE: fld     st
0x5F28E0: faddp   st(2), st
0x5F28E2: fxch    st(1)
0x5F28E4: fstp    dword ptr [eax+10h]
0x5F28E7: fld1
0x5F28E9: fdivrp  st(1), st
0x5F28EB: call    Double_To_SInt32
0x5F28F0: cmp     eax, 14h
0x5F28F3: jge     short loc_5F28FB
0x5F28F5: mov     edi, ds:0B148FCh
0x5F28FB: cmp     ds:0B333BCh, edi
0x5F2901: jle     short loc_5F2948
0x5F2903: cmp     esi, ds:0B333C4h
0x5F2909: jz      short loc_5F2921
0x5F290B: mov     edx, [esi]
0x5F290D: mov     eax, [edx+334h]
0x5F2913: push    1
0x5F2915: mov     ecx, esi
0x5F2917: call    eax
0x5F2919: test    al, al
0x5F291B: jz      loc_5F2E48
0x5F2921: mov     ecx, ds:0B3B914h
0x5F2927: cmp     ecx, ds:0B148E4h
0x5F292D: jle     loc_5F2E48
0x5F2933: mov     eax, [esp+1B4h+var_190]
0x5F2937: test    eax, eax
0x5F2939: jz      short loc_5F2941
0x5F293B: mov     dword ptr [eax], 1
0x5F2941: mov     al, 1
0x5F2943: jmp     loc_5F2E4A
0x5F2948: mov     edx, [ebx]
0x5F294A: mov     eax, [edx+190h]
0x5F2950: mov     ecx, ebx
0x5F2952: call    eax
0x5F2954: test    al, al
0x5F2956: jz      short loc_5F295C
0x5F2958: mov     [esp+1B4h+var_18C], ebx
0x5F295C: cmp     byte ptr [ebp+arg_0], 0
0x5F2960: jnz     short loc_5F297E
0x5F2962: mov     ecx, [esi+58h]
0x5F2965: mov     eax, [esp+1B4h+var_18C]
0x5F2969: mov     edx, [ecx]
0x5F296B: mov     edx, [edx+1C4h]
0x5F2971: push    eax
0x5F2972: push    esi
0x5F2973: call    edx
0x5F2975: mov     [esp+1B4h+var_199], al
0x5F2979: jmp     loc_5F2E4A
0x5F297E: mov     eax, [esp+1B4h+var_190]
0x5F2982: test    eax, eax
0x5F2984: jz      short loc_5F298C
0x5F2986: mov     dword ptr [eax], 3
0x5F298C: lea     eax, [esi+2Ch]
0x5F298F: push    eax
0x5F2990: lea     eax, [esp+1B8h+var_120+4]
0x5F2997: lea     edi, [ebx+2Ch]
0x5F299A: push    eax
0x5F299B: mov     ecx, edi
0x5F299D: call    sub_4121A0
0x5F29A2: lea     ecx, [esp+1B4h+var_120+4]
0x5F29A9: push    ecx
0x5F29AA: call    sub_683CB0
0x5F29AF: fstp    [esp+1B8h+var_198]
0x5F29B3: fld     [esp+1B8h+var_198]
0x5F29B7: add     esp, 4
0x5F29BA: lea     edx, [esp+1B4h+var_120]
0x5F29C1: push    edx; int
0x5F29C2: push    ecx
0x5F29C3: fstp    [esp+1BCh+var_1BC]; float
0x5F29C6: push    esi; int
0x5F29C7: call    sub_683D80
0x5F29CC: fstp    [esp+1C0h+var_198]
0x5F29D0: fld     [esp+1C0h+var_198]
0x5F29D4: add     esp, 0Ch
0x5F29D7: fabs
0x5F29D9: fstp    [esp+1B4h+var_198]
0x5F29DD: fld     [esp+1B4h+var_198]
0x5F29E1: fcomp   qword ptr ds:0A6E750h
0x5F29E7: fnstsw  ax
0x5F29E9: test    ah, 5
0x5F29EC: jnp     short loc_5F29F8
0x5F29EE: cmp     [ebp+arg_10], 0
0x5F29F2: jz      loc_5F2E42
0x5F29F8: cmp     byte ptr ds:0B3B77Ch, 0
0x5F29FF: jz      short loc_5F2A16
0x5F2A01: mov     eax, [esp+1B4h+var_190]
0x5F2A05: test    eax, eax
0x5F2A07: jz      short loc_5F2A0F
0x5F2A09: mov     dword ptr [eax], 2
0x5F2A0F: mov     al, 1
0x5F2A11: jmp     loc_5F2E4A
0x5F2A16: mov     ecx, esi; this
0x5F2A18: call    TESObjectREFR_GetParentCell
0x5F2A1D: test    eax, eax
0x5F2A1F: mov     [esp+1B4h+var_194], eax
0x5F2A23: jz      loc_5F2E48
0x5F2A29: cmp     [ebp+arg_8], 0
0x5F2A2D: mov     ecx, [esi+30h]
0x5F2A30: mov     eax, [esi+2Ch]
0x5F2A33: mov     edx, [esi+34h]
0x5F2A36: mov     [esp+1B4h+var_180], ecx
0x5F2A3A: mov     [esp+1B4h+var_184], eax
0x5F2A3E: mov     [esp+1B4h+var_17C], edx
0x5F2A42: mov     ecx, esi
0x5F2A44: jz      short loc_5F2A4D
0x5F2A46: call    sub_5E40C0
0x5F2A4B: jmp     short loc_5F2A58
0x5F2A4D: call    sub_5E0660
0x5F2A52: fmul    qword ptr ds:0A31C70h
0x5F2A58: fadd    [esp+1B4h+var_17C]
0x5F2A5C: mov     ecx, [esp+1B4h+var_194]; this
0x5F2A60: fstp    [esp+1B4h+var_17C]
0x5F2A64: call    TESObjectCELL_IsInterior
0x5F2A69: test    al, al
0x5F2A6B: jnz     short loc_5F2A98
0x5F2A6D: mov     ecx, [esp+1B4h+var_194]; this
0x5F2A71: push    0; int
0x5F2A73: call    TESObjectCELL_GetWorldSpace
0x5F2A78: fld     [esp+1B8h+var_180]
0x5F2A7C: mov     ecx, ds:0B33A98h
0x5F2A82: push    eax; int
0x5F2A83: sub     esp, 8
0x5F2A86: fstp    [esp+1C4h+var_1C0]; float
0x5F2A8A: fld     [esp+1C4h+var_184]
0x5F2A8E: fstp    [esp+1C4h+var_1C4]; float
0x5F2A91: call    sub_44A270
0x5F2A96: jmp     short loc_5F2A9C
0x5F2A98: mov     eax, [esp+1B4h+var_194]
0x5F2A9C: mov     ecx, ds:0B333A0h
0x5F2AA2: push    1; a2
0x5F2AA4: push    eax; a1
0x5F2AA5: call    TESObjectCELL_IsProcessLevel?LowHigh
0x5F2AAA: test    al, al
0x5F2AAC: jz      loc_5F2E42
0x5F2AB2: lea     ecx, [esp+1B4h+var_F0]
0x5F2AB9: call    bhkWorldRayCastData__Init
0x5F2ABE: mov     eax, [ebx]
0x5F2AC0: mov     edx, [eax+188h]
0x5F2AC6: mov     ecx, ebx
0x5F2AC8: mov     [esp+1B4h+var_198], 0
0x5F2AD0: call    edx
0x5F2AD2: test    al, al
0x5F2AD4: jnz     short loc_5F2ADA
0x5F2AD6: mov     ebx, [esp+1B4h+var_198]
0x5F2ADA: push    ebx; a3
0x5F2ADB: push    1Ah; a2
0x5F2ADD: lea     ecx, [esp+1BCh+var_70]; this
0x5F2AE4: call    sub_535A00
0x5F2AE9: mov     ebx, [edi]
0x5F2AEB: mov     edx, [edi+4]
0x5F2AEE: mov     edi, [edi+8]
0x5F2AF1: xor     eax, eax
0x5F2AF3: mov     [esp+1B4h+var_4], eax
0x5F2AFA: lea     ecx, [esp+1B4h+var_70]
0x5F2B01: mov     [esp+1B4h+var_F0.RayHitCollector2], eax
0x5F2B08: lea     eax, [esp+1B4h+var_184]
0x5F2B0C: mov     [esp+1B4h+var_F0.RayHitCollector1], ecx
0x5F2B13: push    eax
0x5F2B14: lea     ecx, [esp+1B8h+var_F0]
0x5F2B1B: mov     [esp+1B8h+a2.x], ebx
0x5F2B1F: mov     [esp+1B8h+a2.y], edx
0x5F2B23: mov     [esp+1B8h+a2.z], edi
0x5F2B27: call    bhkWorldRayCastData__SetCastInputFrom
0x5F2B2C: lea     ecx, [esp+1B4h+var_16C]
0x5F2B30: push    ecx
0x5F2B31: mov     ecx, esi
0x5F2B33: call    sub_65ABE0
0x5F2B38: mov     edx, [esp+1B4h+var_16C]
0x5F2B3C: mov     ecx, [esp+1B4h+var_188]
0x5F2B40: mov     eax, [ecx]
0x5F2B42: mov     eax, [eax+15Ch]
0x5F2B48: and     edx, 0FFFF001Ah
0x5F2B4E: or      edx, 1Ah
0x5F2B51: mov     [esp+1B4h+var_F0.WorldRayCastInput.FilterInfo], edx
0x5F2B58: lea     edx, [esp+1B4h+var_15C]
0x5F2B5C: push    edx
0x5F2B5D: call    eax
0x5F2B5F: fld     dword ptr [eax+8]
0x5F2B62: mov     ecx, [esp+1B4h+var_188]
0x5F2B66: fstp    [esp+1B4h+var_168]
0x5F2B6A: mov     edx, [ecx]
0x5F2B6C: mov     edx, [edx+158h]
0x5F2B72: lea     eax, [esp+1B4h+var_150]
0x5F2B76: push    eax
0x5F2B77: call    edx
0x5F2B79: fld     dword ptr [eax+8]
0x5F2B7C: fsubr   [esp+1B4h+var_168]
0x5F2B80: mov     ecx, esi; this
0x5F2B82: mov     [esp+1B4h+var_15C], 1
0x5F2B8A: mov     [esp+1B4h+var_158], 2
0x5F2B92: fstp    [esp+1B4h+var_198]
0x5F2B96: mov     [esp+1B4h+var_154], 0
0x5F2B9E: fld     dword ptr ds:0A3D65Ch
0x5F2BA4: fstp    [esp+1B4h+var_150]
0x5F2BA8: fld     dword ptr ds:0A41328h
0x5F2BAE: fstp    [esp+1B4h+var_14C]
0x5F2BB2: fld     dword ptr ds:0A41304h
0x5F2BB8: fstp    [esp+1B4h+var_148]
0x5F2BBC: call    TESObjectREFR_GetParentCell
0x5F2BC1: test    eax, eax
0x5F2BC3: jz      loc_5F2E42
0x5F2BC9: mov     ecx, eax
0x5F2BCB: call    sub_4440C0
0x5F2BD0: fld     [esp+1B4h+var_198]
0x5F2BD4: fmul    qword ptr ds:0A2FAA0h
0x5F2BDA: mov     ecx, [esp+1B4h+var_180]
0x5F2BDE: mov     edx, [esp+1B4h+var_17C]
0x5F2BE2: mov     [esp+1B4h+var_194], eax
0x5F2BE6: mov     eax, [esp+1B4h+var_184]
0x5F2BEA: fadd    [esp+1B4h+a2.z]
0x5F2BEE: mov     [esp+1B4h+var_144], eax
0x5F2BF2: mov     eax, [esp+1B4h+a2.y]
0x5F2BF6: mov     [esp+1B4h+var_134], eax
0x5F2BFD: mov     [esp+1B4h+var_128], eax
0x5F2C04: lea     eax, [esp+1B4h+var_110]
0x5F2C0B: push    eax
0x5F2C0C: push    0Ch
0x5F2C0E: mov     [esp+1BCh+var_140], ecx
0x5F2C12: lea     ecx, [esp+1BCh+var_144]
0x5F2C16: push    3
0x5F2C18: mov     [esp+1C0h+var_124], edi
0x5F2C1F: fstp    [esp+1C0h+var_124]
0x5F2C26: push    ecx
0x5F2C27: mov     [esp+1C4h+var_13C], edx
0x5F2C2E: mov     [esp+1C4h+var_138], ebx
0x5F2C35: mov     [esp+1C4h+var_130], edi
0x5F2C3C: mov     [esp+1C4h+var_12C], ebx
0x5F2C43: call    sub_8B8800
0x5F2C48: movss   xmm1, dword ptr ds:0A56118h
0x5F2C50: movaps  xmm2, [esp+1C4h+var_110]
0x5F2C58: mov     edi, [esp+1C4h+var_194]
0x5F2C5C: xorps   xmm0, xmm0
0x5F2C5F: movss   xmm0, xmm1
0x5F2C63: movaps  xmm1, xmm0
0x5F2C66: shufps  xmm1, xmm0, 0
0x5F2C6A: mulps   xmm1, xmm2
0x5F2C6D: movaps  [esp+1C4h+var_110], xmm1
0x5F2C75: movaps  xmm1, xmm0
0x5F2C78: shufps  xmm1, xmm0, 0
0x5F2C7C: movaps  xmm0, [esp+1C4h+var_100]
0x5F2C84: add     esp, 10h
0x5F2C87: test    edi, edi
0x5F2C89: mulps   xmm1, xmm0
0x5F2C8C: movaps  [esp+1B4h+var_100], xmm1
0x5F2C94: jz      short loc_5F2CAA
0x5F2C96: mov     edx, [edi]
0x5F2C98: mov     eax, [edx+58h]
0x5F2C9B: mov     ecx, edi
0x5F2C9D: call    eax
0x5F2C9F: mov     edx, [edi]
0x5F2CA1: mov     eax, [edx+58h]
0x5F2CA4: mov     ecx, edi
0x5F2CA6: call    eax
0x5F2CA8: jmp     short loc_5F2CAC
0x5F2CAA: xor     eax, eax
0x5F2CAC: mov     ecx, [eax+64h]
0x5F2CAF: mov     edx, [ecx]
0x5F2CB1: mov     eax, [edx+3Ch]
0x5F2CB4: call    eax
0x5F2CB6: mov     ecx, ds:0BA9DE4h
0x5F2CBC: mov     edx, large fs:2Ch
0x5F2CC3: mov     ecx, [edx+ecx*4]
0x5F2CC6: mov     dword ptr [esp+1B4h+var_168], ecx
0x5F2CCA: mov     ecx, [ecx+19Ch]
0x5F2CD0: test    ecx, ecx
0x5F2CD2: jnz     short loc_5F2CDA
0x5F2CD4: mov     ecx, ds:0BA7D9Ch
0x5F2CDA: mov     edx, [ecx+20h]
0x5F2CDD: add     eax, 10h
0x5F2CE0: and     eax, 0FFFFFFF0h
0x5F2CE3: lea     ebx, [edx+eax]
0x5F2CE6: cmp     ebx, [ecx+2Ch]
0x5F2CE9: ja      short loc_5F2CF6
0x5F2CEB: mov     [ecx+20h], ebx
0x5F2CEE: mov     ebx, edx
0x5F2CF0: mov     [esp+1B4h+var_194], ebx
0x5F2CF4: jmp     short loc_5F2D04
0x5F2CF6: mov     edx, [ecx]
0x5F2CF8: push    eax
0x5F2CF9: mov     eax, [edx+0Ch]
0x5F2CFC: call    eax
0x5F2CFE: mov     [esp+1B4h+var_194], eax
0x5F2D02: mov     ebx, eax
0x5F2D04: test    edi, edi
0x5F2D06: jz      short loc_5F2D13
0x5F2D08: mov     edx, [edi]
0x5F2D0A: mov     eax, [edx+58h]
0x5F2D0D: mov     ecx, edi
0x5F2D0F: call    eax
0x5F2D11: jmp     short loc_5F2D15
0x5F2D13: xor     eax, eax
0x5F2D15: mov     ecx, [eax+64h]
0x5F2D18: mov     edx, [ecx]
0x5F2D1A: mov     edx, [edx+40h]
0x5F2D1D: push    ebx
0x5F2D1E: lea     eax, [esp+1B8h+var_110]
0x5F2D25: push    eax
0x5F2D26: call    edx
0x5F2D28: test    edi, edi
0x5F2D2A: jz      short loc_5F2D35
0x5F2D2C: mov     eax, [edi]
0x5F2D2E: mov     edx, [eax+58h]
0x5F2D31: mov     ecx, edi
0x5F2D33: call    edx
0x5F2D35: mov     eax, [esi]
0x5F2D37: fld     [esp+1B4h+a2.z]
0x5F2D3B: mov     edx, [eax+330h]
0x5F2D41: fstp    [esp+1B4h+var_160]
0x5F2D45: mov     [esp+1B4h+var_F0.BroadPhaseAabbCache], ebx
0x5F2D4C: mov     ecx, esi
0x5F2D4E: mov     ebx, 1
0x5F2D53: call    edx
0x5F2D55: mov     ecx, ds:0B333C4h
0x5F2D5B: mov     edi, [esp+1B4h+var_18C]
0x5F2D5F: cmp     edi, ecx
0x5F2D61: jz      short loc_5F2D9F
0x5F2D63: cmp     esi, ecx
0x5F2D65: jz      short loc_5F2D9F
0x5F2D67: test    eax, eax
0x5F2D69: jz      short loc_5F2D7B
0x5F2D6B: mov     eax, [eax+70h]
0x5F2D6E: push    eax
0x5F2D6F: call    sub_612690
0x5F2D74: add     esp, 4
0x5F2D77: test    al, al
0x5F2D79: jnz     short loc_5F2D9F
0x5F2D7B: test    edi, edi
0x5F2D7D: jz      short loc_5F2DA4
0x5F2D7F: mov     eax, [edi]
0x5F2D81: mov     edx, [eax+330h]
0x5F2D87: mov     ecx, edi
0x5F2D89: call    edx
0x5F2D8B: test    eax, eax
0x5F2D8D: jz      short loc_5F2DA4
0x5F2D8F: mov     eax, [eax+70h]
0x5F2D92: push    eax
0x5F2D93: call    sub_612690
0x5F2D98: add     esp, 4
0x5F2D9B: test    al, al
0x5F2D9D: jz      short loc_5F2DA4
0x5F2D9F: mov     ebx, 3
0x5F2DA4: xor     esi, esi
0x5F2DA6: test    ebx, ebx
0x5F2DA8: jle     short loc_5F2E1A
0x5F2DAA: lea     ebx, [ebx+0]
0x5F2DB0: fld     [esp+esi*4+1B4h+var_150]
0x5F2DB4: lea     eax, [esp+1B4h+a2]
0x5F2DB8: fmul    [esp+1B4h+var_198]
0x5F2DBC: push    eax; a2
0x5F2DBD: lea     ecx, [esp+1B8h+var_F0]; this
0x5F2DC4: fadd    [esp+1B8h+var_160]
0x5F2DC8: fstp    [esp+1B8h+a2.z]
0x5F2DCC: call    bhkWorldRayCastData__SetCastInputTo
0x5F2DD1: add     dword ptr ds:0B333BCh, 1
0x5F2DD8: lea     ecx, [esp+1B4h+var_F0]
0x5F2DDF: push    ecx; a2
0x5F2DE0: mov     ecx, ds:0B333A0h; this
0x5F2DE6: call    TES__CastRay
0x5F2DEB: test    eax, eax
0x5F2DED: jz      short loc_5F2E07
0x5F2DEF: push    eax
0x5F2DF0: call    sub_4DC270
0x5F2DF5: add     esp, 4
0x5F2DF8: cmp     eax, [esp+1B4h+var_188]
0x5F2DFC: jz      short loc_5F2E07
0x5F2DFE: add     esi, 1
0x5F2E01: cmp     esi, ebx
0x5F2E03: jl      short loc_5F2DB0
0x5F2E05: jmp     short loc_5F2E1A
0x5F2E07: mov     eax, [esp+1B4h+var_190]
0x5F2E0B: test    eax, eax
0x5F2E0D: mov     [esp+1B4h+var_199], 1
0x5F2E12: jz      short loc_5F2E1A
0x5F2E14: mov     edx, [esp+esi*4+1B4h+var_15C]
0x5F2E18: mov     [eax], edx
0x5F2E1A: mov     eax, dword ptr [esp+1B4h+var_168]
0x5F2E1E: mov     ecx, [eax+19Ch]
0x5F2E24: test    ecx, ecx
0x5F2E26: jnz     short loc_5F2E2E
0x5F2E28: mov     ecx, ds:0BA7D9Ch
0x5F2E2E: mov     eax, [esp+1B4h+var_194]
0x5F2E32: cmp     eax, [ecx+28h]
0x5F2E35: mov     [ecx+20h], eax
0x5F2E38: jnz     short loc_5F2E42
0x5F2E3A: mov     edx, [ecx]
0x5F2E3C: push    eax
0x5F2E3D: mov     eax, [edx+10h]
0x5F2E40: call    eax
0x5F2E42: mov     al, [esp+1B4h+var_199]
0x5F2E46: jmp     short loc_5F2E4A
0x5F2E48: xor     al, al
0x5F2E4A: mov     ecx, [esp+1B4h+var_C]
0x5F2E51: mov     large fs:0, ecx
0x5F2E58: pop     ecx
0x5F2E59: pop     edi
0x5F2E5A: pop     esi
0x5F2E5B: pop     ebx
0x5F2E5C: mov     ecx, [esp+1A4h+var_14]
0x5F2E63: xor     ecx, esp
0x5F2E65: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5F2E6A: mov     esp, ebp
0x5F2E6C: pop     ebp
0x5F2E6D: retn    14h
