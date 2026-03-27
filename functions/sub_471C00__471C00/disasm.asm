0x471C00: push    0FFFFFFFFh
0x471C02: push    offset SEH_471C00
0x471C07: mov     eax, large fs:0
0x471C0D: push    eax
0x471C0E: sub     esp, 20h
0x471C11: push    ebx
0x471C12: push    ebp
0x471C13: push    esi
0x471C14: push    edi
0x471C15: mov     eax, ds:0B30AACh
0x471C1A: xor     eax, esp
0x471C1C: push    eax
0x471C1D: lea     eax, [esp+40h+var_C]
0x471C21: mov     large fs:0, eax
0x471C27: mov     ebx, ecx
0x471C29: cmp     dword ptr [ebx+4], 0
0x471C2D: jz      loc_471F00
0x471C33: cmp     dword ptr [ebx+8], 0
0x471C37: jz      loc_471F00
0x471C3D: cmp     dword ptr [ebx], 0
0x471C40: jz      loc_471F00
0x471C46: mov     esi, [esp+40h+arg_0]
0x471C4A: cmp     esi, ds:0B333C4h
0x471C50: setnz   al
0x471C53: test    al, al
0x471C55: mov     byte ptr [esp+40h+arg_0], al
0x471C59: jz      short loc_471C79
0x471C5B: mov     ecx, esi; this
0x471C5D: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x471C62: cmp     eax, 1
0x471C65: jz      short loc_471CDB
0x471C67: mov     eax, [esi]
0x471C69: mov     edx, [eax+334h]
0x471C6F: push    1
0x471C71: mov     ecx, esi
0x471C73: call    edx
0x471C75: test    al, al
0x471C77: jnz     short loc_471CDB
0x471C79: mov     eax, [esi]
0x471C7B: mov     edx, [eax+154h]
0x471C81: mov     ecx, esi
0x471C83: call    edx
0x471C85: mov     edi, eax
0x471C87: push    edi
0x471C88: push    offset dword_B35288
0x471C8D: call    NiRTTI__IsObjectOfRTTIType
0x471C92: add     esp, 8
0x471C95: test    al, al
0x471C97: jz      short loc_471CB4
0x471C99: fld     dword ptr [edi+0E8h]
0x471C9F: fstp    [esp+40h+var_2C]
0x471CA3: fldz
0x471CA5: fcomp   [esp+40h+var_2C]
0x471CA9: fnstsw  ax
0x471CAB: test    ah, 1
0x471CAE: jz      loc_471E58
0x471CB4: cmp     byte ptr [esp+40h+arg_0], 0
0x471CB9: jz      short loc_471CDB
0x471CBB: mov     eax, ds:0B333CCh
0x471CC0: mov     eax, [eax+0DCh]
0x471CC6: mov     ecx, [ebx+4]
0x471CC9: push    eax
0x471CCA: push    ecx
0x471CCB: call    sub_47F7B0
0x471CD0: add     esp, 8
0x471CD3: test    al, al
0x471CD5: jz      loc_471E58
0x471CDB: push    1
0x471CDD: push    1
0x471CDF: mov     ecx, esi
0x471CE1: call    sub_5E1370
0x471CE6: call    InitBSShaderAccumulator
0x471CEB: test    eax, eax
0x471CED: jz      short loc_471D06
0x471CEF: mov     ecx, [esi+0Ch]
0x471CF2: push    0
0x471CF4: push    ecx
0x471CF5: mov     ecx, eax
0x471CF7: call    sub_7AA3C0
0x471CFC: test    al, al
0x471CFE: jz      short loc_471D06
0x471D00: push    2
0x471D02: push    0
0x471D04: jmp     short loc_471D0A
0x471D06: push    2
0x471D08: push    1
0x471D0A: mov     ecx, esi
0x471D0C: call    sub_5E1370
0x471D11: mov     edx, [esi]
0x471D13: mov     eax, [edx+154h]
0x471D19: mov     ecx, esi
0x471D1B: call    eax
0x471D1D: push    eax
0x471D1E: push    offset dword_B35288
0x471D23: call    NiRTTI_Cast
0x471D28: add     esp, 8
0x471D2B: test    eax, eax
0x471D2D: jz      short loc_471D50
0x471D2F: fld     dword ptr [eax+0E8h]
0x471D35: fstp    [esp+40h+arg_0]
0x471D39: fld     dword ptr ds:0A3C778h
0x471D3F: fcomp   [esp+40h+arg_0]
0x471D43: fnstsw  ax
0x471D45: test    ah, 41h
0x471D48: jnz     short loc_471D50
0x471D4A: push    4
0x471D4C: push    0
0x471D4E: jmp     short loc_471D54
0x471D50: push    4
0x471D52: push    1
0x471D54: mov     ecx, esi
0x471D56: call    sub_5E1370
0x471D5B: mov     edx, [esi]
0x471D5D: mov     eax, [edx+27Ch]
0x471D63: mov     ecx, esi
0x471D65: xor     ebp, ebp
0x471D67: xor     edi, edi
0x471D69: call    eax
0x471D6B: test    eax, eax
0x471D6D: jz      short loc_471D73
0x471D6F: mov     edi, esi
0x471D71: jmp     short loc_471D75
0x471D73: mov     ebp, esi
0x471D75: xor     esi, esi
0x471D77: mov     [esp+40h+arg_0], esi
0x471D7B: cmp     ebp, esi
0x471D7D: mov     [esp+40h+var_4], esi
0x471D81: jz      short loc_471D98
0x471D83: cmp     edi, esi
0x471D85: jnz     short loc_471DB2
0x471D87: mov     edx, [ebp+0]
0x471D8A: mov     eax, [edx+388h]
0x471D90: mov     ecx, ebp
0x471D92: call    eax
0x471D94: mov     edi, eax
0x471D96: jmp     short loc_471DAA
0x471D98: cmp     edi, esi
0x471D9A: jz      short loc_471E04
0x471D9C: mov     edx, [edi]
0x471D9E: mov     eax, [edx+380h]
0x471DA4: mov     ecx, edi
0x471DA6: call    eax
0x471DA8: mov     ebp, eax
0x471DAA: test    ebp, ebp
0x471DAC: jz      short loc_471DF9
0x471DAE: test    edi, edi
0x471DB0: jz      short loc_471E04
0x471DB2: mov     edx, [edi]
0x471DB4: mov     eax, [edx+168h]
0x471DBA: mov     ecx, edi
0x471DBC: call    eax
0x471DBE: test    eax, eax
0x471DC0: jz      short loc_471DF9
0x471DC2: mov     ecx, eax
0x471DC4: call    sub_478180
0x471DC9: push    eax; a2
0x471DCA: lea     ecx, [esp+44h+arg_0]; this
0x471DCE: call    NiSmartPointer_Set??
0x471DD3: mov     eax, [esp+40h+arg_0]
0x471DD7: test    eax, eax
0x471DD9: jz      short loc_471DF9
0x471DDB: mov     esi, [eax+1Ch]
0x471DDE: mov     edx, [esi]
0x471DE0: mov     edx, [edx+88h]
0x471DE6: push    eax
0x471DE7: lea     eax, [esp+44h+var_2C]
0x471DEB: push    eax
0x471DEC: mov     ecx, esi
0x471DEE: call    edx
0x471DF0: lea     ecx, [esp+40h+var_2C]; this
0x471DF4: call    sub_7016A0
0x471DF9: test    edi, edi
0x471DFB: jz      short loc_471E04
0x471DFD: mov     byte ptr ds:0B3CBD0h, 1
0x471E04: mov     eax, [ebx+8]
0x471E07: fld     dword ptr [ebx+94h]
0x471E0D: push    eax; int
0x471E0E: push    ecx
0x471E0F: mov     ecx, [ebx+4]
0x471E12: fstp    [esp+48h+var_48]; float
0x471E15: call    sub_47CA30
0x471E1A: test    esi, esi
0x471E1C: mov     byte ptr ds:0B3CBD0h, 0
0x471E23: jz      short loc_471E3C
0x471E25: mov     eax, [esp+40h+arg_0]
0x471E29: test    eax, eax
0x471E2B: jz      short loc_471E3C
0x471E2D: mov     edx, [esi]
0x471E2F: push    1
0x471E31: push    eax
0x471E32: mov     eax, [edx+84h]
0x471E38: mov     ecx, esi
0x471E3A: call    eax
0x471E3C: lea     ecx, [esp+40h+arg_0]; this
0x471E40: mov     dword ptr [ebx], 0
0x471E46: mov     [esp+40h+var_4], 0FFFFFFFFh
0x471E4E: call    sub_7016A0
0x471E53: jmp     loc_471F00
0x471E58: push    1
0x471E5A: push    0
0x471E5C: mov     ecx, esi
0x471E5E: call    sub_5E1370
0x471E63: mov     eax, [ebx+4]
0x471E66: mov     ecx, [eax+20h]
0x471E69: mov     edx, [eax+24h]
0x471E6C: add     eax, 20h ; ' '
0x471E6F: mov     [esp+40h+var_1C], ecx
0x471E73: mov     ecx, [eax+8]
0x471E76: mov     [esp+40h+var_18], edx
0x471E7A: mov     edx, [eax+0Ch]
0x471E7D: mov     eax, [esi]
0x471E7F: mov     [esp+40h+var_14], ecx
0x471E83: mov     [esp+40h+var_10], edx
0x471E87: mov     edx, [eax+174h]
0x471E8D: mov     ecx, esi
0x471E8F: call    edx
0x471E91: mov     edi, [eax]
0x471E93: mov     ebp, [eax+4]
0x471E96: mov     eax, [eax+8]
0x471E99: mov     edx, [esi]
0x471E9B: mov     [esp+40h+var_20], eax
0x471E9F: mov     eax, [edx+170h]
0x471EA5: mov     ecx, esi
0x471EA7: call    eax
0x471EA9: push    eax
0x471EAA: call    sub_46D5C0
0x471EAF: fadd    st, st
0x471EB1: add     esp, 4
0x471EB4: fstp    [esp+40h+arg_0]
0x471EB8: fld     [esp+40h+arg_0]
0x471EBC: fld     qword ptr ds:0A3C770h
0x471EC2: fmul    st, st(1)
0x471EC4: fadd    [esp+40h+var_20]
0x471EC8: fstp    [esp+40h+var_20]
0x471ECC: mov     ecx, [esp+40h+var_20]
0x471ED0: fld     [esp+40h+var_10]
0x471ED4: fcomp   st(1)
0x471ED6: fnstsw  ax
0x471ED8: test    ah, 5
0x471EDB: jp      short loc_471EE3
0x471EDD: fstp    [esp+40h+var_10]
0x471EE1: jmp     short loc_471EE5
0x471EE3: fstp    st
0x471EE5: mov     eax, [ebx+4]
0x471EE8: add     eax, 20h ; ' '
0x471EEB: mov     [eax], edi
0x471EED: mov     [eax+4], ebp
0x471EF0: mov     [eax+8], ecx
0x471EF3: mov     ecx, [esp+40h+var_10]
0x471EF7: mov     [eax+0Ch], ecx
0x471EFA: mov     dword ptr [ebx], 0
0x471F00: mov     ecx, dword ptr [esp+40h+var_C]
0x471F04: mov     large fs:0, ecx
0x471F0B: pop     ecx
0x471F0C: pop     edi
0x471F0D: pop     esi
0x471F0E: pop     ebp
0x471F0F: pop     ebx
0x471F10: add     esp, 2Ch
0x471F13: retn    4
