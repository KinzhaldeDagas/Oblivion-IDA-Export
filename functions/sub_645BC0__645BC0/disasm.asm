0x645BC0: sub     esp, 14h
0x645BC3: push    ebx
0x645BC4: push    ebp
0x645BC5: push    esi
0x645BC6: mov     esi, ecx
0x645BC8: mov     eax, [esi+2Ch]
0x645BCB: test    eax, eax
0x645BCD: mov     ebp, [esi+8]
0x645BD0: push    edi
0x645BD1: mov     edi, [esp+24h+arg_0]
0x645BD5: mov     [esp+24h+var_14], ebp
0x645BD9: jz      short loc_645BE5
0x645BDB: mov     eax, [eax+8]
0x645BDE: shr     eax, 5
0x645BE1: test    al, 1
0x645BE3: jz      short loc_645BF0
0x645BE5: mov     edx, [esi]
0x645BE7: mov     eax, [edx+558h]
0x645BED: push    edi
0x645BEE: call    eax
0x645BF0: cmp     dword ptr [esi+2Ch], 0
0x645BF4: jnz     short loc_645C18
0x645BF6: cmp     [esp+24h+arg_4], 0
0x645BFB: jz      short loc_645C0C
0x645BFD: mov     edx, [esi]
0x645BFF: mov     eax, [edx+188h]
0x645C05: push    2
0x645C07: push    edi
0x645C08: mov     ecx, esi
0x645C0A: call    eax
0x645C0C: xor     al, al
0x645C0E: pop     edi
0x645C0F: pop     esi
0x645C10: pop     ebp
0x645C11: pop     ebx
0x645C12: add     esp, 14h
0x645C15: retn    8
0x645C18: mov     ecx, [ebp+28h]
0x645C1B: call    TargetData__GetTargetType
0x645C20: test    eax, eax
0x645C22: jnz     short loc_645C27
0x645C24: mov     [esi+38h], eax
0x645C27: push    edi
0x645C28: mov     ecx, ebp
0x645C2A: call    sub_566D00
0x645C2F: test    eax, eax
0x645C31: jz      short loc_645C70
0x645C33: mov     ecx, eax
0x645C35: call    sub_4D74B0
0x645C3A: test    al, al
0x645C3C: jz      short loc_645C70
0x645C3E: mov     ecx, [esi+2Ch]
0x645C41: mov     edx, [ecx]
0x645C43: mov     eax, [edx+170h]
0x645C49: call    eax
0x645C4B: cmp     eax, ds:0B35EB0h
0x645C51: jz      loc_645FD2
0x645C57: mov     ecx, [esi+2Ch]
0x645C5A: mov     edx, [ecx]
0x645C5C: mov     eax, [edx+170h]
0x645C62: call    eax
0x645C64: cmp     eax, ds:0B35EACh
0x645C6A: jz      loc_645FD2
0x645C70: cmp     byte ptr [ebp+20h], 9
0x645C74: jnz     short loc_645CBE
0x645C76: mov     ecx, ebp
0x645C78: call    sub_566DB0
0x645C7D: test    eax, eax
0x645C7F: mov     [esp+24h+arg_0], eax
0x645C83: fild    [esp+24h+arg_0]
0x645C87: jge     short loc_645C8F
0x645C89: fadd    dword ptr ds:0A2FC78h
0x645C8F: fadd    qword ptr ds:0A3DDE0h
0x645C95: push    ecx
0x645C96: mov     ecx, ebp
0x645C98: fstp    [esp+28h+arg_0]
0x645C9C: fld     [esp+28h+arg_0]
0x645CA0: fstp    [esp+28h+var_2C+4]; float
0x645CA3: push    0; char
0x645CA5: push    edi; int
0x645CA6: call    sub_566DC0
0x645CAB: test    al, al
0x645CAD: jnz     short loc_645CBE
0x645CAF: mov     edx, [esi]
0x645CB1: mov     eax, [edx+188h]
0x645CB7: push    0FFFFFFFEh
0x645CB9: push    edi
0x645CBA: mov     ecx, esi
0x645CBC: call    eax
0x645CBE: cmp     dword ptr [esi+34h], 0
0x645CC2: jnz     short loc_645D14
0x645CC4: mov     ecx, [esi+2Ch]
0x645CC7: mov     edx, [ecx]
0x645CC9: mov     eax, [edx+174h]
0x645CCF: mov     ebx, [esi]
0x645CD1: call    eax
0x645CD3: mov     ecx, [esi+2Ch]; this
0x645CD6: mov     ebp, eax
0x645CD8: call    TESObjectREFR_GetWorldSpace
0x645CDD: mov     ecx, [esi+2Ch]; this
0x645CE0: push    eax
0x645CE1: call    TESObjectREFR_GetParentCell
0x645CE6: mov     ecx, [ebp+0]
0x645CE9: mov     edx, [ebp+4]
0x645CEC: push    eax
0x645CED: sub     esp, 0Ch
0x645CF0: mov     eax, esp
0x645CF2: mov     [eax], ecx
0x645CF4: mov     ecx, [ebp+8]
0x645CF7: mov     [eax+4], edx
0x645CFA: mov     edx, [ebx+3DCh]
0x645D00: mov     [eax+8], ecx
0x645D03: push    edi
0x645D04: mov     ecx, esi
0x645D06: call    edx
0x645D08: test    al, al
0x645D0A: jz      loc_645C0C
0x645D10: mov     ebp, [esp+24h+var_14]
0x645D14: push    3Ah ; ':'; a1
0x645D16: call    TESForm_LookupByFormID
0x645D1B: add     esp, 4
0x645D1E: mov     ecx, offset TimeGlobals
0x645D23: mov     ebx, eax
0x645D25: call    TimeGlobals_GetGameHour
0x645D2A: fstp    [esp+24h+arg_0]
0x645D2E: fld     [esp+24h+arg_0]
0x645D32: mov     ecx, edi; this
0x645D34: fstp    [esp+24h+var_8]
0x645D38: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x645D3D: fcomp   [esp+24h+var_8]
0x645D41: fnstsw  ax
0x645D43: test    ah, 41h
0x645D46: jnz     short loc_645D56
0x645D48: fld     [esp+24h+arg_0]
0x645D4C: fadd    qword ptr ds:0A2F920h
0x645D52: fstp    [esp+24h+arg_0]
0x645D56: fld     [esp+24h+arg_0]
0x645D5A: mov     ecx, edi; this
0x645D5C: fstp    [esp+24h+var_8]
0x645D60: call    sub_6599B0; Noope the struct asosciated to the this pointer is bigger
0x645D65: fsubr   [esp+24h+var_8]
0x645D69: mov     ecx, [esi+8]
0x645D6C: push    2
0x645D6E: push    edi
0x645D6F: fstp    [esp+2Ch+var_C]
0x645D73: fld     dword ptr [ebx+24h]
0x645D76: fstp    [esp+2Ch+var_10]
0x645D7A: call    sub_5677B0
0x645D7F: mov     eax, [esi+2Ch]
0x645D82: fstp    [esp+24h+arg_0]
0x645D86: test    eax, eax
0x645D88: jz      loc_645E18
0x645D8E: push    0
0x645D90: push    eax
0x645D91: mov     ecx, edi
0x645D93: call    TesObjectREF_GetDistance
0x645D98: fld     [esp+24h+arg_0]
0x645D9C: fcompp
0x645D9E: fnstsw  ax
0x645DA0: test    ah, 5
0x645DA3: jp      short loc_645E18
0x645DA5: mov     ecx, edi; this
0x645DA7: call    Actor__GetProcessLevel
0x645DAC: fld     [esp+24h+arg_0]
0x645DB0: sub     esp, 8
0x645DB3: fstp    [esp+2Ch+var_2C+4]
0x645DB7: mov     ebp, [esi+2Ch]
0x645DBA: fld     [esp+2Ch+var_10]
0x645DBE: mov     ebx, [esi]
0x645DC0: fdivr   qword ptr ds:0A2F938h
0x645DC6: mov     ecx, ebp; this
0x645DC8: mov     dword ptr [esp+2Ch+var_8], eax
0x645DCC: fmul    [esp+2Ch+var_C]
0x645DD0: fstp    [esp+2Ch+arg_0]
0x645DD4: fld     [esp+2Ch+arg_0]
0x645DD8: fstp    [esp+2Ch+var_2C]
0x645DDB: call    TESObjectREFR_GetWorldSpace
0x645DE0: mov     ecx, [esi+2Ch]; this
0x645DE3: push    eax
0x645DE4: call    TESObjectREFR_GetParentCell
0x645DE9: push    eax
0x645DEA: mov     eax, [ebp+0]
0x645DED: mov     edx, [eax+174h]
0x645DF3: mov     ecx, ebp
0x645DF5: call    edx
0x645DF7: push    eax
0x645DF8: mov     eax, [ebx+418h]
0x645DFE: push    edi
0x645DFF: mov     ecx, esi
0x645E01: call    eax
0x645E03: mov     ecx, edi; this
0x645E05: call    Actor__GetProcessLevel
0x645E0A: cmp     eax, dword ptr [esp+24h+var_8]
0x645E0E: jnz     loc_645FD2
0x645E14: mov     ebp, [esp+24h+var_14]
0x645E18: push    edi
0x645E19: mov     ecx, ebp
0x645E1B: call    sub_5687D0
0x645E20: test    al, al
0x645E22: jz      loc_645C0C
0x645E28: cmp     [esp+24h+arg_4], 0
0x645E2D: mov     ecx, [esi+2Ch]
0x645E30: mov     [esp+24h+arg_0], ecx
0x645E34: jz      loc_645F90
0x645E3A: mov     eax, [esi+44h]
0x645E3D: xor     ebx, ebx
0x645E3F: test    eax, eax
0x645E41: mov     ebp, 1
0x645E46: mov     [esp+24h+arg_4], bl
0x645E4A: jz      short loc_645EAB
0x645E4C: cmp     [eax], ebx
0x645E4E: jz      short loc_645E71
0x645E50: mov     eax, [eax]
0x645E52: mov     edx, [eax]
0x645E54: mov     ecx, eax
0x645E56: mov     eax, [edx+198h]
0x645E5C: push    ebx
0x645E5D: call    eax
0x645E5F: test    al, al
0x645E61: jnz     short loc_645E71
0x645E63: mov     ecx, [esi+44h]
0x645E66: mov     ecx, [ecx]; this
0x645E68: call    Actor_IsNPC
0x645E6D: test    al, al
0x645E6F: jnz     short loc_645E96
0x645E71: mov     eax, [esi+44h]
0x645E74: mov     ebp, [eax+10h]
0x645E77: mov     ebx, [eax+4]
0x645E7A: sub     [esi+38h], ebp
0x645E7D: mov     eax, [eax]
0x645E7F: mov     edx, [eax]
0x645E81: mov     ecx, eax
0x645E83: mov     eax, [edx+198h]
0x645E89: push    0
0x645E8B: call    eax
0x645E8D: test    al, al
0x645E8F: jz      short loc_645E96
0x645E91: mov     [esp+24h+arg_4], 1
0x645E96: cmp     dword ptr [esi+38h], 0
0x645E9A: jg      short loc_645EAB
0x645E9C: mov     edx, [esi]
0x645E9E: mov     eax, [edx+188h]
0x645EA4: push    2
0x645EA6: push    edi
0x645EA7: mov     ecx, esi
0x645EA9: call    eax
0x645EAB: mov     ecx, [esi+2Ch]
0x645EAE: mov     edx, [ecx]
0x645EB0: mov     eax, [edx+190h]
0x645EB6: call    eax
0x645EB8: test    al, al
0x645EBA: jz      loc_645F69
0x645EC0: cmp     [esp+24h+arg_4], 0
0x645EC5: jnz     loc_645F69
0x645ECB: mov     ecx, [esi+2Ch]
0x645ECE: mov     edx, [ecx]
0x645ED0: mov     eax, [edx+190h]
0x645ED6: call    eax
0x645ED8: test    al, al
0x645EDA: jz      loc_645FC5
0x645EE0: mov     ecx, ds:0B333C4h; this
0x645EE6: cmp     [esi+2Ch], ecx
0x645EE9: jnz     short loc_645F22
0x645EEB: call    PlayerCharacter__IsSleeping?
0x645EF0: test    al, al
0x645EF2: mov     ecx, ds:0B333C4h
0x645EF8: jz      short loc_645F22
0x645EFA: cmp     byte ptr [ecx+12Ch], 0
0x645F01: jnz     short loc_645F22
0x645F03: mov     eax, ecx
0x645F05: mov     byte ptr [eax+594h], 0
0x645F0C: mov     dword ptr [ecx+590h], 0
0x645F16: xor     al, al
0x645F18: pop     edi
0x645F19: pop     esi
0x645F1A: pop     ebp
0x645F1B: pop     ebx
0x645F1C: add     esp, 14h
0x645F1F: retn    8
0x645F22: mov     eax, [esi+44h]
0x645F25: test    eax, eax
0x645F27: jz      short loc_645F5F
0x645F29: cmp     dword ptr [eax+0Ch], 0
0x645F2D: jle     short loc_645F52
0x645F2F: mov     eax, [esi+2Ch]
0x645F32: mov     edx, [esi]
0x645F34: mov     edx, [edx+228h]
0x645F3A: push    1
0x645F3C: push    0
0x645F3E: push    0
0x645F40: push    1
0x645F42: push    0
0x645F44: push    1
0x645F46: push    0
0x645F48: push    0
0x645F4A: push    eax
0x645F4B: push    edi
0x645F4C: mov     ecx, esi
0x645F4E: call    edx
0x645F50: jmp     short loc_645FC5
0x645F52: cmp     dword ptr [eax+8], 0
0x645F56: jz      short loc_645FC5
0x645F58: mov     eax, [eax+4]
0x645F5B: push    ebp
0x645F5C: push    eax
0x645F5D: jmp     short loc_645F6B
0x645F5F: cmp     [esi+2Ch], ecx
0x645F62: jz      short loc_645FC5
0x645F64: jmp     loc_645BFD
0x645F69: push    ebp
0x645F6A: push    ebx
0x645F6B: mov     ecx, [esi+2Ch]
0x645F6E: push    1
0x645F70: push    edi
0x645F71: call    ActivateRef
0x645F76: mov     eax, [esi+44h]
0x645F79: xor     edi, edi
0x645F7B: cmp     eax, edi
0x645F7D: jz      short loc_645F88
0x645F7F: push    eax
0x645F80: call    FormHeapFree
0x645F85: add     esp, 4
0x645F88: mov     [esi+44h], edi
0x645F8B: mov     [esi+2Ch], edi
0x645F8E: jmp     short loc_645FC5
0x645F90: mov     edx, [ecx]
0x645F92: mov     eax, [edx+190h]
0x645F98: call    eax
0x645F9A: test    al, al
0x645F9C: jnz     short loc_645FAF
0x645F9E: mov     ecx, [esi+2Ch]
0x645FA1: push    1
0x645FA3: push    0
0x645FA5: push    0
0x645FA7: push    edi
0x645FA8: call    ActivateRef
0x645FAD: jmp     short loc_645FC5
0x645FAF: cmp     byte ptr [ebp+20h], 2
0x645FB3: jnz     short loc_645FDE
0x645FB5: mov     ecx, [edi+58h]
0x645FB8: mov     edx, [ecx]
0x645FBA: mov     eax, [edx+188h]
0x645FC0: push    2
0x645FC2: push    edi
0x645FC3: call    eax
0x645FC5: mov     ecx, [esp+24h+arg_0]
0x645FC9: test    ecx, ecx
0x645FCB: jz      short loc_645FD2
0x645FCD: call    RunScripts
0x645FD2: mov     al, 1
0x645FD4: pop     edi
0x645FD5: pop     esi
0x645FD6: pop     ebp
0x645FD7: pop     ebx
0x645FD8: add     esp, 14h
0x645FDB: retn    8
0x645FDE: mov     ecx, ds:0B333C4h; this
0x645FE4: cmp     [esi+2Ch], ecx
0x645FE7: jnz     short loc_645FD2
0x645FE9: call    PlayerCharacter__IsSleeping?
0x645FEE: test    al, al
0x645FF0: jz      short loc_645FD2
0x645FF2: mov     eax, ds:0B333C4h
0x645FF7: cmp     byte ptr [eax+12Ch], 0
0x645FFE: jnz     short loc_645FD2
0x646000: pop     edi
0x646001: pop     esi
0x646002: pop     ebp
0x646003: mov     dword ptr [eax+590h], 0
0x64600D: mov     byte ptr [eax+594h], 1
0x646014: xor     al, al
0x646016: pop     ebx
0x646017: add     esp, 14h
0x64601A: retn    8
