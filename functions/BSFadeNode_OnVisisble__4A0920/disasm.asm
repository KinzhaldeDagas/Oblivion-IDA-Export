0x4A0920: push    0FFFFFFFFh
0x4A0922: push    offset SEH_6E16A0
0x4A0927: mov     eax, large fs:0
0x4A092D: push    eax
0x4A092E: sub     esp, 14h
0x4A0931: push    ebp
0x4A0932: push    esi
0x4A0933: push    edi
0x4A0934: mov     eax, ds:0B30AACh
0x4A0939: xor     eax, esp
0x4A093B: push    eax
0x4A093C: lea     eax, [esp+30h+var_C]
0x4A0940: mov     large fs:0, eax
0x4A0946: mov     esi, ecx
0x4A0948: cmp     byte ptr ds:0B0727Ch, 0
0x4A094F: mov     ebp, [esp+30h+a2]
0x4A0953: mov     eax, [ebp+0Ch]
0x4A0956: mov     byte ptr [esp+30h+a2], 0
0x4A095B: jz      loc_4A0CEA
0x4A0961: fld     dword ptr [eax+120h]
0x4A0967: movzx   edi, byte ptr [esi+0ECh]
0x4A096E: fstp    [esp+30h+var_20]
0x4A0972: fld     dword ptr [esi+88h]
0x4A0978: fsub    dword ptr [eax+88h]
0x4A097E: fstp    [esp+30h+var_14]
0x4A0982: fld     dword ptr [esi+8Ch]
0x4A0988: fsub    dword ptr [eax+8Ch]
0x4A098E: fstp    [esp+30h+var_18]
0x4A0992: fld     dword ptr [esi+90h]
0x4A0998: fsub    dword ptr [eax+90h]
0x4A099E: lea     eax, [edi-2]; switch 6 cases
0x4A09A1: cmp     eax, 5
0x4A09A4: fstp    [esp+30h+var_10]
0x4A09A8: ja      short CullingBSFadeNode___def_4A09AA; jumptable 004A09AA default case, cases 4,5
0x4A09AA: jmp     ds:jpt_4A09AA[eax*4]; switch jump
0x4A09B1: push    ebp; jumptable 004A09AA case 7
0x4A09B2: call    NiNode__OnVisible
0x4A09B7: mov     ecx, [esp+30h+var_C]
0x4A09BB: mov     large fs:0, ecx
0x4A09C2: pop     ecx
0x4A09C3: pop     edi
0x4A09C4: pop     esi
0x4A09C5: pop     ebp
0x4A09C6: add     esp, 20h
0x4A09C9: retn    4
0x4A09CC: fldz; jumptable 004A09AA case 6
0x4A09CE: jmp     short loc_4A0A2D
0x4A09D0: fld     [esp+30h+var_20]; jumptable 004A09AA case 2
0x4A09D4: fld     dword ptr ds:0B07624h
0x4A09DA: fmul    dword ptr ds:0B075ECh
0x4A09E0: fstp    [esp+30h+var_1C]
0x4A09E4: fdiv    [esp+30h+var_1C]
0x4A09E8: jmp     short loc_4A0A2D
0x4A09EA: mov     eax, ds:0B333C4h; jumptable 004A09AA case 3
0x4A09EF: test    eax, eax
0x4A09F1: jz      short loc_4A09FB
0x4A09F3: cmp     [eax+5D8h], esi
0x4A09F9: jz      short loc_4A09B1; jumptable 004A09AA case 7
0x4A09FB: fld     [esp+30h+var_20]
0x4A09FF: fld     dword ptr ds:0B0762Ch
0x4A0A05: fmul    dword ptr ds:0B075F0h
0x4A0A0B: fstp    [esp+30h+var_1C]
0x4A0A0F: fdiv    [esp+30h+var_1C]
0x4A0A13: jmp     short loc_4A0A2D
0x4A0A15: fld     [esp+30h+var_20]; jumptable 004A09AA default case, cases 4,5
0x4A0A19: fld     dword ptr ds:0B0761Ch
0x4A0A1F: fmul    dword ptr ds:0B075E8h
0x4A0A25: fstp    [esp+30h+var_1C]
0x4A0A29: fdiv    [esp+30h+var_1C]
0x4A0A2D: fstp    [esp+30h+var_20]
0x4A0A31: fld     [esp+30h+var_18]
0x4A0A35: fld     [esp+30h+var_14]
0x4A0A39: fld     [esp+30h+var_10]
0x4A0A3D: fld     st(1)
0x4A0A3F: fmulp   st(2), st
0x4A0A41: fld     st(2)
0x4A0A43: fmulp   st(3), st
0x4A0A45: fxch    st(1)
0x4A0A47: faddp   st(2), st
0x4A0A49: fmul    st, st
0x4A0A4B: faddp   st(1), st
0x4A0A4D: fstp    [esp+30h+var_10]
0x4A0A51: fld     [esp+30h+var_10]
0x4A0A55: call    __CIsqrt
0x4A0A5A: fstp    [esp+30h+var_10]
0x4A0A5E: fld     [esp+30h+var_10]
0x4A0A62: fstp    [esp+30h+var_10]
0x4A0A66: fld     dword ptr [esi+2Ch]
0x4A0A69: fstp    [esp+30h+var_14]
0x4A0A6D: fld     [esp+30h+var_10]
0x4A0A71: fsub    [esp+30h+var_14]
0x4A0A75: fstp    [esp+30h+var_1C]
0x4A0A79: fldz
0x4A0A7B: fld     [esp+30h+var_1C]
0x4A0A7F: fcom    st(1)
0x4A0A81: fnstsw  ax
0x4A0A83: test    ah, 5
0x4A0A86: jp      short loc_4A0A92
0x4A0A88: fstp    st
0x4A0A8A: fst     [esp+30h+var_1C]
0x4A0A8E: fld     [esp+30h+var_1C]
0x4A0A92: fld     [esp+30h+var_20]
0x4A0A96: fmul    st, st
0x4A0A98: fmul    st, st(1)
0x4A0A9A: fmulp   st(1), st
0x4A0A9C: fstp    [esp+30h+var_10]
0x4A0AA0: fld1
0x4A0AA2: fst     [esp+30h+var_20]
0x4A0AA6: fld     [esp+30h+var_10]
0x4A0AAA: fld     dword ptr [esi+0E4h]
0x4A0AB0: fcomp   st(1)
0x4A0AB2: fnstsw  ax
0x4A0AB4: test    ah, 5
0x4A0AB7: jp      short loc_4A0AD8
0x4A0AB9: fstp    st
0x4A0ABB: fstp    st
0x4A0ABD: fstp    dword ptr [esi+0E8h]
0x4A0AC3: mov     ecx, [esp+30h+var_C]
0x4A0AC7: mov     large fs:0, ecx
0x4A0ACE: pop     ecx
0x4A0ACF: pop     edi
0x4A0AD0: pop     esi
0x4A0AD1: pop     ebp
0x4A0AD2: add     esp, 20h
0x4A0AD5: retn    4
0x4A0AD8: fld     dword ptr [esi+0E0h]
0x4A0ADE: fcomp   st(1)
0x4A0AE0: fnstsw  ax
0x4A0AE2: test    ah, 5
0x4A0AE5: jp      short loc_4A0B11
0x4A0AE7: fld     dword ptr [esi+0E4h]
0x4A0AED: fsub    dword ptr [esi+0E0h]
0x4A0AF3: fstp    [esp+30h+var_10]
0x4A0AF7: fld     dword ptr [esi+0E0h]
0x4A0AFD: fsubp   st(1), st
0x4A0AFF: fdivr   [esp+30h+var_10]
0x4A0B03: fld1
0x4A0B05: fld     st
0x4A0B07: fdivrp  st(2), st
0x4A0B09: fsubrp  st(1), st
0x4A0B0B: fstp    [esp+30h+var_20]
0x4A0B0F: jmp     short loc_4A0B13
0x4A0B11: fstp    st
0x4A0B13: lea     eax, [edi-1]; switch 7 cases
0x4A0B16: cmp     eax, 6
0x4A0B19: ja      short CullingBSFadeNode___def_4A0B1B; jumptable 004A0B1B default case, cases 4-6
0x4A0B1B: jmp     ds:jpt_4A0B1B[eax*4]; switch jump
0x4A0B22: mov     al, ds:0B07644h; jumptable 004A0B1B cases 3,7
0x4A0B27: jmp     short loc_4A0B35
0x4A0B29: mov     al, ds:0B0763Ch; jumptable 004A0B1B case 2
0x4A0B2E: jmp     short loc_4A0B35
0x4A0B30: mov     al, ds:0B07634h; jumptable 004A0B1B case 1
0x4A0B35: test    al, al
0x4A0B37: jz      short CullingBSFadeNode___def_4A0B1B; jumptable 004A0B1B default case, cases 4-6
0x4A0B39: fld     dword ptr ds:0A3D65Ch
0x4A0B3F: fcomp   [esp+30h+var_20]
0x4A0B43: fnstsw  ax
0x4A0B45: test    ah, 5
0x4A0B48: jp      short loc_4A0B52
0x4A0B4A: fstp    st(1)
0x4A0B4C: fstp    [esp+30h+var_20]
0x4A0B50: jmp     short loc_4A0B5E
0x4A0B52: fstp    st
0x4A0B54: fstp    [esp+30h+var_20]
0x4A0B58: jmp     short loc_4A0B5E
0x4A0B5A: fstp    st; jumptable 004A0B1B default case, cases 4-6
0x4A0B5C: fstp    st
0x4A0B5E: push    offset off_A3FA90
0x4A0B63: mov     ecx, esi
0x4A0B65: call    NiObjectNET_GetExtraData
0x4A0B6A: test    eax, eax
0x4A0B6C: jz      short loc_4A0BB8
0x4A0B6E: fld     dword ptr [eax+0Ch]
0x4A0B71: fstp    [esp+30h+var_10]
0x4A0B75: fld     [esp+30h+var_10]
0x4A0B79: fmul    [esp+30h+var_20]
0x4A0B7D: fstp    [esp+30h+var_20]
0x4A0B81: fld1
0x4A0B83: fcomp   [esp+30h+var_20]
0x4A0B87: fnstsw  ax
0x4A0B89: test    ah, 41h
0x4A0B8C: jnz     short loc_4A0BB8
0x4A0B8E: mov     eax, ds:0B3F928h
0x4A0B93: mov     edi, [eax+8]
0x4A0B96: push    edi
0x4A0B97: push    offset dword_B42CEC
0x4A0B9C: call    NiRTTI__IsObjectOfRTTIType
0x4A0BA1: add     esp, 8
0x4A0BA4: test    al, al
0x4A0BA6: jz      short loc_4A0BB8
0x4A0BA8: lea     ecx, [esi+20h]
0x4A0BAB: push    ecx
0x4A0BAC: mov     ecx, edi
0x4A0BAE: call    sub_7AB960
0x4A0BB3: mov     byte ptr [esp+30h+a2], 1
0x4A0BB8: cmp     byte ptr [esi+0DCh], 0
0x4A0BBF: jz      loc_4A0CE0
0x4A0BC5: fld1
0x4A0BC7: fld     [esp+30h+var_20]
0x4A0BCB: fucom   st(1)
0x4A0BCD: fnstsw  ax
0x4A0BCF: fstp    st(1)
0x4A0BD1: test    ah, 44h
0x4A0BD4: jp      short loc_4A0C32
0x4A0BD6: push    0
0x4A0BD8: fstp    st
0x4A0BDA: mov     ecx, esi
0x4A0BDC: call    NiNode_GetNiPropertyByID
0x4A0BE1: test    eax, eax
0x4A0BE3: jz      loc_4A0CE0
0x4A0BE9: push    0
0x4A0BEB: lea     edx, [esp+34h+var_10]
0x4A0BEF: push    edx
0x4A0BF0: mov     ecx, esi
0x4A0BF2: call    sub_708560
0x4A0BF7: lea     ecx, [esp+30h+var_10]; this
0x4A0BFB: call    sub_7016A0
0x4A0C00: push    2
0x4A0C02: lea     eax, [esp+34h+var_10]
0x4A0C06: push    eax
0x4A0C07: mov     ecx, esi
0x4A0C09: call    sub_708560
0x4A0C0E: lea     ecx, [esp+30h+var_10]; this
0x4A0C12: call    sub_7016A0
0x4A0C17: mov     ecx, esi; this
0x4A0C19: call    NiAVObject_InitializePropertyState
0x4A0C1E: fld1
0x4A0C20: push    ecx
0x4A0C21: fstp    [esp+34h+var_34]; float
0x4A0C24: push    esi; int
0x4A0C25: call    sub_4A2A90
0x4A0C2A: add     esp, 8
0x4A0C2D: jmp     loc_4A0CE0
0x4A0C32: fldz
0x4A0C34: fcomp   st(1)
0x4A0C36: fnstsw  ax
0x4A0C38: test    ah, 41h
0x4A0C3B: jp      loc_4A0CDE
0x4A0C41: push    ecx
0x4A0C42: fstp    [esp+34h+var_34]; float
0x4A0C45: push    esi; int
0x4A0C46: call    sub_4A2A90
0x4A0C4B: add     esp, 8
0x4A0C4E: push    0
0x4A0C50: mov     ecx, esi
0x4A0C52: call    NiNode_GetNiPropertyByID
0x4A0C57: test    eax, eax
0x4A0C59: jnz     short loc_4A0CC8
0x4A0C5B: push    eax
0x4A0C5C: lea     ecx, [esp+34h+var_14]
0x4A0C60: push    ecx
0x4A0C61: mov     ecx, esi
0x4A0C63: call    sub_708560
0x4A0C68: lea     ecx, [esp+30h+var_14]; this
0x4A0C6C: call    sub_7016A0
0x4A0C71: mov     edx, ds:0B35290h
0x4A0C77: push    edx; a2
0x4A0C78: mov     ecx, esi; this
0x4A0C7A: call    sub_405680
0x4A0C7F: push    5Ch ; '\'; Size
0x4A0C81: call    FormHeapAlloc
0x4A0C86: add     esp, 4
0x4A0C89: mov     [esp+30h+var_10], eax
0x4A0C8D: test    eax, eax
0x4A0C8F: mov     [esp+30h+var_4], 0
0x4A0C97: jz      short loc_4A0CA2
0x4A0C99: mov     ecx, eax; this
0x4A0C9B: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x4A0CA0: jmp     short loc_4A0CA4
0x4A0CA2: xor     eax, eax
0x4A0CA4: fld     [esp+30h+var_20]
0x4A0CA8: add     dword ptr [eax+54h], 1
0x4A0CAC: push    eax; a2
0x4A0CAD: fstp    dword ptr [eax+50h]
0x4A0CB0: mov     ecx, esi; this
0x4A0CB2: mov     [esp+34h+var_4], 0FFFFFFFFh
0x4A0CBA: call    sub_405680
0x4A0CBF: mov     ecx, esi; this
0x4A0CC1: call    NiAVObject_InitializePropertyState
0x4A0CC6: jmp     short loc_4A0CE0
0x4A0CC8: push    2
0x4A0CCA: mov     ecx, esi
0x4A0CCC: call    NiNode_GetNiPropertyByID
0x4A0CD1: fld     [esp+30h+var_20]
0x4A0CD5: add     dword ptr [eax+54h], 1
0x4A0CD9: fstp    dword ptr [eax+50h]
0x4A0CDC: jmp     short loc_4A0CE0
0x4A0CDE: fstp    st
0x4A0CE0: fld     [esp+30h+var_20]
0x4A0CE4: fstp    dword ptr [esi+0E8h]
0x4A0CEA: push    ebp; a2
0x4A0CEB: mov     ecx, esi; this
0x4A0CED: call    NiNode__OnVisible
0x4A0CF2: cmp     byte ptr [esp+30h+a2], 0
0x4A0CF7: jz      short loc_4A0D06
0x4A0CF9: mov     eax, ds:0B3F928h
0x4A0CFE: mov     ecx, [eax+8]
0x4A0D01: call    sub_7ABA90
0x4A0D06: mov     ecx, [esp+30h+var_C]
0x4A0D0A: mov     large fs:0, ecx
0x4A0D11: pop     ecx
0x4A0D12: pop     edi
0x4A0D13: pop     esi
0x4A0D14: pop     ebp
0x4A0D15: add     esp, 20h
0x4A0D18: retn    4
