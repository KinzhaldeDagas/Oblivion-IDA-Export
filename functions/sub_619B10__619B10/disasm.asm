0x619B10: sub     esp, 2Ch
0x619B13: push    ebx
0x619B14: push    ebp
0x619B15: push    esi
0x619B16: push    edi
0x619B17: mov     edi, [esp+3Ch+arg_4]
0x619B1B: push    0; int
0x619B1D: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x619B22: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x619B27: push    0; int
0x619B29: push    edi; void *
0x619B2A: call    OblivionDynamicCast
0x619B2F: mov     esi, eax
0x619B31: mov     eax, [edi]
0x619B33: mov     edx, [eax+174h]
0x619B39: add     esp, 14h
0x619B3C: mov     ecx, edi
0x619B3E: call    edx
0x619B40: test    esi, esi
0x619B42: mov     ebx, [eax]
0x619B44: mov     ebp, [eax+4]
0x619B47: mov     eax, [eax+8]
0x619B4A: mov     [esp+3Ch+var_1C], eax
0x619B4E: jz      short loc_619B5F
0x619B50: mov     ecx, esi
0x619B52: call    sub_5E0660
0x619B57: fmul    qword ptr ds:0A31C70h
0x619B5D: jmp     short loc_619B95
0x619B5F: mov     edx, [edi]
0x619B61: mov     edx, [edx+15Ch]
0x619B67: lea     eax, [esp+3Ch+var_18]
0x619B6B: push    eax
0x619B6C: mov     ecx, edi
0x619B6E: call    edx
0x619B70: fld     dword ptr [eax+8]
0x619B73: mov     eax, [edi]
0x619B75: fstp    [esp+3Ch+var_30+4]
0x619B79: mov     edx, [eax+158h]
0x619B7F: lea     ecx, [esp+3Ch+var_C]
0x619B83: push    ecx
0x619B84: mov     ecx, edi
0x619B86: call    edx
0x619B88: fld     dword ptr [eax+8]
0x619B8B: fsubr   [esp+3Ch+var_30+4]
0x619B8F: fmul    qword ptr ds:0A2FAA0h
0x619B95: fadd    [esp+3Ch+var_1C]
0x619B99: mov     eax, [esp+3Ch+arg_14]
0x619B9D: mov     ecx, [esp+3Ch+arg_8]
0x619BA1: mov     esi, [esp+3Ch+arg_0]
0x619BA5: push    eax
0x619BA6: fstp    [esp+40h+var_1C]
0x619BAA: fld     [esp+40h+arg_10]
0x619BAE: mov     edx, [esp+40h+var_1C]
0x619BB2: sub     esp, 8
0x619BB5: fstp    [esp+48h+var_44]
0x619BB9: fld     [esp+48h+arg_C]
0x619BBD: fstp    [esp+48h+var_48]
0x619BC0: push    ecx
0x619BC1: sub     esp, 0Ch
0x619BC4: mov     eax, esp
0x619BC6: mov     [eax], ebx
0x619BC8: mov     [eax+4], ebp
0x619BCB: push    esi
0x619BCC: mov     [eax+8], edx
0x619BCF: call    sub_6159C0
0x619BD4: fld     dword ptr [esi]
0x619BD6: fsub    dword ptr [edi+20h]
0x619BD9: add     esp, 20h
0x619BDC: fstp    [esp+3Ch+var_24]
0x619BE0: mov     eax, [esp+3Ch+var_24]
0x619BE4: fld     dword ptr [esi+4]
0x619BE7: fsub    dword ptr [edi+24h]
0x619BEA: fstp    [esp+3Ch+var_20]
0x619BEE: fld     dword ptr [esi+8]
0x619BF1: fsub    dword ptr [edi+28h]
0x619BF4: mov     [esi], eax
0x619BF6: fstp    [esp+3Ch+var_1C]
0x619BFA: mov     edx, [esp+3Ch+var_1C]
0x619BFE: fldz
0x619C00: mov     [esi+8], edx
0x619C03: fstp    dword ptr [esi+4]
0x619C06: fld     dword ptr [esi]
0x619C08: fld     qword ptr ds:0A491E0h
0x619C0E: fcom    st(1)
0x619C10: fnstsw  ax
0x619C12: fstp    st(1)
0x619C14: test    ah, 1
0x619C17: fld     qword ptr ds:0A3D5B0h
0x619C1D: fld     qword ptr ds:0A3D5B8h
0x619C23: fld     dword ptr [esi]
0x619C25: jnz     short loc_619C2B
0x619C27: fadd    st, st(2)
0x619C29: jmp     short loc_619C38
0x619C2B: fcomp   st(1)
0x619C2D: fnstsw  ax
0x619C2F: test    ah, 41h
0x619C32: jnz     short loc_619C3A
0x619C34: fld     dword ptr [esi]
0x619C36: fsub    st, st(2)
0x619C38: fstp    dword ptr [esi]
0x619C3A: fld     dword ptr [esi+8]
0x619C3D: fcomp   st(3)
0x619C3F: fnstsw  ax
0x619C41: fstp    st(2)
0x619C43: test    ah, 41h
0x619C46: jp      short loc_619C5A
0x619C48: fstp    st(1)
0x619C4A: mov     eax, esi
0x619C4C: fadd    dword ptr [esi+8]
0x619C4F: fstp    dword ptr [esi+8]
0x619C52: pop     edi
0x619C53: pop     esi
0x619C54: pop     ebp
0x619C55: pop     ebx
0x619C56: add     esp, 2Ch
0x619C59: retn
0x619C5A: fld     dword ptr [esi+8]
0x619C5D: fcomp   st(2)
0x619C5F: fnstsw  ax
0x619C61: fstp    st(1)
0x619C63: test    ah, 41h
0x619C66: jnz     short loc_619C78
0x619C68: fsubr   dword ptr [esi+8]
0x619C6B: mov     eax, esi
0x619C6D: fstp    dword ptr [esi+8]
0x619C70: pop     edi
0x619C71: pop     esi
0x619C72: pop     ebp
0x619C73: pop     ebx
0x619C74: add     esp, 2Ch
0x619C77: retn
0x619C78: pop     edi
0x619C79: fstp    st
0x619C7B: mov     eax, esi
0x619C7D: pop     esi
0x619C7E: pop     ebp
0x619C7F: pop     ebx
0x619C80: add     esp, 2Ch
0x619C83: retn
