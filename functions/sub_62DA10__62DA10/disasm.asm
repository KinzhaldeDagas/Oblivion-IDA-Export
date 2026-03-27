0x62DA10: sub     esp, 20h
0x62DA13: push    ebx
0x62DA14: push    ebp
0x62DA15: push    esi
0x62DA16: mov     esi, ecx
0x62DA18: mov     eax, [esi]
0x62DA1A: mov     edx, [eax+184h]
0x62DA20: push    edi
0x62DA21: call    edx
0x62DA23: mov     ebp, eax
0x62DA25: mov     eax, [esi]
0x62DA27: mov     edx, [eax+0C0h]
0x62DA2D: mov     ecx, esi
0x62DA2F: mov     [esp+30h+var_20], ebp
0x62DA33: call    edx
0x62DA35: test    al, al
0x62DA37: mov     edi, [esp+30h+arg_0]
0x62DA3B: jnz     loc_62DEF5
0x62DA41: mov     ecx, edi
0x62DA43: call    sub_5E32D0
0x62DA48: test    al, al
0x62DA4A: jz      loc_62DEF5
0x62DA50: mov     ecx, edi
0x62DA52: call    sub_5E4400
0x62DA57: mov     ebx, eax
0x62DA59: test    ebx, ebx
0x62DA5B: mov     [esp+30h+arg_0], ebx
0x62DA5F: jz      loc_62DD18
0x62DA65: fld     dword ptr ds:0A30634h
0x62DA6B: push    ecx
0x62DA6C: fstp    [esp+34h+var_34]; float
0x62DA6F: push    0; char
0x62DA71: push    edi; int
0x62DA72: mov     ecx, ebp
0x62DA74: call    sub_566DC0
0x62DA79: test    al, al
0x62DA7B: jnz     short loc_62DA9E
0x62DA7D: cmp     dword ptr [esi+120h], 0
0x62DA84: jnz     short loc_62DA9E
0x62DA86: mov     eax, [esi]
0x62DA88: mov     edx, [eax+17Ch]
0x62DA8E: push    0
0x62DA90: mov     ecx, esi
0x62DA92: call    edx
0x62DA94: pop     edi
0x62DA95: pop     esi
0x62DA96: pop     ebp
0x62DA97: pop     ebx
0x62DA98: add     esp, 20h
0x62DA9B: retn    4
0x62DA9E: mov     eax, [esi]
0x62DAA0: mov     edx, [eax+36Ch]
0x62DAA6: mov     ecx, esi
0x62DAA8: call    edx
0x62DAAA: test    eax, eax
0x62DAAC: jnz     short loc_62DACF
0x62DAAE: cmp     [esi+120h], eax
0x62DAB4: jnz     short loc_62DACF
0x62DAB6: lea     ecx, [esi+0B0h]
0x62DABC: call    BSSimpleList_IsEmpty
0x62DAC1: test    al, al
0x62DAC3: jz      short loc_62DACF
0x62DAC5: push    1; float
0x62DAC7: push    edi; int
0x62DAC8: mov     ecx, esi
0x62DACA: call    sub_6553E0
0x62DACF: mov     eax, [esi]
0x62DAD1: mov     edx, [eax+36Ch]
0x62DAD7: mov     ecx, esi
0x62DAD9: call    edx
0x62DADB: cmp     eax, 4
0x62DADE: jz      loc_62DC81
0x62DAE4: cmp     dword ptr [esi+120h], 0
0x62DAEB: jnz     loc_62DB7C
0x62DAF1: lea     ebp, [esi+0B0h]
0x62DAF7: mov     ecx, ebp
0x62DAF9: call    BSSimpleList_Count
0x62DAFE: test    eax, eax
0x62DB00: jz      short loc_62DB7C
0x62DB02: mov     ecx, [ebp+0]
0x62DB05: test    ecx, ecx
0x62DB07: mov     [esi+120h], ecx
0x62DB0D: jz      short loc_62DB34
0x62DB0F: nop
0x62DB10: call    sub_4DB9A0
0x62DB15: test    al, al
0x62DB17: jnz     short loc_62DB34
0x62DB19: mov     eax, [esi+120h]
0x62DB1F: push    eax
0x62DB20: mov     ecx, ebp
0x62DB22: call    BSSimpleList_Remove
0x62DB27: mov     ecx, [ebp+0]
0x62DB2A: test    ecx, ecx
0x62DB2C: mov     [esi+120h], ecx
0x62DB32: jnz     short loc_62DB10
0x62DB34: mov     ecx, [esi+120h]; this
0x62DB3A: test    ecx, ecx
0x62DB3C: jz      short loc_62DB7C
0x62DB3E: call    TESObjectREFR_GetOwner
0x62DB43: test    eax, eax
0x62DB45: jnz     short loc_62DB7C
0x62DB47: mov     ecx, ebp
0x62DB49: call    BSSimpleList_Count
0x62DB4E: push    0; Seed
0x62DB50: mov     ebx, eax
0x62DB52: call    GetRandomLargeInteger?
0x62DB57: cdq
0x62DB58: idiv    ebx
0x62DB5A: add     esp, 4
0x62DB5D: cmp     edx, ebx
0x62DB5F: jl      short loc_62DB63
0x62DB61: mov     edx, ebx
0x62DB63: test    edx, edx
0x62DB65: jle     short loc_62DB6F
0x62DB67: sub     edx, 1
0x62DB6A: mov     ebp, [ebp+4]
0x62DB6D: jnz     short loc_62DB67
0x62DB6F: mov     ecx, [ebp+0]
0x62DB72: mov     ebx, [esp+30h+arg_0]
0x62DB76: mov     [esi+120h], ecx
0x62DB7C: mov     edx, [esi]
0x62DB7E: mov     eax, [esi+120h]
0x62DB84: mov     edx, [edx+0D0h]
0x62DB8A: push    eax
0x62DB8B: mov     ecx, esi
0x62DB8D: call    edx
0x62DB8F: mov     eax, [edi]
0x62DB91: mov     edx, [eax+164h]
0x62DB97: mov     ecx, edi
0x62DB99: call    edx
0x62DB9B: cmp     dword ptr [esi+120h], 0
0x62DBA2: jz      short loc_62DBCB
0x62DBA4: test    eax, eax
0x62DBA6: jz      short loc_62DBB3
0x62DBA8: mov     ecx, eax
0x62DBAA: call    sub_472EA0
0x62DBAF: test    al, al
0x62DBB1: jz      short loc_62DBC2
0x62DBB3: mov     eax, [esi]
0x62DBB5: mov     edx, [eax+51Ch]
0x62DBBB: push    0
0x62DBBD: push    edi
0x62DBBE: mov     ecx, esi
0x62DBC0: call    edx
0x62DBC2: cmp     dword ptr [esi+120h], 0
0x62DBC9: jnz     short loc_62DC25
0x62DBCB: lea     ebp, [esi+0B0h]
0x62DBD1: mov     ecx, ebp
0x62DBD3: call    BSSimpleList_IsEmpty
0x62DBD8: test    al, al
0x62DBDA: jz      short loc_62DC25
0x62DBDC: mov     ecx, [ebx]
0x62DBDE: xor     eax, eax
0x62DBE0: test    ecx, ecx
0x62DBE2: jz      short loc_62DBE6
0x62DBE4: mov     eax, [ecx]
0x62DBE6: mov     ecx, [ebx+8]
0x62DBE9: push    0
0x62DBEB: push    1
0x62DBED: push    eax
0x62DBEE: mov     [esi+24h], ecx
0x62DBF1: mov     edx, [ebx+8]
0x62DBF4: push    1
0x62DBF6: push    edx
0x62DBF7: mov     ecx, edi
0x62DBF9: call    Actor_EquipItem
0x62DBFE: mov     eax, [esi]
0x62DC00: mov     edx, [eax+0BCh]
0x62DC06: push    1
0x62DC08: mov     ecx, esi
0x62DC0A: call    edx
0x62DC0C: mov     ecx, ebp
0x62DC0E: call    BSSimpleList_Clear
0x62DC13: fldz
0x62DC15: mov     eax, [esi]
0x62DC17: mov     edx, [eax+224h]
0x62DC1D: push    ecx
0x62DC1E: mov     ecx, esi
0x62DC20: fstp    [esp+34h+var_34]
0x62DC23: call    edx
0x62DC25: mov     ecx, esi
0x62DC27: call    sub_64ADA0
0x62DC2C: test    al, al
0x62DC2E: jz      loc_62DCE5
0x62DC34: fldz
0x62DC36: push    ecx
0x62DC37: lea     ebp, [esi+128h]
0x62DC3D: fstp    [esp+34h+var_34]; float
0x62DC40: mov     ecx, ebp
0x62DC42: mov     dword ptr [esi+120h], 0
0x62DC4C: call    sub_6FAEE0
0x62DC51: mov     byte ptr [esi+136h], 0
0x62DC58: mov     eax, ds:0B3F9A8h
0x62DC5D: mov     [ebp+0], eax
0x62DC60: mov     ecx, ds:0B3F9ACh
0x62DC66: mov     eax, [esi]
0x62DC68: mov     [ebp+4], ecx
0x62DC6B: mov     edx, ds:0B3F9B0h
0x62DC71: mov     [ebp+8], edx
0x62DC74: mov     edx, [eax+194h]
0x62DC7A: push    edi
0x62DC7B: mov     ecx, esi
0x62DC7D: call    edx
0x62DC7F: jmp     short loc_62DCD3
0x62DC81: mov     eax, [edi]
0x62DC83: mov     edx, [eax+164h]
0x62DC89: mov     ecx, edi
0x62DC8B: call    edx
0x62DC8D: mov     ecx, [ebx+8]
0x62DC90: mov     [esi+24h], ecx
0x62DC93: mov     edx, [ebx]
0x62DC95: xor     ebp, ebp
0x62DC97: test    edx, edx
0x62DC99: jz      short loc_62DC9D
0x62DC9B: mov     ebp, [edx]
0x62DC9D: test    eax, eax
0x62DC9F: jz      short loc_62DCAC
0x62DCA1: mov     ecx, eax
0x62DCA3: call    sub_472EA0
0x62DCA8: test    al, al
0x62DCAA: jz      short loc_62DCBA
0x62DCAC: mov     edx, [ebx+8]
0x62DCAF: push    1
0x62DCB1: push    ebp
0x62DCB2: push    edx
0x62DCB3: mov     ecx, edi
0x62DCB5: call    Actor_EquipIngredient?
0x62DCBA: mov     eax, [esi]
0x62DCBC: mov     edx, [eax+0BCh]
0x62DCC2: push    1
0x62DCC4: mov     ecx, esi
0x62DCC6: call    edx
0x62DCC8: lea     ecx, [esi+0B0h]
0x62DCCE: call    BSSimpleList_Clear
0x62DCD3: mov     eax, [esi]
0x62DCD5: fldz
0x62DCD7: mov     edx, [eax+224h]
0x62DCDD: push    ecx
0x62DCDE: mov     ecx, esi
0x62DCE0: fstp    [esp+34h+var_34]
0x62DCE3: call    edx
0x62DCE5: mov     eax, [esi]
0x62DCE7: mov     edx, [eax+2C0h]
0x62DCED: mov     ecx, esi
0x62DCEF: call    edx
0x62DCF1: test    ax, 400h
0x62DCF5: jz      loc_62E3E3
0x62DCFB: mov     eax, [esi]
0x62DCFD: mov     edx, [eax+2C4h]
0x62DD03: push    0
0x62DD05: push    400h
0x62DD0A: mov     ecx, esi
0x62DD0C: call    edx
0x62DD0E: pop     edi
0x62DD0F: pop     esi
0x62DD10: pop     ebp
0x62DD11: pop     ebx
0x62DD12: add     esp, 20h
0x62DD15: retn    4
0x62DD18: cmp     dword ptr [esi+2Ch], 0
0x62DD1C: jz      short loc_62DD35
0x62DD1E: mov     eax, [esi]
0x62DD20: mov     edx, [eax+524h]
0x62DD26: push    edi
0x62DD27: mov     ecx, esi
0x62DD29: call    edx
0x62DD2B: pop     edi
0x62DD2C: pop     esi
0x62DD2D: pop     ebp
0x62DD2E: pop     ebx
0x62DD2F: add     esp, 20h
0x62DD32: retn    4
0x62DD35: cmp     dword ptr [esi+40h], 0
0x62DD39: lea     ebx, [esi+3Ch]
0x62DD3C: jnz     short loc_62DD47
0x62DD3E: cmp     dword ptr [ebx], 0
0x62DD41: jz      loc_62DDE5
0x62DD47: mov     eax, [ebx]
0x62DD49: mov     [esi+44h], eax
0x62DD4C: mov     dword ptr [eax+10h], 1
0x62DD53: mov     eax, [esi+44h]
0x62DD56: push    eax
0x62DD57: mov     ecx, ebx
0x62DD59: call    BSSimpleList_Remove
0x62DD5E: mov     eax, [esi+44h]
0x62DD61: cmp     dword ptr [eax+1Ch], 2
0x62DD65: mov     eax, [eax]
0x62DD67: jnz     short loc_62DDCE
0x62DD69: mov     edx, [eax]
0x62DD6B: mov     ecx, eax
0x62DD6D: mov     eax, [edx+190h]
0x62DD73: call    eax
0x62DD75: test    al, al
0x62DD77: mov     eax, [esi+44h]
0x62DD7A: mov     ecx, [eax]; this
0x62DD7C: jz      short loc_62DD95
0x62DD7E: mov     edx, [esi]
0x62DD80: mov     edx, [edx+0D0h]
0x62DD86: push    ecx
0x62DD87: mov     ecx, esi
0x62DD89: call    edx
0x62DD8B: pop     edi
0x62DD8C: pop     esi
0x62DD8D: pop     ebp
0x62DD8E: pop     ebx
0x62DD8F: add     esp, 20h
0x62DD92: retn    4
0x62DD95: call    TESObjectREFR_GetOwner
0x62DD9A: test    eax, eax
0x62DD9C: jz      loc_62E3E3
0x62DDA2: cmp     byte ptr [eax+4], 23h ; '#'
0x62DDA6: jnz     loc_62E3E3
0x62DDAC: mov     edi, [esi]
0x62DDAE: push    eax
0x62DDAF: mov     ecx, offset ActorProcessManager_ptr
0x62DDB4: call    sub_675220
0x62DDB9: mov     edx, [edi+0D0h]
0x62DDBF: push    eax
0x62DDC0: mov     ecx, esi
0x62DDC2: call    edx
0x62DDC4: pop     edi
0x62DDC5: pop     esi
0x62DDC6: pop     ebp
0x62DDC7: pop     ebx
0x62DDC8: add     esp, 20h
0x62DDCB: retn    4
0x62DDCE: mov     edx, [esi]
0x62DDD0: mov     edx, [edx+0D0h]
0x62DDD6: push    eax
0x62DDD7: mov     ecx, esi
0x62DDD9: call    edx
0x62DDDB: pop     edi
0x62DDDC: pop     esi
0x62DDDD: pop     ebp
0x62DDDE: pop     ebx
0x62DDDF: add     esp, 20h
0x62DDE2: retn    4
0x62DDE5: push    edi
0x62DDE6: mov     ecx, ebp
0x62DDE8: call    sub_566A40
0x62DDED: mov     ebp, eax
0x62DDEF: mov     eax, [edi]
0x62DDF1: mov     edx, [eax+174h]
0x62DDF7: mov     ecx, edi
0x62DDF9: call    edx
0x62DDFB: test    ebp, ebp
0x62DDFD: mov     ecx, [eax]
0x62DDFF: mov     [esp+30h+a2], ecx
0x62DE03: mov     edx, [eax+4]
0x62DE06: mov     [esp+30h+var_14], edx
0x62DE0A: mov     eax, [eax+8]
0x62DE0D: mov     [esp+30h+var_10], eax
0x62DE11: jnz     short loc_62DE1C
0x62DE13: mov     ecx, edi; this
0x62DE15: call    TESObjectREFR_GetParentCell
0x62DE1A: mov     ebp, eax
0x62DE1C: mov     ecx, ebp; this
0x62DE1E: mov     byte ptr ds:0B3B934h, 1
0x62DE25: mov     dword ptr [esi+6Ch], 14h
0x62DE2C: mov     dword ptr [esi+64h], 0
0x62DE33: call    TESObjectCELL_IsInterior
0x62DE38: test    al, al
0x62DE3A: jz      short loc_62DE44
0x62DE3C: fld     dword ptr ds:0A32048h
0x62DE42: jmp     short loc_62DE50
0x62DE44: mov     ecx, offset fAIAcquireObjectDistance
0x62DE49: call    GameSetting_GetSafeFloatPointer
0x62DE4E: fld     dword ptr [eax]
0x62DE50: push    edi; a7
0x62DE51: fstp    [esp+34h+arg_0]
0x62DE55: fld     [esp+34h+arg_0]
0x62DE59: push    offset sub_646600; a6
0x62DE5E: push    ecx
0x62DE5F: fstp    [esp+3Ch+a5]; a5
0x62DE62: push    edi
0x62DE63: lea     ecx, [esp+40h+var_C]
0x62DE67: push    ecx
0x62DE68: mov     ecx, [esp+44h+var_20]
0x62DE6C: call    sub_566B30
0x62DE71: fld     [esp+3Ch+arg_0]
0x62DE75: fmul    qword ptr ds:0A2FAA0h
0x62DE7B: push    eax; a4
0x62DE7C: push    ecx
0x62DE7D: mov     ecx, ds:0B33A98h
0x62DE83: fstp    [esp+44h+arg_0]
0x62DE87: lea     edx, [esp+44h+a2]
0x62DE8B: fld     [esp+44h+arg_0]
0x62DE8F: fstp    [esp+44h+a3]; a3
0x62DE92: push    edx; a2
0x62DE93: push    ebp; a1
0x62DE94: call    sub_446B90
0x62DE99: mov     eax, [esi]
0x62DE9B: mov     edx, [eax+568h]
0x62DEA1: push    edi
0x62DEA2: mov     ecx, esi
0x62DEA4: mov     byte ptr ds:0B3B934h, 0
0x62DEAB: mov     dword ptr [esi+6Ch], 0
0x62DEB2: call    edx
0x62DEB4: mov     ecx, ebx
0x62DEB6: call    BSSimpleList_IsEmpty
0x62DEBB: test    al, al
0x62DEBD: jz      loc_62E3E3
0x62DEC3: mov     eax, [esi]
0x62DEC5: mov     edx, [eax+194h]
0x62DECB: push    edi
0x62DECC: mov     ecx, esi
0x62DECE: call    edx
0x62DED0: fld     dword ptr ds:0A417B4h
0x62DED6: mov     eax, [esi]
0x62DED8: fstp    dword ptr [esi+1E8h]
0x62DEDE: mov     edx, [eax+188h]
0x62DEE4: push    1
0x62DEE6: push    edi
0x62DEE7: mov     ecx, esi
0x62DEE9: call    edx
0x62DEEB: pop     edi
0x62DEEC: pop     esi
0x62DEED: pop     ebp
0x62DEEE: pop     ebx
0x62DEEF: add     esp, 20h
0x62DEF2: retn    4
0x62DEF5: push    edi
0x62DEF6: mov     ecx, ebp
0x62DEF8: call    sub_566D00
0x62DEFD: mov     ecx, edi
0x62DEFF: mov     ebp, eax
0x62DF01: call    sub_5E32D0
0x62DF06: test    al, al
0x62DF08: jnz     short loc_62DF74
0x62DF0A: test    ebp, ebp
0x62DF0C: jz      short loc_62DF74
0x62DF0E: mov     eax, [ebp+8]
0x62DF11: shr     eax, 5
0x62DF14: test    al, 1
0x62DF16: jnz     short loc_62DF74
0x62DF18: mov     edx, [ebp+0]
0x62DF1B: mov     eax, [edx+170h]
0x62DF21: mov     ecx, ebp
0x62DF23: call    eax
0x62DF25: cmp     byte ptr [eax+4], 19h
0x62DF29: jnz     short loc_62DF74
0x62DF2B: mov     edx, [edi]
0x62DF2D: mov     eax, [edx+2CCh]
0x62DF33: push    0
0x62DF35: push    1
0x62DF37: push    ebp
0x62DF38: mov     ecx, edi
0x62DF3A: call    eax
0x62DF3C: mov     edx, [ebp+0]
0x62DF3F: mov     eax, [edx+170h]
0x62DF45: mov     ecx, ebp
0x62DF47: call    eax
0x62DF49: mov     [esi+24h], eax
0x62DF4C: mov     edx, [ebp+0]
0x62DF4F: mov     eax, [edx+170h]
0x62DF55: push    1
0x62DF57: lea     ecx, [ebp+44h]
0x62DF5A: push    ecx
0x62DF5B: mov     ecx, ebp
0x62DF5D: call    eax
0x62DF5F: push    eax
0x62DF60: mov     ecx, edi
0x62DF62: call    Actor_EquipIngredient?
0x62DF67: mov     edx, [esi]
0x62DF69: mov     eax, [edx+594h]
0x62DF6F: push    edi
0x62DF70: mov     ecx, esi
0x62DF72: call    eax
0x62DF74: mov     edx, [edi]
0x62DF76: mov     eax, [edx+164h]
0x62DF7C: mov     ecx, edi
0x62DF7E: call    eax
0x62DF80: test    eax, eax
0x62DF82: jz      loc_62E3E3
0x62DF88: mov     edx, [edi]
0x62DF8A: mov     eax, [edx+164h]
0x62DF90: mov     ecx, edi
0x62DF92: call    eax
0x62DF94: mov     ecx, eax
0x62DF96: call    sub_472EA0
0x62DF9B: test    al, al
0x62DF9D: jz      loc_62E3E3
0x62DFA3: mov     edx, [esi]
0x62DFA5: mov     eax, [edx+220h]
0x62DFAB: mov     ecx, esi
0x62DFAD: call    eax
0x62DFAF: fcomp   dword ptr ds:0A2FAA8h
0x62DFB5: fnstsw  ax
0x62DFB7: test    ah, 41h
0x62DFBA: jp      short loc_62E020
0x62DFBC: mov     ecx, [esi+24h]
0x62DFBF: push    ecx
0x62DFC0: call    sub_520F00
0x62DFC5: mov     edx, [esi]
0x62DFC7: mov     eax, [edx+48h]
0x62DFCA: add     esp, 4
0x62DFCD: push    edi
0x62DFCE: mov     ecx, esi
0x62DFD0: call    eax
0x62DFD2: mov     edi, [esi]
0x62DFD4: push    0; Seed
0x62DFD6: call    GetRandomLargeInteger?
0x62DFDB: cdq
0x62DFDC: mov     ecx, 1388h
0x62DFE1: idiv    ecx
0x62DFE3: mov     ecx, esi
0x62DFE5: mov     [esp+34h+arg_0], edx
0x62DFE9: fild    [esp+34h+arg_0]
0x62DFED: mov     edx, [edi+224h]
0x62DFF3: fmul    qword ptr ds:0A30E40h
0x62DFF9: fadd    qword ptr ds:0A2F928h
0x62DFFF: fstp    [esp+34h+arg_0]
0x62E003: fld     [esp+34h+arg_0]
0x62E007: fstp    [esp+34h+var_34]
0x62E00A: call    edx
0x62E00C: push    0
0x62E00E: call    sub_520F00
0x62E013: add     esp, 4
0x62E016: pop     edi
0x62E017: pop     esi
0x62E018: pop     ebp
0x62E019: pop     ebx
0x62E01A: add     esp, 20h
0x62E01D: retn    4
0x62E020: mov     eax, [esi]
0x62E022: mov     edx, [eax+220h]
0x62E028: mov     ecx, esi
0x62E02A: call    edx
0x62E02C: fstp    [esp+30h+arg_0]
0x62E030: fld     [esp+30h+arg_0]
0x62E034: mov     eax, [esi]
0x62E036: fsub    dword ptr ds:0B33E9Ch
0x62E03C: mov     edx, [eax+224h]
0x62E042: push    ecx
0x62E043: mov     ecx, esi
0x62E045: fstp    [esp+34h+arg_0]
0x62E049: fld     [esp+34h+arg_0]
0x62E04D: fstp    [esp+34h+var_34]
0x62E050: call    edx
0x62E052: mov     eax, [esi+18Ch]
0x62E058: test    eax, eax
0x62E05A: mov     byte ptr [esi+1D0h], 0
0x62E061: mov     [esp+30h+var_1C], eax
0x62E065: jz      loc_62E3E3
0x62E06B: jmp     short loc_62E070
0x62E06D: align 10h
0x62E070: mov     eax, [eax]
0x62E072: test    eax, eax
0x62E074: jz      loc_62E3E3
0x62E07A: cmp     dword ptr [eax+4], 3
0x62E07E: mov     ebp, [eax]
0x62E080: jnz     loc_62E204
0x62E086: mov     eax, [ebp+0]
0x62E089: mov     edx, [eax+198h]
0x62E08F: push    0
0x62E091: mov     ecx, ebp
0x62E093: call    edx
0x62E095: test    al, al
0x62E097: jnz     loc_62E204
0x62E09D: cmp     ebp, edi
0x62E09F: jz      loc_62E204
0x62E0A5: cmp     ebp, ds:0B333C4h
0x62E0AB: jz      loc_62E204
0x62E0B1: mov     ecx, ebp; this
0x62E0B3: call    Actor_IsNPC
0x62E0B8: test    al, al
0x62E0BA: jz      loc_62E204
0x62E0C0: fld     dword ptr ds:0A57EF8h
0x62E0C6: mov     ecx, offset fAISocialRadiusToTriggerConversation
0x62E0CB: fstp    [esp+30h+var_20]
0x62E0CF: call    GameSetting_GetSafeFloatPointer
0x62E0D4: fld     dword ptr [eax]
0x62E0D6: mov     ecx, edi; this
0x62E0D8: fstp    [esp+30h+arg_0]
0x62E0DC: call    TESObjectREFR_GetParentCell
0x62E0E1: mov     ecx, eax; this
0x62E0E3: call    TESObjectCELL_IsInterior
0x62E0E8: test    al, al
0x62E0EA: jz      short loc_62E0FC
0x62E0EC: mov     ecx, offset fAISocialRadiusToTriggerConversationInt
0x62E0F1: call    GameSetting_GetSafeFloatPointer
0x62E0F6: fld     dword ptr [eax]
0x62E0F8: fstp    [esp+30h+arg_0]
0x62E0FC: fld     [esp+30h+arg_0]
0x62E100: fcomp   qword ptr ds:0A37478h
0x62E106: fnstsw  ax
0x62E108: test    ah, 5
0x62E10B: jp      short loc_62E11D
0x62E10D: mov     ecx, offset fAISocialRadiusToTriggerConversation
0x62E112: call    GameSetting_GetSafeFloatPointer
0x62E117: fld     dword ptr [eax]
0x62E119: fstp    [esp+30h+var_20]
0x62E11D: push    0
0x62E11F: push    edi
0x62E120: mov     ecx, ebp
0x62E122: call    TesObjectREF_GetDistance
0x62E127: fld     [esp+30h+var_20]
0x62E12B: fcompp
0x62E12D: fnstsw  ax
0x62E12F: test    ah, 1
0x62E132: jnz     loc_62E204
0x62E138: push    edi
0x62E139: mov     ecx, ebp
0x62E13B: call    sub_5ED730
0x62E140: test    al, al
0x62E142: jz      loc_62E204
0x62E148: lea     ebx, [esi+190h]
0x62E14E: mov     ecx, ebx
0x62E150: call    BSSimpleList_IsEmpty
0x62E155: test    al, al
0x62E157: jz      short loc_62E167
0x62E159: mov     ecx, offset unk_B36AA8
0x62E15E: call    GameSetting_GetSafeFloatPointer
0x62E163: fld     dword ptr [eax]
0x62E165: jmp     short loc_62E173
0x62E167: fld     dword ptr [esi+198h]
0x62E16D: fsub    dword ptr ds:0B33E9Ch
0x62E173: fstp    dword ptr [esi+198h]
0x62E179: fldz
0x62E17B: fcomp   dword ptr [esi+198h]
0x62E181: fnstsw  ax
0x62E183: test    ah, 1
0x62E186: jnz     short loc_62E18F
0x62E188: mov     ecx, ebx
0x62E18A: call    BSSimpleList_Clear
0x62E18F: push    0; Seed
0x62E191: call    GetRandomLargeInteger?
0x62E196: mov     ecx, eax
0x62E198: mov     eax, 0AE147AE1h
0x62E19D: imul    ecx
0x62E19F: sar     edx, 5
0x62E1A2: mov     eax, edx
0x62E1A4: shr     eax, 1Fh
0x62E1A7: add     eax, edx
0x62E1A9: imul    eax, 64h ; 'd'
0x62E1AC: add     ecx, eax
0x62E1AE: add     esp, 4
0x62E1B1: mov     [esp+30h+var_20], ecx
0x62E1B5: push    ebp
0x62E1B6: mov     ecx, ebx
0x62E1B8: call    sub_446C30
0x62E1BD: test    al, al
0x62E1BF: jnz     short loc_62E204
0x62E1C1: mov     ecx, offset fAISocialchanceForConversation
0x62E1C6: call    GameSetting_GetSafeFloatPointer
0x62E1CB: fld     dword ptr [eax]
0x62E1CD: mov     ecx, edi; this
0x62E1CF: fstp    [esp+30h+arg_0]
0x62E1D3: call    TESObjectREFR_GetParentCell
0x62E1D8: mov     ecx, eax; this
0x62E1DA: call    TESObjectCELL_IsInterior
0x62E1DF: test    al, al
0x62E1E1: jz      short loc_62E1F3
0x62E1E3: mov     ecx, offset fAISocialchanceForConversationInterior
0x62E1E8: call    GameSetting_GetSafeFloatPointer
0x62E1ED: fld     dword ptr [eax]
0x62E1EF: fstp    [esp+30h+arg_0]
0x62E1F3: fild    [esp+30h+var_20]
0x62E1F7: fld     [esp+30h+arg_0]
0x62E1FB: fcompp
0x62E1FD: fnstsw  ax
0x62E1FF: test    ah, 41h
0x62E202: jz      short loc_62E221
0x62E204: mov     ecx, [esp+30h+var_1C]
0x62E208: mov     eax, [ecx+4]
0x62E20B: test    eax, eax
0x62E20D: mov     [esp+30h+var_1C], eax
0x62E211: jnz     loc_62E070
0x62E217: pop     edi
0x62E218: pop     esi
0x62E219: pop     ebp
0x62E21A: pop     ebx
0x62E21B: add     esp, 20h
0x62E21E: retn    4
0x62E221: push    ebp
0x62E222: lea     ecx, [esi+190h]
0x62E228: call    BSSimpleList_PushFront
0x62E22D: mov     ecx, [ebp+58h]
0x62E230: mov     edx, [ecx]
0x62E232: mov     eax, [edx+16Ch]
0x62E238: push    edi
0x62E239: call    eax
0x62E23B: mov     ecx, ebp
0x62E23D: call    sub_5E32D0
0x62E242: test    al, al
0x62E244: jz      loc_62E3E3
0x62E24A: mov     edx, [ebp+0]
0x62E24D: mov     eax, [edx+1A0h]
0x62E253: mov     ecx, ebp
0x62E255: call    eax
0x62E257: test    al, al
0x62E259: jnz     loc_62E3E3
0x62E25F: mov     ecx, ebp
0x62E261: call    sub_5E0F30
0x62E266: test    al, al
0x62E268: jnz     loc_62E3E3
0x62E26E: mov     ecx, ebp; this
0x62E270: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x62E275: cmp     eax, 3
0x62E278: jz      loc_62E3E3
0x62E27E: push    edi
0x62E27F: mov     ecx, ebp
0x62E281: call    sub_5ED730
0x62E286: test    al, al
0x62E288: jz      loc_62E3E3
0x62E28E: mov     ecx, [ebp+58h]
0x62E291: test    ecx, ecx
0x62E293: jz      loc_62E3E3
0x62E299: mov     edx, [ecx]
0x62E29B: mov     eax, [edx+200h]
0x62E2A1: call    eax
0x62E2A3: test    al, al
0x62E2A5: jnz     loc_62E3E3
0x62E2AB: cmp     ebp, ds:0B333C4h
0x62E2B1: jz      loc_62E3E3
0x62E2B7: mov     edx, [ebp+0]
0x62E2BA: mov     eax, [edx+198h]
0x62E2C0: push    0
0x62E2C2: mov     ecx, ebp
0x62E2C4: call    eax
0x62E2C6: test    al, al
0x62E2C8: jnz     loc_62E3E3
0x62E2CE: mov     edx, [ebp+0]
0x62E2D1: mov     eax, [edx+154h]
0x62E2D7: mov     ecx, ebp
0x62E2D9: call    eax
0x62E2DB: test    eax, eax
0x62E2DD: jz      loc_62E3E3
0x62E2E3: mov     eax, [ebp+58h]
0x62E2E6: test    eax, eax
0x62E2E8: jz      loc_62E3E3
0x62E2EE: mov     eax, [eax+8]
0x62E2F1: test    eax, eax
0x62E2F3: jz      short loc_62E304
0x62E2F5: mov     ecx, eax
0x62E2F7: call    sub_567770
0x62E2FC: test    al, al
0x62E2FE: jnz     loc_62E3E3
0x62E304: mov     edx, [edi]
0x62E306: mov     eax, [edx+2F4h]
0x62E30C: push    0
0x62E30E: push    0
0x62E310: push    ebp
0x62E311: mov     ecx, edi
0x62E313: call    eax
0x62E315: fldz
0x62E317: mov     edx, [esi]
0x62E319: fst     dword ptr [esi+1D8h]
0x62E31F: push    ecx
0x62E320: fstp    [esp+34h+var_34]
0x62E323: mov     bl, al
0x62E325: mov     eax, [edx+224h]
0x62E32B: mov     ecx, esi
0x62E32D: call    eax
0x62E32F: mov     ecx, offset unk_B36AB0
0x62E334: call    GameSetting_GetSafeFloatPointer
0x62E339: fld     dword ptr [eax]
0x62E33B: test    bl, bl
0x62E33D: fstp    dword ptr [esi+1A8h]
0x62E343: jz      loc_62E3DB
0x62E349: mov     ecx, ebp
0x62E34B: call    sub_5E0380
0x62E350: test    eax, eax
0x62E352: jz      short loc_62E366
0x62E354: mov     ecx, ebp
0x62E356: call    sub_5E0380
0x62E35B: mov     ecx, [eax+1Ch]
0x62E35E: shr     ecx, 0Ch
0x62E361: test    cl, 1
0x62E364: jnz     short loc_62E3DB
0x62E366: mov     eax, [ebp+58h]
0x62E369: cmp     dword ptr [eax+8], 0
0x62E36D: jz      short loc_62E3B5
0x62E36F: mov     ecx, [eax+8]
0x62E372: call    sub_5660A0
0x62E377: test    al, al
0x62E379: jnz     short loc_62E3B5
0x62E37B: mov     ebx, [ebp+58h]
0x62E37E: mov     edx, [ebx]
0x62E380: mov     eax, [edx+390h]
0x62E386: mov     ecx, ebx
0x62E388: call    eax
0x62E38A: mov     edx, [ebx]
0x62E38C: mov     ecx, ebx
0x62E38E: push    eax
0x62E38F: mov     eax, [edx+0C0h]
0x62E395: call    eax
0x62E397: mov     edx, [ebx]
0x62E399: mov     ecx, ebx
0x62E39B: push    eax
0x62E39C: mov     eax, [edx+0CCh]
0x62E3A2: call    eax
0x62E3A4: mov     ecx, [ebx+4]
0x62E3A7: mov     edx, [ebx+8]
0x62E3AA: push    eax
0x62E3AB: push    ecx
0x62E3AC: push    edx
0x62E3AD: lea     ecx, [ebp+44h]
0x62E3B0: call    sub_4268B0
0x62E3B5: push    1; a4
0x62E3B7: push    0; a3
0x62E3B9: mov     ecx, edi
0x62E3BB: call    sub_5E0380
0x62E3C0: push    eax; a2
0x62E3C1: mov     ecx, ebp; this
0x62E3C3: call    Actor_AddPackage?
0x62E3C8: mov     ebp, [ebp+58h]
0x62E3CB: mov     eax, [ebp+0]
0x62E3CE: mov     edx, [eax+188h]
0x62E3D4: push    1
0x62E3D6: push    edi
0x62E3D7: mov     ecx, ebp
0x62E3D9: call    edx
0x62E3DB: fldz
0x62E3DD: fstp    dword ptr [esi+1D8h]
0x62E3E3: pop     edi
0x62E3E4: pop     esi
0x62E3E5: pop     ebp
0x62E3E6: pop     ebx
0x62E3E7: add     esp, 20h
0x62E3EA: retn    4
