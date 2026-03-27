0x444C70: sub     esp, 0Ch
0x444C73: cmp     dword ptr ds:0B33A98h, 0
0x444C7A: push    esi
0x444C7B: push    edi
0x444C7C: mov     esi, ecx
0x444C7E: jz      loc_444EB0
0x444C84: cmp     dword ptr [esi+34h], 0
0x444C88: jnz     loc_444EB0
0x444C8E: cmp     byte ptr ds:0B33A69h, 0
0x444C95: jnz     loc_444EB0
0x444C9B: cmp     [esp+14h+arg_4], 0
0x444CA0: mov     ecx, [esi+8]
0x444CA3: mov     byte ptr ds:0B33A69h, 1
0x444CAA: jz      loc_444E16
0x444CB0: mov     eax, [ecx]
0x444CB2: mov     edx, [eax+8]
0x444CB5: call    edx
0x444CB7: mov     ecx, [esi+4]
0x444CBA: mov     eax, [ecx]
0x444CBC: mov     edx, [eax+8]
0x444CBF: call    edx
0x444CC1: mov     eax, ds:0B4310Ch
0x444CC6: test    eax, eax
0x444CC8: mov     byte ptr ds:0B06A28h, 1
0x444CCF: jz      short loc_444CF9
0x444CD1: mov     edi, eax
0x444CD3: add     eax, 4
0x444CD6: push    eax; lpAddend
0x444CD7: call    dword ptr ds:0A2807Ch
0x444CDD: test    eax, eax
0x444CDF: jnz     short loc_444CEF
0x444CE1: test    edi, edi
0x444CE3: jz      short loc_444CEF
0x444CE5: mov     eax, [edi]
0x444CE7: mov     edx, [eax]
0x444CE9: push    1
0x444CEB: mov     ecx, edi
0x444CED: call    edx
0x444CEF: mov     dword ptr ds:0B4310Ch, 0
0x444CF9: mov     edx, [esi+24h]
0x444CFC: mov     ecx, [esi+8]
0x444CFF: mov     eax, [ecx]
0x444D01: mov     eax, [eax+10h]
0x444D04: push    edx
0x444D05: mov     edx, [esi+20h]
0x444D08: push    edx
0x444D09: call    eax
0x444D0B: mov     eax, [esi+24h]
0x444D0E: mov     ecx, [esi+4]
0x444D11: mov     edx, [ecx]
0x444D13: mov     edx, [edx+10h]
0x444D16: push    eax
0x444D17: mov     eax, [esi+20h]
0x444D1A: push    eax
0x444D1B: call    edx
0x444D1D: push    0
0x444D1F: push    0
0x444D21: mov     ecx, esi
0x444D23: call    sub_43FFF0
0x444D28: push    0; a2
0x444D2A: mov     ecx, esi; this
0x444D2C: call    sub_43FC20
0x444D31: push    0
0x444D33: mov     ecx, esi
0x444D35: call    sub_4430F0
0x444D3A: mov     ecx, esi
0x444D3C: call    sub_444340
0x444D41: mov     ecx, ds:0B33A10h
0x444D47: push    4
0x444D49: call    sub_434020
0x444D4E: mov     eax, [esp+14h+a2]
0x444D52: fld     dword ptr [eax]
0x444D54: lea     ecx, [esp+14h+a3]
0x444D58: fstp    [esp+14h+var_C]
0x444D5C: push    ecx; a3
0x444D5D: fld     dword ptr [eax+4]
0x444D60: push    eax; a2
0x444D61: fstp    [esp+1Ch+var_8]
0x444D65: mov     ecx, esi; this
0x444D67: fldz
0x444D69: fstp    [esp+1Ch+a3]
0x444D6D: call    GetTerrainHeight
0x444D72: fld1
0x444D74: mov     edx, ds:0B258DCh
0x444D7A: mov     ecx, ds:0B258E0h
0x444D80: sub     esp, 10h
0x444D83: fstp    [esp+24h+var_18]; float
0x444D87: mov     eax, esp
0x444D89: mov     [eax], edx
0x444D8B: mov     edx, ds:0B258E4h
0x444D91: mov     [eax+4], ecx
0x444D94: mov     ecx, [esp+24h+var_C]
0x444D98: mov     [eax+8], edx
0x444D9B: mov     edx, [esp+24h+var_8]
0x444D9F: sub     esp, 0Ch
0x444DA2: mov     eax, esp
0x444DA4: mov     [eax], ecx
0x444DA6: mov     ecx, [esp+30h+a3]
0x444DAA: mov     [eax+4], edx
0x444DAD: mov     byte ptr ds:0B2CBC0h, 0
0x444DB4: mov     [eax+8], ecx
0x444DB7: call    DrawGrassPass?
0x444DBC: add     esp, 1Ch
0x444DBF: mov     byte ptr ds:0B2CBC0h, 1
0x444DC6: cmp     byte ptr [esi+51h], 0
0x444DCA: jnz     short loc_444DEF
0x444DCC: cmp     byte ptr [esi+52h], 0
0x444DD0: jnz     short loc_444DEF
0x444DD2: mov     ecx, offset flt_B33A48
0x444DD7: call    GameSetting_GetSafeFloatPointer
0x444DDC: fld     dword ptr [eax]
0x444DDE: push    ecx
0x444DDF: mov     ecx, ds:0B3A6B0h
0x444DE5: fstp    [esp+18h+var_18]; float
0x444DE8: push    2; int
0x444DEA: call    sub_5732D0
0x444DEF: mov     ecx, esi
0x444DF1: call    sub_441610
0x444DF6: mov     ecx, offset ActorProcessManager_ptr
0x444DFB: call    sub_678750
0x444E00: mov     ecx, offset ActorProcessManager_ptr
0x444E05: call    sub_675F40
0x444E0A: mov     ecx, offset ActorProcessManager_ptr
0x444E0F: call    sub_675FC0
0x444E14: jmp     short loc_444E7E
0x444E16: mov     eax, [esi+24h]
0x444E19: mov     edx, [ecx]
0x444E1B: mov     edx, [edx+10h]
0x444E1E: push    eax
0x444E1F: mov     eax, [esi+20h]
0x444E22: push    eax
0x444E23: call    edx
0x444E25: mov     edx, [esi+24h]
0x444E28: mov     ecx, [esi+4]
0x444E2B: mov     eax, [ecx]
0x444E2D: mov     eax, [eax+10h]
0x444E30: push    edx
0x444E31: mov     edx, [esi+20h]
0x444E34: push    edx
0x444E35: call    eax
0x444E37: push    1
0x444E39: mov     ecx, esi
0x444E3B: call    sub_4430F0
0x444E40: mov     ecx, esi
0x444E42: call    sub_444340
0x444E47: mov     ecx, [esi+74h]
0x444E4A: call    sub_4EF7E0
0x444E4F: mov     ecx, ds:0B333C4h
0x444E55: mov     edx, [ecx]
0x444E57: mov     eax, [edx+174h]
0x444E5D: call    eax
0x444E5F: mov     edx, [eax]
0x444E61: push    1
0x444E63: sub     esp, 0Ch
0x444E66: mov     ecx, esp
0x444E68: mov     [ecx], edx
0x444E6A: mov     edx, [eax+4]
0x444E6D: mov     eax, [eax+8]
0x444E70: mov     [ecx+4], edx
0x444E73: mov     [ecx+8], eax
0x444E76: call    sub_4EA6E0
0x444E7B: add     esp, 10h
0x444E7E: mov     ecx, esi
0x444E80: call    ScriptRunner_RunScript
0x444E85: fldz
0x444E87: push    0; a3
0x444E89: push    ecx
0x444E8A: mov     ecx, [esi+10h]; this
0x444E8D: fstp    [esp+1Ch+anonymous_0+4]; a2
0x444E90: call    NiAVObject_UpdateNiAVObject
0x444E95: push    0; a2
0x444E97: mov     ecx, esi; this
0x444E99: call    sub_43FC20
0x444E9E: mov     ecx, ds:0B33A98h
0x444EA4: call    sub_447130
0x444EA9: mov     byte ptr ds:0B33A69h, 0
0x444EB0: pop     edi
0x444EB1: pop     esi
0x444EB2: add     esp, 0Ch
0x444EB5: retn    8
