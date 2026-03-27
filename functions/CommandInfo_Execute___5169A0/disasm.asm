0x5169A0: push    0FFFFFFFFh
0x5169A2: push    offset CommandInfo_Execute?_SEH
0x5169A7: mov     eax, large fs:0
0x5169AD: push    eax
0x5169AE: sub     esp, 73Ch
0x5169B4: mov     eax, ds:0B30AACh
0x5169B9: xor     eax, esp
0x5169BB: mov     [esp+748h+var_10], eax
0x5169C2: push    ebx
0x5169C3: push    ebp
0x5169C4: push    esi
0x5169C5: push    edi
0x5169C6: mov     eax, ds:0B30AACh
0x5169CB: xor     eax, esp
0x5169CD: push    eax
0x5169CE: lea     eax, [esp+75Ch+var_C]
0x5169D5: mov     large fs:0, eax
0x5169DB: mov     eax, [esp+75Ch+a8]
0x5169E2: mov     ebp, [esp+75Ch+a5]
0x5169E9: mov     ebx, [esp+75Ch+a4]
0x5169F0: mov     edx, [esp+75Ch+a10]
0x5169F7: mov     edi, [ebp+30h]
0x5169FA: mov     esi, ecx
0x5169FC: mov     ecx, [esp+75Ch+ArgList]
0x516A03: cmp     ecx, 10h
0x516A06: mov     [esp+75Ch+var_73C], eax
0x516A0A: mov     eax, [esp+75Ch+a9]
0x516A11: mov     [esp+75Ch+a1], ebx
0x516A15: mov     [esp+75Ch+var_730], edx
0x516A19: mov     [esp+75Ch+a3], eax
0x516A1D: jnz     loc_516B55
0x516A23: movsx   ecx, word ptr [edi+eax]
0x516A27: cmp     ecx, 1Eh
0x516A2A: lea     edx, [eax+2]
0x516A2D: mov     [esp+75Ch+a3], edx
0x516A31: ja      loc_516ACF
0x516A37: mov     eax, [edi+edx]
0x516A3A: mov     [esp+75Ch+var_730], eax
0x516A3E: lea     eax, [ecx+ecx*4]
0x516A41: add     eax, eax
0x516A43: add     eax, eax
0x516A45: mov     ecx, ds:dword_B0AF5C[eax+eax]
0x516A4C: add     eax, eax
0x516A4E: add     edx, 4
0x516A51: cmp     byte ptr [esp+75Ch+a12], 0
0x516A59: mov     [esp+75Ch+a1], ecx
0x516A5D: mov     ecx, ds:off_B0AF60[eax]
0x516A63: mov     [esp+75Ch+a3], edx
0x516A67: jz      short loc_516A9F
0x516A69: mov     eax, [esp+75Ch+a1]
0x516A6D: test    eax, eax
0x516A6F: jz      loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x516A75: mov     edx, [esp+75Ch+var_73C]
0x516A79: cmp     dword ptr [edx], 0
0x516A7C: jz      loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x516A82: mov     ecx, [esi+8]
0x516A85: mov     edx, [esi]
0x516A87: push    ecx; l
0x516A88: push    ebp; a6
0x516A89: push    edx; a5
0x516A8A: push    ebx; a4
0x516A8B: lea     ecx, [esp+76Ch+a3]
0x516A8F: push    ecx; a3
0x516A90: push    edi; a2
0x516A91: push    eax; a1
0x516A92: call    Script_ExtractArgs
0x516A97: add     esp, 1Ch
0x516A9A: jmp     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x516A9F: cmp     ds:byte_B0AF58[eax], 0
0x516AA6: jz      short loc_516AD6
0x516AA8: test    ebx, ebx
0x516AAA: jnz     short loc_516AD6
0x516AAC: mov     edx, [esp+75Ch+a11]
0x516AB3: mov     eax, [ebp+0]
0x516AB6: push    edx
0x516AB7: mov     edx, [eax+0D4h]
0x516ABD: mov     ecx, ebp
0x516ABF: call    edx
0x516AC1: push    eax
0x516AC2: push    offset aScriptSLineDNu; "Script '%s', line %d: Null for a requir"...
0x516AC7: call    PrintError
0x516ACC: add     esp, 0Ch
0x516ACF: xor     al, al
0x516AD1: jmp     loc_5172D5
0x516AD6: test    ecx, ecx
0x516AD8: jz      short loc_516B2A
0x516ADA: lea     eax, [esp+75Ch+a3]
0x516ADE: push    eax
0x516ADF: mov     eax, [esi+8]
0x516AE2: lea     edx, [esp+760h+a1]
0x516AE6: push    edx
0x516AE7: mov     edx, [esi]
0x516AE9: push    eax
0x516AEA: mov     eax, [esp+768h+a1]
0x516AEE: push    ebp
0x516AEF: push    edx
0x516AF0: push    ebx
0x516AF1: push    edi
0x516AF2: push    eax
0x516AF3: call    ecx
0x516AF5: add     esp, 20h
0x516AF8: test    al, al
0x516AFA: jz      short loc_516B26
0x516AFC: fldz
0x516AFE: fcomp   qword ptr [esp+75Ch+a1]
0x516B02: fnstsw  ax
0x516B04: test    ah, 44h
0x516B07: jnp     short loc_516B17
0x516B09: cmp     byte ptr [esp+75Ch+a13], 0
0x516B11: jz      loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x516B17: mov     ecx, [esp+75Ch+var_730]
0x516B1B: mov     eax, [esp+75Ch+var_73C]
0x516B1F: add     [eax], ecx
0x516B21: jmp     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x516B26: mov     edx, [esp+75Ch+a3]
0x516B2A: mov     eax, [ebp+0]
0x516B2D: push    edx
0x516B2E: mov     edx, [esp+760h+a11]
0x516B35: push    edx
0x516B36: mov     edx, [eax+0D4h]
0x516B3C: mov     ecx, ebp
0x516B3E: call    edx
0x516B40: push    eax
0x516B41: push    offset aScriptSLineDEr; "Script '%s', line %d: Error Executing l"...
0x516B46: call    PrintError
0x516B4B: add     esp, 10h
0x516B4E: xor     al, al
0x516B50: jmp     loc_5172D5
0x516B55: cmp     byte ptr [esp+75Ch+a13], 0
0x516B5D: jnz     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x516B63: add     ecx, 0FFFFFFF0h; switch 15 cases
0x516B66: cmp     ecx, 0Eh
0x516B69: ja      CommandInfo_Execute?___def_516B76; jumptable 00516B76 default case, cases 18-20,26,27
0x516B6F: movzx   ecx, ds:byte_517320[ecx]
0x516B76: jmp     ds:jpt_516B76[ecx*4]; switch jump
0x516B7D: mov     bl, [edi+eax]; jumptable 00516B76 case 21
0x516B80: mov     edx, [esi+8]
0x516B83: xor     ecx, ecx
0x516B85: add     eax, 1
0x516B88: cmp     bl, 47h ; 'G'
0x516B8B: mov     [esp+75Ch+var_735], bl
0x516B8F: mov     [esp+75Ch+a3], eax
0x516B93: mov     [esp+75Ch+var_73C], ecx
0x516B97: mov     [esp+75Ch+var_734], edx
0x516B9B: mov     [esp+75Ch+var_730], ecx
0x516B9F: jz      short loc_516BAA
0x516BA1: cmp     bl, 72h ; 'r'
0x516BA4: jnz     loc_516C64
0x516BAA: movzx   ecx, word ptr [edi+eax]
0x516BAE: add     eax, 2
0x516BB1: cmp     bl, 72h ; 'r'
0x516BB4: mov     [esp+75Ch+a3], eax
0x516BB8: jnz     short loc_516BCA
0x516BBA: mov     dl, [edi+eax]
0x516BBD: add     eax, 1
0x516BC0: mov     [esp+75Ch+var_735], dl
0x516BC4: mov     [esp+75Ch+a3], eax
0x516BC8: mov     bl, dl
0x516BCA: mov     eax, [esp+75Ch+var_734]
0x516BCE: movsx   ecx, cx
0x516BD1: push    eax; int
0x516BD2: push    ecx; int
0x516BD3: mov     ecx, ebp; int
0x516BD5: call    Script_GetRefVariableByIndex
0x516BDA: cmp     byte ptr [esp+75Ch+a12], 0
0x516BE2: mov     [esp+75Ch+var_730], eax
0x516BE6: jnz     short loc_516C60
0x516BE8: cmp     bl, 72h ; 'r'
0x516BEB: jz      loc_516ACF
0x516BF1: test    eax, eax
0x516BF3: jz      loc_516ACF
0x516BF9: mov     eax, [eax+8]
0x516BFC: test    eax, eax
0x516BFE: jz      loc_516ACF
0x516C04: push    0; int
0x516C06: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x516C0B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x516C10: push    0; int
0x516C12: push    eax; void *
0x516C13: call    OblivionDynamicCast
0x516C18: add     esp, 14h
0x516C1B: test    eax, eax
0x516C1D: jz      short loc_516C2C
0x516C1F: mov     ecx, eax; this
0x516C21: call    sub_4D7250
0x516C26: mov     [esp+75Ch+var_734], eax
0x516C2A: jmp     short loc_516C55
0x516C2C: mov     edx, [esp+75Ch+var_730]
0x516C30: mov     eax, [edx+8]
0x516C33: push    0; int
0x516C35: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x516C3A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x516C3F: push    0; int
0x516C41: push    eax; void *
0x516C42: call    OblivionDynamicCast
0x516C47: add     esp, 14h
0x516C4A: test    eax, eax
0x516C4C: jz      short loc_516C55
0x516C4E: mov     ecx, [eax+58h]
0x516C51: mov     [esp+75Ch+var_734], ecx
0x516C55: cmp     [esp+75Ch+var_734], 0
0x516C5A: jz      loc_516B4E
0x516C60: mov     eax, [esp+75Ch+a3]
0x516C64: cmp     bl, 47h ; 'G'
0x516C67: jz      short loc_516C78
0x516C69: movzx   edx, word ptr [edi+eax]
0x516C6D: add     eax, 2
0x516C70: mov     [esp+75Ch+var_73C], edx
0x516C74: mov     [esp+75Ch+a3], eax
0x516C78: movzx   ebx, word ptr [edi+eax]
0x516C7C: add     eax, 2
0x516C7F: lea     ecx, [esp+75Ch+var_720]
0x516C83: mov     [esp+75Ch+a3], eax
0x516C87: call    sub_4F32E0
0x516C8C: mov     eax, [esp+75Ch+a12]
0x516C93: mov     ecx, [esi+8]
0x516C96: mov     edx, [esi]
0x516C98: push    eax
0x516C99: mov     eax, [esp+760h+a1]
0x516C9D: movsx   ebx, bx
0x516CA0: push    ebx
0x516CA1: push    ecx
0x516CA2: mov     ecx, [esp+768h+a3]
0x516CA6: push    ebp
0x516CA7: push    edx
0x516CA8: add     edi, ecx
0x516CAA: push    eax
0x516CAB: push    edi
0x516CAC: lea     ecx, [esp+778h+var_720]
0x516CB0: mov     [esp+778h+var_4], 0
0x516CBB: call    sub_4F3620
0x516CC0: mov     eax, [esp+75Ch+var_720]
0x516CC4: add     [esp+75Ch+a3], ebx
0x516CC8: fst     [esp+75Ch+var_728]
0x516CCC: test    eax, eax
0x516CCE: jz      short loc_516D1F
0x516CD0: mov     edx, ds:0B09DC0h[eax*4]
0x516CD7: fstp    st
0x516CD9: mov     eax, [esp+75Ch+a11]
0x516CE0: push    edx
0x516CE1: mov     edx, [ebp+0]
0x516CE4: push    eax
0x516CE5: mov     eax, [edx+0D4h]
0x516CEB: mov     ecx, ebp
0x516CED: call    eax
0x516CEF: push    eax
0x516CF0: push    offset aScriptSLineDSe; "Script '%s', line %d: Set expression re"...
0x516CF5: call    PrintError
0x516CFA: add     esp, 10h
0x516CFD: mov     dword ptr [ebp+20h], 0
0x516D04: lea     ecx, [esp+75Ch+var_720]; void *
0x516D08: mov     [esp+75Ch+var_4], 0FFFFFFFFh
0x516D13: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x516D18: xor     al, al
0x516D1A: jmp     loc_5172D5
0x516D1F: cmp     byte ptr [esp+75Ch+a12], 0
0x516D27: jnz     loc_516E84
0x516D2D: mov     al, [esp+75Ch+var_735]
0x516D31: cmp     al, 47h ; 'G'
0x516D33: jnz     short loc_516D78
0x516D35: mov     eax, [esp+75Ch+var_730]
0x516D39: test    eax, eax
0x516D3B: jz      short loc_516D74
0x516D3D: mov     eax, [eax+8]
0x516D40: test    eax, eax
0x516D42: jz      short loc_516D74
0x516D44: fstp    [esp+75Ch+a1]
0x516D48: fld     [esp+75Ch+a1]
0x516D4C: fst     dword ptr [eax+24h]
0x516D4F: cmp     byte ptr ds:0B361ACh, 0
0x516D56: jz      loc_516E84
0x516D5C: sub     esp, 8
0x516D5F: fstp    [esp+764h+var_764]
0x516D62: push    offset aSetGlobal0_2f; "set global >> %0.2f"
0x516D67: call    Interface_ConsolePrint
0x516D6C: add     esp, 0Ch
0x516D6F: jmp     loc_516E86
0x516D74: fstp    st
0x516D76: jmp     short loc_516D04
0x516D78: mov     edi, [esp+75Ch+var_734]
0x516D7C: test    edi, edi
0x516D7E: jz      short loc_516D74
0x516D80: cmp     al, 66h ; 'f'
0x516D82: jz      short loc_516DD4
0x516D84: cmp     al, 6Ch ; 'l'
0x516D86: jz      short loc_516D90
0x516D88: cmp     al, 73h ; 's'
0x516D8A: jnz     loc_516E12
0x516D90: call    Double_To_SInt32
0x516D95: movsx   esi, word ptr [esp+75Ch+var_73C]
0x516D9A: mov     ebx, eax
0x516D9C: mov     [esp+75Ch+var_734], ebx
0x516DA0: sub     esp, 8
0x516DA3: mov     ecx, edi
0x516DA5: fild    [esp+764h+var_734]
0x516DA9: fstp    [esp+764h+var_764]
0x516DAC: push    esi
0x516DAD: call    sub_4FB630
0x516DB2: cmp     byte ptr ds:0B361ACh, 0
0x516DB9: jz      short loc_516E14
0x516DBB: mov     ecx, [edi]
0x516DBD: push    ebx
0x516DBE: push    esi
0x516DBF: call    sub_4FA840
0x516DC4: push    eax
0x516DC5: push    offset aSetSI; "set %s >> %i"
0x516DCA: call    Interface_ConsolePrint
0x516DCF: add     esp, 0Ch
0x516DD2: jmp     short loc_516E14
0x516DD4: movsx   esi, word ptr [esp+75Ch+var_73C]
0x516DD9: sub     esp, 8
0x516DDC: mov     ecx, edi
0x516DDE: fstp    [esp+764h+var_764]
0x516DE1: push    esi
0x516DE2: call    sub_4FB630
0x516DE7: cmp     byte ptr ds:0B361ACh, 0
0x516DEE: jz      short loc_516E14
0x516DF0: fld     [esp+75Ch+var_728]
0x516DF4: mov     ecx, [edi]
0x516DF6: sub     esp, 8
0x516DF9: fstp    [esp+764h+var_764]
0x516DFC: push    esi
0x516DFD: call    sub_4FA840
0x516E02: push    eax
0x516E03: push    offset aSetS_2f; "set %s >> %.2f"
0x516E08: call    Interface_ConsolePrint
0x516E0D: add     esp, 10h
0x516E10: jmp     short loc_516E14
0x516E12: fstp    st
0x516E14: mov     eax, [esp+75Ch+var_730]
0x516E18: test    eax, eax
0x516E1A: jz      short loc_516E22
0x516E1C: cmp     dword ptr [eax+8], 0
0x516E20: jnz     short loc_516E29
0x516E22: cmp     [esp+75Ch+a1], 0
0x516E27: jz      short loc_516E86
0x516E29: test    eax, eax
0x516E2B: jz      short loc_516E4B
0x516E2D: mov     ecx, [eax+8]
0x516E30: push    0; int
0x516E32: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x516E37: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x516E3C: push    0; int
0x516E3E: push    ecx; void *
0x516E3F: call    OblivionDynamicCast
0x516E44: add     esp, 14h
0x516E47: mov     esi, eax
0x516E49: jmp     short loc_516E4F
0x516E4B: mov     esi, [esp+75Ch+a1]
0x516E4F: test    esi, esi
0x516E51: jz      short loc_516E86
0x516E53: mov     edx, [esi+8]
0x516E56: shr     edx, 0Eh
0x516E59: test    dl, 1
0x516E5C: jnz     short loc_516E86
0x516E5E: mov     ecx, esi; this
0x516E60: call    TESObjectREFR_GetParentCell
0x516E65: test    eax, eax
0x516E67: jz      short loc_516E76
0x516E69: mov     ecx, esi; this
0x516E6B: call    TESObjectREFR_GetParentCell
0x516E70: cmp     byte ptr [eax+26h], 6
0x516E74: jz      short loc_516E86
0x516E76: mov     ecx, ds:0B333A0h
0x516E7C: push    esi
0x516E7D: call    sub_441670
0x516E82: jmp     short loc_516E86
0x516E84: fstp    st
0x516E86: lea     ecx, [esp+75Ch+var_720]; void *
0x516E8A: mov     [esp+75Ch+var_4], 0FFFFFFFFh
0x516E95: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x516E9A: jmp     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x516E9F: mov     eax, [esi+20h]; jumptable 00516B76 case 22
0x516EA2: cmp     dword ptr [esi+eax*4+24h], 0
0x516EA7: jz      short loc_516EAF
0x516EA9: add     eax, 1
0x516EAC: mov     [esi+20h], eax
0x516EAF: mov     eax, [esi+20h]
0x516EB2: mov     dword ptr [esi+eax*4+24h], 1
0x516EBA: mov     eax, [esp+75Ch+a3]
0x516EBE: movzx   ecx, word ptr [edi+eax]; jumptable 00516B76 case 24
0x516EC2: add     eax, 2
0x516EC5: mov     [esp+75Ch+a3], eax
0x516EC9: movzx   edx, word ptr [edi+eax]
0x516ECD: mov     [esp+75Ch+var_73C], ecx
0x516ED1: add     eax, 2
0x516ED4: lea     ecx, [esp+75Ch+var_720]
0x516ED8: mov     [esp+75Ch+a1], edx
0x516EDC: mov     [esp+75Ch+a3], eax
0x516EE0: call    sub_4F32E0
0x516EE5: mov     eax, [esp+75Ch+a12]
0x516EEC: test    al, al
0x516EEE: mov     [esp+75Ch+var_4], 1
0x516EF9: jz      short loc_516F2B
0x516EFB: mov     ecx, [esi+8]
0x516EFE: mov     edx, [esi]
0x516F00: push    eax
0x516F01: movsx   eax, word ptr [esp+760h+a1]
0x516F06: push    eax
0x516F07: mov     eax, [esp+764h+a3]
0x516F0B: push    ecx
0x516F0C: push    ebp
0x516F0D: push    edx
0x516F0E: push    ebx
0x516F0F: add     edi, eax
0x516F11: push    edi
0x516F12: lea     ecx, [esp+778h+var_720]
0x516F16: call    sub_4F3620
0x516F1B: mov     ecx, [esi+20h]
0x516F1E: or      dword ptr [esi+ecx*4+24h], 2
0x516F23: fstp    st
0x516F25: lea     eax, [esi+ecx*4+24h]
0x516F29: jmp     short loc_516F7C
0x516F2B: mov     edx, [esi+20h]
0x516F2E: test    byte ptr [esi+edx*4+24h], 2
0x516F33: jnz     short loc_516F71
0x516F35: movsx   eax, word ptr [esp+75Ch+a1]
0x516F3A: mov     ecx, [esi+8]
0x516F3D: mov     edx, [esi]
0x516F3F: push    0
0x516F41: push    eax
0x516F42: mov     eax, [esp+764h+a3]
0x516F46: push    ecx
0x516F47: push    ebp
0x516F48: push    edx
0x516F49: push    ebx
0x516F4A: add     edi, eax
0x516F4C: push    edi
0x516F4D: lea     ecx, [esp+778h+var_720]
0x516F51: call    sub_4F3620
0x516F56: fcomp   qword ptr ds:0A2FC68h
0x516F5C: fnstsw  ax
0x516F5E: test    ah, 44h
0x516F61: jnp     short loc_516F71
0x516F63: mov     ecx, [esi+20h]
0x516F66: or      dword ptr [esi+ecx*4+24h], 2
0x516F6B: lea     eax, [esi+ecx*4+24h]
0x516F6F: jmp     short loc_516F7C
0x516F71: movsx   edx, word ptr [esp+75Ch+var_73C]
0x516F76: mov     eax, [esp+75Ch+var_730]
0x516F7A: add     [eax], edx
0x516F7C: cmp     [esp+75Ch+var_720], 0
0x516F81: jz      short loc_516FC0
0x516F83: mov     eax, [esp+75Ch+a11]
0x516F8A: mov     dword ptr [esi+18h], 6
0x516F91: mov     edx, [ebp+0]
0x516F94: push    eax
0x516F95: mov     eax, [edx+0D4h]
0x516F9B: mov     ecx, ebp
0x516F9D: call    eax
0x516F9F: push    eax
0x516FA0: push    offset aScriptSLineDFa; "Script '%s', line %d: failed to evaluat"...
0x516FA5: call    PrintError
0x516FAA: mov     ecx, [esp+768h+var_720]
0x516FAE: mov     dword ptr [ebp+20h], 0
0x516FB5: add     esp, 0Ch
0x516FB8: mov     [esi+1Ch], ecx
0x516FBB: jmp     loc_516D04
0x516FC0: movsx   edx, word ptr [esp+75Ch+a1]
0x516FC5: add     [esp+75Ch+a3], edx
0x516FC9: jmp     loc_516E86
0x516FCE: movzx   ecx, word ptr [edi+eax]; jumptable 00516B76 case 23
0x516FD2: add     eax, 2
0x516FD5: mov     [esp+75Ch+a3], eax
0x516FD9: mov     eax, [esi+20h]
0x516FDC: test    byte ptr [esi+eax*4+24h], 2
0x516FE1: lea     esi, [esi+eax*4+24h]
0x516FE5: jnz     short loc_516FEF
0x516FE7: or      dword ptr [esi], 2
0x516FEA: jmp     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x516FEF: cmp     byte ptr [esp+75Ch+a12], 0
0x516FF7: jnz     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x516FFD: movsx   ecx, cx
0x517000: add     [edx], ecx
0x517002: jmp     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x517007: mov     edx, [esi+20h]; jumptable 00516B76 case 25
0x51700A: mov     dword ptr [esi+edx*4+24h], 0
0x517012: mov     eax, [esi+20h]
0x517015: test    eax, eax
0x517017: jz      loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x51701D: add     eax, 0FFFFFFFFh
0x517020: mov     [esi+20h], eax
0x517023: jmp     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x517028: cmp     byte ptr [esp+75Ch+a12], 0; jumptable 00516B76 case 30
0x517030: jnz     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x517036: mov     eax, [esp+75Ch+ArgList]; jumptable 00516B76 default case, cases 18-20,26,27
0x51703D: push    eax; a1
0x51703E: call    ScriptRunner_LookupCommandByOpcode
0x517043: add     esp, 4
0x517046: test    eax, eax
0x517048: jnz     short loc_5170C9
0x51704A: mov     [esp+75Ch+a1], eax
0x51704E: mov     word ptr [esp+75Ch+a1+4], ax
0x517053: mov     word ptr [esp+75Ch+a1+6], ax
0x517058: mov     edx, [ebp+0]
0x51705B: mov     eax, [edx+0D4h]
0x517061: mov     ecx, ebp
0x517063: mov     [esp+75Ch+var_4], 2
0x51706E: call    eax
0x517070: mov     ecx, [esp+75Ch+ArgList]
0x517077: push    eax
0x517078: push    ecx
0x517079: lea     edx, [esp+764h+a1]
0x51707D: push    offset aUnableToFindFu; "Unable to find function definition for "...
0x517082: push    edx
0x517083: call    BSStringT_Static_Format
0x517088: mov     esi, [esp+76Ch+a1]
0x51708C: add     esp, 10h
0x51708F: cmp     byte ptr ds:0B361ACh, 0
0x517096: push    esi; Format
0x517097: jz      short loc_5170B1
0x517099: call    Interface_ConsolePrint
0x51709E: add     esp, 4
0x5170A1: push    esi
0x5170A2: call    FormHeapFree
0x5170A7: add     esp, 4
0x5170AA: xor     al, al
0x5170AC: jmp     loc_5172D5
0x5170B1: call    PrintError
0x5170B6: add     esp, 4
0x5170B9: push    esi
0x5170BA: call    FormHeapFree
0x5170BF: add     esp, 4
0x5170C2: xor     al, al
0x5170C4: jmp     loc_5172D5
0x5170C9: cmp     byte ptr [eax+10h], 0
0x5170CD: mov     ecx, [eax+14h]
0x5170D0: mov     [esp+75Ch+a1], ecx
0x5170D4: jz      loc_517171
0x5170DA: test    ebx, ebx
0x5170DC: jnz     loc_517171
0x5170E2: cmp     byte ptr [esp+75Ch+a12], bl
0x5170E9: jnz     loc_51717F
0x5170EF: xor     ecx, ecx
0x5170F1: mov     [esp+75Ch+a1], ecx
0x5170F5: mov     word ptr [esp+75Ch+a1+4], cx
0x5170FA: mov     word ptr [esp+75Ch+a1+6], cx
0x5170FF: mov     eax, [eax]
0x517101: mov     ecx, [esp+75Ch+a11]
0x517108: mov     edx, [ebp+0]
0x51710B: push    eax
0x51710C: mov     eax, [edx+0D4h]
0x517112: push    ecx
0x517113: mov     ecx, ebp
0x517115: mov     [esp+764h+var_4], 3
0x517120: call    eax
0x517122: push    eax
0x517123: lea     ecx, [esp+768h+a1]
0x517127: push    offset aScriptSLineDFu; "Script '%s', line %d: Function '%s' req"...
0x51712C: push    ecx
0x51712D: call    BSStringT_Static_Format
0x517132: add     esp, 14h
0x517135: cmp     ds:0B361ACh, bl
0x51713B: jz      short loc_517149
0x51713D: mov     edx, [esp+75Ch+a1]
0x517141: push    edx; Format
0x517142: call    Interface_ConsolePrint
0x517147: jmp     short loc_517153
0x517149: mov     eax, [esp+75Ch+a1]
0x51714D: push    eax
0x51714E: call    PrintError
0x517153: add     esp, 4
0x517156: lea     ecx, [esp+75Ch+a1]; void *
0x51715A: mov     [esp+75Ch+var_4], 0FFFFFFFFh
0x517165: call    BSStringT_Clear
0x51716A: xor     al, al
0x51716C: jmp     loc_5172D5
0x517171: cmp     byte ptr [esp+75Ch+a12], 0
0x517179: jz      loc_517295
0x51717F: test    ecx, ecx
0x517181: jz      loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x517187: mov     ecx, [esp+75Ch+var_73C]
0x51718B: cmp     dword ptr [ecx], 0
0x51718E: jz      loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x517194: mov     edx, [esi+8]
0x517197: mov     eax, [esi]
0x517199: push    edx; l
0x51719A: mov     edx, [esp+760h+a1]
0x51719E: push    ebp; a6
0x51719F: push    eax; a5
0x5171A0: push    ebx; a4
0x5171A1: lea     ecx, [esp+76Ch+a3]
0x5171A5: push    ecx; a3
0x5171A6: push    edi; a2
0x5171A7: push    edx; a1
0x5171A8: call    Script_ExtractArgs
0x5171AD: mov     eax, [esp+778h+ArgList]
0x5171B4: add     esp, 1Ch
0x5171B7: sub     eax, 1000h
0x5171BC: jz      short loc_517210
0x5171BE: sub     eax, 59h ; 'Y'
0x5171C1: jnz     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x5171C7: mov     ecx, [esp+75Ch+a3]
0x5171CB: movzx   eax, word ptr [edi+ecx]
0x5171CF: add     ecx, 2
0x5171D2: test    ax, ax
0x5171D5: mov     [esp+75Ch+a3], ecx
0x5171D9: jle     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x5171DF: movzx   eax, ax
0x5171E2: mov     [esp+75Ch+a1], eax
0x5171E6: mov     ecx, [esi+8]
0x5171E9: mov     edx, [esi]
0x5171EB: push    1
0x5171ED: push    ecx
0x5171EE: push    ebp
0x5171EF: push    edx
0x5171F0: push    ebx
0x5171F1: lea     eax, [esp+770h+a3]
0x5171F5: push    eax
0x5171F6: lea     ecx, [esp+774h+var_728]
0x5171FA: push    edi
0x5171FB: push    ecx
0x5171FC: call    ExecuteScriptInstruction?
0x517201: add     esp, 20h
0x517204: sub     [esp+75Ch+a1], 1
0x517209: jnz     short loc_5171E6
0x51720B: jmp     loc_5172D3; jumptable 00516B76 cases 16,17,28,29
0x517210: mov     ecx, [esp+75Ch+a3]
0x517214: movzx   eax, word ptr [edi+ecx]
0x517218: add     ecx, 2
0x51721B: test    ax, ax
0x51721E: mov     [esp+75Ch+a3], ecx
0x517222: jle     short loc_517255
0x517224: movzx   edx, ax
0x517227: mov     [esp+75Ch+var_73C], edx
0x51722B: jmp     short loc_517230
