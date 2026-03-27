0x666BB0: sub     esp, 0F4h
0x666BB6: mov     eax, ds:0B30AACh
0x666BBB: xor     eax, esp
0x666BBD: mov     [esp+0F4h+var_4], eax
0x666BC4: mov     eax, [esp+0F4h+arg_4]
0x666BCB: mov     ecx, [esp+0F4h+arg_8]
0x666BD2: push    ebx
0x666BD3: push    ebp
0x666BD4: push    esi
0x666BD5: mov     esi, [eax]
0x666BD7: push    edi
0x666BD8: push    0FFFFFFFFh; int
0x666BDA: mov     [esp+108h+var_F4], esi
0x666BDE: fild    [esp+108h+var_F4]
0x666BE2: push    1; int
0x666BE4: sub     esp, 8
0x666BE7: mov     [esp+114h+var_D4], eax
0x666BEB: mov     eax, [ecx]
0x666BED: fstp    [esp+114h+var_114+4]; float
0x666BF1: fild    dword ptr ds:0B02E24h
0x666BF7: mov     [esp+114h+var_D0], ecx
0x666BFB: mov     [esp+114h+var_E8], eax
0x666BFF: fstp    [esp+114h+var_114]; float
0x666C02: push    offset aPlayerCharacte; "PLAYER CHARACTER"
0x666C07: call    InterfaceMgr_DebugTextLine
0x666C0C: mov     edi, [esp+118h+arg_0]
0x666C13: add     esp, 14h
0x666C16: add     esi, edi
0x666C18: push    0FFFFFFFFh; int
0x666C1A: mov     [esp+108h+var_F4], esi
0x666C1E: fild    [esp+108h+var_F4]
0x666C22: push    1; int
0x666C24: sub     esp, 8
0x666C27: mov     [esp+114h+var_EC], esi
0x666C2B: fstp    [esp+114h+var_114+4]; float
0x666C2F: fild    dword ptr ds:0B02E24h
0x666C35: fstp    [esp+114h+var_114]; float
0x666C38: push    offset aSkillUsage; "Skill Usage"
0x666C3D: call    InterfaceMgr_DebugTextLine
0x666C42: add     esp, 14h
0x666C45: add     esi, edi
0x666C47: mov     [esp+104h+var_F0], esi
0x666C4B: mov     [esp+104h+var_F4], esi
0x666C4F: mov     esi, 0Ch
0x666C54: push    esi
0x666C55: push    2
0x666C57: call    ActorValue_GetGroupOffsetFromAV
0x666C5C: movsx   ecx, al
0x666C5F: mov     [esp+10Ch+var_D8], ecx
0x666C63: mov     ecx, ds:0B333C4h
0x666C69: add     esp, 8
0x666C6C: call    Actor_GetBaseClass
0x666C71: test    eax, eax
0x666C73: jz      short loc_666C94
0x666C75: mov     ecx, ds:0B333C4h
0x666C7B: push    esi
0x666C7C: call    Actor_GetBaseClass
0x666C81: mov     ecx, eax
0x666C83: call    sub_51C090
0x666C88: test    al, al
0x666C8A: mov     [esp+104h+var_E0], offset aMajor; "Major, "
0x666C92: jnz     short loc_666C9C
0x666C94: mov     [esp+104h+var_E0], offset EmptyString
0x666C9C: fld1
0x666C9E: mov     ecx, ds:0B333C4h
0x666CA4: lea     ebx, [esi-0Ch]
0x666CA7: fstp    [esp+104h+var_DC]
0x666CAB: cmp     ebx, 14h
0x666CAE: mov     ebp, ecx
0x666CB0: ja      short loc_666CD1
0x666CB2: push    esi
0x666CB3: push    2
0x666CB5: call    ActorValue_GetGroupOffsetFromAV
0x666CBA: mov     ecx, ds:0B333C4h
0x666CC0: movsx   edx, al
0x666CC3: add     esp, 8
0x666CC6: fld     dword ptr [ebp+edx*4+7A4h]
0x666CCD: fstp    [esp+104h+var_DC]
0x666CD1: cmp     ebx, 14h
0x666CD4: fldz
0x666CD6: fstp    [esp+104h+var_E4]
0x666CDA: mov     ebp, ecx
0x666CDC: ja      short loc_666CFD
0x666CDE: push    esi
0x666CDF: push    2
0x666CE1: call    ActorValue_GetGroupOffsetFromAV
0x666CE6: mov     ecx, ds:0B333C4h
0x666CEC: movsx   eax, al
0x666CEF: add     esp, 8
0x666CF2: fld     dword ptr [ebp+eax*4+130h]
0x666CF9: fstp    [esp+104h+var_E4]
0x666CFD: fld     [esp+104h+var_DC]
0x666D01: mov     edx, [esp+104h+var_D8]
0x666D05: mov     eax, [ecx+edx*4+188h]
0x666D0C: mov     edx, [ecx]
0x666D0E: sub     esp, 10h
0x666D11: fstp    [esp+114h+var_10C]
0x666D15: fld     [esp+114h+var_E4]
0x666D19: fstp    qword ptr [esp+114h+var_114]
0x666D1C: push    eax
0x666D1D: mov     eax, [edx+284h]
0x666D23: push    esi
0x666D24: call    eax
0x666D26: mov     ecx, [esp+118h+var_E0]
0x666D2A: push    eax
0x666D2B: push    ecx
0x666D2C: push    esi
0x666D2D: call    ActorValue_GetName
0x666D32: add     esp, 4
0x666D35: push    eax
0x666D36: lea     edx, [esp+124h+var_CC]
0x666D3A: push    offset aSSDAdvancesDUs; "%s (%s%d): advances: %d, usage %.2f/%.2"...
0x666D3F: push    edx
0x666D40: call    __sprintf
0x666D45: fild    [esp+12Ch+var_F4]
0x666D49: add     esp, 28h
0x666D4C: push    0FFFFFFFFh; int
0x666D4E: push    1; int
0x666D50: sub     esp, 8
0x666D53: fstp    [esp+114h+var_114+4]; float
0x666D57: lea     eax, [esp+114h+var_CC]
0x666D5B: fild    dword ptr ds:0B02E24h
0x666D61: fstp    [esp+114h+var_114]; float
0x666D64: push    eax; int
0x666D65: call    InterfaceMgr_DebugTextLine
0x666D6A: add     [esp+118h+var_F4], edi
0x666D6E: add     esi, 1
0x666D71: add     esp, 14h
0x666D74: cmp     esi, 21h ; '!'
0x666D77: jl      loc_666C54
0x666D7D: mov     ecx, ds:0B37618h
0x666D83: mov     edx, ds:0B333C4h
0x666D89: mov     eax, [edx+184h]
0x666D8F: push    ecx
0x666D90: push    eax
0x666D91: lea     ecx, [esp+10Ch+var_CC]
0x666D95: push    offset aMajorSkillsAdv; "Major Skills Advanced: %d/%d"
0x666D9A: push    ecx
0x666D9B: call    __sprintf
0x666DA0: fild    [esp+114h+var_F4]
0x666DA4: add     esp, 10h
0x666DA7: push    0FFFFFFFFh; int
0x666DA9: mov     esi, 1
0x666DAE: push    esi; int
0x666DAF: sub     esp, 8
0x666DB2: fstp    [esp+114h+var_114+4]; float
0x666DB6: lea     edx, [esp+114h+var_CC]
0x666DBA: fild    dword ptr ds:0B02E24h
0x666DC0: fstp    [esp+114h+var_114]; float
0x666DC3: push    edx; int
0x666DC4: call    InterfaceMgr_DebugTextLine
0x666DC9: mov     eax, ds:0B333C4h
0x666DCE: add     [esp+118h+var_F4], edi
0x666DD2: add     esp, 14h
0x666DD5: cmp     byte ptr [eax+1DCh], 0
0x666DDC: jz      short loc_666E06
0x666DDE: fild    [esp+104h+var_F4]
0x666DE2: push    0FFFFFFFFh; int
0x666DE4: push    esi; int
0x666DE5: sub     esp, 8
0x666DE8: fstp    [esp+114h+var_114+4]; float
0x666DEC: fild    dword ptr ds:0B02E24h
0x666DF2: fstp    [esp+114h+var_114]; float
0x666DF5: push    offset aReadyToLevelUp; "Ready to Level Up"
0x666DFA: call    InterfaceMgr_DebugTextLine
0x666DFF: add     esp, 14h
0x666E02: add     [esp+104h+var_F4], edi
0x666E06: fild    dword ptr ds:0B02E24h
0x666E0C: mov     ecx, 500h
0x666E11: sub     ecx, ds:0B02E24h
0x666E17: push    0FFFFFFFFh; int
0x666E19: fstp    [esp+108h+var_E4]
0x666E1D: mov     [esp+108h+var_D8], ecx
0x666E21: fild    [esp+108h+var_D8]
0x666E25: push    2; int
0x666E27: fld     [esp+10Ch+var_E4]
0x666E2B: sub     esp, 8
0x666E2E: fld     st
0x666E30: fsubp   st(2), st
0x666E32: fxch    st(1)
0x666E34: fmul    qword ptr ds:0A2FAA0h
0x666E3A: faddp   st(1), st
0x666E3C: fstp    [esp+114h+var_E0]
0x666E40: fild    [esp+114h+var_EC]
0x666E44: fstp    [esp+114h+var_114+4]; float
0x666E48: fld     [esp+114h+var_E0]
0x666E4C: fstp    [esp+114h+var_114]; float
0x666E4F: push    offset aAttributeSkill; "Attribute Skill Counts"
0x666E54: call    InterfaceMgr_DebugTextLine
0x666E59: mov     eax, ds:0B333C4h
0x666E5E: mov     ebp, [eax+5B4h]
0x666E64: mov     edx, [esp+118h+var_F0]
0x666E68: add     esp, 14h
0x666E6B: xor     ecx, ecx
0x666E6D: test    ebp, ebp
0x666E6F: mov     [esp+104h+var_EC], edx
0x666E73: mov     eax, ebp
0x666E75: jz      short loc_666E85
0x666E77: cmp     dword ptr [eax], 0
0x666E7A: jz      short loc_666E7E
0x666E7C: add     ecx, esi
0x666E7E: mov     eax, [eax+4]
0x666E81: test    eax, eax
0x666E83: jnz     short loc_666E77
0x666E85: test    ecx, ecx
0x666E87: jle     loc_666F5A
0x666E8D: mov     [esp+104h+var_DC], ecx
0x666E91: mov     [esp+104h+var_E4], ecx
0x666E95: mov     ebx, [ebp+0]
0x666E98: test    ebx, ebx
0x666E9A: mov     ebp, [ebp+4]
0x666E9D: jz      loc_666F4C
0x666EA3: mov     ecx, [esp+104h+var_DC]
0x666EA7: push    ecx
0x666EA8: lea     edx, [esp+108h+var_CC]
0x666EAC: push    offset aAdvancementD; "Advancement #%d"
0x666EB1: push    edx
0x666EB2: call    __sprintf
0x666EB7: fild    [esp+110h+var_EC]
0x666EBB: add     esp, 0Ch
0x666EBE: push    0FFFFFFFFh; int
0x666EC0: push    2; int
0x666EC2: sub     esp, 8
0x666EC5: fstp    [esp+114h+var_114+4]; float
0x666EC9: lea     eax, [esp+114h+var_CC]
0x666ECD: fld     [esp+114h+var_E0]
0x666ED1: fstp    [esp+114h+var_114]; float
0x666ED4: push    eax; int
0x666ED5: call    InterfaceMgr_DebugTextLine
0x666EDA: add     [esp+118h+var_EC], edi
0x666EDE: add     esp, 14h
0x666EE1: xor     esi, esi
0x666EE3: xor     eax, eax
0x666EE5: cmp     esi, 7
0x666EE8: ja      short loc_666EFB
0x666EEA: push    esi
0x666EEB: push    eax
0x666EEC: call    ActorValue_GetGroupOffsetFromAV
0x666EF1: movsx   eax, al
0x666EF4: movsx   eax, byte ptr [eax+ebx]
0x666EF8: add     esp, 8
0x666EFB: push    eax
0x666EFC: push    esi
0x666EFD: call    ActorValue_GetName
0x666F02: add     esp, 4
0x666F05: push    eax
0x666F06: lea     ecx, [esp+10Ch+var_CC]
0x666F0A: push    offset aSD_3; "%s: %d"
0x666F0F: push    ecx
0x666F10: call    __sprintf
0x666F15: fild    [esp+114h+var_EC]
0x666F19: add     esp, 10h
0x666F1C: push    0FFFFFFFFh; int
0x666F1E: push    2; int
0x666F20: sub     esp, 8
0x666F23: fstp    [esp+114h+var_114+4]; float
0x666F27: lea     edx, [esp+114h+var_CC]
0x666F2B: fld     [esp+114h+var_E0]
0x666F2F: fstp    [esp+114h+var_114]; float
0x666F32: push    edx; int
0x666F33: call    InterfaceMgr_DebugTextLine
0x666F38: add     [esp+118h+var_EC], edi
0x666F3C: add     esi, 1
0x666F3F: add     esp, 14h
0x666F42: cmp     esi, 8
0x666F45: jl      short loc_666EE3
0x666F47: mov     esi, 1
0x666F4C: sub     [esp+104h+var_DC], esi
0x666F50: sub     [esp+104h+var_E4], esi
0x666F54: jnz     loc_666E95
0x666F5A: fild    [esp+104h+var_E8]
0x666F5E: push    0FFFFFFFFh; int
0x666F60: mov     eax, 500h
0x666F65: sub     eax, ds:0B02E24h
0x666F6B: push    3; int
0x666F6D: sub     esp, 8
0x666F70: fstp    [esp+114h+var_114+4]; float
0x666F74: mov     [esp+114h+var_F0], eax
0x666F78: fild    [esp+114h+var_F0]
0x666F7C: fstp    [esp+114h+var_114]; float
0x666F7F: push    offset aSpecialization; "Specialization Counts"
0x666F84: call    InterfaceMgr_DebugTextLine
0x666F89: mov     ecx, ds:0B333C4h
0x666F8F: movsx   edx, byte ptr [ecx+5B8h]
0x666F96: mov     esi, [esp+118h+var_E8]
0x666F9A: push    edx
0x666F9B: lea     eax, [esp+11Ch+var_CC]
0x666F9F: push    offset aCombatD; "Combat: %d"
0x666FA4: add     esi, edi
0x666FA6: push    eax
0x666FA7: mov     [esp+124h+var_E8], esi
0x666FAB: call    __sprintf
0x666FB0: add     esp, 20h
0x666FB3: fild    [esp+104h+var_E8]
0x666FB7: push    0FFFFFFFFh; int
0x666FB9: mov     ecx, 500h
0x666FBE: sub     ecx, ds:0B02E24h
0x666FC4: push    3; int
0x666FC6: sub     esp, 8
0x666FC9: mov     [esp+114h+var_F0], ecx
0x666FCD: fstp    [esp+114h+var_114+4]; float
0x666FD1: lea     edx, [esp+114h+var_CC]
0x666FD5: fild    [esp+114h+var_F0]
0x666FD9: fstp    [esp+114h+var_114]; float
0x666FDC: push    edx; int
0x666FDD: call    InterfaceMgr_DebugTextLine
0x666FE2: mov     eax, ds:0B333C4h
0x666FE7: movsx   ecx, byte ptr [eax+5B9h]
0x666FEE: push    ecx
0x666FEF: lea     edx, [esp+11Ch+var_CC]
0x666FF3: push    offset aMagicD; "Magic: %d"
0x666FF8: add     esi, edi
0x666FFA: push    edx
0x666FFB: mov     [esp+124h+var_E8], esi
0x666FFF: call    __sprintf
0x667004: add     esp, 20h
0x667007: fild    [esp+104h+var_E8]
0x66700B: push    0FFFFFFFFh; int
0x66700D: mov     eax, 500h
0x667012: sub     eax, ds:0B02E24h
0x667018: push    3; int
0x66701A: sub     esp, 8
0x66701D: mov     [esp+114h+var_F0], eax
0x667021: fstp    [esp+114h+var_114+4]; float
0x667025: lea     ecx, [esp+114h+var_CC]
0x667029: fild    [esp+114h+var_F0]
0x66702D: fstp    [esp+114h+var_114]; float
0x667030: push    ecx; int
0x667031: call    InterfaceMgr_DebugTextLine
0x667036: mov     edx, ds:0B333C4h
0x66703C: movsx   eax, byte ptr [edx+5BAh]
0x667043: push    eax
0x667044: lea     ecx, [esp+11Ch+var_CC]
0x667048: push    offset aStealthD; "Stealth: %d"
0x66704D: add     esi, edi
0x66704F: push    ecx
0x667050: mov     [esp+124h+var_E8], esi
0x667054: call    __sprintf
0x667059: add     esp, 20h
0x66705C: fild    [esp+104h+var_E8]
0x667060: push    0FFFFFFFFh; int
0x667062: push    3; int
0x667064: sub     esp, 8
0x667067: mov     edx, 500h
0x66706C: sub     edx, ds:0B02E24h
0x667072: fstp    [esp+114h+var_114+4]; float
0x667076: lea     eax, [esp+114h+var_CC]
0x66707A: mov     [esp+114h+var_F0], edx
0x66707E: fild    [esp+114h+var_F0]
0x667082: fstp    [esp+114h+var_114]; float
0x667085: push    eax; int
0x667086: call    InterfaceMgr_DebugTextLine
0x66708B: mov     ecx, [esp+118h+var_D4]
0x66708F: mov     edx, [esp+118h+var_F4]
0x667093: mov     eax, [esp+118h+var_D0]
0x667097: add     esp, 14h
0x66709A: add     esi, edi
0x66709C: mov     [ecx], edx
0x66709E: mov     ecx, [esp+104h+var_4]
0x6670A5: pop     edi
0x6670A6: mov     [eax], esi
0x6670A8: pop     esi
0x6670A9: pop     ebp
0x6670AA: pop     ebx
0x6670AB: xor     ecx, esp
0x6670AD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6670B2: add     esp, 0F4h
0x6670B8: retn
