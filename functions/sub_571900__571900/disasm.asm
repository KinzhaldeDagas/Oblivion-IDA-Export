0x571900: push    0FFFFFFFFh
0x571902: push    offset SEH_571900
0x571907: mov     eax, large fs:0
0x57190D: push    eax
0x57190E: sub     esp, 30h
0x571911: push    ebx
0x571912: push    ebp
0x571913: push    esi
0x571914: push    edi
0x571915: mov     eax, ds:0B30AACh
0x57191A: xor     eax, esp
0x57191C: push    eax
0x57191D: lea     eax, [esp+50h+var_C]
0x571921: mov     large fs:0, eax
0x571927: mov     eax, [esp+50h+a2]
0x57192B: xor     ebx, ebx
0x57192D: cmp     [eax], bl
0x57192F: jnz     short loc_571938
0x571931: xor     eax, eax
0x571933: jmp     loc_571BB5
0x571938: push    1
0x57193A: call    GetGlobalScriptStateObj??
0x57193F: add     esp, 4
0x571942: cmp     eax, ebx
0x571944: jz      short loc_57194B
0x571946: cmp     [eax+31h], bl
0x571949: jg      short loc_57195B
0x57194B: push    1; arg1
0x57194D: push    ebx; canCreate
0x57194E: call    InterfaceManager_GetSingleton
0x571953: add     esp, 8
0x571956: cmp     [eax+50h], bl
0x571959: jz      short loc_571931
0x57195B: fild    dword ptr ds:0B06C50h
0x571961: fidiv   dword ptr ds:0B06C4Ch
0x571967: fdivr   qword ptr ds:0A31C70h
0x57196D: fstp    [esp+50h+var_3C]
0x571971: fld     [esp+50h+arg_4]
0x571975: fsub    qword ptr ds:0A687B0h
0x57197B: fmul    [esp+50h+var_3C]
0x57197F: fstp    [esp+50h+arg_4]
0x571983: call    sub_57D7F0
0x571988: fsub    [esp+50h+arg_8]
0x57198C: fstp    [esp+50h+var_34]
0x571990: call    sub_57D7F0
0x571995: fmul    qword ptr ds:0A2FAA0h
0x57199B: mov     eax, [esp+50h+arg_C]
0x57199F: cmp     eax, 3
0x5719A2: mov     ebp, 1
0x5719A7: fsubr   [esp+50h+var_34]
0x5719AB: fstp    [esp+50h+arg_8]
0x5719AF: jnz     short loc_5719B8
0x5719B1: mov     ebp, 4
0x5719B6: jmp     short loc_5719BF
0x5719B8: cmp     eax, 2
0x5719BB: jnz     short loc_5719BF
0x5719BD: mov     ebp, eax
0x5719BF: push    0DCh ; 'Ü'; Size
0x5719C4: mov     [esp+54h+var_28], ebx
0x5719C8: call    FormHeapAlloc
0x5719CD: add     esp, 4
0x5719D0: mov     [esp+50h+arg_C], eax
0x5719D4: cmp     eax, ebx
0x5719D6: mov     [esp+50h+var_4], ebx
0x5719DA: jz      short loc_5719E8
0x5719DC: push    ebx
0x5719DD: mov     ecx, eax; this
0x5719DF: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x5719E4: mov     esi, eax
0x5719E6: jmp     short loc_5719EA
0x5719E8: xor     esi, esi
0x5719EA: mov     ax, ds:0B12DAEh
0x5719F0: mov     edx, ds:0B12DACh
0x5719F6: movzx   ecx, ah
0x5719F9: test    ecx, ecx
0x5719FB: movzx   edi, dh
0x5719FE: mov     [esp+50h+arg_C], ecx
0x571A02: mov     [esp+50h+var_4], 0FFFFFFFFh
0x571A0A: fild    [esp+50h+arg_C]
0x571A0E: movzx   eax, al
0x571A11: movzx   edx, dl
0x571A14: jge     short loc_571A1C
0x571A16: fadd    dword ptr ds:0A2FC78h
0x571A1C: test    eax, eax
0x571A1E: fld     qword ptr ds:0A3DDD8h
0x571A24: fdiv    st(1), st
0x571A26: mov     dword ptr [esp+50h+var_34], eax
0x571A2A: fxch    st(1)
0x571A2C: fstp    [esp+50h+arg_C]
0x571A30: fild    dword ptr [esp+50h+var_34]
0x571A34: jge     short loc_571A3C
0x571A36: fadd    dword ptr ds:0A2FC78h
0x571A3C: test    edi, edi
0x571A3E: fdiv    st, st(1)
0x571A40: mov     dword ptr [esp+50h+var_34], edi
0x571A44: fstp    [esp+50h+var_3C]
0x571A48: fild    dword ptr [esp+50h+var_34]
0x571A4C: jge     short loc_571A54
0x571A4E: fadd    dword ptr ds:0A2FC78h
0x571A54: test    edx, edx
0x571A56: fdiv    st, st(1)
0x571A58: mov     dword ptr [esp+50h+var_34], edx
0x571A5C: fstp    [esp+50h+var_38]
0x571A60: fild    dword ptr [esp+50h+var_34]
0x571A64: jge     short loc_571A6C
0x571A66: fadd    dword ptr ds:0A2FC78h
0x571A6C: fdivrp  st(1), st
0x571A6E: mov     ecx, [esp+50h+a2]
0x571A72: push    ebx; a3
0x571A73: push    ecx; a2
0x571A74: lea     ecx, [esp+58h+var_24]; this
0x571A78: mov     [esp+58h+var_24.m_data], ebx
0x571A7C: mov     [esp+58h+var_24.m_dataLen], bx
0x571A81: mov     [esp+58h+var_24.m_bufLen], bx
0x571A86: fstp    dword ptr [esp+58h+var_34]
0x571A8A: fld     [esp+58h+arg_C]
0x571A8E: fstp    [esp+58h+var_1C]
0x571A92: fld     [esp+58h+var_3C]
0x571A96: fstp    [esp+58h+var_18]
0x571A9A: fld     [esp+58h+var_38]
0x571A9E: fstp    [esp+58h+var_14]
0x571AA2: fld     dword ptr [esp+58h+var_34]
0x571AA6: fstp    [esp+58h+var_10]
0x571AAA: call    BSStringT_Set
0x571AAF: mov     edi, [esp+50h+arg_10]
0x571AB3: cmp     edi, ebx
0x571AB5: mov     [esp+50h+var_4], 1
0x571ABD: jnz     short loc_571AC5
0x571ABF: mov     edi, ds:0B12DB4h
0x571AC5: call    FontManager_GetSingleton
0x571ACA: fldz
0x571ACC: mov     eax, [eax+edi*4-4]
0x571AD0: push    1; int
0x571AD2: lea     edx, [esp+54h+var_1C]
0x571AD6: push    edx; int
0x571AD7: push    ebp; int
0x571AD8: lea     ecx, [esp+5Ch+var_28]
0x571ADC: push    ecx; int
0x571ADD: lea     edx, [esp+60h+var_24]
0x571AE1: push    edx; int
0x571AE2: sub     esp, 0Ch
0x571AE5: fst     [esp+70h+var_68]; float
0x571AE9: mov     ecx, eax
0x571AEB: fst     [esp+70h+var_6C]; float
0x571AEF: fstp    [esp+70h+var_70]; float
0x571AF2: call    sub_575870
0x571AF7: fldz
0x571AF9: push    1
0x571AFB: fst     dword ptr [esp+54h+var_34]
0x571AFF: push    eax
0x571B00: mov     ecx, dword ptr [esp+58h+var_34]
0x571B04: fst     dword ptr [esp+58h+var_34+4]
0x571B08: mov     edx, dword ptr [esp+58h+var_34+4]
0x571B0C: fstp    [esp+58h+var_2C]
0x571B10: mov     [eax+54h], ecx
0x571B13: mov     ecx, [esp+58h+var_2C]
0x571B17: mov     [eax+58h], edx
0x571B1A: mov     [eax+5Ch], ecx
0x571B1D: mov     edx, [esi]
0x571B1F: mov     eax, [edx+84h]
0x571B25: mov     ecx, esi
0x571B27: call    eax
0x571B29: and     word ptr [esi+18h], 0FFFEh
0x571B2F: push    1; arg1
0x571B31: push    ebx; canCreate
0x571B32: call    InterfaceManager_GetSingleton
0x571B37: add     esp, 8
0x571B3A: cmp     [eax+70h], ebx
0x571B3D: jz      short loc_571B5A
0x571B3F: push    1; arg1
0x571B41: push    ebx; canCreate
0x571B42: call    InterfaceManager_GetSingleton
0x571B47: mov     ecx, [eax+70h]
0x571B4A: mov     edx, [ecx]
0x571B4C: mov     eax, [edx+84h]
0x571B52: add     esp, 8
0x571B55: push    1
0x571B57: push    esi
0x571B58: call    eax
0x571B5A: fld     [esp+50h+arg_4]
0x571B5E: fstp    dword ptr [esp+50h+var_34]
0x571B62: mov     ecx, dword ptr [esp+50h+var_34]
0x571B66: fld     dword ptr ds:0A5A5F8h
0x571B6C: mov     [esi+54h], ecx
0x571B6F: fstp    dword ptr [esp+50h+var_34+4]
0x571B73: mov     edx, dword ptr [esp+50h+var_34+4]
0x571B77: fld     [esp+50h+arg_8]
0x571B7B: mov     [esi+58h], edx
0x571B7E: fstp    [esp+50h+var_2C]
0x571B82: mov     eax, [esp+50h+var_2C]
0x571B86: mov     ecx, esi; this
0x571B88: mov     [esi+5Ch], eax
0x571B8B: call    NiAVObject_InitializePropertyState
0x571B90: mov     ecx, esi
0x571B92: call    NiNode_UpdateDynamicEffectState
0x571B97: fldz
0x571B99: push    1; a3
0x571B9B: push    ecx
0x571B9C: mov     ecx, esi; this
0x571B9E: fstp    [esp+58h+var_58]; a2
0x571BA1: call    NiAVObject_UpdateNiAVObject
0x571BA6: mov     ecx, [esp+50h+var_24.m_data]
0x571BAA: push    ecx
0x571BAB: call    FormHeapFree
0x571BB0: add     esp, 4
0x571BB3: mov     eax, esi
0x571BB5: mov     ecx, dword ptr [esp+50h+var_C]
0x571BB9: mov     large fs:0, ecx
0x571BC0: pop     ecx
0x571BC1: pop     edi
0x571BC2: pop     esi
0x571BC3: pop     ebp
0x571BC4: pop     ebx
0x571BC5: add     esp, 3Ch
0x571BC8: retn    14h
