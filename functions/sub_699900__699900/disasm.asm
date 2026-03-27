0x699900: sub     esp, 64h
0x699903: push    esi
0x699904: mov     esi, [esp+68h+arg_0]
0x699908: mov     eax, [esi]
0x69990A: mov     edx, [eax+15Ch]
0x699910: push    edi
0x699911: mov     edi, ecx
0x699913: lea     ecx, [esp+6Ch+var_4C]
0x699917: push    ecx
0x699918: mov     ecx, esi
0x69991A: call    edx
0x69991C: fld     dword ptr [eax+8]
0x69991F: mov     eax, [esi]
0x699921: fstp    qword ptr [esp+6Ch+var_68+4]
0x699925: mov     edx, [eax+158h]
0x69992B: lea     ecx, [esp+6Ch+var_58]
0x69992F: push    ecx
0x699930: mov     ecx, esi
0x699932: call    edx
0x699934: fld     dword ptr [eax+8]
0x699937: fsubr   qword ptr [esp+6Ch+var_68+4]
0x69993B: mov     eax, [esi]
0x69993D: mov     edx, [eax+174h]
0x699943: mov     ecx, esi
0x699945: fstp    [esp+6Ch+arg_0]
0x699949: call    edx
0x69994B: mov     ecx, [eax]
0x69994D: fld     [esp+6Ch+arg_0]
0x699951: fmul    qword ptr ds:0A31C70h
0x699957: mov     [esp+6Ch+var_40], ecx
0x69995B: mov     edx, [eax+4]
0x69995E: mov     [esp+6Ch+var_3C], edx
0x699962: mov     eax, [eax+8]
0x699965: mov     [esp+6Ch+var_38], eax
0x699969: fadd    [esp+6Ch+var_38]
0x69996D: mov     ecx, esi; this
0x69996F: fstp    [esp+6Ch+var_38]
0x699973: fld     [esp+6Ch+var_40]
0x699977: fsub    [esp+6Ch+arg_4]
0x69997B: fstp    [esp+6Ch+var_4C]
0x69997F: fld     [esp+6Ch+var_3C]
0x699983: fsub    [esp+6Ch+arg_8]
0x699987: fstp    dword ptr [esp+6Ch+var_48]
0x69998B: fld     [esp+6Ch+var_38]
0x69998F: fsub    [esp+6Ch+arg_C]
0x699993: fstp    dword ptr [esp+6Ch+var_48+4]
0x699997: fld     dword ptr [esp+6Ch+var_48]
0x69999B: fstp    [esp+6Ch+var_58]
0x69999F: fld     [esp+6Ch+var_4C]
0x6999A3: fstp    qword ptr [esp+6Ch+var_68+4]
0x6999A7: fld     dword ptr [esp+6Ch+var_48+4]
0x6999AB: fstp    qword ptr [esp+6Ch+var_4C]
0x6999AF: call    Actor_GetFatigueFraction
0x6999B4: mov     edx, [esi]
0x6999B6: mov     eax, [edx+284h]
0x6999BC: push    ecx
0x6999BD: fstp    dword ptr [esp+70h+var_74+4]
0x6999C0: push    7
0x6999C2: mov     ecx, esi
0x6999C4: call    eax
0x6999C6: mov     edx, [esi]
0x6999C8: push    eax; float
0x6999C9: mov     eax, [edx+284h]
0x6999CF: push    3; int
0x6999D1: mov     ecx, esi
0x6999D3: call    eax
0x6999D5: fld     qword ptr [esp+74h+var_68+4]
0x6999D9: fmul    st, st
0x6999DB: push    eax; int
0x6999DC: fld     [esp+78h+var_58]
0x6999E0: fmul    st, st
0x6999E2: faddp   st(1), st
0x6999E4: fld     qword ptr [esp+78h+var_4C]
0x6999E8: fmul    st, st
0x6999EA: faddp   st(1), st
0x6999EC: fstp    [esp+78h+arg_0]
0x6999F0: fld     [esp+78h+arg_0]
0x6999F4: call    __CIsqrt
0x6999F9: fstp    [esp+78h+arg_0]
0x6999FD: fld     [esp+78h+arg_0]
0x699A01: push    ecx
0x699A02: fstp    [esp+7Ch+var_7C]; float
0x699A05: mov     ecx, [esp+7Ch+arg_10]
0x699A0C: call    EffectItem_GetArea
0x699A11: mov     [esp+7Ch+arg_0], eax
0x699A18: fild    [esp+7Ch+arg_0]
0x699A1F: fmul    dword ptr ds:0B37DB8h
0x699A25: call    Double_To_SInt32
0x699A2A: fld     [esp+7Ch+arg_14]
0x699A31: push    eax; int
0x699A32: call    Double_To_SInt32
0x699A37: push    eax; int
0x699A38: call    Calc_MagicExplosionSize?
0x699A3D: fstp    [esp+84h+arg_0]
0x699A44: fld     [esp+84h+arg_0]
0x699A4B: add     esp, 18h
0x699A4E: fld     dword ptr ds:0B37E98h
0x699A54: fcom    st(1)
0x699A56: fnstsw  ax
0x699A58: test    ah, 5
0x699A5B: jp      short loc_699A69
0x699A5D: fstp    st(1)
0x699A5F: fstp    [esp+6Ch+arg_0]
0x699A63: fld     [esp+6Ch+arg_0]
0x699A67: jmp     short loc_699A6B
0x699A69: fstp    st
0x699A6B: fld     dword ptr ds:0B37E90h
0x699A71: fcomp   st(1)
0x699A73: fnstsw  ax
0x699A75: test    ah, 5
0x699A78: jp      short loc_699AB0
0x699A7A: mov     edi, [esp+6Ch+arg_4]
0x699A7E: mov     ecx, [esi+58h]
0x699A81: mov     edx, [ecx]
0x699A83: sub     esp, 10h
0x699A86: mov     eax, esp
0x699A88: fstp    dword ptr [esp+7Ch+var_74+4]
0x699A8C: mov     [eax], edi
0x699A8E: mov     edi, [esp+7Ch+arg_8]
0x699A95: mov     [eax+4], edi
0x699A98: mov     edi, [esp+7Ch+arg_C]
0x699A9F: mov     [eax+8], edi
0x699AA2: mov     eax, [edx+2F0h]
0x699AA8: push    esi
0x699AA9: call    eax
0x699AAB: jmp     loc_699BCC
0x699AB0: fldz
0x699AB2: fcompp
0x699AB4: fnstsw  ax
0x699AB6: test    ah, 5
0x699AB9: jp      loc_699C01
0x699ABF: mov     edx, [edi]
0x699AC1: mov     eax, [edx+20h]
0x699AC4: mov     ecx, edi
0x699AC6: call    eax
0x699AC8: test    eax, eax
0x699ACA: jz      loc_699BCC
0x699AD0: mov     edx, [eax]
0x699AD2: mov     ecx, eax
0x699AD4: mov     eax, [edx+190h]
0x699ADA: call    eax
0x699ADC: test    al, al
0x699ADE: jz      loc_699BCC
0x699AE4: add     edi, 0FFFFFFA4h
0x699AE7: jz      loc_699BCC
0x699AED: mov     edx, ds:0B258E0h
0x699AF3: mov     ecx, ds:0B258DCh
0x699AF9: mov     eax, ds:0B258E4h
0x699AFE: mov     dword ptr [esp+6Ch+var_48], edx
0x699B02: mov     edx, ds:0B3F9ACh
0x699B08: mov     [esp+6Ch+var_4C], ecx
0x699B0C: mov     ecx, ds:0B3F9A8h
0x699B12: mov     dword ptr [esp+6Ch+var_48+4], eax
0x699B16: mov     eax, ds:0B3F9B0h
0x699B1B: mov     dword ptr [esp+6Ch+var_58+4], edx
0x699B1F: mov     edx, [edi]
0x699B21: mov     dword ptr [esp+6Ch+var_58], ecx
0x699B25: mov     [esp+6Ch+anonymous_0], eax
0x699B29: mov     eax, [edx+154h]
0x699B2F: mov     ecx, edi
0x699B31: call    eax
0x699B33: test    eax, eax
0x699B35: jz      short loc_699B92
0x699B37: lea     ecx, [esp+6Ch+var_34]
0x699B3B: push    ecx
0x699B3C: lea     ecx, [eax+64h]
0x699B3F: call    sub_718A80
0x699B44: lea     edx, [esp+6Ch+arg_4]
0x699B48: push    edx
0x699B49: lea     eax, [esp+70h+var_68+4]
0x699B4D: push    eax
0x699B4E: lea     ecx, [esp+74h+var_34]
0x699B52: call    sub_53D4B0
0x699B57: mov     ecx, [eax]
0x699B59: mov     [esp+6Ch+var_4C], ecx
0x699B5D: mov     edx, [eax+4]
0x699B60: mov     dword ptr [esp+6Ch+var_48], edx
0x699B64: mov     eax, [eax+8]
0x699B67: lea     ecx, [esp+6Ch+var_40]
0x699B6B: push    ecx
0x699B6C: lea     edx, [esp+70h+var_68+4]
0x699B70: push    edx
0x699B71: lea     ecx, [esp+74h+var_34]
0x699B75: mov     dword ptr [esp+74h+var_48+4], eax
0x699B79: call    sub_53D4B0
0x699B7E: mov     ecx, [eax]
0x699B80: mov     dword ptr [esp+6Ch+var_58], ecx
0x699B84: mov     edx, [eax+4]
0x699B87: mov     dword ptr [esp+6Ch+var_58+4], edx
0x699B8B: mov     eax, [eax+8]
0x699B8E: mov     [esp+6Ch+anonymous_0], eax
0x699B92: fldz
0x699B94: mov     edx, [esi]
0x699B96: mov     edx, [edx+398h]
0x699B9C: lea     eax, [esp+6Ch+var_4C]
0x699BA0: push    eax
0x699BA1: lea     ecx, [esp+70h+var_58]
0x699BA5: push    ecx
0x699BA6: sub     esp, 8
0x699BA9: fstp    [esp+7Ch+var_78]
0x699BAD: mov     ecx, esi
0x699BAF: fld     [esp+7Ch+arg_0]
0x699BB6: fadd    st, st
0x699BB8: fstp    [esp+7Ch+arg_10]
0x699BBF: fld     [esp+7Ch+arg_10]
0x699BC6: fstp    [esp+7Ch+var_7C]
0x699BC9: push    edi
0x699BCA: call    edx
0x699BCC: fldz
0x699BCE: fcomp   [esp+6Ch+arg_0]
0x699BD2: fnstsw  ax
0x699BD4: test    ah, 5
0x699BD7: jp      short loc_699C01
0x699BD9: cmp     byte ptr ds:0B3B908h, 0
0x699BE0: jz      short loc_699C01
0x699BE2: mov     ecx, esi; this
0x699BE4: call    TESObjectREFR_GetName
0x699BE9: fld     [esp+6Ch+arg_0]
0x699BED: push    eax
0x699BEE: sub     esp, 8
0x699BF1: fstp    qword ptr [esp+78h+var_78]
0x699BF4: push    offset aAnExplosionOf_; "An explosion of %.1f magnitude hits %.2"...
0x699BF9: call    Interface_ConsolePrint
0x699BFE: add     esp, 10h
0x699C01: pop     edi
0x699C02: pop     esi
0x699C03: add     esp, 64h
0x699C06: retn    18h
