0x633910: fld     dword ptr ds:0A2F918h
0x633916: sub     esp, 30h
0x633919: push    ebx
0x63391A: push    esi
0x63391B: mov     esi, [esp+38h+arg_0]
0x63391F: push    edi
0x633920: mov     edi, ecx
0x633922: fcomp   dword ptr [edi+1A8h]
0x633928: fnstsw  ax
0x63392A: test    ah, 5
0x63392D: jp      short loc_633998
0x63392F: mov     eax, [edi]
0x633931: mov     edx, [eax+194h]
0x633937: push    esi
0x633938: call    edx
0x63393A: mov     ecx, esi; this
0x63393C: call    sub_5F8000
0x633941: mov     eax, [esi]
0x633943: mov     edx, [eax+174h]
0x633949: mov     ecx, esi
0x63394B: call    edx
0x63394D: push    0; int
0x63394F: push    0; float
0x633951: push    1; float
0x633953: mov     ecx, esi; this
0x633955: mov     edi, eax
0x633957: call    TESObjectREFR_GetParentCell
0x63395C: mov     ecx, [edi]
0x63395E: mov     edx, [edi+4]
0x633961: push    eax; int
0x633962: sub     esp, 0Ch
0x633965: mov     eax, esp
0x633967: mov     [eax], ecx
0x633969: mov     ecx, [edi+8]
0x63396C: mov     [eax+4], edx
0x63396F: lea     edx, [esp+58h+var_C]
0x633973: mov     [eax+8], ecx
0x633976: push    edx; int
0x633977: mov     ecx, esi
0x633979: call    sub_5E2E20
0x63397E: mov     eax, [esi]
0x633980: mov     edx, [eax+1CCh]
0x633986: lea     ecx, [esp+3Ch+var_C]
0x63398A: push    ecx
0x63398B: mov     ecx, esi
0x63398D: call    edx
0x63398F: pop     edi
0x633990: pop     esi
0x633991: pop     ebx
0x633992: add     esp, 30h
0x633995: retn    4
0x633998: cmp     byte ptr [edi+0D0h], 0
0x63399F: mov     ecx, esi
0x6339A1: jz      loc_633BCD
0x6339A7: call    sub_5E9A60
0x6339AC: test    al, al
0x6339AE: mov     ecx, edi
0x6339B0: jz      short loc_6339CD
0x6339B2: mov     eax, [edi]
0x6339B4: mov     edx, [eax+194h]
0x6339BA: push    esi
0x6339BB: call    edx
0x6339BD: mov     ecx, esi; this
0x6339BF: call    sub_5F8000
0x6339C4: pop     edi
0x6339C5: pop     esi
0x6339C6: pop     ebx
0x6339C7: add     esp, 30h
0x6339CA: retn    4
0x6339CD: call    sub_64ADA0
0x6339D2: test    al, al
0x6339D4: mov     ecx, esi
0x6339D6: jz      short loc_633A57
0x6339D8: mov     eax, [esi]
0x6339DA: mov     edx, [eax+174h]
0x6339E0: call    edx
0x6339E2: fld     [esp+3Ch+var_C]
0x6339E6: fld     qword ptr ds:0A2FC70h
0x6339EC: mov     ecx, [eax]
0x6339EE: fmul    st(1), st
0x6339F0: mov     edx, [eax+4]
0x6339F3: mov     eax, [eax+8]
0x6339F6: fxch    st(1)
0x6339F8: mov     [esp+3Ch+var_18], ecx
0x6339FC: fstp    [esp+3Ch+var_24]
0x633A00: mov     [esp+3Ch+var_14], edx
0x633A04: fld     [esp+3Ch+var_8]
0x633A08: mov     [esp+3Ch+var_10], eax
0x633A0C: fmul    st, st(1)
0x633A0E: fstp    [esp+3Ch+var_20]
0x633A12: fmul    [esp+3Ch+var_4]
0x633A16: fstp    [esp+3Ch+var_1C]
0x633A1A: fld     [esp+3Ch+var_24]
0x633A1E: fadd    [esp+3Ch+var_18]
0x633A22: fstp    [esp+3Ch+var_C]
0x633A26: mov     ecx, [esp+3Ch+var_C]
0x633A2A: fld     [esp+3Ch+var_20]
0x633A2E: mov     [esp+3Ch+var_30], ecx
0x633A32: fadd    [esp+3Ch+var_14]
0x633A36: fstp    [esp+3Ch+var_8]
0x633A3A: mov     edx, [esp+3Ch+var_8]
0x633A3E: fld     [esp+3Ch+var_1C]
0x633A42: mov     [esp+3Ch+var_2C], edx
0x633A46: fadd    [esp+3Ch+var_10]
0x633A4A: fstp    [esp+3Ch+var_4]
0x633A4E: mov     eax, [esp+3Ch+var_4]
0x633A52: jmp     loc_633B27
0x633A57: mov     edx, [esi]
0x633A59: mov     eax, [edx+174h]
0x633A5F: call    eax
0x633A61: fld     dword ptr ds:0A342A4h
0x633A67: mov     edx, [eax]
0x633A69: sub     esp, 14h
0x633A6C: fst     [esp+50h+var_40]; float
0x633A70: mov     ecx, esp
0x633A72: fstp    [esp+50h+var_44]; float
0x633A76: mov     [ecx], edx
0x633A78: mov     edx, [eax+4]
0x633A7B: mov     eax, [eax+8]
0x633A7E: mov     [ecx+4], edx
0x633A81: mov     [ecx+8], eax
0x633A84: lea     ecx, [esp+50h+var_C]
0x633A88: push    ecx; int
0x633A89: call    sub_62E790
0x633A8E: mov     edx, [eax]
0x633A90: add     esp, 18h
0x633A93: mov     [esp+3Ch+var_30], edx
0x633A97: mov     ecx, [eax+4]
0x633A9A: push    0; int
0x633A9C: mov     [esp+40h+var_2C], ecx
0x633AA0: mov     edx, [eax+8]
0x633AA3: push    1; float
0x633AA5: push    0; float
0x633AA7: mov     ecx, esi; this
0x633AA9: mov     [esp+48h+var_28], edx
0x633AAD: call    TESObjectREFR_GetParentCell
0x633AB2: mov     ecx, [esp+48h+var_30]
0x633AB6: mov     edx, [esp+48h+var_2C]
0x633ABA: push    eax; int
0x633ABB: sub     esp, 0Ch
0x633ABE: mov     eax, esp
0x633AC0: mov     [eax], ecx
0x633AC2: mov     ecx, [esp+58h+var_28]
0x633AC6: mov     [eax+4], edx
0x633AC9: lea     edx, [esp+58h+var_C]
0x633ACD: mov     [eax+8], ecx
0x633AD0: push    edx; int
0x633AD1: mov     ecx, esi
0x633AD3: call    sub_5E2E20
0x633AD8: mov     ecx, [eax]
0x633ADA: mov     [esp+3Ch+var_30], ecx
0x633ADE: mov     edx, [eax+4]
0x633AE1: mov     [esp+3Ch+var_2C], edx
0x633AE5: mov     eax, [eax+8]
0x633AE8: mov     edx, [esi]
0x633AEA: mov     [esp+3Ch+var_28], eax
0x633AEE: mov     eax, [edx+174h]
0x633AF4: mov     ecx, esi
0x633AF6: call    eax
0x633AF8: push    eax
0x633AF9: lea     ecx, [esp+40h+var_30]
0x633AFD: call    sub_8AA350
0x633B02: test    al, al
0x633B04: jz      short loc_633B2B
0x633B06: lea     ecx, [esp+3Ch+var_30]
0x633B0A: push    ecx
0x633B0B: lea     edx, [esp+40h+var_C]
0x633B0F: push    edx
0x633B10: mov     ecx, esi
0x633B12: call    sub_5E03E0
0x633B17: mov     ecx, [eax]
0x633B19: mov     [esp+3Ch+var_30], ecx
0x633B1D: mov     edx, [eax+4]
0x633B20: mov     [esp+3Ch+var_2C], edx
0x633B24: mov     eax, [eax+8]
0x633B27: mov     [esp+3Ch+var_28], eax
0x633B2B: mov     ecx, [esp+3Ch+var_30]
0x633B2F: mov     edx, [esp+3Ch+var_2C]
0x633B33: mov     eax, [esp+3Ch+var_28]
0x633B37: mov     ebx, [edi]
0x633B39: mov     [edi+27Ch], ecx
0x633B3F: mov     [edi+280h], edx
0x633B45: mov     ecx, esi; this
0x633B47: mov     [edi+284h], eax
0x633B4D: call    TESObjectREFR_GetWorldSpace
0x633B52: push    eax
0x633B53: mov     ecx, esi; this
0x633B55: call    TESObjectREFR_GetParentCell
0x633B5A: mov     ecx, [esp+40h+var_30]
0x633B5E: mov     edx, [esp+40h+var_2C]
0x633B62: push    eax
0x633B63: sub     esp, 0Ch
0x633B66: mov     eax, esp
0x633B68: mov     [eax], ecx
0x633B6A: mov     ecx, [esp+50h+var_28]
0x633B6E: mov     [eax+4], edx
0x633B71: mov     edx, [ebx+3DCh]
0x633B77: mov     [eax+8], ecx
0x633B7A: push    esi
0x633B7B: mov     ecx, edi
0x633B7D: call    edx
0x633B7F: test    al, al
0x633B81: jz      loc_633C45
0x633B87: mov     eax, [edi]
0x633B89: mov     edx, [eax+238h]
0x633B8F: push    101h
0x633B94: push    esi
0x633B95: mov     ecx, edi
0x633B97: call    edx
0x633B99: fld     dword ptr ds:0A37CC8h
0x633B9F: mov     ebx, [edi]
0x633BA1: push    ecx
0x633BA2: mov     ecx, [edi+34h]
0x633BA5: fstp    [esp+40h+var_40]
0x633BA8: call    sub_68A1A0
0x633BAD: mov     ecx, [edi+34h]
0x633BB0: push    eax
0x633BB1: call    sub_68A190
0x633BB6: mov     ecx, [edi+34h]
0x633BB9: push    eax
0x633BBA: call    sub_68A160
0x633BBF: push    eax
0x633BC0: mov     eax, [ebx+414h]
0x633BC6: push    esi
0x633BC7: mov     ecx, edi
0x633BC9: call    eax
0x633BCB: jmp     short loc_633C33
0x633BCD: call    sub_5E9A60
0x633BD2: test    al, al
0x633BD4: mov     edx, [edi]
0x633BD6: mov     ecx, edi
0x633BD8: jz      short loc_633BF3
0x633BDA: mov     eax, [edx+194h]
0x633BE0: push    esi
0x633BE1: call    eax
0x633BE3: mov     ecx, esi; this
0x633BE5: call    sub_5F8000
0x633BEA: pop     edi
0x633BEB: pop     esi
0x633BEC: pop     ebx
0x633BED: add     esp, 30h
0x633BF0: retn    4
0x633BF3: mov     eax, [edx+238h]
0x633BF9: push    101h
0x633BFE: push    esi
0x633BFF: call    eax
0x633C01: fld     dword ptr ds:0A37CC8h
0x633C07: mov     ebx, [edi]
0x633C09: push    ecx
0x633C0A: mov     ecx, [edi+34h]
0x633C0D: fstp    [esp+40h+var_40]
0x633C10: call    sub_68A1A0
0x633C15: mov     ecx, [edi+34h]
0x633C18: push    eax
0x633C19: call    sub_68A190
0x633C1E: mov     ecx, [edi+34h]
0x633C21: push    eax
0x633C22: call    sub_68A160
0x633C27: mov     edx, [ebx+414h]
0x633C2D: push    eax
0x633C2E: push    esi
0x633C2F: mov     ecx, edi
0x633C31: call    edx
0x633C33: fld     dword ptr ds:0B33E9Ch
0x633C39: fadd    dword ptr [edi+1A8h]
0x633C3F: fstp    dword ptr [edi+1A8h]
0x633C45: pop     edi
0x633C46: pop     esi
0x633C47: pop     ebx
0x633C48: add     esp, 30h
0x633C4B: retn    4
