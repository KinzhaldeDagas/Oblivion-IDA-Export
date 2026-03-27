0x7997F0: push    0FFFFFFFFh
0x7997F2: push    offset SEH_7997F0
0x7997F7: mov     eax, large fs:0
0x7997FD: push    eax
0x7997FE: sub     esp, 0E4h
0x799804: push    ebx
0x799805: push    ebp
0x799806: push    esi
0x799807: push    edi
0x799808: mov     eax, ds:0B30AACh
0x79980D: xor     eax, esp
0x79980F: push    eax
0x799810: lea     eax, [esp+104h+var_C]
0x799817: mov     large fs:0, eax
0x79981D: mov     edi, ecx
0x79981F: mov     [esp+104h+var_C8], edi
0x799823: xor     ebp, ebp
0x799825: cmp     [edi+24h], ebp
0x799828: jz      loc_799E7D
0x79982E: cmp     [edi+20h], ebp
0x799831: jz      loc_799E7D
0x799837: cmp     [edi+2Ch], ebp
0x79983A: jz      loc_799E7D
0x799840: mov     [esp+104h+var_A8], ebp
0x799844: mov     [esp+104h+var_A4], ebp
0x799848: mov     [esp+104h+var_A0], ebp
0x79984C: cmp     [edi+1Ch], bp
0x799850: mov     [esp+104h+var_4], ebp
0x799857: mov     ebx, 1
0x79985C: jbe     loc_799A79
0x799862: fldz
0x799864: xor     esi, esi
0x799866: fld     st
0x799868: fsub    st, st(1)
0x79986A: fmul    st, st
0x79986C: fst     [esp+104h+var_D8]
0x799870: fldz
0x799872: jmp     short loc_799880
0x799874: fld     [esp+104h+var_D8]
0x799878: fldz
0x79987A: fldz
0x79987C: fxch    st(2)
0x79987E: fxch    st(1)
0x799880: mov     eax, [edi+24h]
0x799883: mov     ecx, [edi+20h]
0x799886: fld     dword ptr [eax+esi]
0x799889: fmul    dword ptr [ecx+esi]
0x79988C: add     eax, esi
0x79988E: add     ecx, esi
0x799890: fstp    [esp+104h+var_F0]
0x799894: fld     dword ptr [ecx+4]
0x799897: fmul    dword ptr [eax+4]
0x79989A: fstp    [esp+104h+var_E8]
0x79989E: fst     [esp+104h+var_EC]
0x7998A2: fld     [esp+104h+var_F0]
0x7998A6: fld     st
0x7998A8: fsubr   st, st(4)
0x7998AA: fmul    st, st
0x7998AC: fld     [esp+104h+var_E8]
0x7998B0: fld     st
0x7998B2: fsubp   st(6), st
0x7998B4: fld     st(5)
0x7998B6: fmulp   st(6), st
0x7998B8: fld     st(5)
0x7998BA: fadd    st, st(2)
0x7998BC: fadd    st, st(5)
0x7998BE: fstp    [esp+104h+var_F0]
0x7998C2: fld     [esp+104h+var_F0]
0x7998C6: fst     [esp+104h+var_F0]
0x7998CA: mov     edx, [esp+104h+var_F0]
0x7998CE: fxch    st(4)
0x7998D0: sar     edx, 1
0x7998D2: add     edx, 1FC00000h
0x7998D8: mov     [esp+104h+var_F0], edx
0x7998DC: fcomp   [esp+104h+var_F0]
0x7998E0: fnstsw  ax
0x7998E2: test    ah, 5
0x7998E5: jp      short loc_7998FE
0x7998E7: fxch    st(3)
0x7998E9: fstp    [esp+104h+var_F0]
0x7998ED: mov     eax, [esp+104h+var_F0]
0x7998F1: sar     eax, 1
0x7998F3: add     eax, 1FC00000h
0x7998F8: mov     [esp+104h+var_EC], eax
0x7998FC: jmp     short loc_799900
0x7998FE: fstp    st(3)
0x799900: mov     ecx, [edi+20h]
0x799903: fld     dword ptr [ecx+esi]
0x799906: add     ecx, esi
0x799908: fstp    [esp+104h+var_B8]
0x79990C: fld     [esp+104h+var_B8]
0x799910: fsub    st, st(2)
0x799912: fmul    st, st
0x799914: fadd    st, st(5)
0x799916: fadd    st, st(4)
0x799918: fstp    [esp+104h+var_F0]
0x79991C: mov     edx, [esp+104h+var_F0]
0x799920: sar     edx, 1
0x799922: add     edx, 1FC00000h
0x799928: mov     [esp+104h+var_F0], edx
0x79992C: fld     [esp+104h+var_F0]
0x799930: fld     [esp+104h+var_EC]
0x799934: fcompp
0x799936: fnstsw  ax
0x799938: test    ah, 5
0x79993B: jp      short loc_799966
0x79993D: fld     dword ptr [ecx]
0x79993F: fstp    [esp+104h+var_C4]
0x799943: fld     [esp+104h+var_C4]
0x799947: fsub    st, st(2)
0x799949: fmul    st, st
0x79994B: faddp   st(5), st
0x79994D: fxch    st(4)
0x79994F: fadd    st, st(3)
0x799951: fstp    [esp+104h+var_F0]
0x799955: mov     eax, [esp+104h+var_F0]
0x799959: sar     eax, 1
0x79995B: add     eax, 1FC00000h
0x799960: mov     [esp+104h+var_EC], eax
0x799964: jmp     short loc_799968
0x799966: fstp    st(4)
0x799968: mov     edx, [edi+20h]
0x79996B: fld     dword ptr [esi+edx]
0x79996E: lea     eax, [esi+edx]
0x799971: fstp    [esp+104h+var_E8]
0x799975: fld     dword ptr [eax+4]
0x799978: fstp    [esp+104h+var_F0]
0x79997C: fld     [esp+104h+var_F0]
0x799980: fsub    st, st(2)
0x799982: fld     [esp+104h+var_E8]
0x799986: fsub    st, st(2)
0x799988: fmul    st, st
0x79998A: fld     st(1)
0x79998C: fmulp   st(2), st
0x79998E: faddp   st(1), st
0x799990: fadd    st, st(3)
0x799992: fstp    [esp+104h+var_F0]
0x799996: mov     eax, [esp+104h+var_F0]
0x79999A: sar     eax, 1
0x79999C: add     eax, 1FC00000h
0x7999A1: mov     [esp+104h+var_F0], eax
0x7999A5: fld     [esp+104h+var_F0]
0x7999A9: fld     [esp+104h+var_EC]
0x7999AD: fcompp
0x7999AF: fnstsw  ax
0x7999B1: test    ah, 5
0x7999B4: jp      short loc_7999F2
0x7999B6: fld     dword ptr [esi+edx]
0x7999B9: lea     eax, [esi+edx]
0x7999BC: fstp    [esp+104h+var_E8]
0x7999C0: fld     dword ptr [eax+4]
0x7999C3: fstp    [esp+104h+var_F0]
0x7999C7: fld     [esp+104h+var_F0]
0x7999CB: fsub    st, st(2)
0x7999CD: fld     [esp+104h+var_E8]
0x7999D1: fsubrp  st(2), st
0x7999D3: fld     st(1)
0x7999D5: fmulp   st(2), st
0x7999D7: fmul    st, st
0x7999D9: faddp   st(1), st
0x7999DB: fadd    st, st(2)
0x7999DD: fstp    [esp+104h+var_F0]
0x7999E1: mov     eax, [esp+104h+var_F0]
0x7999E5: sar     eax, 1
0x7999E7: add     eax, 1FC00000h
0x7999EC: mov     [esp+104h+var_EC], eax
0x7999F0: jmp     short loc_7999F4
0x7999F2: fstp    st
0x7999F4: fld     dword ptr [ecx+4]
0x7999F7: fstp    [esp+104h+var_F0]
0x7999FB: fld     [esp+104h+var_F0]
0x7999FF: fsub    st, st(1)
0x799A01: fmul    st, st
0x799A03: fadd    st, st(3)
0x799A05: fadd    st, st(2)
0x799A07: fstp    [esp+104h+var_F0]
0x799A0B: mov     edx, [esp+104h+var_F0]
0x799A0F: sar     edx, 1
0x799A11: add     edx, 1FC00000h
0x799A17: mov     [esp+104h+var_F0], edx
0x799A1B: fld     [esp+104h+var_F0]
0x799A1F: fld     [esp+104h+var_EC]
0x799A23: fcompp
0x799A25: fnstsw  ax
0x799A27: test    ah, 5
0x799A2A: jp      short loc_799A52
0x799A2C: fld     dword ptr [ecx+4]
0x799A2F: fstp    [esp+104h+var_F0]
0x799A33: fsubr   [esp+104h+var_F0]
0x799A37: fmul    st, st
0x799A39: faddp   st(2), st
0x799A3B: faddp   st(1), st
0x799A3D: fstp    [esp+104h+var_F0]
0x799A41: mov     eax, [esp+104h+var_F0]
0x799A45: sar     eax, 1
0x799A47: add     eax, 1FC00000h
0x799A4C: mov     [esp+104h+var_EC], eax
0x799A50: jmp     short loc_799A58
0x799A52: fstp    st(1)
0x799A54: fstp    st
0x799A56: fstp    st
0x799A58: lea     ecx, [esp+104h+var_EC]
0x799A5C: push    ecx; int
0x799A5D: lea     ecx, [esp+108h+var_AC]; int
0x799A61: call    sub_799780
0x799A66: movzx   edx, word ptr [edi+1Ch]
0x799A6A: add     ebp, ebx
0x799A6C: add     esi, 0Ch
0x799A6F: cmp     ebp, edx
0x799A71: jl      loc_799874
0x799A77: xor     ebp, ebp
0x799A79: cmp     [edi+28h], bp
0x799A7D: mov     [esp+104h+var_F0], ebp
0x799A81: jbe     loc_799E6C
0x799A87: mov     [esp+104h+var_CC], ebp
0x799A8B: jmp     short loc_799A90
0x799A8D: align 10h
0x799A90: mov     esi, [edi+2Ch]
0x799A93: add     esi, [esp+104h+var_CC]
0x799A97: cmp     [esi+0Ch], bp
0x799A9B: mov     [esp+104h+var_E8], esi
0x799A9F: jbe     loc_799E51
0x799AA5: mov     [esp+104h+var_D0], ebp
0x799AA9: jmp     short loc_799AB4
0x799AAB: jmp     short loc_799AB0
0x799AAD: align 10h
0x799AB0: mov     esi, [esp+104h+var_E8]
0x799AB4: lea     ecx, [esp+104h+var_54]
0x799ABB: call    sub_7A6BB0
0x799AC0: mov     eax, [esi+18h]
0x799AC3: add     eax, [esp+104h+var_D0]
0x799AC7: mov     byte ptr [esp+104h+var_4], bl
0x799ACE: fld     dword ptr [eax]
0x799AD0: fstp    [esp+104h+var_E0]
0x799AD4: fld     dword ptr [eax+4]
0x799AD7: fstp    [esp+104h+var_E4]
0x799ADB: fld     dword ptr [eax+8]
0x799ADE: mov     eax, [esi+10h]
0x799AE1: movzx   esi, byte ptr [eax+ebp]
0x799AE5: fstp    [esp+104h+var_EC]
0x799AE9: mov     eax, [esp+104h+var_A8]
0x799AED: shr     esi, 1
0x799AEF: test    eax, eax
0x799AF1: jz      short loc_799B00
0x799AF3: mov     ecx, [esp+104h+var_A4]
0x799AF7: sub     ecx, eax
0x799AF9: sar     ecx, 2
0x799AFC: cmp     esi, ecx
0x799AFE: jb      short loc_799B09
0x799B00: call    __invalid_parameter_noinfo
0x799B05: mov     eax, [esp+104h+var_A8]
0x799B09: fld     dword ptr [eax+esi*4]
0x799B0C: lea     ecx, [esp+104h+var_6C]
0x799B13: fstp    [esp+104h+var_DC]
0x799B17: push    ecx
0x799B18: fld     [esp+108h+var_E0]
0x799B1C: lea     edx, [esp+108h+var_9C]
0x799B20: fadd    [esp+108h+var_DC]
0x799B24: push    edx
0x799B25: lea     ecx, [esp+10Ch+var_54]
0x799B2C: fstp    [esp+10Ch+var_6C]
0x799B33: fld     [esp+10Ch+var_E4]
0x799B37: fstp    [esp+10Ch+var_68]
0x799B3E: fld     [esp+10Ch+var_EC]
0x799B42: fstp    [esp+10Ch+var_64]
0x799B49: call    sub_7A6B10
0x799B4E: mov     ecx, 0Ch
0x799B53: mov     esi, eax
0x799B55: lea     edi, [esp+104h+var_54]
0x799B5C: rep movsd
0x799B5E: lea     ecx, [esp+104h+var_84]; void *
0x799B65: mov     byte ptr [esp+104h+var_4], 2
0x799B6D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799B72: lea     ecx, [esp+104h+var_9C]; void *
0x799B76: mov     byte ptr [esp+104h+var_4], bl
0x799B7D: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799B82: fld     [esp+104h+var_E0]
0x799B86: fsub    [esp+104h+var_DC]
0x799B8A: lea     eax, [esp+104h+var_18]
0x799B91: push    eax
0x799B92: lea     ecx, [esp+108h+var_9C]
0x799B96: fstp    [esp+108h+var_18]
0x799B9D: push    ecx
0x799B9E: fld     [esp+10Ch+var_E4]
0x799BA2: lea     ecx, [esp+10Ch+var_54]
0x799BA9: fstp    [esp+10Ch+var_14]
0x799BB0: fld     [esp+10Ch+var_EC]
0x799BB4: fstp    [esp+10Ch+var_10]
0x799BBB: call    sub_7A6B10
0x799BC0: mov     ecx, 0Ch
0x799BC5: mov     esi, eax
0x799BC7: lea     edi, [esp+104h+var_54]
0x799BCE: rep movsd
0x799BD0: lea     ecx, [esp+104h+var_84]; void *
0x799BD7: mov     byte ptr [esp+104h+var_4], 3
0x799BDF: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799BE4: lea     ecx, [esp+104h+var_9C]; void *
0x799BE8: mov     byte ptr [esp+104h+var_4], bl
0x799BEF: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799BF4: fld     [esp+104h+var_E4]
0x799BF8: fadd    [esp+104h+var_DC]
0x799BFC: lea     edx, [esp+104h+var_24]
0x799C03: push    edx
0x799C04: lea     eax, [esp+108h+var_9C]
0x799C08: fstp    dword ptr [esp+108h+var_D8]
0x799C0C: push    eax
0x799C0D: fld     [esp+10Ch+var_E0]
0x799C11: lea     ecx, [esp+10Ch+var_54]
0x799C18: fstp    [esp+10Ch+var_24]
0x799C1F: fld     dword ptr [esp+10Ch+var_D8]
0x799C23: fstp    [esp+10Ch+var_20]
0x799C2A: fld     [esp+10Ch+var_EC]
0x799C2E: fstp    [esp+10Ch+var_1C]
0x799C35: call    sub_7A6B10
0x799C3A: mov     ecx, 0Ch
0x799C3F: mov     esi, eax
0x799C41: lea     edi, [esp+104h+var_54]
0x799C48: rep movsd
0x799C4A: lea     ecx, [esp+104h+var_84]; void *
0x799C51: mov     byte ptr [esp+104h+var_4], 4
0x799C59: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799C5E: lea     ecx, [esp+104h+var_9C]; void *
0x799C62: mov     byte ptr [esp+104h+var_4], bl
0x799C69: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799C6E: fld     [esp+104h+var_E4]
0x799C72: fsub    [esp+104h+var_DC]
0x799C76: fstp    dword ptr [esp+104h+var_D8]
0x799C7A: fld     [esp+104h+var_E0]
0x799C7E: fstp    [esp+104h+var_60]
0x799C85: fld     dword ptr [esp+104h+var_D8]
0x799C89: lea     ecx, [esp+104h+var_60]
0x799C90: fstp    [esp+104h+var_5C]
0x799C97: push    ecx
0x799C98: fld     [esp+108h+var_EC]
0x799C9C: lea     edx, [esp+108h+var_9C]
0x799CA0: push    edx
0x799CA1: fstp    [esp+10Ch+var_58]
0x799CA8: lea     ecx, [esp+10Ch+var_54]
0x799CAF: call    sub_7A6B10
0x799CB4: mov     ecx, 0Ch
0x799CB9: mov     esi, eax
0x799CBB: lea     edi, [esp+104h+var_54]
0x799CC2: rep movsd
0x799CC4: lea     ecx, [esp+104h+var_84]; void *
0x799CCB: mov     byte ptr [esp+104h+var_4], 5
0x799CD3: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799CD8: lea     ecx, [esp+104h+var_9C]; void *
0x799CDC: mov     byte ptr [esp+104h+var_4], bl
0x799CE3: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799CE8: fld     [esp+104h+var_EC]
0x799CEC: fadd    [esp+104h+var_DC]
0x799CF0: lea     eax, [esp+104h+var_C4]
0x799CF4: push    eax
0x799CF5: lea     ecx, [esp+108h+var_9C]
0x799CF9: fstp    dword ptr [esp+108h+var_D8]
0x799CFD: push    ecx
0x799CFE: fld     [esp+10Ch+var_E0]
0x799D02: lea     ecx, [esp+10Ch+var_54]
0x799D09: fstp    [esp+10Ch+var_C4]
0x799D0D: fld     [esp+10Ch+var_E4]
0x799D11: fstp    [esp+10Ch+var_C0]
0x799D15: fld     dword ptr [esp+10Ch+var_D8]
0x799D19: fstp    [esp+10Ch+var_BC]
0x799D1D: call    sub_7A6B10
0x799D22: mov     ecx, 0Ch
0x799D27: mov     esi, eax
0x799D29: lea     edi, [esp+104h+var_54]
0x799D30: rep movsd
0x799D32: lea     ecx, [esp+104h+var_84]; void *
0x799D39: mov     byte ptr [esp+104h+var_4], 6
0x799D41: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799D46: lea     ecx, [esp+104h+var_9C]; void *
0x799D4A: mov     byte ptr [esp+104h+var_4], bl
0x799D51: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799D56: fld     [esp+104h+var_EC]
0x799D5A: fsub    [esp+104h+var_DC]
0x799D5E: lea     edx, [esp+104h+var_B8]
0x799D62: push    edx
0x799D63: lea     eax, [esp+108h+var_9C]
0x799D67: fstp    dword ptr [esp+108h+var_D8]
0x799D6B: push    eax
0x799D6C: fld     [esp+10Ch+var_E0]
0x799D70: lea     ecx, [esp+10Ch+var_54]
0x799D77: fstp    [esp+10Ch+var_B8]
0x799D7B: fld     [esp+10Ch+var_E4]
0x799D7F: fstp    [esp+10Ch+var_B4]
0x799D83: fld     dword ptr [esp+10Ch+var_D8]
0x799D87: fstp    [esp+10Ch+var_B0]
0x799D8B: call    sub_7A6B10
0x799D90: mov     ecx, 0Ch
0x799D95: mov     esi, eax
0x799D97: lea     edi, [esp+104h+var_54]
0x799D9E: rep movsd
0x799DA0: lea     ecx, [esp+104h+var_84]; void *
0x799DA7: mov     byte ptr [esp+104h+var_4], 7
0x799DAF: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799DB4: lea     ecx, [esp+104h+var_9C]; void *
0x799DB8: mov     byte ptr [esp+104h+var_4], bl
0x799DBF: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799DC4: mov     edi, [esp+104h+arg_0]
0x799DCB: lea     ecx, [esp+104h+var_54]
0x799DD2: push    ecx
0x799DD3: lea     edx, [esp+108h+var_9C]
0x799DD7: push    edx
0x799DD8: mov     ecx, edi
0x799DDA: call    sub_7A6C20
0x799DDF: mov     ecx, 0Ch
0x799DE4: mov     esi, eax
0x799DE6: rep movsd
0x799DE8: lea     ecx, [esp+104h+var_84]; void *
0x799DEF: mov     byte ptr [esp+104h+var_4], 8
0x799DF7: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799DFC: lea     ecx, [esp+104h+var_9C]; void *
0x799E00: mov     byte ptr [esp+104h+var_4], bl
0x799E07: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799E0C: lea     ecx, [esp+104h+var_3C]; void *
0x799E13: mov     byte ptr [esp+104h+var_4], 9
0x799E1B: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799E20: lea     ecx, [esp+104h+var_54]; void *
0x799E27: mov     byte ptr [esp+104h+var_4], 0
0x799E2F: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x799E34: mov     eax, [esp+104h+var_E8]
0x799E38: movzx   ecx, word ptr [eax+0Ch]
0x799E3C: add     [esp+104h+var_D0], 0Ch
0x799E41: add     ebp, ebx
0x799E43: cmp     ebp, ecx
0x799E45: jb      loc_799AB0
0x799E4B: mov     edi, [esp+104h+var_C8]
0x799E4F: xor     ebp, ebp
0x799E51: mov     eax, [esp+104h+var_F0]
0x799E55: movzx   edx, word ptr [edi+28h]
0x799E59: add     [esp+104h+var_CC], 44h ; 'D'
0x799E5E: add     eax, ebx
0x799E60: cmp     eax, edx
0x799E62: mov     [esp+104h+var_F0], eax
0x799E66: jl      loc_799A90
0x799E6C: mov     eax, [esp+104h+var_A8]
0x799E70: cmp     eax, ebp
0x799E72: jz      short loc_799E7D
0x799E74: push    eax
0x799E75: call    FormHeapFree
0x799E7A: add     esp, 4
0x799E7D: mov     ecx, [esp+104h+var_C]
0x799E84: mov     large fs:0, ecx
0x799E8B: pop     ecx
0x799E8C: pop     edi
0x799E8D: pop     esi
0x799E8E: pop     ebp
0x799E8F: pop     ebx
0x799E90: add     esp, 0F0h
0x799E96: retn    4
