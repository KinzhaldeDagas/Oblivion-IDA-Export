0x5B7180: sub     esp, 34h
0x5B7183: mov     ecx, ds:0B333C4h
0x5B7189: mov     eax, [ecx]
0x5B718B: mov     edx, [eax+174h]
0x5B7191: push    ebx
0x5B7192: mov     ebx, ds:0B06A2Ch
0x5B7198: push    esi
0x5B7199: add     ebx, 0FFFFFFFFh
0x5B719C: push    edi
0x5B719D: shr     ebx, 1
0x5B719F: call    edx
0x5B71A1: mov     ecx, [eax]
0x5B71A3: mov     [esp+40h+var_24], ecx
0x5B71A7: mov     edx, [eax+4]
0x5B71AA: push    1; float
0x5B71AC: lea     ecx, [esp+44h+var_24]
0x5B71B0: mov     [esp+44h+var_20], edx
0x5B71B4: mov     eax, [eax+8]
0x5B71B7: push    ecx; int
0x5B71B8: mov     edx, ecx
0x5B71BA: mov     ecx, ds:0B333C4h; this
0x5B71C0: push    edx; int
0x5B71C1: mov     [esp+4Ch+var_1C], eax
0x5B71C5: call    TESObjectREFR_GetParentCell
0x5B71CA: mov     ecx, eax
0x5B71CC: call    sub_4CCE20
0x5B71D1: mov     ecx, ds:0B333C4h; this
0x5B71D7: call    sub_4D8B90
0x5B71DC: test    al, al
0x5B71DE: jz      short loc_5B7209
0x5B71E0: fld     [esp+40h+var_24]
0x5B71E4: fistp   [esp+40h+var_34]
0x5B71E8: mov     esi, [esp+40h+var_34]
0x5B71EC: add     esi, 0FFFFF800h
0x5B71F2: sar     esi, 0Ch
0x5B71F5: fld     [esp+40h+var_20]
0x5B71F9: fistp   [esp+40h+var_34]
0x5B71FD: mov     edi, [esp+40h+var_34]
0x5B7201: add     edi, 0FFFFF800h
0x5B7207: jmp     short loc_5B7224
0x5B7209: fld     [esp+40h+var_24]
0x5B720D: fistp   [esp+40h+var_34]
0x5B7211: mov     esi, [esp+40h+var_34]
0x5B7215: sar     esi, 0Ch
0x5B7218: fld     [esp+40h+var_20]
0x5B721C: fistp   [esp+40h+var_34]
0x5B7220: mov     edi, [esp+40h+var_34]
0x5B7224: mov     ecx, ds:0B333C4h; this
0x5B722A: sar     edi, 0Ch
0x5B722D: call    sub_4D8B90
0x5B7232: sub     esi, ebx
0x5B7234: sub     edi, ebx
0x5B7236: shl     esi, 0Ch
0x5B7239: shl     edi, 0Ch
0x5B723C: test    al, al
0x5B723E: jz      short loc_5B7262
0x5B7240: add     esi, 800h
0x5B7246: mov     [esp+40h+var_34], esi
0x5B724A: fild    [esp+40h+var_34]
0x5B724E: add     edi, 800h
0x5B7254: mov     [esp+40h+var_34], edi
0x5B7258: fstp    [esp+40h+var_C]
0x5B725C: fild    [esp+40h+var_34]
0x5B7260: jmp     short loc_5B7276
0x5B7262: mov     [esp+40h+var_34], esi
0x5B7266: fild    [esp+40h+var_34]
0x5B726A: mov     [esp+40h+var_34], edi
0x5B726E: fstp    [esp+40h+var_C]
0x5B7272: fild    [esp+40h+var_34]
0x5B7276: mov     esi, [esp+40h+arg_0]
0x5B727A: fstp    [esp+40h+var_8]
0x5B727E: fldz
0x5B7280: mov     eax, [esp+40h+var_C]
0x5B7284: mov     ecx, [esp+40h+var_8]
0x5B7288: fstp    [esp+40h+var_4]
0x5B728C: fld     dword ptr [esi]
0x5B728E: mov     edx, [esp+40h+var_4]
0x5B7292: fld     qword ptr ds:0A37650h
0x5B7298: mov     edi, [esp+40h+arg_4]
0x5B729C: fmul    st(1), st
0x5B729E: mov     [esp+40h+var_18], eax
0x5B72A2: mov     eax, ds:0B3F9A8h
0x5B72A7: fld     qword ptr ds:0A6CC90h
0x5B72AD: mov     [esp+40h+var_C], eax
0x5B72B1: mov     eax, ds:0B06A2Ch
0x5B72B6: fmul    st(2), st
0x5B72B8: add     eax, 0FFFFFFFFh
0x5B72BB: test    eax, eax
0x5B72BD: fxch    st(2)
0x5B72BF: mov     [esp+40h+var_10], edx
0x5B72C3: mov     edx, ds:0B3F9B0h
0x5B72C9: fstp    [esp+40h+var_C]
0x5B72CD: fld     dword ptr [edi]
0x5B72CF: mov     [esp+40h+var_14], ecx
0x5B72D3: mov     ecx, ds:0B3F9ACh
0x5B72D9: mov     [esp+40h+arg_0], eax
0x5B72DD: fild    [esp+40h+arg_0]
0x5B72E1: mov     [esp+40h+var_8], ecx
0x5B72E5: mov     [esp+40h+var_4], edx
0x5B72E9: jge     short loc_5B72F1
0x5B72EB: fadd    dword ptr ds:0A2FC78h
0x5B72F1: fmul    qword ptr ds:0A6CC88h
0x5B72F7: push    0; float
0x5B72F9: lea     ecx, [esp+44h+var_30]
0x5B72FD: push    ecx; int
0x5B72FE: fsubp   st(1), st
0x5B7300: mov     edx, ecx
0x5B7302: mov     ecx, ds:0B333C4h; this
0x5B7308: push    edx; int
0x5B7309: fstp    [esp+4Ch+arg_0]
0x5B730D: fld     [esp+4Ch+arg_0]
0x5B7311: fmulp   st(2), st
0x5B7313: fmul    st(1), st
0x5B7315: fsubrp  st(1), st
0x5B7317: fstp    [esp+4Ch+var_8]
0x5B731B: fld     [esp+4Ch+var_18]
0x5B731F: fadd    [esp+4Ch+var_C]
0x5B7323: fstp    [esp+4Ch+var_30]
0x5B7327: fld     [esp+4Ch+var_14]
0x5B732B: fadd    [esp+4Ch+var_8]
0x5B732F: fstp    [esp+4Ch+var_2C]
0x5B7333: fld     [esp+4Ch+var_4]
0x5B7337: fadd    [esp+4Ch+var_10]
0x5B733B: fstp    [esp+4Ch+var_28]
0x5B733F: call    TESObjectREFR_GetParentCell
0x5B7344: mov     ecx, eax
0x5B7346: call    sub_4CCE20
0x5B734B: fld     [esp+40h+var_30]
0x5B734F: fstp    dword ptr [esi]
0x5B7351: fld     [esp+40h+var_2C]
0x5B7355: fstp    dword ptr [edi]
0x5B7357: pop     edi
0x5B7358: pop     esi
0x5B7359: pop     ebx
0x5B735A: add     esp, 34h
0x5B735D: retn    8
