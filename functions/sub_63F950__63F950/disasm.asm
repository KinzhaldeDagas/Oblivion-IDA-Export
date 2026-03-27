0x63F950: sub     esp, 24h
0x63F953: mov     eax, [ecx]
0x63F955: mov     edx, [eax+184h]
0x63F95B: push    ebp
0x63F95C: push    esi
0x63F95D: mov     [esp+2Ch+var_24], ecx
0x63F961: call    edx
0x63F963: mov     ebp, [esp+2Ch+arg_4]
0x63F967: mov     esi, eax
0x63F969: mov     eax, [ebp+0]
0x63F96C: mov     edx, [eax+330h]
0x63F972: mov     ecx, ebp
0x63F974: mov     [esp+2Ch+var_10], esi
0x63F978: call    edx
0x63F97A: test    eax, eax
0x63F97C: jz      loc_63FFE8
0x63F982: test    esi, esi
0x63F984: jz      short loc_63F994
0x63F986: mov     eax, [esi+1Ch]
0x63F989: shr     eax, 0Ch
0x63F98C: test    al, 1
0x63F98E: jnz     loc_63FFE8
0x63F994: mov     esi, [esp+2Ch+arg_0]
0x63F998: mov     ecx, esi
0x63F99A: call    sub_5E6B70
0x63F99F: test    al, al
0x63F9A1: jnz     loc_63FFE8
0x63F9A7: mov     ecx, esi
0x63F9A9: call    sub_5E6BA0
0x63F9AE: test    al, al
0x63F9B0: jnz     loc_63FFE8
0x63F9B6: mov     edx, [esi]
0x63F9B8: mov     eax, [edx+334h]
0x63F9BE: push    0
0x63F9C0: mov     ecx, esi
0x63F9C2: call    eax
0x63F9C4: test    al, al
0x63F9C6: jnz     loc_63FFE8
0x63F9CC: push    0
0x63F9CE: push    esi
0x63F9CF: mov     ecx, ebp
0x63F9D1: call    TesObjectREF_GetDistance
0x63F9D6: fld     dword ptr ds:0B36B08h
0x63F9DC: fcompp
0x63F9DE: fnstsw  ax
0x63F9E0: test    ah, 1
0x63F9E3: jnz     loc_63FFE8
0x63F9E9: push    ebx
0x63F9EA: push    edi
0x63F9EB: push    ebp
0x63F9EC: push    0Ch
0x63F9EE: mov     ecx, offset dword_B3BDB0
0x63F9F3: call    sub_67CF50
0x63F9F8: mov     ebx, eax
0x63F9FA: mov     edi, [ebx]
0x63F9FC: test    edi, edi
0x63F9FE: mov     [esp+34h+var_4], ebx
0x63FA02: mov     [esp+34h+var_8], edi
0x63FA06: jz      loc_63FFD6
0x63FA0C: mov     ecx, edi
0x63FA0E: call    sub_67B710
0x63FA13: test    eax, eax
0x63FA15: jz      loc_63FFD6
0x63FA1B: push    0
0x63FA1D: push    esi
0x63FA1E: mov     ecx, edi
0x63FA20: call    sub_67B6B0
0x63FA25: test    eax, eax
0x63FA27: jnz     loc_63FFD6
0x63FA2D: push    eax
0x63FA2E: push    ebp
0x63FA2F: mov     ecx, edi
0x63FA31: call    sub_67B6B0
0x63FA36: mov     edx, [ebp+0]
0x63FA39: mov     [esp+34h+arg_0], eax
0x63FA3D: mov     eax, [edx+330h]
0x63FA43: mov     ecx, ebp
0x63FA45: call    eax
0x63FA47: test    eax, eax
0x63FA49: jz      loc_63FE59
0x63FA4F: mov     edx, [ebp+0]
0x63FA52: mov     eax, [edx+330h]
0x63FA58: mov     ecx, ebp
0x63FA5A: call    eax
0x63FA5C: mov     edi, [eax+40h]
0x63FA5F: test    edi, edi
0x63FA61: mov     [esp+34h+arg_4], edi
0x63FA65: jz      loc_63FE59
0x63FA6B: jmp     short loc_63FA70
0x63FA6D: align 10h
0x63FA70: cmp     dword ptr [edi], 0
0x63FA73: jz      loc_63FE59
0x63FA79: mov     edx, [esi]
0x63FA7B: mov     eax, [edx+334h]
0x63FA81: push    1
0x63FA83: mov     ecx, esi
0x63FA85: call    eax
0x63FA87: test    al, al
0x63FA89: jnz     loc_63FE59
0x63FA8F: mov     ecx, esi
0x63FA91: call    sub_5E6BA0
0x63FA96: test    al, al
0x63FA98: jnz     loc_63FE59
0x63FA9E: mov     ecx, [edi]
0x63FAA0: mov     edi, [ecx]
0x63FAA2: mov     ecx, [esp+34h+var_8]
0x63FAA6: push    0
0x63FAA8: push    edi
0x63FAA9: call    sub_67B6B0
0x63FAAE: mov     edx, [esi]
0x63FAB0: mov     [esp+34h+var_C], eax
0x63FAB4: mov     eax, [edx+224h]
0x63FABA: push    edi
0x63FABB: mov     ecx, esi
0x63FABD: call    eax
0x63FABF: test    edi, edi
0x63FAC1: mov     [esp+34h+var_14], eax
0x63FAC5: jz      loc_63FB52
0x63FACB: push    edi
0x63FACC: mov     ecx, esi
0x63FACE: call    sub_5E9D40
0x63FAD3: test    al, al
0x63FAD5: jz      short loc_63FB52
0x63FAD7: mov     edx, [esi]
0x63FAD9: mov     eax, [edx+224h]
0x63FADF: push    ebp
0x63FAE0: mov     ecx, esi
0x63FAE2: call    eax
0x63FAE4: mov     edx, [esi]
0x63FAE6: mov     ebx, eax
0x63FAE8: mov     eax, [edx+284h]
0x63FAEE: push    24h ; '$'
0x63FAF0: mov     ecx, esi
0x63FAF2: call    eax
0x63FAF4: push    eax
0x63FAF5: push    0; responsibility
0x63FAF7: mov     ecx, esi; this
0x63FAF9: call    Actor_IsCreature
0x63FAFE: mov     ecx, [esp+3Ch+a6]
0x63FB02: push    eax; a7
0x63FB03: push    ecx; a6
0x63FB04: push    0
0x63FB06: push    ebp
0x63FB07: mov     ecx, esi
0x63FB09: call    TesObjectREF_GetDistance
0x63FB0E: mov     edx, [esi]
0x63FB10: mov     eax, [edx+284h]
0x63FB16: push    ecx
0x63FB17: fstp    dword ptr [esp+48h+a5]; a5
0x63FB1A: push    21h ; '!'; distanceToTarget
0x63FB1C: mov     ecx, esi
0x63FB1E: call    eax
0x63FB20: mov     ecx, [esp+4Ch+friendlyFight_]
0x63FB24: push    eax; aggressionStat
0x63FB25: push    ecx; friendlyFight?
0x63FB26: push    ebx; disposition
0x63FB27: call    shouldActorFight
0x63FB2C: mov     ecx, [esp+58h+var_28]
0x63FB30: mov     edx, [ecx]
0x63FB32: add     esp, 20h
0x63FB35: mov     ebx, eax
0x63FB37: mov     eax, [edx+3B0h]
0x63FB3D: push    edi
0x63FB3E: call    eax
0x63FB40: test    eax, eax
0x63FB42: jz      short loc_63FB52
0x63FB44: cmp     dword ptr [eax+0Ch], 0
0x63FB48: jle     short loc_63FB52
0x63FB4A: test    ebx, ebx
0x63FB4C: jg      loc_63FE00
0x63FB52: push    ebp
0x63FB53: mov     ecx, esi
0x63FB55: mov     [esp+38h+friendlyFight_], 0
0x63FB5D: call    sub_5E9D40
0x63FB62: test    al, al
0x63FB64: jz      short loc_63FB77
0x63FB66: mov     edx, [esi]
0x63FB68: mov     eax, [edx+224h]
0x63FB6E: push    ebp
0x63FB6F: mov     ecx, esi
0x63FB71: call    eax
0x63FB73: mov     [esp+34h+friendlyFight_], eax
0x63FB77: test    edi, edi
0x63FB79: jz      loc_63FDBD
0x63FB7F: mov     ecx, esi; this
0x63FB81: call    sub_5E6C60
0x63FB86: test    al, al
0x63FB88: jz      short loc_63FB99
0x63FB8A: mov     ecx, edi; this
0x63FB8C: call    sub_5E6C60
0x63FB91: test    al, al
0x63FB93: jz      loc_63FDBD
0x63FB99: push    ebp
0x63FB9A: push    0Ch
0x63FB9C: mov     ecx, offset dword_B3BDB0
0x63FBA1: mov     byte ptr [esp+3Ch+responsibility], 0
0x63FBA6: call    sub_67CF50
0x63FBAB: mov     ebx, eax
0x63FBAD: test    ebx, ebx
0x63FBAF: mov     [esp+34h+var_20], ebx
0x63FBB3: mov     [esp+34h+var_C], 0
0x63FBBB: jz      short loc_63FBF5
0x63FBBD: lea     ecx, [ecx+0]
0x63FBC0: mov     eax, [ebx]
0x63FBC2: test    eax, eax
0x63FBC4: jz      short loc_63FBEC
0x63FBC6: push    0
0x63FBC8: push    ebp
0x63FBC9: mov     ecx, eax
0x63FBCB: mov     [esp+3Ch+var_C], eax
0x63FBCF: call    sub_67B6B0
0x63FBD4: test    eax, eax
0x63FBD6: jz      short loc_63FBDE
0x63FBD8: cmp     byte ptr [eax+4], 0
0x63FBDC: jnz     short loc_63FBE7
0x63FBDE: mov     ebx, [ebx+4]
0x63FBE1: test    ebx, ebx
0x63FBE3: jnz     short loc_63FBC0
0x63FBE5: jmp     short loc_63FBEC
0x63FBE7: mov     byte ptr [esp+34h+responsibility], 1
0x63FBEC: mov     ecx, [esp+34h+var_20]
0x63FBF0: call    BSSimpleList_Clear
0x63FBF5: mov     ecx, [esp+34h+var_20]
0x63FBF9: push    ecx
0x63FBFA: call    FormHeapFree
0x63FBFF: mov     edx, [esi]
0x63FC01: mov     eax, [edx+284h]
0x63FC07: add     esp, 4
0x63FC0A: push    24h ; '$'
0x63FC0C: mov     ecx, esi
0x63FC0E: call    eax
0x63FC10: mov     ecx, [esp+34h+responsibility]
0x63FC14: push    eax
0x63FC15: push    ecx; responsibility
0x63FC16: mov     ecx, esi; this
0x63FC18: call    Actor_IsCreature
0x63FC1D: mov     edx, [esp+3Ch+a6]
0x63FC21: mov     ecx, esi
0x63FC23: push    eax; a7
0x63FC24: push    edx; a6
0x63FC25: push    0
0x63FC27: push    edi
0x63FC28: call    TesObjectREF_GetDistance
0x63FC2D: mov     eax, [esi]
0x63FC2F: mov     edx, [eax+284h]
0x63FC35: push    ecx
0x63FC36: fstp    dword ptr [esp+48h+a5]; a5
0x63FC39: push    21h ; '!'; distanceToTarget
0x63FC3B: mov     ecx, esi
0x63FC3D: call    edx
0x63FC3F: mov     ecx, [esp+4Ch+friendlyFight_]
0x63FC43: push    eax; aggressionStat
0x63FC44: mov     eax, [esp+50h+responsibility]
0x63FC48: push    eax; friendlyFight?
0x63FC49: push    ecx; disposition
0x63FC4A: call    shouldActorFight
0x63FC4F: mov     ebx, [esp+58h+var_28]
0x63FC53: mov     edx, [ebx]
0x63FC55: add     esp, 20h
0x63FC58: mov     [esp+38h+friendlyFight_], eax
0x63FC5C: mov     eax, [edx+3B0h]
0x63FC62: push    edi
0x63FC63: mov     ecx, ebx
0x63FC65: call    eax
0x63FC67: test    eax, eax
0x63FC69: jz      short loc_63FC7C
0x63FC6B: cmp     dword ptr [eax+0Ch], 0
0x63FC6F: jle     short loc_63FC7C
0x63FC71: cmp     [esp+34h+var_14], 0
0x63FC76: jg      loc_63FE22
0x63FC7C: mov     ecx, offset unk_B36C48
0x63FC81: call    GameSetting_GetSafeFloatPointer
0x63FC86: fld     dword ptr [eax]
0x63FC88: call    Double_To_SInt32
0x63FC8D: mov     ecx, ebp; this
0x63FC8F: mov     [esp+34h+var_20], eax
0x63FC93: call    TESObjectREFR_GetParentCell
0x63FC98: test    eax, eax
0x63FC9A: jz      short loc_63FCC3
0x63FC9C: mov     ecx, ebp; this
0x63FC9E: call    TESObjectREFR_GetParentCell
0x63FCA3: mov     ecx, eax; this
0x63FCA5: call    TESObjectCELL_IsInterior
0x63FCAA: test    al, al
0x63FCAC: jz      short loc_63FCC3
0x63FCAE: mov     ecx, offset unk_B36C50
0x63FCB3: call    GameSetting_GetSafeFloatPointer
0x63FCB8: fld     dword ptr [eax]
0x63FCBA: call    Double_To_SInt32
0x63FCBF: mov     [esp+34h+var_20], eax
0x63FCC3: mov     ecx, ebp; this
0x63FCC5: call    Actor_IsCreature
0x63FCCA: test    al, al
0x63FCCC: jnz     loc_63FD51
0x63FCD2: mov     ecx, ebp
0x63FCD4: call    sub_4DB760
0x63FCD9: test    al, al
0x63FCDB: jnz     short loc_63FD51
0x63FCDD: mov     edx, [esi]
0x63FCDF: mov     eax, [edx+334h]
0x63FCE5: push    0
0x63FCE7: mov     ecx, esi
0x63FCE9: call    eax
0x63FCEB: test    al, al
0x63FCED: jnz     short loc_63FD51
0x63FCEF: mov     edx, [ebp+0]
0x63FCF2: mov     eax, [edx+330h]
0x63FCF8: mov     ecx, ebp
0x63FCFA: call    eax
0x63FCFC: test    eax, eax
0x63FCFE: jz      short loc_63FD51
0x63FD00: mov     edx, [ebp+0]
0x63FD03: mov     eax, [edx+330h]
0x63FD09: push    esi
0x63FD0A: mov     ecx, ebp
0x63FD0C: call    eax
0x63FD0E: mov     ecx, eax
0x63FD10: call    sub_613670
0x63FD15: test    al, al
0x63FD17: jz      short loc_63FD51
0x63FD19: push    0
0x63FD1B: push    ebp
0x63FD1C: mov     ecx, esi
0x63FD1E: call    TesObjectREF_GetDistance
0x63FD23: fild    [esp+34h+var_20]
0x63FD27: fcompp
0x63FD29: fnstsw  ax
0x63FD2B: test    ah, 1
0x63FD2E: jnz     short loc_63FD51
0x63FD30: push    0
0x63FD32: mov     ecx, esi
0x63FD34: call    sub_5E6CD0
0x63FD39: test    al, al
0x63FD3B: jnz     short loc_63FD51
0x63FD3D: mov     edx, [esi]
0x63FD3F: mov     eax, [edx+350h]
0x63FD45: mov     ecx, esi
0x63FD47: call    eax
0x63FD49: test    al, al
0x63FD4B: jz      loc_63FE45
0x63FD51: mov     ecx, esi
0x63FD53: call    sub_5E6BA0
0x63FD58: test    al, al
0x63FD5A: jnz     loc_63FDEB
0x63FD60: mov     edx, [esi]
0x63FD62: mov     eax, [edx+334h]
0x63FD68: push    0
0x63FD6A: mov     ecx, esi
0x63FD6C: call    eax
0x63FD6E: test    al, al
0x63FD70: jnz     short loc_63FDEB
0x63FD72: push    0
0x63FD74: push    edi
0x63FD75: mov     ecx, esi
0x63FD77: call    TesObjectREF_GetDistance
0x63FD7C: fild    [esp+34h+var_20]
0x63FD80: fcompp
0x63FD82: fnstsw  ax
0x63FD84: test    ah, 1
0x63FD87: jz      short loc_63FD9A
0x63FD89: cmp     [esp+34h+var_10], 0
0x63FD8E: jz      short loc_63FDEB
0x63FD90: mov     ecx, [esp+34h+var_10]
0x63FD94: cmp     byte ptr [ecx+20h], 4
0x63FD98: jnz     short loc_63FDEB
0x63FD9A: mov     ecx, ebx
0x63FD9C: mov     edx, [ecx]
0x63FD9E: mov     eax, [edx+210h]
0x63FDA4: call    eax
0x63FDA6: test    al, al
0x63FDA8: jnz     short loc_63FDEB
0x63FDAA: mov     ecx, [esp+34h+arg_C]
0x63FDAE: mov     edx, [esp+34h+var_C]
0x63FDB2: mov     byte ptr [ecx], 1
0x63FDB5: mov     ds:0B3B930h, edx
0x63FDBB: jmp     short loc_63FDEB
0x63FDBD: mov     ecx, esi; this
0x63FDBF: call    sub_5E6C60
0x63FDC4: test    al, al
0x63FDC6: jz      short loc_63FDEB
0x63FDC8: mov     ecx, ebp
0x63FDCA: call    sub_4DB760
0x63FDCF: test    al, al
0x63FDD1: jnz     short loc_63FDEB
0x63FDD3: mov     eax, [esp+34h+arg_0]
0x63FDD7: cmp     byte ptr [eax+4], 0
0x63FDDB: jnz     short loc_63FE4A
0x63FDDD: mov     eax, [esp+34h+var_C]
0x63FDE1: test    eax, eax
0x63FDE3: jz      short loc_63FDEB
0x63FDE5: cmp     byte ptr [eax+4], 0
0x63FDE9: jnz     short loc_63FE4D
0x63FDEB: mov     ecx, [esp+34h+arg_4]
0x63FDEF: mov     edi, [ecx+4]
0x63FDF2: test    edi, edi
0x63FDF4: mov     [esp+34h+arg_4], edi
0x63FDF8: jnz     loc_63FA70
0x63FDFE: jmp     short loc_63FE59
0x63FE00: mov     ecx, [esp+34h+var_24]
0x63FE04: mov     edx, [ecx]
0x63FE06: mov     eax, [edx+228h]
0x63FE0C: push    1
0x63FE0E: push    0
0x63FE10: push    0
0x63FE12: push    0
0x63FE14: push    0
0x63FE16: push    0
0x63FE18: push    0
0x63FE1A: push    0
0x63FE1C: push    ebp
0x63FE1D: push    esi
0x63FE1E: call    eax
0x63FE20: jmp     short loc_63FE59
0x63FE22: mov     eax, [esp+34h+responsibility]
0x63FE26: mov     edx, [ebx]
0x63FE28: mov     edx, [edx+228h]
0x63FE2E: push    1
0x63FE30: push    0
0x63FE32: push    0
0x63FE34: push    0
0x63FE36: push    eax
0x63FE37: push    0
0x63FE39: push    0
0x63FE3B: push    0
0x63FE3D: push    edi
0x63FE3E: push    esi
0x63FE3F: mov     ecx, ebx
0x63FE41: call    edx
0x63FE43: jmp     short loc_63FE59
0x63FE45: push    edi
0x63FE46: mov     ecx, ebx
0x63FE48: jmp     short loc_63FE54
0x63FE4A: push    ebp
0x63FE4B: jmp     short loc_63FE50
0x63FE4D: mov     eax, [eax]
0x63FE4F: push    eax
0x63FE50: mov     ecx, [esp+38h+var_24]
0x63FE54: call    sub_633C50
0x63FE59: mov     edx, [ebp+0]
0x63FE5C: mov     eax, [edx+330h]
0x63FE62: mov     ecx, ebp
0x63FE64: call    eax
0x63FE66: test    eax, eax
0x63FE68: jz      loc_63FF43
0x63FE6E: mov     edx, [ebp+0]
0x63FE71: mov     eax, [edx+330h]
0x63FE77: mov     ecx, ebp
0x63FE79: call    eax
0x63FE7B: mov     eax, [eax+40h]
0x63FE7E: test    eax, eax
0x63FE80: mov     edi, [esp+34h+arg_0]
0x63FE84: mov     [esp+34h+arg_4], eax
0x63FE88: jz      loc_63FF47
0x63FE8E: jmp     short loc_63FE94
0x63FE90: mov     eax, [esp+34h+arg_4]
0x63FE94: mov     eax, [eax]
0x63FE96: test    eax, eax
0x63FE98: jz      loc_63FF47
0x63FE9E: mov     eax, [eax]
0x63FEA0: mov     ecx, [esp+34h+var_8]
0x63FEA4: push    0
0x63FEA6: push    eax
0x63FEA7: mov     [esp+3Ch+a6], eax
0x63FEAB: call    sub_67B6B0
0x63FEB0: mov     edi, eax
0x63FEB2: xor     ebx, ebx
0x63FEB4: test    edi, edi
0x63FEB6: jz      short loc_63FF2E
0x63FEB8: mov     ecx, [edi]; this
0x63FEBA: test    ecx, ecx
0x63FEBC: jz      short loc_63FEDE
0x63FEBE: push    1; a2
0x63FEC0: call    Actor_GetActorBaseForm
0x63FEC5: mov     ebx, eax
0x63FEC7: lea     ecx, [ebx+3Ch]
0x63FECA: call    BSSimpleList_IsEmpty
0x63FECF: test    al, al
0x63FED1: jz      short loc_63FEDE
0x63FED3: mov     ecx, [edi]; this
0x63FED5: push    0; a2
0x63FED7: call    Actor_GetActorBaseForm
0x63FEDC: mov     ebx, eax
0x63FEDE: mov     ecx, [edi]
0x63FEE0: call    sub_5E32D0
0x63FEE5: test    al, al
0x63FEE7: jz      short loc_63FF2E
0x63FEE9: mov     ecx, [edi]
0x63FEEB: call    sub_5E8A90
0x63FEF0: test    al, al
0x63FEF2: jz      short loc_63FF2E
0x63FEF4: lea     ecx, [ebx+24h]
0x63FEF7: call    TESActorBaseData_AllFactionsAreEvil
0x63FEFC: test    al, al
0x63FEFE: jnz     short loc_63FF2E
0x63FF00: cmp     [edi+4], al
0x63FF03: jnz     short loc_63FF2E
0x63FF05: mov     ecx, [esp+34h+a6]
0x63FF09: push    3
0x63FF0B: push    ecx
0x63FF0C: push    ebp
0x63FF0D: mov     ecx, offset ActorProcessManager_ptr
0x63FF12: call    sub_675BF0
0x63FF17: test    eax, eax
0x63FF19: jz      short loc_63FF2E
0x63FF1B: mov     edx, [esi]
0x63FF1D: push    0
0x63FF1F: push    1
0x63FF21: push    0
0x63FF23: push    eax
0x63FF24: mov     eax, [edx+310h]
0x63FF2A: mov     ecx, esi
0x63FF2C: call    eax
0x63FF2E: mov     ecx, [esp+34h+arg_4]
0x63FF32: mov     eax, [ecx+4]
0x63FF35: test    eax, eax
0x63FF37: mov     [esp+34h+arg_4], eax
0x63FF3B: jnz     loc_63FE90
0x63FF41: jmp     short loc_63FF47
0x63FF43: mov     edi, [esp+34h+arg_0]
0x63FF47: test    edi, edi
0x63FF49: jz      short loc_63FFB4
0x63FF4B: mov     ecx, [edi]
0x63FF4D: mov     edx, [ecx]
0x63FF4F: mov     eax, [edx+338h]
0x63FF55: call    eax
0x63FF57: cmp     eax, ds:0B333C4h
0x63FF5D: jnz     short loc_63FFB4
0x63FF5F: mov     ecx, [edi]; this
0x63FF61: push    1; a2
0x63FF63: call    Actor_GetActorBaseForm
0x63FF68: mov     ebx, eax
0x63FF6A: lea     ecx, [ebx+3Ch]
0x63FF6D: call    BSSimpleList_IsEmpty
0x63FF72: test    al, al
0x63FF74: jz      short loc_63FF81
0x63FF76: mov     ecx, [edi]; this
0x63FF78: push    0; a2
0x63FF7A: call    Actor_GetActorBaseForm
0x63FF7F: mov     ebx, eax
0x63FF81: lea     ecx, [ebx+24h]
0x63FF84: call    TESActorBaseData_AllFactionsAreEvil
0x63FF89: test    al, al
0x63FF8B: jnz     short loc_63FFB4
0x63FF8D: mov     ecx, [edi]
0x63FF8F: push    3
0x63FF91: push    ebp
0x63FF92: push    ecx
0x63FF93: mov     ecx, offset ActorProcessManager_ptr
0x63FF98: call    sub_675BF0
0x63FF9D: test    eax, eax
0x63FF9F: jz      short loc_63FFB4
0x63FFA1: mov     edx, [esi]
0x63FFA3: push    0
0x63FFA5: push    1
0x63FFA7: push    0
0x63FFA9: push    eax
0x63FFAA: mov     eax, [edx+310h]
0x63FFB0: mov     ecx, esi
0x63FFB2: call    eax
0x63FFB4: mov     ecx, esi
0x63FFB6: call    sub_5E0F30
0x63FFBB: test    al, al
0x63FFBD: jz      short loc_63FFD2
0x63FFBF: mov     edx, [esi]
0x63FFC1: mov     eax, [edx+320h]
0x63FFC7: mov     ecx, esi
0x63FFC9: call    eax
0x63FFCB: mov     esi, [esi+58h]
0x63FFCE: add     dword ptr [esi+4], 0FFFFFFFFh
0x63FFD2: mov     ebx, [esp+34h+var_4]
0x63FFD6: mov     ecx, ebx
0x63FFD8: call    BSSimpleList_Clear
0x63FFDD: push    ebx
0x63FFDE: call    FormHeapFree
0x63FFE3: add     esp, 4
0x63FFE6: pop     edi
0x63FFE7: pop     ebx
0x63FFE8: pop     esi
0x63FFE9: xor     al, al
0x63FFEB: pop     ebp
0x63FFEC: add     esp, 24h
0x63FFEF: retn    10h
