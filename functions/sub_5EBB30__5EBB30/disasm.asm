0x5EBB30: push    0FFFFFFFFh
0x5EBB32: push    offset SummonCreatureEffect_Apply_SEH
0x5EBB37: mov     eax, large fs:0
0x5EBB3D: push    eax
0x5EBB3E: sub     esp, 18h
0x5EBB41: push    ebx
0x5EBB42: push    ebp
0x5EBB43: push    esi
0x5EBB44: push    edi
0x5EBB45: mov     eax, ds:0B30AACh
0x5EBB4A: xor     eax, esp
0x5EBB4C: push    eax; int
0x5EBB4D: lea     eax, [esp+38h+var_C]
0x5EBB51: mov     large fs:0, eax
0x5EBB57: mov     esi, ecx
0x5EBB59: push    esi; a1
0x5EBB5A: mov     ecx, offset ActorProcessManager_ptr; this
0x5EBB5F: call    sub_674850
0x5EBB64: mov     ecx, [esi+58h]
0x5EBB67: xor     ebx, ebx
0x5EBB69: cmp     ecx, ebx
0x5EBB6B: jz      short loc_5EBB7D
0x5EBB6D: mov     eax, [ecx]
0x5EBB6F: mov     edx, [eax+8]
0x5EBB72: call    edx
0x5EBB74: cmp     eax, 2
0x5EBB77: jz      loc_5EC15B
0x5EBB7D: mov     ecx, [esi+58h]
0x5EBB80: cmp     ecx, ebx
0x5EBB82: jz      short loc_5EBBA3
0x5EBB84: mov     eax, [ecx]
0x5EBB86: mov     edx, [eax+8]
0x5EBB89: call    edx
0x5EBB8B: test    eax, eax
0x5EBB8D: jnz     short loc_5EBBA3
0x5EBB8F: call    InitBSShaderAccumulator
0x5EBB94: cmp     eax, ebx
0x5EBB96: jz      short loc_5EBBA3
0x5EBB98: mov     ecx, [esi+0Ch]
0x5EBB9B: push    ecx
0x5EBB9C: mov     ecx, eax
0x5EBB9E: call    sub_7AD1E0
0x5EBBA3: mov     ecx, [esi+58h]
0x5EBBA6: cmp     ecx, ebx
0x5EBBA8: jz      short loc_5EBBD6
0x5EBBAA: mov     eax, [ecx]
0x5EBBAC: mov     edx, [eax+184h]
0x5EBBB2: call    edx
0x5EBBB4: cmp     eax, ebx
0x5EBBB6: jz      short loc_5EBBD6
0x5EBBB8: cmp     byte ptr [eax+20h], 12h
0x5EBBBC: jnz     short loc_5EBBD6
0x5EBBBE: mov     ecx, [esi+58h]
0x5EBBC1: mov     eax, [ecx]
0x5EBBC3: mov     edx, [eax+1CCh]
0x5EBBC9: call    edx
0x5EBBCB: test    al, al
0x5EBBCD: jz      short loc_5EBBD6
0x5EBBCF: mov     ecx, esi; int
0x5EBBD1: call    sub_5EAE70
0x5EBBD6: mov     ecx, [esi+58h]
0x5EBBD9: mov     eax, [ecx]
0x5EBBDB: mov     edx, [eax+8]
0x5EBBDE: call    edx
0x5EBBE0: mov     ecx, esi
0x5EBBE2: mov     edi, eax
0x5EBBE4: call    sub_5E4B00
0x5EBBE9: cmp     edi, 1
0x5EBBEC: jz      short loc_5EBBF2
0x5EBBEE: cmp     edi, ebx
0x5EBBF0: jnz     short loc_5EBBF9
0x5EBBF2: mov     ecx, esi
0x5EBBF4: call    sub_5E4FC0
0x5EBBF9: lea     ecx, [esi+68h]
0x5EBBFC: call    MagicTarget_RemoveAllEffects
0x5EBC01: mov     eax, [esi]
0x5EBC03: mov     edx, [eax+1F8h]
0x5EBC09: mov     ecx, esi
0x5EBC0B: call    edx
0x5EBC0D: test    al, al
0x5EBC0F: mov     ecx, esi
0x5EBC11: jz      short loc_5EBC2F
0x5EBC13: call    sub_5E9E70
0x5EBC18: mov     ecx, [esi+58h]
0x5EBC1B: mov     eax, [ecx]
0x5EBC1D: mov     edx, [eax+23Ch]
0x5EBC23: push    esi
0x5EBC24: call    edx
0x5EBC26: mov     ecx, esi
0x5EBC28: call    RunScripts
0x5EBC2D: jmp     short loc_5EBC5A
0x5EBC2F: mov     eax, [esi]
0x5EBC31: mov     edx, [eax+198h]
0x5EBC37: push    ebx
0x5EBC38: call    edx
0x5EBC3A: test    al, al
0x5EBC3C: jz      short loc_5EBC5A
0x5EBC3E: mov     ecx, [esi+58h]
0x5EBC41: mov     eax, [ecx]
0x5EBC43: mov     edx, [eax+8]
0x5EBC46: call    edx
0x5EBC48: test    eax, eax
0x5EBC4A: jnz     short loc_5EBC5A
0x5EBC4C: mov     eax, [esi]
0x5EBC4E: mov     edx, [eax+9Ch]
0x5EBC54: push    1
0x5EBC56: mov     ecx, esi
0x5EBC58: call    edx
0x5EBC5A: push    edi
0x5EBC5B: push    esi
0x5EBC5C: mov     ecx, offset ActorProcessManager_ptr
0x5EBC61: call    sub_674550
0x5EBC66: mov     eax, ds:0B33A98h
0x5EBC6B: cmp     [eax+0CD4h], bl
0x5EBC71: jnz     short loc_5EBCA4
0x5EBC73: mov     ecx, ds:0B33B00h
0x5EBC79: call    sub_45A500
0x5EBC7E: test    al, al
0x5EBC80: jnz     short loc_5EBC8D
0x5EBC82: push    esi
0x5EBC83: mov     ecx, offset ActorProcessManager_ptr
0x5EBC88: call    sub_6765A0
0x5EBC8D: mov     eax, [esi+58h]
0x5EBC90: cmp     eax, ebx
0x5EBC92: jz      short loc_5EBCA4
0x5EBC94: mov     ecx, [eax+8]
0x5EBC97: cmp     ecx, ebx
0x5EBC99: jz      short loc_5EBCA4
0x5EBC9B: cmp     byte ptr [ecx+20h], 5
0x5EBC9F: jnz     short loc_5EBCA4
0x5EBCA1: mov     [eax+4], ebx
0x5EBCA4: cmp     dword ptr [esi+0B0h], 6
0x5EBCAB: jnz     short loc_5EBCC8
0x5EBCAD: push    ebx; newDeadState
0x5EBCAE: mov     ecx, esi; this
0x5EBCB0: call    Actor_HandleDeathSTate????
0x5EBCB5: fldz
0x5EBCB7: mov     ecx, [esi+58h]
0x5EBCBA: mov     edx, [ecx]
0x5EBCBC: mov     eax, [edx+0A0h]
0x5EBCC2: push    ecx
0x5EBCC3: fstp    [esp+3Ch+var_3C]
0x5EBCC6: call    eax
0x5EBCC8: mov     ecx, [esi+58h]
0x5EBCCB: cmp     ecx, ebx
0x5EBCCD: jz      short loc_5EBCDF
0x5EBCCF: mov     edx, [ecx]
0x5EBCD1: mov     eax, [edx+388h]
0x5EBCD7: call    eax
0x5EBCD9: mov     [esp+38h+var_22], al
0x5EBCDD: jmp     short loc_5EBCE3
0x5EBCDF: mov     [esp+38h+var_22], bl
0x5EBCE3: push    0A8h ; '¨'; Size
0x5EBCE8: mov     [esp+3Ch+var_21], bl
0x5EBCEC: xor     ebp, ebp
0x5EBCEE: call    FormHeapAlloc
0x5EBCF3: add     esp, 4
0x5EBCF6: mov     [esp+38h+var_1C], eax
0x5EBCFA: cmp     eax, ebx
0x5EBCFC: mov     [esp+38h+var_4], ebx
0x5EBD00: jz      short loc_5EBD0B
0x5EBD02: mov     ecx, eax; this
0x5EBD04: call    ??0MiddleLowProcess@@QAE@XZ; MiddleLowProcess::MiddleLowProcess(void)
0x5EBD09: mov     ebx, eax
0x5EBD0B: mov     eax, [esi+58h]
0x5EBD0E: test    eax, eax
0x5EBD10: mov     [esp+38h+var_4], 0FFFFFFFFh
0x5EBD18: mov     byte ptr [esp+38h+var_20], 0
0x5EBD1D: jz      loc_5EBE3B
0x5EBD23: mov     eax, [eax+8]
0x5EBD26: test    eax, eax
0x5EBD28: jz      loc_5EBE3B
0x5EBD2E: mov     ecx, eax
0x5EBD30: call    sub_567770
0x5EBD35: test    al, al
0x5EBD37: jz      loc_5EBE3B
0x5EBD3D: mov     ecx, [esi+58h]
0x5EBD40: mov     edx, [ecx]
0x5EBD42: mov     eax, [edx+3D0h]
0x5EBD48: call    eax
0x5EBD4A: cmp     eax, ds:0B333C4h
0x5EBD50: jnz     short loc_5EBD80
0x5EBD52: mov     ecx, [esi+58h]
0x5EBD55: mov     edi, [ecx]
0x5EBD57: mov     ecx, offset TimeGlobals
0x5EBD5C: call    TimeGlobals_GetGameHour
0x5EBD61: fsub    qword ptr ds:0A2FAA0h
0x5EBD67: mov     edx, [edi+1Ch]
0x5EBD6A: push    ecx
0x5EBD6B: mov     ecx, [esi+58h]
0x5EBD6E: fstp    [esp+3Ch+var_1C]
0x5EBD72: fld     [esp+3Ch+var_1C]
0x5EBD76: fstp    [esp+3Ch+var_3C]
0x5EBD79: call    edx
0x5EBD7B: jmp     loc_5EBE3B
0x5EBD80: push    0
0x5EBD82: mov     ecx, esi
0x5EBD84: call    sub_5E6CD0
0x5EBD89: test    al, al
0x5EBD8B: jnz     short loc_5EBDB8
0x5EBD8D: mov     eax, [esi]
0x5EBD8F: mov     edx, [eax+334h]
0x5EBD95: push    1
0x5EBD97: mov     ecx, esi
0x5EBD99: call    edx
0x5EBD9B: test    al, al
0x5EBD9D: jnz     short loc_5EBDB8
0x5EBD9F: mov     ecx, esi
0x5EBDA1: call    sub_5E6BA0
0x5EBDA6: test    al, al
0x5EBDA8: jnz     loc_5EBE3B
0x5EBDAE: call    sub_5EAE70
0x5EBDB3: jmp     loc_5EBE3B
0x5EBDB8: mov     eax, [esi]
0x5EBDBA: mov     edx, [eax+330h]
0x5EBDC0: mov     ecx, esi
0x5EBDC2: call    edx
0x5EBDC4: test    eax, eax
0x5EBDC6: jnz     short loc_5EBDCD
0x5EBDC8: mov     [esp+38h+var_21], 1
0x5EBDCD: mov     ecx, [esi+58h]
0x5EBDD0: mov     eax, [ecx]
0x5EBDD2: mov     edx, [eax+0CCh]
0x5EBDD8: call    edx
0x5EBDDA: push    0
0x5EBDDC: mov     ecx, esi
0x5EBDDE: mov     ebp, eax
0x5EBDE0: call    sub_5E6CD0
0x5EBDE5: test    al, al
0x5EBDE7: jz      short loc_5EBE19
0x5EBDE9: test    ebp, ebp
0x5EBDEB: mov     byte ptr [esp+38h+var_20], 1
0x5EBDF0: jnz     short loc_5EBE3B
0x5EBDF2: mov     ecx, [esi+58h]
0x5EBDF5: mov     eax, [ecx]
0x5EBDF7: mov     edx, [eax+184h]
0x5EBDFD: call    edx
0x5EBDFF: test    eax, eax
0x5EBE01: jz      short loc_5EBE19
0x5EBE03: cmp     byte ptr [eax+20h], 10h
0x5EBE07: jnz     short loc_5EBE19
0x5EBE09: cmp     byte ptr [eax+64h], 0
0x5EBE0D: jz      short loc_5EBE19
0x5EBE0F: push    esi
0x5EBE10: mov     ecx, eax
0x5EBE12: call    sub_628140
0x5EBE17: mov     ebp, eax
0x5EBE19: test    ebp, ebp
0x5EBE1B: jnz     short loc_5EBE3B
0x5EBE1D: mov     eax, [esi]
0x5EBE1F: mov     edx, [eax+338h]
0x5EBE25: mov     ecx, esi
0x5EBE27: call    edx
0x5EBE29: test    eax, eax
0x5EBE2B: jz      short loc_5EBE3B
0x5EBE2D: mov     eax, [esi]
0x5EBE2F: mov     edx, [eax+338h]
0x5EBE35: mov     ecx, esi
0x5EBE37: call    edx
0x5EBE39: mov     ebp, eax
0x5EBE3B: mov     ecx, [esi+58h]
0x5EBE3E: mov     eax, [ebx]
0x5EBE40: mov     edx, [eax+4]
0x5EBE43: push    ecx
0x5EBE44: mov     ecx, ebx
0x5EBE46: call    edx
0x5EBE48: mov     ecx, [esi+58h]
0x5EBE4B: test    ecx, ecx
0x5EBE4D: jz      short loc_5EBE57
0x5EBE4F: mov     eax, [ecx]
0x5EBE51: mov     edx, [eax]
0x5EBE53: push    1
0x5EBE55: call    edx
0x5EBE57: push    0
0x5EBE59: push    0
0x5EBE5B: push    1
0x5EBE5D: push    2
0x5EBE5F: push    esi
0x5EBE60: mov     ecx, offset ActorProcessManager_ptr
0x5EBE65: mov     [esi+58h], ebx
0x5EBE68: call    sub_673A90
0x5EBE6D: cmp     [esp+38h+var_21], 0
0x5EBE72: jz      short loc_5EBEA6
0x5EBE74: test    ebp, ebp
0x5EBE76: jz      short loc_5EBEA6
0x5EBE78: mov     ecx, [esi+58h]
0x5EBE7B: mov     edi, [ecx]
0x5EBE7D: mov     eax, [edi+148h]
0x5EBE83: push    1
0x5EBE85: push    0
0x5EBE87: push    0
0x5EBE89: push    0
0x5EBE8B: call    eax
0x5EBE8D: mov     ecx, [esp+38h+var_10]
0x5EBE91: mov     edx, [edi+228h]
0x5EBE97: push    eax
0x5EBE98: push    0
0x5EBE9A: push    ecx
0x5EBE9B: mov     ecx, [esi+58h]
0x5EBE9E: push    0
0x5EBEA0: push    ebp
0x5EBEA1: push    esi
0x5EBEA2: call    edx
0x5EBEA4: jmp     short loc_5EBEBA
0x5EBEA6: cmp     [esp+38h+var_22], 0
0x5EBEAB: jz      short loc_5EBEBA
0x5EBEAD: mov     ecx, [esi+58h]
0x5EBEB0: mov     eax, [ecx]
0x5EBEB2: mov     edx, [eax+18h]
0x5EBEB5: push    0
0x5EBEB7: push    esi
0x5EBEB8: call    edx
0x5EBEBA: mov     eax, ds:0B33A98h
0x5EBEBF: test    eax, eax
0x5EBEC1: jz      loc_5EC15B
0x5EBEC7: cmp     byte ptr [eax+0CD4h], 0
0x5EBECE: jnz     loc_5EC15B
0x5EBED4: cmp     [esp+38h+var_22], 0
0x5EBED9: jz      short loc_5EBEE8
0x5EBEDB: mov     ecx, [esi+58h]
0x5EBEDE: mov     eax, [ecx]
0x5EBEE0: mov     edx, [eax+18h]
0x5EBEE3: push    0
0x5EBEE5: push    esi
0x5EBEE6: call    edx
0x5EBEE8: mov     eax, [esi]
0x5EBEEA: mov     edx, [eax+334h]
0x5EBEF0: push    1
0x5EBEF2: mov     ecx, esi
0x5EBEF4: call    edx
0x5EBEF6: test    al, al
0x5EBEF8: mov     ecx, esi
0x5EBEFA: jz      loc_5EC0CC
0x5EBF00: push    0
0x5EBF02: call    sub_5E6CD0
0x5EBF07: test    al, al
0x5EBF09: jnz     loc_5EC154
0x5EBF0F: mov     eax, [esi]
0x5EBF11: mov     edx, [eax+350h]
0x5EBF17: mov     ecx, esi
0x5EBF19: call    edx
0x5EBF1B: test    al, al
0x5EBF1D: jnz     loc_5EC154
0x5EBF23: mov     eax, [esi]
0x5EBF25: mov     edx, [eax+338h]
0x5EBF2B: mov     ecx, esi
0x5EBF2D: call    edx
0x5EBF2F: test    eax, eax
0x5EBF31: jz      loc_5EC154
0x5EBF37: mov     eax, [esi]
0x5EBF39: mov     edx, [eax+338h]
0x5EBF3F: mov     ecx, esi
0x5EBF41: call    edx
0x5EBF43: cmp     dword ptr [eax+58h], 0
0x5EBF47: jz      loc_5EC099
0x5EBF4D: mov     eax, [esi]
0x5EBF4F: mov     edx, [eax+338h]
0x5EBF55: mov     ecx, esi
0x5EBF57: call    edx
0x5EBF59: mov     ecx, eax; this
0x5EBF5B: call    Actor__GetProcessLevel
0x5EBF60: test    eax, eax
0x5EBF62: jnz     loc_5EC099
0x5EBF68: mov     eax, [esi]
0x5EBF6A: mov     edx, [eax+338h]
0x5EBF70: mov     ecx, esi
0x5EBF72: call    edx
0x5EBF74: mov     ecx, ds:0B333C4h
0x5EBF7A: cmp     eax, ecx
0x5EBF7C: jnz     loc_5EC07F
0x5EBF82: mov     eax, [ecx+110h]
0x5EBF88: cmp     eax, ds:0B37D18h
0x5EBF8E: jg      loc_5EC07F
0x5EBF94: push    esi
0x5EBF95: call    Actor__CanUSeDoor?
0x5EBF9A: add     esp, 4
0x5EBF9D: test    al, al
0x5EBF9F: jz      loc_5EC07F
0x5EBFA5: mov     ecx, [esi+58h]
0x5EBFA8: mov     edi, [ecx]
0x5EBFAA: mov     ecx, offset TimeGlobals
0x5EBFAF: call    TimeGlobals_GetGameHour
0x5EBFB4: fsub    qword ptr ds:0A2FAA0h
0x5EBFBA: mov     edx, [edi+1Ch]
0x5EBFBD: push    ecx
0x5EBFBE: mov     ecx, [esi+58h]
0x5EBFC1: fstp    [esp+3Ch+var_1C]
0x5EBFC5: fld     [esp+3Ch+var_1C]
0x5EBFC9: fstp    [esp+3Ch+var_3C]
0x5EBFCC: call    edx
0x5EBFCE: mov     ecx, [esi+58h]
0x5EBFD1: mov     eax, [ecx]
0x5EBFD3: mov     edx, [eax+194h]
0x5EBFD9: push    esi
0x5EBFDA: call    edx
0x5EBFDC: mov     eax, [esi]
0x5EBFDE: mov     edx, [eax+338h]
0x5EBFE4: mov     ecx, esi
0x5EBFE6: call    edx
0x5EBFE8: fld     dword ptr ds:0A46C30h
0x5EBFEE: mov     eax, ds:0B333C4h
0x5EBFF3: fstp    [esp+38h+var_20]
0x5EBFF7: add     dword ptr [eax+110h], 1
0x5EBFFE: mov     eax, ds:0B333C4h
0x5EC003: cmp     dword ptr [eax+570h], 0
0x5EC00A: jz      short loc_5EC065
0x5EC00C: mov     ecx, [eax+570h]; this
0x5EC012: call    TESObjectREFR_GetParentCell
0x5EC017: mov     ecx, esi; this
0x5EC019: mov     edi, eax
0x5EC01B: call    TESObjectREFR_GetParentCell
0x5EC020: cmp     eax, edi
0x5EC022: jnz     short loc_5EC065
0x5EC024: mov     eax, ds:0B333C4h
0x5EC029: mov     ecx, [eax+570h]
0x5EC02F: mov     edx, [ecx]
0x5EC031: mov     eax, [edx+174h]
0x5EC037: call    eax
0x5EC039: mov     edx, [esi]
0x5EC03B: push    eax
0x5EC03C: mov     eax, [edx+174h]
0x5EC042: lea     ecx, [esp+3Ch+var_18]
0x5EC046: push    ecx
0x5EC047: mov     ecx, esi
0x5EC049: call    eax
0x5EC04B: mov     ecx, eax
0x5EC04D: call    sub_4121A0
0x5EC052: lea     ecx, [esp+38h+var_18]
0x5EC056: call    sub_404C90
0x5EC05B: fdiv    qword ptr ds:0A3DDE0h
0x5EC061: fstp    [esp+38h+var_20]
0x5EC065: mov     ecx, [esi+58h]
0x5EC068: fld     [esp+38h+var_20]
0x5EC06C: mov     edx, [ecx]
0x5EC06E: mov     eax, [edx+164h]
0x5EC074: push    ecx
0x5EC075: fstp    [esp+3Ch+var_3C]
0x5EC078: call    eax
0x5EC07A: jmp     loc_5EC154
0x5EC07F: mov     edx, [esi]
0x5EC081: mov     eax, [edx+340h]
0x5EC087: push    0
0x5EC089: mov     ecx, esi
0x5EC08B: call    eax
0x5EC08D: mov     ecx, esi; int
0x5EC08F: call    sub_5EAE70
0x5EC094: jmp     loc_5EC154
0x5EC099: mov     edx, [esi]
0x5EC09B: mov     eax, [edx+330h]
0x5EC0A1: mov     ecx, esi
0x5EC0A3: call    eax
0x5EC0A5: test    eax, eax
0x5EC0A7: jz      loc_5EC154
0x5EC0AD: mov     ecx, ds:0B333C4h
0x5EC0B3: mov     edx, [esi]
0x5EC0B5: mov     eax, [edx+330h]
0x5EC0BB: push    ecx
0x5EC0BC: mov     ecx, esi
0x5EC0BE: call    eax
0x5EC0C0: mov     ecx, eax
0x5EC0C2: call    sub_6162D0
0x5EC0C7: jmp     loc_5EC154
0x5EC0CC: mov     edx, [esi]
0x5EC0CE: mov     eax, [edx+78h]
0x5EC0D1: call    eax
0x5EC0D3: test    al, al
0x5EC0D5: jz      short loc_5EC0E0
0x5EC0D7: cmp     byte ptr [esi+0CAh], 0
0x5EC0DE: jnz     short loc_5EC10B
0x5EC0E0: mov     ecx, esi
0x5EC0E2: call    sub_5E3220
0x5EC0E7: test    al, al
0x5EC0E9: jnz     short loc_5EC0F6
0x5EC0EB: mov     ecx, esi
0x5EC0ED: call    sub_5E30A0
0x5EC0F2: test    al, al
0x5EC0F4: jz      short loc_5EC154
0x5EC0F6: mov     ecx, [esi+58h]
0x5EC0F9: mov     edx, [ecx]
0x5EC0FB: mov     eax, [edx+0CCh]
0x5EC101: call    eax
0x5EC103: cmp     eax, ds:0B333C4h
0x5EC109: jnz     short loc_5EC154
0x5EC10B: mov     ecx, [esi+58h]
0x5EC10E: mov     edi, [ecx]
0x5EC110: mov     ecx, offset TimeGlobals
0x5EC115: call    TimeGlobals_GetGameHour
0x5EC11A: fsub    qword ptr ds:0A2FAA0h
0x5EC120: mov     edx, [edi+1Ch]
0x5EC123: push    ecx
0x5EC124: mov     ecx, [esi+58h]
0x5EC127: fstp    [esp+3Ch+var_1C]
0x5EC12B: fld     [esp+3Ch+var_1C]
0x5EC12F: fstp    [esp+3Ch+var_3C]
0x5EC132: call    edx
0x5EC134: push    2
0x5EC136: push    esi
0x5EC137: mov     ecx, offset ActorProcessManager_ptr
0x5EC13C: call    sub_674550
0x5EC141: push    0
0x5EC143: push    0
0x5EC145: push    0
0x5EC147: push    2
0x5EC149: push    esi
0x5EC14A: mov     ecx, offset ActorProcessManager_ptr
0x5EC14F: call    sub_673A90
0x5EC154: mov     byte ptr [esi+0CAh], 1
0x5EC15B: mov     al, 1
0x5EC15D: mov     ecx, dword ptr [esp+38h+var_C]
0x5EC161: mov     large fs:0, ecx
0x5EC168: pop     ecx
0x5EC169: pop     edi
0x5EC16A: pop     esi
0x5EC16B: pop     ebp
0x5EC16C: pop     ebx
0x5EC16D: add     esp, 24h
0x5EC170: retn
