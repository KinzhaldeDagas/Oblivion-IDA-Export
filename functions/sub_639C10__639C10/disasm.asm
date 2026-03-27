0x639C10: sub     esp, 14h
0x639C13: push    ebp
0x639C14: push    esi
0x639C15: mov     esi, ecx
0x639C17: mov     eax, [esi]
0x639C19: mov     edx, [eax+184h]
0x639C1F: push    edi
0x639C20: call    edx
0x639C22: mov     ecx, [esi+2Ch]
0x639C25: test    ecx, ecx
0x639C27: mov     ebp, [esp+20h+arg_0]
0x639C2B: mov     edi, eax
0x639C2D: jz      short loc_639CA1
0x639C2F: mov     eax, [ecx+8]
0x639C32: mov     edx, eax
0x639C34: shr     edx, 0Bh
0x639C37: test    dl, 1
0x639C3A: jnz     short loc_639CA1
0x639C3C: shr     eax, 5
0x639C3F: test    al, 1
0x639C41: push    1
0x639C43: jz      short loc_639C67
0x639C45: push    ecx
0x639C46: mov     ecx, edi
0x639C48: call    sub_566870
0x639C4D: mov     eax, [esi]
0x639C4F: mov     edx, [eax+188h]
0x639C55: push    2
0x639C57: mov     ecx, ebp
0x639C59: push    ecx
0x639C5A: mov     ecx, esi
0x639C5C: call    edx
0x639C5E: pop     edi
0x639C5F: pop     esi
0x639C60: pop     ebp
0x639C61: add     esp, 14h
0x639C64: retn    4
0x639C67: mov     eax, [ecx]
0x639C69: mov     edx, [eax+198h]
0x639C6F: call    edx
0x639C71: test    al, al
0x639C73: jz      short loc_639CDD
0x639C75: cmp     dword ptr [esi+44h], 0
0x639C79: jnz     short loc_639CDD
0x639C7B: mov     eax, [esi+2Ch]
0x639C7E: push    1
0x639C80: push    eax
0x639C81: mov     ecx, edi
0x639C83: call    sub_566870
0x639C88: mov     eax, [esi+2Ch]
0x639C8B: pop     edi
0x639C8C: mov     ecx, ebp
0x639C8E: mov     edx, [ecx]
0x639C90: pop     esi
0x639C91: pop     ebp
0x639C92: add     esp, 14h
0x639C95: mov     [esp+arg_0], eax
0x639C99: mov     edx, [edx+2F8h]
0x639C9F: jmp     edx
0x639CA1: fldz
0x639CA3: fcomp   dword ptr [esi+1E8h]
0x639CA9: fnstsw  ax
0x639CAB: test    ah, 1
0x639CAE: jnz     short loc_639CCB
0x639CB0: mov     eax, [esi]
0x639CB2: mov     edx, [eax+558h]
0x639CB8: push    ebp
0x639CB9: mov     ecx, esi
0x639CBB: call    edx
0x639CBD: cmp     dword ptr [esi+2Ch], 0
0x639CC1: jnz     short loc_639CFB
0x639CC3: fld     dword ptr ds:0A31C80h
0x639CC9: jmp     short loc_639CD7
0x639CCB: fld     dword ptr [esi+1E8h]
0x639CD1: fsub    dword ptr ds:0B33E9Ch
0x639CD7: fstp    dword ptr [esi+1E8h]
0x639CDD: cmp     dword ptr [esi+2Ch], 0
0x639CE1: jnz     short loc_639CFB
0x639CE3: mov     eax, [esi]
0x639CE5: mov     edx, [eax+188h]
0x639CEB: push    2
0x639CED: push    ebp
0x639CEE: mov     ecx, esi
0x639CF0: call    edx
0x639CF2: pop     edi
0x639CF3: pop     esi
0x639CF4: pop     ebp
0x639CF5: add     esp, 14h
0x639CF8: retn    4
0x639CFB: push    ebp
0x639CFC: lea     eax, [esp+24h+var_C]
0x639D00: push    eax
0x639D01: mov     ecx, edi
0x639D03: call    sub_566B30
0x639D08: push    eax
0x639D09: mov     ecx, ebp
0x639D0B: call    sub_4D7E30
0x639D10: call    Double_To_SInt32
0x639D15: mov     [esp+20h+arg_0], eax
0x639D19: fild    [esp+20h+arg_0]
0x639D1D: fcomp   qword ptr ds:0A37478h
0x639D23: fnstsw  ax
0x639D25: test    ah, 41h
0x639D28: jnz     short loc_639D31
0x639D2A: push    0FFFFFFFFh
0x639D2C: jmp     loc_639ECB
0x639D31: mov     ecx, [esi+2Ch]
0x639D34: push    ebx
0x639D35: push    0
0x639D37: push    ecx
0x639D38: mov     ecx, ebp
0x639D3A: mov     byte ptr [esp+2Ch+arg_0], 0
0x639D3F: mov     [esp+2Ch+var_10], 0
0x639D47: call    TesObjectREF_GetDistance
0x639D4C: fstp    [esp+24h+var_14]
0x639D50: push    ebp
0x639D51: lea     edx, [esp+28h+var_C]
0x639D55: push    edx
0x639D56: mov     ecx, edi
0x639D58: call    sub_566B30
0x639D5D: mov     ecx, [esi+2Ch]
0x639D60: push    eax
0x639D61: call    sub_4D7E30
0x639D66: call    Double_To_SInt32
0x639D6B: mov     ecx, edi
0x639D6D: mov     ebx, eax
0x639D6F: call    sub_566DB0
0x639D74: cmp     ebx, eax
0x639D76: ja      short loc_639D8B
0x639D78: fld     [esp+24h+var_14]
0x639D7C: mov     bl, 1
0x639D7E: fcomp   qword ptr ds:0A3A5B0h
0x639D84: fnstsw  ax
0x639D86: test    ah, 44h
0x639D89: jp      short loc_639D8F
0x639D8B: mov     bl, byte ptr [esp+24h+arg_0]
0x639D8F: mov     edi, [edi+24h]
0x639D92: test    edi, edi
0x639D94: jz      short loc_639DA1
0x639D96: mov     ecx, edi
0x639D98: call    sub_5697E0
0x639D9D: mov     edi, eax
0x639D9F: jmp     short loc_639DA5
0x639DA1: mov     edi, [esp+24h+var_10]
0x639DA5: test    bl, bl
0x639DA7: pop     ebx
0x639DA8: jnz     loc_639EA0
0x639DAE: test    edi, edi
0x639DB0: jz      loc_639ED8
0x639DB6: mov     eax, [edi]
0x639DB8: mov     edx, [eax+170h]
0x639DBE: mov     ecx, edi
0x639DC0: call    edx
0x639DC2: cmp     eax, ds:0B35EB0h
0x639DC8: jnz     loc_639ED8
0x639DCE: fld     dword ptr [edi+28h]
0x639DD1: fstp    [esp+20h+arg_0]
0x639DD5: fldz
0x639DD7: fld     [esp+20h+arg_0]
0x639DDB: fcom    st(1)
0x639DDD: fnstsw  ax
0x639DDF: fstp    st(1)
0x639DE1: test    ah, 5
0x639DE4: fld     qword ptr ds:0A3D5B0h
0x639DEA: jp      short loc_639E09
0x639DEC: call    unknown_libname_14
0x639DF1: fstp    [esp+20h+arg_0]
0x639DF5: fld     [esp+20h+arg_0]
0x639DF9: fadd    qword ptr ds:0A3D5B0h
0x639DFF: fstp    [esp+20h+arg_0]
0x639E03: fld     [esp+20h+arg_0]
0x639E07: jmp     short loc_639E2B
0x639E09: fcom    st(1)
0x639E0B: fnstsw  ax
0x639E0D: test    ah, 41h
0x639E10: jp      short loc_639E29
0x639E12: call    unknown_libname_14
0x639E17: fstp    [esp+20h+arg_0]
0x639E1B: fld     [esp+20h+arg_0]
0x639E1F: fstp    [esp+20h+arg_0]
0x639E23: fld     [esp+20h+arg_0]
0x639E27: jmp     short loc_639E2B
0x639E29: fstp    st
0x639E2B: fldz
0x639E2D: lea     eax, [esp+20h+var_10]
0x639E31: push    eax; int
0x639E32: fstp    [esp+24h+var_10]
0x639E36: push    ecx
0x639E37: fstp    [esp+28h+var_28]; float
0x639E3A: push    ebp; int
0x639E3B: call    sub_683D80
0x639E40: fstp    [esp+2Ch+var_14]
0x639E44: fld     [esp+2Ch+var_14]
0x639E48: add     esp, 0Ch
0x639E4B: fabs
0x639E4D: fstp    [esp+20h+var_14]
0x639E51: fld     [esp+20h+var_14]
0x639E55: fild    dword ptr ds:0B36C18h
0x639E5B: fmul    qword ptr ds:0A31C78h
0x639E61: fstp    [esp+20h+var_14]
0x639E65: fld     [esp+20h+var_14]
0x639E69: fcompp
0x639E6B: fnstsw  ax
0x639E6D: test    ah, 5
0x639E70: jp      short loc_639E8E
0x639E72: fld     [esp+20h+arg_0]
0x639E76: push    1; char
0x639E78: push    ecx
0x639E79: fstp    [esp+28h+var_28]; float
0x639E7C: push    ebp; Concurrency::details::SchedulerBase *
0x639E7D: call    sub_685530
0x639E82: add     esp, 0Ch
0x639E85: pop     edi
0x639E86: pop     esi
0x639E87: pop     ebp
0x639E88: add     esp, 14h
0x639E8B: retn    4
0x639E8E: push    30h ; '0'
0x639E90: mov     ecx, ebp
0x639E92: call    sub_5E05F0
0x639E97: pop     edi
0x639E98: pop     esi
0x639E99: pop     ebp
0x639E9A: add     esp, 14h
0x639E9D: retn    4
0x639EA0: mov     eax, ds:0B333C4h
0x639EA5: cmp     [esi+2Ch], eax
0x639EA8: jnz     short loc_639EB3
0x639EAA: cmp     byte ptr [eax+12Ch], 0
0x639EB1: jnz     short loc_639ED8
0x639EB3: cmp     byte ptr [esi+0D0h], 0
0x639EBA: jnz     short loc_639EC9
0x639EBC: mov     edx, [esi]
0x639EBE: mov     eax, [edx+194h]
0x639EC4: push    ebp
0x639EC5: mov     ecx, esi
0x639EC7: call    eax
0x639EC9: push    1
0x639ECB: mov     edx, [esi]
0x639ECD: mov     eax, [edx+188h]
0x639ED3: push    ebp
0x639ED4: mov     ecx, esi
0x639ED6: call    eax
0x639ED8: pop     edi
0x639ED9: pop     esi
0x639EDA: pop     ebp
0x639EDB: add     esp, 14h
0x639EDE: retn    4
