0x7B7710: push    ebp
0x7B7711: mov     ebp, esp
0x7B7713: and     esp, 0FFFFFFF8h
0x7B7716: push    0FFFFFFFFh
0x7B7718: push    offset SEH_7B7710
0x7B771D: mov     eax, large fs:0
0x7B7723: push    eax
0x7B7724: sub     esp, 98h
0x7B772A: push    ebx
0x7B772B: push    esi
0x7B772C: push    edi
0x7B772D: mov     eax, ds:0B30AACh
0x7B7732: xor     eax, esp
0x7B7734: push    eax; ArgList
0x7B7735: lea     eax, [esp+0B4h+var_C]
0x7B773C: mov     large fs:0, eax
0x7B7742: mov     edi, [ebp+arg_0]
0x7B7745: mov     eax, [edi+8]
0x7B7748: xor     esi, esi
0x7B774A: cmp     eax, esi
0x7B774C: mov     [esp+0B4h+var_A2], 0
0x7B7751: jz      short loc_7B776C
0x7B7753: push    4; MaxCount
0x7B7755: push    offset aStbb; "STBB"
0x7B775A: push    eax; Str1
0x7B775B: call    __strnicmp
0x7B7760: add     esp, 0Ch
0x7B7763: test    eax, eax
0x7B7765: jnz     short loc_7B776C
0x7B7767: mov     [esp+0B4h+var_A2], 1
0x7B776C: push    14h; Size
0x7B776E: call    FormHeapAlloc
0x7B7773: add     esp, 4
0x7B7776: mov     [esp+0B4h+var_80], eax
0x7B777A: cmp     eax, esi
0x7B777C: mov     [esp+0B4h+var_4], esi
0x7B7783: jz      short loc_7B7796
0x7B7785: push    1
0x7B7787: mov     ecx, eax; this
0x7B7789: call    ??0TangentSpaceData@BSShaderPPLightingProperty@@QAE@XZ; BSShaderPPLightingProperty::TangentSpaceData::TangentSpaceData(void)
0x7B778E: mov     ebx, eax
0x7B7790: mov     [esp+0B4h+var_78], ebx
0x7B7794: jmp     short loc_7B779C
0x7B7796: mov     [esp+0B4h+var_78], esi
0x7B779A: mov     ebx, esi
0x7B779C: cmp     [esp+0B4h+var_A2], 0
0x7B77A1: mov     [esp+0B4h+var_4], 0FFFFFFFFh
0x7B77AC: jz      short loc_7B7819
0x7B77AE: push    30h ; '0'; Size
0x7B77B0: call    FormHeapAlloc
0x7B77B5: mov     edi, eax
0x7B77B7: push    30h ; '0'; Size
0x7B77B9: mov     [esp+0BCh+Src], edi
0x7B77BD: call    FormHeapAlloc
0x7B77C2: mov     edx, [ebp+arg_0]
0x7B77C5: mov     ecx, 0Ch
0x7B77CA: mov     esi, offset unk_B2C688
0x7B77CF: rep movsd
0x7B77D1: mov     edi, eax
0x7B77D3: mov     ecx, 0Ch
0x7B77D8: mov     esi, offset unk_B2C6B8
0x7B77DD: rep movsd
0x7B77DF: mov     ecx, [esp+0BCh+Src]
0x7B77E3: mov     [ebx+0Ch], ecx
0x7B77E6: mov     [ebx+10h], eax
0x7B77E9: mov     eax, [edx+0B4h]
0x7B77EF: mov     edi, [eax+20h]
0x7B77F2: mov     ecx, 0Ch
0x7B77F7: mov     esi, offset unk_B2C6E8
0x7B77FC: add     esp, 8
0x7B77FF: rep movsd
0x7B7801: mov     eax, ebx
0x7B7803: mov     ecx, [esp+0B4h+var_C]
0x7B780A: mov     large fs:0, ecx
0x7B7811: pop     ecx
0x7B7812: pop     edi
0x7B7813: pop     esi
0x7B7814: pop     ebx
0x7B7815: mov     esp, ebp
0x7B7817: pop     ebp
0x7B7818: retn
0x7B7819: push    offset aTangentSpaceBi; "Tangent space (binormal & tangent vecto"...
0x7B781E: mov     ecx, edi
0x7B7820: call    NiObjectNET_GetExtraData
0x7B7825: cmp     eax, esi
0x7B7827: jz      loc_7B78C8
0x7B782D: mov     ecx, [edi+0B4h]
0x7B7833: movzx   edi, word ptr [ecx+8]
0x7B7837: mov     eax, [eax+0Ch]
0x7B783A: lea     esi, [edi+edi*2]
0x7B783D: add     esi, esi
0x7B783F: add     esi, esi
0x7B7841: lea     edx, [esi+eax]
0x7B7844: mov     [esp+0B4h+var_7C], eax
0x7B7848: mov     [esp+0B4h+Src], edx
0x7B784C: xor     ecx, ecx
0x7B784E: mov     eax, edi
0x7B7850: mov     edx, 0Ch
0x7B7855: mul     edx
0x7B7857: seto    cl
0x7B785A: neg     ecx
0x7B785C: or      ecx, eax
0x7B785E: push    ecx; Size
0x7B785F: call    FormHeapAlloc
0x7B7864: mov     [ebx+0Ch], eax
0x7B7867: xor     ecx, ecx
0x7B7869: mov     eax, edi
0x7B786B: mov     edx, 0Ch
0x7B7870: mul     edx
0x7B7872: seto    cl
0x7B7875: neg     ecx
0x7B7877: or      ecx, eax
0x7B7879: push    ecx; Size
0x7B787A: call    FormHeapAlloc
0x7B787F: mov     ecx, [ebx+0Ch]
0x7B7882: mov     [ebx+10h], eax
0x7B7885: mov     eax, [esp+0BCh+Src]
0x7B7889: push    esi; Size
0x7B788A: push    eax; Src
0x7B788B: push    ecx; Dst
0x7B788C: call    _memcpy
0x7B7891: mov     edx, [esp+0C8h+var_7C]
0x7B7895: mov     eax, [ebx+10h]
0x7B7898: push    esi; Size
0x7B7899: push    edx; Src
0x7B789A: push    eax; Dst
0x7B789B: call    _memcpy
0x7B78A0: mov     ecx, [ebp+arg_0]
0x7B78A3: add     esp, 20h
0x7B78A6: push    offset aTangentSpaceBi; "Tangent space (binormal & tangent vecto"...
0x7B78AB: call    sub_6FFAC0
0x7B78B0: mov     eax, ebx
0x7B78B2: mov     ecx, [esp+0B4h+var_C]
0x7B78B9: mov     large fs:0, ecx
0x7B78C0: pop     ecx
0x7B78C1: pop     edi
0x7B78C2: pop     esi
0x7B78C3: pop     ebx
0x7B78C4: mov     esp, ebp
0x7B78C6: pop     ebp
0x7B78C7: retn
0x7B78C8: mov     eax, [edi+8]
0x7B78CB: cmp     eax, esi
0x7B78CD: jz      short loc_7B78F6
0x7B78CF: push    5; MaxCount
0x7B78D1: push    offset aBlock_0; "Block"
0x7B78D6: push    eax; Str1
0x7B78D7: call    _strncmp
0x7B78DC: add     esp, 0Ch
0x7B78DF: test    eax, eax
0x7B78E1: jz      short loc_7B78F6
0x7B78E3: mov     ecx, [edi+8]
0x7B78E6: push    ecx; ArgList
0x7B78E7: push    offset aWarningCreatin; "WARNING: Creating tangent space for non"...
0x7B78EC: call    sub_40FEC0
0x7B78F1: add     esp, 8
0x7B78F4: jmp     short loc_7B7922
0x7B78F6: cmp     [edi+8], esi
0x7B78F9: jnz     short loc_7B7922
0x7B78FB: mov     eax, [edi+1Ch]
0x7B78FE: cmp     eax, esi
0x7B7900: jz      short loc_7B7915
0x7B7902: mov     edx, [eax+8]
0x7B7905: push    edx; ArgList
0x7B7906: push    offset aCreatingTangen; "Creating tangent space for a nameless o"...
0x7B790B: call    sub_40FEC0
0x7B7910: add     esp, 8
0x7B7913: jmp     short loc_7B7922
0x7B7915: push    offset aCreatingTang_0; "Creating tangent space for a nameless p"...
0x7B791A: call    sub_40FEC0
0x7B791F: add     esp, 4
0x7B7922: mov     eax, [edi]
0x7B7924: mov     edx, [eax+10h]
0x7B7927: mov     ecx, edi
0x7B7929: call    edx
0x7B792B: test    eax, eax
0x7B792D: jnz     short loc_7B7954
0x7B792F: push    offset aBsshadermanage; "BSShaderManager::CreateTangentSpaceSimp"...
0x7B7934: call    sub_40FEC0
0x7B7939: add     esp, 4
0x7B793C: xor     eax, eax
0x7B793E: mov     ecx, [esp+0B4h+var_C]
0x7B7945: mov     large fs:0, ecx
0x7B794C: pop     ecx
0x7B794D: pop     edi
0x7B794E: pop     esi
0x7B794F: pop     ebx
0x7B7950: mov     esp, ebp
0x7B7952: pop     ebp
0x7B7953: retn
0x7B7954: mov     eax, [edi]
0x7B7956: mov     edx, [eax+10h]
0x7B7959: mov     ecx, edi
0x7B795B: call    edx
0x7B795D: mov     esi, eax
0x7B795F: mov     eax, [esi+0B4h]
0x7B7965: movzx   ecx, word ptr [eax+8]
0x7B7969: movzx   edx, word ptr [eax+40h]
0x7B796D: mov     ebx, [eax+1Ch]
0x7B7970: mov     edi, [eax+28h]
0x7B7973: mov     [esp+0B4h+var_98], ecx
0x7B7977: mov     ecx, [eax+20h]
0x7B797A: push    esi
0x7B797B: push    offset dword_B3FD04
0x7B7980: mov     [esp+0BCh+var_18], esi
0x7B7987: mov     dword ptr [esp+0BCh+var_38], edx
0x7B798E: mov     dword ptr [esp+0BCh+var_40+4], ebx
0x7B7995: mov     dword ptr [esp+0BCh+var_40], ecx
0x7B7999: call    NiRTTI__IsObjectOfRTTIType
0x7B799E: add     esp, 8
0x7B79A1: test    al, al
0x7B79A3: mov     [esp+0B4h+var_A1], al
0x7B79A7: mov     [esp+0B4h+var_70], 0
0x7B79AF: jz      short loc_7B79BE
0x7B79B1: mov     edx, [esi+0B4h]
0x7B79B7: mov     eax, [edx+4Ch]
0x7B79BA: mov     [esp+0B4h+var_70], eax
0x7B79BE: cmp     dword ptr [esp+0B4h+var_40], 0
0x7B79C3: jnz     short loc_7B79EA
0x7B79C5: push    offset aBsshadermana_0; "BSShaderManager::CreateTangentSpaceSimp"...
0x7B79CA: call    sub_40FEC0
0x7B79CF: add     esp, 4
0x7B79D2: xor     eax, eax
0x7B79D4: mov     ecx, [esp+0B4h+var_C]
0x7B79DB: mov     large fs:0, ecx
0x7B79E2: pop     ecx
0x7B79E3: pop     edi
0x7B79E4: pop     esi
0x7B79E5: pop     ebx
0x7B79E6: mov     esp, ebp
0x7B79E8: pop     ebp
0x7B79E9: retn
0x7B79EA: mov     esi, [esp+0B4h+var_98]
0x7B79EE: add     esi, esi
0x7B79F0: xor     ecx, ecx
0x7B79F2: mov     eax, esi
0x7B79F4: mov     edx, 0Ch
0x7B79F9: mul     edx
0x7B79FB: seto    cl
0x7B79FE: neg     ecx
0x7B7A00: or      ecx, eax
0x7B7A02: push    ecx; Size
0x7B7A03: call    FormHeapAlloc
0x7B7A08: mov     esi, eax
0x7B7A0A: mov     eax, [esp+0B8h+var_98]
0x7B7A0E: lea     ecx, [eax+eax*2]
0x7B7A11: lea     eax, [eax+eax*2]
0x7B7A14: add     eax, eax
0x7B7A16: add     eax, eax
0x7B7A18: add     eax, eax
0x7B7A1A: push    eax
0x7B7A1B: lea     edx, [esi+ecx*4]
0x7B7A1E: push    0
0x7B7A20: push    esi
0x7B7A21: mov     [esp+0C4h+var_80], edx
0x7B7A25: call    __memset
0x7B7A2A: mov     eax, [esp+0C4h+var_98]
0x7B7A2E: xor     ecx, ecx
0x7B7A30: mov     edx, 0Ch
0x7B7A35: mul     edx
0x7B7A37: seto    cl
0x7B7A3A: neg     ecx
0x7B7A3C: or      ecx, eax
0x7B7A3E: push    ecx; Size
0x7B7A3F: call    FormHeapAlloc
0x7B7A44: mov     [esp+0C8h+var_7C], eax
0x7B7A48: mov     eax, [esp+0C8h+var_98]
0x7B7A4C: xor     ecx, ecx
0x7B7A4E: mov     edx, 0Ch
0x7B7A53: mul     edx
0x7B7A55: seto    cl
0x7B7A58: neg     ecx
0x7B7A5A: or      ecx, eax
0x7B7A5C: push    ecx; Size
0x7B7A5D: call    FormHeapAlloc
0x7B7A62: xor     ecx, ecx
0x7B7A64: add     esp, 18h
0x7B7A67: cmp     dword ptr [esp+0B4h+var_38], ecx
0x7B7A6B: mov     [esp+0B4h+Src], eax
0x7B7A6F: mov     [esp+0B4h+var_A2], 0
0x7B7A74: mov     [esp+0B4h+var_74], ecx
0x7B7A78: jbe     loc_7B7DB1
0x7B7A7E: cmp     [esp+0B4h+var_A1], 0
0x7B7A83: jz      short loc_7B7ACF
0x7B7A85: mov     edx, [esp+0B4h+var_70]
0x7B7A89: movzx   eax, word ptr [edx+ecx*2]
0x7B7A8D: movzx   edx, word ptr [edx+ecx*2+2]
0x7B7A92: mov     [esp+0B4h+var_90], edx
0x7B7A96: mov     edx, [esp+0B4h+var_70]
0x7B7A9A: movzx   ecx, word ptr [edx+ecx*2+4]
0x7B7A9F: mov     dl, [esp+0B4h+var_A2]
0x7B7AA3: test    dl, dl
0x7B7AA5: mov     [esp+0B4h+var_84], eax
0x7B7AA9: mov     [esp+0B4h+var_A0], ecx
0x7B7AAD: jz      short loc_7B7AC6
0x7B7AAF: movzx   ecx, cx
0x7B7AB2: mov     [esp+0B4h+var_9C], ecx
0x7B7AB6: movzx   ecx, ax
0x7B7AB9: movzx   eax, word ptr [esp+0B4h+var_9C]
0x7B7ABE: mov     [esp+0B4h+var_A0], ecx
0x7B7AC2: mov     [esp+0B4h+var_84], eax
0x7B7AC6: setz    dl
0x7B7AC9: mov     [esp+0B4h+var_A2], dl
0x7B7ACD: jmp     short loc_7B7AFF
0x7B7ACF: mov     eax, [esp+0B4h+var_18]
0x7B7AD6: mov     ecx, [eax+0B4h]
0x7B7ADC: mov     edx, [ecx]
0x7B7ADE: mov     edx, [edx+60h]
0x7B7AE1: lea     eax, [esp+0B4h+var_A0]
0x7B7AE5: push    eax
0x7B7AE6: lea     eax, [esp+0B8h+var_90]
0x7B7AEA: push    eax
0x7B7AEB: lea     eax, [esp+0BCh+var_84]
0x7B7AEF: push    eax
0x7B7AF0: mov     eax, [esp+0C0h+var_74]
0x7B7AF4: push    eax
0x7B7AF5: call    edx
0x7B7AF7: mov     ecx, [esp+0B4h+var_A0]
0x7B7AFB: mov     eax, [esp+0B4h+var_84]
0x7B7AFF: mov     edx, [esp+0B4h+var_90]
0x7B7B03: cmp     ax, dx
0x7B7B06: jz      loc_7B7D99
0x7B7B0C: cmp     dx, cx
0x7B7B0F: jz      loc_7B7D99
0x7B7B15: cmp     ax, cx
0x7B7B18: jz      loc_7B7D99
0x7B7B1E: movzx   edx, dx
0x7B7B21: mov     [esp+0B4h+var_9C], edx
0x7B7B25: lea     edx, [edx+edx*2]
0x7B7B28: lea     edx, [ebx+edx*4]
0x7B7B2B: mov     [esp+0B4h+var_6C], edx
0x7B7B2F: movzx   edx, word ptr [esp+0B4h+var_A0]
0x7B7B34: movzx   ecx, ax
0x7B7B37: mov     [esp+0B4h+var_88], edx
0x7B7B3B: lea     edx, [edx+edx*2]
0x7B7B3E: lea     edx, [ebx+edx*4]
0x7B7B41: mov     [esp+0B4h+var_8C], edx
0x7B7B45: mov     edx, [esp+0B4h+var_6C]
0x7B7B49: lea     eax, [ecx+ecx*2]
0x7B7B4C: add     eax, eax
0x7B7B4E: add     eax, eax
0x7B7B50: fld     dword ptr [eax+ebx]
0x7B7B53: mov     ebx, [esp+0B4h+var_8C]
0x7B7B57: fld     dword ptr [edx]
0x7B7B59: fsub    st, st(1)
0x7B7B5B: fstp    [esp+0B4h+var_14]
0x7B7B62: fsubr   dword ptr [ebx]
0x7B7B64: mov     ebx, dword ptr [esp+0B4h+var_40+4]
0x7B7B68: fstp    dword ptr [esp+0B4h+var_28]
0x7B7B6F: fld     dword ptr [eax+ebx+4]
0x7B7B73: mov     ebx, [esp+0B4h+var_8C]
0x7B7B77: fld     dword ptr [edx+4]
0x7B7B7A: fsub    st, st(1)
0x7B7B7C: fstp    dword ptr [esp+0B4h+var_30]
0x7B7B83: fsubr   dword ptr [ebx+4]
0x7B7B86: mov     ebx, dword ptr [esp+0B4h+var_40+4]
0x7B7B8A: fstp    dword ptr [esp+0B4h+var_20]
0x7B7B91: fld     dword ptr [eax+ebx+8]
0x7B7B95: fld     dword ptr [edx+8]
0x7B7B98: mov     edx, [esp+0B4h+var_8C]
0x7B7B9C: fsub    st, st(1)
0x7B7B9E: fstp    dword ptr [esp+0B4h+var_38+4]
0x7B7BA5: fsubr   dword ptr [edx+8]
0x7B7BA8: mov     edx, [esp+0B4h+var_9C]
0x7B7BAC: fstp    [esp+0B4h+var_50]
0x7B7BB0: fld     dword ptr [edi+ecx*8]
0x7B7BB3: fld     dword ptr [edi+edx*8]
0x7B7BB6: mov     edx, [esp+0B4h+var_88]
0x7B7BBA: fsub    st, st(1)
0x7B7BBC: fstp    [esp+0B4h+var_6C]
0x7B7BC0: fsubr   dword ptr [edi+edx*8]
0x7B7BC3: fstp    [esp+0B4h+var_8C]
0x7B7BC7: fld     dword ptr [edi+ecx*8+4]
0x7B7BCB: mov     ecx, [esp+0B4h+var_9C]
0x7B7BCF: fld     dword ptr [edi+ecx*8+4]
0x7B7BD3: fsub    st, st(1)
0x7B7BD5: fstp    [esp+0B4h+var_9C]
0x7B7BD9: fsubr   dword ptr [edi+edx*8+4]
0x7B7BDD: fstp    [esp+0B4h+var_88]
0x7B7BE1: fld     [esp+0B4h+var_88]
0x7B7BE5: fld     [esp+0B4h+var_6C]
0x7B7BE9: fld     [esp+0B4h+var_9C]
0x7B7BED: fld     [esp+0B4h+var_8C]
0x7B7BF1: fld     st(2)
0x7B7BF3: fmul    st, st(4)
0x7B7BF5: fld     st(1)
0x7B7BF7: fmul    st, st(3)
0x7B7BF9: fsubp   st(1), st
0x7B7BFB: fld1
0x7B7BFD: fdivrp  st(1), st
0x7B7BFF: fstp    [esp+0B4h+var_88]
0x7B7C03: fld     [esp+0B4h+var_14]
0x7B7C0A: fld     dword ptr [esp+0B4h+var_28]
0x7B7C11: fst     [esp+0B4h+var_28]
0x7B7C18: fld     [esp+0B4h+var_88]
0x7B7C1C: fld     st(2)
0x7B7C1E: fmul    st, st(7)
0x7B7C20: fxch    st(2)
0x7B7C22: fmul    st, st(5)
0x7B7C24: fsubp   st(2), st
0x7B7C26: fmul    st(1), st
0x7B7C28: fxch    st(1)
0x7B7C2A: fstp    [esp+0B4h+var_68]
0x7B7C2E: fld     dword ptr [esp+0B4h+var_30]
0x7B7C35: fst     [esp+0B4h+var_30]
0x7B7C3C: fld     dword ptr [esp+0B4h+var_20]
0x7B7C43: fst     [esp+0B4h+var_20]
0x7B7C4A: fxch    st(1)
0x7B7C4C: mov     ecx, [esp+0B4h+var_80]
0x7B7C50: fmul    st, st(7)
0x7B7C52: fxch    st(1)
0x7B7C54: fmul    st, st(5)
0x7B7C56: fsubp   st(1), st
0x7B7C58: fmul    st, st(1)
0x7B7C5A: fstp    [esp+0B4h+var_64]
0x7B7C5E: fld     dword ptr [esp+0B4h+var_38+4]
0x7B7C65: fld     [esp+0B4h+var_50]
0x7B7C69: fstp    qword ptr [esp+0B4h+var_50]
0x7B7C6D: fld     st
0x7B7C6F: fmulp   st(7), st
0x7B7C71: fld     qword ptr [esp+0B4h+var_50]
0x7B7C75: fmulp   st(5), st
0x7B7C77: fxch    st(6)
0x7B7C79: fsubrp  st(4), st
0x7B7C7B: fmul    st(3), st
0x7B7C7D: fxch    st(3)
0x7B7C7F: fstp    dword ptr [esp+0B4h+var_60]
0x7B7C83: fld     [esp+0B4h+var_28]
0x7B7C8A: fmul    st, st(4)
0x7B7C8C: fxch    st(1)
0x7B7C8E: fmul    st, st(2)
0x7B7C90: fsubp   st(1), st
0x7B7C92: fmul    st, st(2)
0x7B7C94: fstp    dword ptr [esp+0B4h+var_60+4]
0x7B7C98: fld     [esp+0B4h+var_20]
0x7B7C9F: fmul    st, st(3)
0x7B7CA1: fld     [esp+0B4h+var_30]
0x7B7CA8: fmul    st, st(2)
0x7B7CAA: fsubp   st(1), st
0x7B7CAC: fmul    st, st(2)
0x7B7CAE: fstp    [esp+0B4h+var_58]
0x7B7CB2: fld     qword ptr [esp+0B4h+var_50]
0x7B7CB6: fmulp   st(3), st
0x7B7CB8: fmulp   st(3), st
0x7B7CBA: fxch    st(1)
0x7B7CBC: fsubrp  st(2), st
0x7B7CBE: fmulp   st(1), st
0x7B7CC0: fstp    [esp+0B4h+var_54]
0x7B7CC4: fld     [esp+0B4h+var_68]
0x7B7CC8: fld     dword ptr [eax+esi]
0x7B7CCB: fadd    st, st(1)
0x7B7CCD: fstp    dword ptr [eax+esi]
0x7B7CD0: fld     [esp+0B4h+var_64]
0x7B7CD4: fld     dword ptr [eax+esi+4]
0x7B7CD8: fadd    st, st(1)
0x7B7CDA: fstp    dword ptr [eax+esi+4]
0x7B7CDE: lea     eax, [eax+esi+8]
0x7B7CE2: fld     dword ptr [esp+0B4h+var_60]
0x7B7CE6: fld     dword ptr [eax]
0x7B7CE8: fadd    st, st(1)
0x7B7CEA: fstp    dword ptr [eax]
0x7B7CEC: movzx   eax, word ptr [esp+0B4h+var_90]
0x7B7CF1: lea     edx, [eax+eax*2]
0x7B7CF4: lea     eax, [esi+edx*4]
0x7B7CF7: fld     dword ptr [eax]
0x7B7CF9: fadd    st, st(3)
0x7B7CFB: fstp    dword ptr [eax]
0x7B7CFD: fld     dword ptr [eax+4]
0x7B7D00: fadd    st, st(2)
0x7B7D02: fstp    dword ptr [eax+4]
0x7B7D05: fld     dword ptr [eax+8]
0x7B7D08: fadd    st, st(1)
0x7B7D0A: fstp    dword ptr [eax+8]
0x7B7D0D: movzx   eax, word ptr [esp+0B4h+var_A0]
0x7B7D12: lea     eax, [eax+eax*2]
0x7B7D15: lea     eax, [esi+eax*4]
0x7B7D18: fld     dword ptr [eax]
0x7B7D1A: faddp   st(3), st
0x7B7D1C: fxch    st(2)
0x7B7D1E: fstp    dword ptr [eax]
0x7B7D20: fadd    dword ptr [eax+4]
0x7B7D23: fstp    dword ptr [eax+4]
0x7B7D26: fadd    dword ptr [eax+8]
0x7B7D29: fstp    dword ptr [eax+8]
0x7B7D2C: movzx   eax, word ptr [esp+0B4h+var_84]
0x7B7D31: fld     dword ptr [esp+0B4h+var_60+4]
0x7B7D35: lea     edx, [eax+eax*2]
0x7B7D38: lea     eax, [ecx+edx*4]
0x7B7D3B: fld     dword ptr [eax]
0x7B7D3D: fadd    st, st(1)
0x7B7D3F: fstp    dword ptr [eax]
0x7B7D41: fld     [esp+0B4h+var_58]
0x7B7D45: fld     dword ptr [eax+4]
0x7B7D48: fadd    st, st(1)
0x7B7D4A: fstp    dword ptr [eax+4]
0x7B7D4D: fld     [esp+0B4h+var_54]
0x7B7D51: fld     dword ptr [eax+8]
0x7B7D54: fadd    st, st(1)
0x7B7D56: fstp    dword ptr [eax+8]
0x7B7D59: movzx   eax, word ptr [esp+0B4h+var_90]
0x7B7D5E: lea     eax, [eax+eax*2]
0x7B7D61: lea     eax, [ecx+eax*4]
0x7B7D64: fld     dword ptr [eax]
0x7B7D66: fadd    st, st(3)
0x7B7D68: fstp    dword ptr [eax]
0x7B7D6A: fld     dword ptr [eax+4]
0x7B7D6D: fadd    st, st(2)
0x7B7D6F: fstp    dword ptr [eax+4]
0x7B7D72: fld     dword ptr [eax+8]
0x7B7D75: fadd    st, st(1)
0x7B7D77: fstp    dword ptr [eax+8]
0x7B7D7A: movzx   eax, word ptr [esp+0B4h+var_A0]
0x7B7D7F: lea     edx, [eax+eax*2]
0x7B7D82: lea     eax, [ecx+edx*4]
0x7B7D85: fld     dword ptr [eax]
0x7B7D87: faddp   st(3), st
0x7B7D89: fxch    st(2)
0x7B7D8B: fstp    dword ptr [eax]
0x7B7D8D: fadd    dword ptr [eax+4]
0x7B7D90: fstp    dword ptr [eax+4]
0x7B7D93: fadd    dword ptr [eax+8]
0x7B7D96: fstp    dword ptr [eax+8]
0x7B7D99: mov     eax, [esp+0B4h+var_74]
0x7B7D9D: add     eax, 1
0x7B7DA0: movzx   ecx, ax
0x7B7DA3: cmp     ecx, dword ptr [esp+0B4h+var_38]
0x7B7DA7: mov     [esp+0B4h+var_74], eax
0x7B7DAB: jb      loc_7B7A7E
0x7B7DB1: xor     ebx, ebx
0x7B7DB3: cmp     [esp+0B4h+var_98], ebx
0x7B7DB7: jbe     loc_7B7EC4
0x7B7DBD: xor     eax, eax
0x7B7DBF: mov     edx, dword ptr [esp+0B4h+var_40]
0x7B7DC3: lea     eax, [eax+eax*2]
0x7B7DC6: add     eax, eax
0x7B7DC8: add     eax, eax
0x7B7DCA: fld     dword ptr [eax+esi+4]
0x7B7DCE: mov     ecx, [esp+0B4h+var_7C]
0x7B7DD2: fld     dword ptr [eax+edx+4]
0x7B7DD6: add     ecx, eax
0x7B7DD8: fld     dword ptr [eax+esi]
0x7B7DDB: fld     dword ptr [eax+edx]
0x7B7DDE: fld     dword ptr [eax+esi+8]
0x7B7DE2: fld     dword ptr [eax+edx+8]
0x7B7DE6: fld     st(2)
0x7B7DE8: fmul    st, st(4)
0x7B7DEA: fld     st(5)
0x7B7DEC: fmul    st, st(7)
0x7B7DEE: faddp   st(1), st
0x7B7DF0: fld     st(1)
0x7B7DF2: fmul    st, st(3)
0x7B7DF4: faddp   st(1), st
0x7B7DF6: fstp    [esp+0B4h+var_80]
0x7B7DFA: fld     [esp+0B4h+var_80]
0x7B7DFE: fld     st
0x7B7E00: fmulp   st(4), st
0x7B7E02: fxch    st(3)
0x7B7E04: fstp    dword ptr [esp+0B4h+var_60+4]
0x7B7E08: fld     st(2)
0x7B7E0A: fmulp   st(5), st
0x7B7E0C: fxch    st(4)
0x7B7E0E: fstp    [esp+0B4h+var_58]
0x7B7E12: fxch    st(1)
0x7B7E14: fmulp   st(3), st
0x7B7E16: fxch    st(2)
0x7B7E18: fstp    [esp+0B4h+var_54]
0x7B7E1C: fsub    dword ptr [esp+0B4h+var_60+4]
0x7B7E20: fstp    [esp+0B4h+var_68]
0x7B7E24: mov     edi, [esp+0B4h+var_68]
0x7B7E28: fld     [esp+0B4h+var_58]
0x7B7E2C: mov     [ecx], edi
0x7B7E2E: fsubp   st(2), st
0x7B7E30: fxch    st(1)
0x7B7E32: fstp    [esp+0B4h+var_64]
0x7B7E36: mov     edi, [esp+0B4h+var_64]
0x7B7E3A: mov     [ecx+4], edi
0x7B7E3D: fsub    [esp+0B4h+var_54]
0x7B7E41: fstp    dword ptr [esp+0B4h+var_60]
0x7B7E45: mov     edi, dword ptr [esp+0B4h+var_60]
0x7B7E49: mov     [ecx+8], edi
0x7B7E4C: fld     dword ptr [ecx+8]
0x7B7E4F: fld     dword ptr [eax+edx+4]
0x7B7E53: fld     dword ptr [ecx+4]
0x7B7E56: fld     dword ptr [eax+edx+8]
0x7B7E5A: fld     st(2)
0x7B7E5C: fmul    st, st(4)
0x7B7E5E: fld     st(1)
0x7B7E60: fmul    st, st(3)
0x7B7E62: fsubp   st(1), st
0x7B7E64: fstp    [esp+0B4h+var_50]
0x7B7E68: fld     dword ptr [ecx]
0x7B7E6A: fld     dword ptr [eax+edx]
0x7B7E6D: mov     edx, [esp+0B4h+Src]
0x7B7E71: fld     st(1)
0x7B7E73: lea     edi, [eax+edx]
0x7B7E76: fmulp   st(3), st
0x7B7E78: mov     eax, [esp+0B4h+var_50]
0x7B7E7C: mov     [edi], eax
0x7B7E7E: fmul    st(5), st
0x7B7E80: fxch    st(2)
0x7B7E82: fsubrp  st(5), st
0x7B7E84: fxch    st(4)
0x7B7E86: fstp    [esp+0B4h+var_4C]
0x7B7E8A: mov     edx, [esp+0B4h+var_4C]
0x7B7E8E: mov     [edi+4], edx
0x7B7E91: fmulp   st(1), st
0x7B7E93: fxch    st(2)
0x7B7E95: fmulp   st(1), st
0x7B7E97: fsubp   st(1), st
0x7B7E99: fstp    [esp+0B4h+var_48]
0x7B7E9D: mov     eax, [esp+0B4h+var_48]
0x7B7EA1: mov     [edi+8], eax
0x7B7EA4: call    sub_43F350
0x7B7EA9: fstp    st
0x7B7EAB: mov     ecx, edi
0x7B7EAD: call    sub_43F350
0x7B7EB2: fstp    st
0x7B7EB4: add     ebx, 1
0x7B7EB7: movzx   eax, bx
0x7B7EBA: cmp     eax, [esp+0B4h+var_98]
0x7B7EBE: jb      loc_7B7DBF
0x7B7EC4: mov     ecx, [esp+0B4h+var_7C]
0x7B7EC8: mov     edi, [esp+0B4h+var_78]
0x7B7ECC: mov     edx, [esp+0B4h+Src]
0x7B7ED0: push    esi
0x7B7ED1: mov     [edi+0Ch], ecx
0x7B7ED4: mov     [edi+10h], edx
0x7B7ED7: call    FormHeapFree
0x7B7EDC: add     esp, 4
0x7B7EDF: mov     eax, edi
0x7B7EE1: mov     ecx, [esp+0B4h+var_C]
0x7B7EE8: mov     large fs:0, ecx
0x7B7EEF: pop     ecx
0x7B7EF0: pop     edi
0x7B7EF1: pop     esi
0x7B7EF2: pop     ebx
0x7B7EF3: mov     esp, ebp
0x7B7EF5: pop     ebp
0x7B7EF6: retn
