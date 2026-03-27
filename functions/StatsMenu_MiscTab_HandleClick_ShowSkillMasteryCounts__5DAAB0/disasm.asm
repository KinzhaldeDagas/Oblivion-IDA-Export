0x5DAAB0: xor     ebp, ebp
0x5DAAB2: mov     eax, ds:off_B11E3C[ebx]
0x5DAAB8: cmp     eax, ebp
0x5DAABA: jz      short loc_5DAAC4
0x5DAABC: mov     ecx, [eax]
0x5DAABE: mov     [esp+a3], ecx
0x5DAAC2: jmp     short loc_5DAAC8
0x5DAAC4: mov     [esp+a3], ebp; a3
0x5DAAC8: mov     edx, [esi+4Ch]
0x5DAACB: push    ebp
0x5DAACC: push    offset aStat_misc_temp; "stat_misc_template"
0x5DAAD1: push    edx
0x5DAAD2: mov     ecx, esi
0x5DAAD4: call    Menu_CreateTileFromTemplate
0x5DAAD9: mov     ebp, eax
0x5DAADB: mov     eax, edi
0x5DAADD: test    eax, eax
0x5DAADF: mov     [esp+arg_14], eax; a3
0x5DAAE3: fild    [esp+arg_14]
0x5DAAE7: jge     short loc_5DAAEF
0x5DAAE9: fadd    dword ptr ds:0A2FC78h
0x5DAAEF: push    ecx
0x5DAAF0: fstp    [esp+4+a2]; a3
0x5DAAF3: push    0FAAh; a2
0x5DAAF8: mov     ecx, ebp; this
0x5DAAFA: call    Tile_SetFloat
0x5DAAFF: mov     ecx, [esp+a3]
0x5DAB03: push    ecx
0x5DAB04: push    0FAFh
0x5DAB09: mov     ecx, ebp
0x5DAB0B: call    Tile_SetString
0x5DAB10: fild    [esp+ebx+arg_2C]
0x5DAB14: mov     edx, [esp+ebx+arg_2C]
0x5DAB18: test    edx, edx
0x5DAB1A: jge     short loc_5DAB22
0x5DAB1C: fadd    dword ptr ds:0A2FC78h
0x5DAB22: push    ecx
0x5DAB23: fstp    [esp+4+a2]; a3
0x5DAB26: push    0FB0h; a2
0x5DAB2B: mov     ecx, ebp; this
0x5DAB2D: call    Tile_SetFloat
0x5DAB32: add     edi, 1
0x5DAB35: add     ebx, 4
0x5DAB38: sub     [esp+arg_10], 1
0x5DAB3D: jnz     StatsMenu_MiscTab_HandleClick___ShowSkillMasteryCounts
0x5DAB43: mov     ecx, ds:0B333C4h
0x5DAB49: mov     ebx, ds:0B38400h
0x5DAB4F: add     ecx, 44h ; 'D'
0x5DAB52: add     edi, 1
0x5DAB55: call    ExtraDataList_GetCrimeGold
0x5DAB5A: fnstcw  word ptr [esp+a3]
0x5DAB5E: movzx   eax, word ptr [esp+a3]
0x5DAB63: mov     ecx, [esi+4Ch]
0x5DAB66: or      eax, 0C00h
0x5DAB6B: mov     [esp+arg_10], eax
0x5DAB6F: push    0
0x5DAB71: push    offset aStat_misc_temp; "stat_misc_template"
0x5DAB76: fldcw   word ptr [esp+8+arg_10]
0x5DAB7A: push    ecx
0x5DAB7B: mov     ecx, esi
0x5DAB7D: fistp   qword ptr [esp+0Ch+arg_1C]
0x5DAB81: mov     eax, [esp+0Ch+arg_1C]
0x5DAB85: mov     [esp+0Ch+arg_10], eax; a3
0x5DAB89: fldcw   word ptr [esp+0Ch+a3]
0x5DAB8D: call    Menu_CreateTileFromTemplate
0x5DAB92: mov     edx, edi
0x5DAB94: test    edx, edx
0x5DAB96: mov     [esp+arg_14], edx; a3
0x5DAB9A: mov     ebp, eax
0x5DAB9C: fild    [esp+arg_14]
0x5DABA0: jge     short loc_5DABA8
0x5DABA2: fadd    dword ptr ds:0A2FC78h
0x5DABA8: push    ecx
0x5DABA9: fstp    [esp+4+a2]; a3
0x5DABAC: push    0FAAh; a2
0x5DABB1: mov     ecx, ebp; this
0x5DABB3: call    Tile_SetFloat
0x5DABB8: push    ebx
0x5DABB9: push    0FAFh
0x5DABBE: mov     ecx, ebp
0x5DABC0: call    Tile_SetString
0x5DABC5: fild    [esp+arg_10]
0x5DABC9: mov     eax, [esp+arg_10]
0x5DABCD: test    eax, eax
0x5DABCF: jge     short loc_5DABD7
0x5DABD1: fadd    dword ptr ds:0A2FC78h
0x5DABD7: push    ecx
0x5DABD8: fstp    [esp+4+a2]; a3
0x5DABDB: push    0FB0h; a2
0x5DABE0: mov     ecx, ebp; this
0x5DABE2: call    Tile_SetFloat
0x5DABE7: push    offset aSeworld; "SEWorld"
0x5DABEC: add     edi, 1
0x5DABEF: call    sub_46B280
0x5DABF4: add     esp, 4
0x5DABF7: test    eax, eax
0x5DABF9: jz      loc_5DACA1
0x5DABFF: mov     ecx, ds:0B333C4h
0x5DAC05: fld     dword ptr [ecx+700h]
0x5DAC0B: mov     edx, [esi+4Ch]
0x5DAC0E: mov     ebp, ds:0B38408h
0x5DAC14: fstp    [esp+arg_10]; a3
0x5DAC18: push    0
0x5DAC1A: push    offset aStat_misc_temp; "stat_misc_template"
0x5DAC1F: push    edx
0x5DAC20: mov     ecx, esi
0x5DAC22: call    Menu_CreateTileFromTemplate
0x5DAC27: mov     ebx, eax
0x5DAC29: mov     eax, edi
0x5DAC2B: test    eax, eax
0x5DAC2D: mov     [esp+arg_14], eax
0x5DAC31: fild    [esp+arg_14]
0x5DAC35: jge     short loc_5DAC3D
0x5DAC37: fadd    dword ptr ds:0A2FC78h
0x5DAC3D: push    ecx
0x5DAC3E: fstp    [esp+4+a2]; a3
0x5DAC41: push    0FAAh; a2
0x5DAC46: mov     ecx, ebx; this
0x5DAC48: call    Tile_SetFloat
0x5DAC4D: push    ebp
0x5DAC4E: push    0FAFh
0x5DAC53: mov     ecx, ebx
0x5DAC55: call    Tile_SetString
0x5DAC5A: fld     [esp+arg_10]
0x5DAC5E: fnstcw  word ptr [esp+a3]
0x5DAC62: movzx   eax, word ptr [esp+a3]
0x5DAC67: or      eax, 0C00h
0x5DAC6C: mov     [esp+arg_10], eax; a3
0x5DAC70: fldcw   word ptr [esp+arg_10]
0x5DAC74: fistp   qword ptr [esp+arg_1C]
0x5DAC78: mov     ecx, [esp+arg_1C]
0x5DAC7C: test    ecx, ecx
0x5DAC7E: fldcw   word ptr [esp+a3]
0x5DAC82: fild    [esp+arg_1C]
0x5DAC86: jge     short loc_5DAC8E
0x5DAC88: fadd    dword ptr ds:0A2FC78h
0x5DAC8E: push    ecx
0x5DAC8F: fstp    [esp+4+a2]; a3
0x5DAC92: push    0FB0h; a2
0x5DAC97: mov     ecx, ebx; this
0x5DAC99: call    Tile_SetFloat
0x5DAC9E: add     edi, 1
0x5DACA1: mov     ecx, ds:0B333C4h
0x5DACA7: mov     edx, [ecx]
0x5DACA9: mov     eax, [edx+204h]
0x5DACAF: mov     ebx, ds:0B383F8h
0x5DACB5: call    eax
0x5DACB7: mov     ecx, [esi+4Ch]
0x5DACBA: push    0
0x5DACBC: push    offset aStat_misc_temp; "stat_misc_template"
0x5DACC1: push    ecx
0x5DACC2: mov     ecx, esi
0x5DACC4: mov     [esp+0Ch+arg_10], eax; a3
0x5DACC8: call    Menu_CreateTileFromTemplate
0x5DACCD: mov     edx, edi
0x5DACCF: test    edx, edx
0x5DACD1: mov     [esp+arg_14], edx
0x5DACD5: fild    [esp+arg_14]
0x5DACD9: mov     ebp, eax
0x5DACDB: jge     short loc_5DACE3
0x5DACDD: fadd    dword ptr ds:0A2FC78h
0x5DACE3: push    ecx
0x5DACE4: fstp    [esp+4+a2]; a3
0x5DACE7: push    0FAAh; a2
0x5DACEC: mov     ecx, ebp; this
0x5DACEE: call    Tile_SetFloat
0x5DACF3: push    ebx
0x5DACF4: push    0FAFh
0x5DACF9: mov     ecx, ebp
0x5DACFB: call    Tile_SetString
0x5DAD00: fild    [esp+arg_10]
0x5DAD04: mov     eax, [esp+arg_10]
0x5DAD08: test    eax, eax
0x5DAD0A: jge     short loc_5DAD12
0x5DAD0C: fadd    dword ptr ds:0A2FC78h
0x5DAD12: push    ecx
0x5DAD13: fstp    [esp+4+a2]; a3
0x5DAD16: push    0FB0h; a2
0x5DAD1B: mov     ecx, ebp; this
0x5DAD1D: call    Tile_SetFloat
0x5DAD22: mov     ecx, ds:0B333C4h
0x5DAD28: mov     edx, [ecx]
0x5DAD2A: mov     eax, [edx+208h]
0x5DAD30: mov     ebx, ds:0B383F0h
0x5DAD36: add     edi, 1
0x5DAD39: call    eax
0x5DAD3B: mov     ecx, [esi+4Ch]
0x5DAD3E: push    0
0x5DAD40: push    offset aStat_misc_temp; "stat_misc_template"
0x5DAD45: push    ecx
0x5DAD46: mov     ecx, esi
0x5DAD48: mov     [esp+0Ch+arg_10], eax
0x5DAD4C: call    Menu_CreateTileFromTemplate
0x5DAD51: mov     edx, edi
0x5DAD53: test    edx, edx
0x5DAD55: mov     [esp+arg_14], edx
0x5DAD59: fild    [esp+arg_14]
0x5DAD5D: mov     ebp, eax
0x5DAD5F: jge     short loc_5DAD67
0x5DAD61: fadd    dword ptr ds:0A2FC78h
0x5DAD67: push    ecx
0x5DAD68: fstp    [esp+4+a2]; a3
0x5DAD6B: push    0FAAh; a2
0x5DAD70: mov     ecx, ebp; this
0x5DAD72: call    Tile_SetFloat
0x5DAD77: push    ebx
0x5DAD78: push    0FAFh
0x5DAD7D: mov     ecx, ebp
0x5DAD7F: call    Tile_SetString
0x5DAD84: fild    [esp+arg_10]
0x5DAD88: mov     eax, [esp+arg_10]
0x5DAD8C: test    eax, eax
0x5DAD8E: jge     short loc_5DAD96
0x5DAD90: fadd    dword ptr ds:0A2FC78h
0x5DAD96: push    ecx
0x5DAD97: fstp    [esp+4+a2]; a3
0x5DAD9A: push    0FB0h; a2
0x5DAD9F: mov     ecx, ebp; this
0x5DADA1: call    Tile_SetFloat
0x5DADA6: mov     ecx, ds:0B333C4h
0x5DADAC: mov     eax, [esi+4Ch]
0x5DADAF: mov     ebp, [ecx+658h]
0x5DADB5: mov     edx, ds:0B38440h
0x5DADBB: push    0
0x5DADBD: push    offset aStat_misc_temp; "stat_misc_template"
0x5DADC2: push    eax
0x5DADC3: mov     ecx, esi
0x5DADC5: add     edi, 2
0x5DADC8: mov     [esp+0Ch+arg_10], edx
0x5DADCC: call    Menu_CreateTileFromTemplate
0x5DADD1: mov     ecx, edi
0x5DADD3: test    ecx, ecx
0x5DADD5: mov     [esp+arg_14], ecx
0x5DADD9: fild    [esp+arg_14]
0x5DADDD: mov     ebx, eax
0x5DADDF: jge     short loc_5DADE7
0x5DADE1: fadd    dword ptr ds:0A2FC78h
0x5DADE7: push    ecx
0x5DADE8: fstp    [esp+4+a2]; a3
0x5DADEB: push    0FAAh; a2
0x5DADF0: mov     ecx, ebx; this
0x5DADF2: call    Tile_SetFloat
0x5DADF7: mov     edx, [esp+arg_10]
0x5DADFB: push    edx
0x5DADFC: push    0FAFh
0x5DAE01: mov     ecx, ebx
0x5DAE03: call    Tile_SetString
0x5DAE08: test    ebp, ebp
0x5DAE0A: mov     [esp+arg_14], ebp
0x5DAE0E: fild    [esp+arg_14]
0x5DAE12: jge     short loc_5DAE1A
0x5DAE14: fadd    dword ptr ds:0A2FC78h
0x5DAE1A: push    ecx
0x5DAE1B: fstp    [esp+4+a2]; a3
0x5DAE1E: push    0FB0h; a2
0x5DAE23: mov     ecx, ebx; this
0x5DAE25: call    Tile_SetFloat
0x5DAE2A: mov     ebx, offset off_B11E50
0x5DAE2F: mov     eax, 6C8h
0x5DAE34: add     edi, 1
0x5DAE37: sub     eax, ebx
0x5DAE39: mov     [esp+a3], eax
0x5DAE3D: jmp     short loc_5DAE44
0x5DAE3F: align 10h
0x5DAE40: mov     eax, [esp+a3]
0x5DAE44: mov     ecx, ds:0B333C4h
0x5DAE4A: add     eax, ebx
0x5DAE4C: mov     edx, [eax+ecx]
0x5DAE4F: mov     eax, [ebx]
0x5DAE51: test    eax, eax
0x5DAE53: mov     [esp+arg_14], edx; a3
0x5DAE57: jz      short loc_5DAE61
0x5DAE59: mov     eax, [eax]
0x5DAE5B: mov     [esp+arg_10], eax
0x5DAE5F: jmp     short loc_5DAE69
0x5DAE61: mov     [esp+arg_10], 0; a3
0x5DAE69: mov     ecx, [esi+4Ch]
0x5DAE6C: push    0
0x5DAE6E: push    offset aStat_misc_temp; "stat_misc_template"
0x5DAE73: push    ecx
0x5DAE74: mov     ecx, esi
0x5DAE76: call    Menu_CreateTileFromTemplate
0x5DAE7B: mov     edx, edi
0x5DAE7D: test    edx, edx
0x5DAE7F: mov     [esp+arg_1C], edx
0x5DAE83: fild    [esp+arg_1C]
0x5DAE87: mov     ebp, eax
0x5DAE89: jge     short loc_5DAE91
0x5DAE8B: fadd    dword ptr ds:0A2FC78h
0x5DAE91: push    ecx
0x5DAE92: fstp    [esp+4+a2]; a3
0x5DAE95: push    0FAAh; a2
0x5DAE9A: mov     ecx, ebp; this
0x5DAE9C: call    Tile_SetFloat
0x5DAEA1: mov     eax, [esp+arg_10]
0x5DAEA5: push    eax
0x5DAEA6: push    0FAFh
0x5DAEAB: mov     ecx, ebp
0x5DAEAD: call    Tile_SetString
0x5DAEB2: fild    [esp+arg_14]
0x5DAEB6: mov     ecx, [esp+arg_14]
0x5DAEBA: test    ecx, ecx
0x5DAEBC: jge     short loc_5DAEC4
0x5DAEBE: fadd    dword ptr ds:0A2FC78h
0x5DAEC4: push    ecx
0x5DAEC5: fstp    [esp+4+a2]; a3
0x5DAEC8: push    0FB0h; a2
0x5DAECD: mov     ecx, ebp; this
0x5DAECF: call    Tile_SetFloat
0x5DAED4: add     ebx, 4
0x5DAED7: add     edi, 1
0x5DAEDA: cmp     ebx, offset ??_R0?AV?$NiTListBase@V?$NiTPointerAllocator@I@@PAVBSFaceGenKeyframe@@@@@8; NiTListBase<NiTPointerAllocator<uint>,BSFaceGenKeyframe *> `RTTI Type Descriptor'
0x5DAEE0: jl      loc_5DAE40
0x5DAEE6: mov     ecx, [esi+4Ch]
0x5DAEE9: mov     edx, ds:0B333C4h
0x5DAEEF: mov     eax, ds:0B38468h
0x5DAEF4: mov     ebp, [edx+668h]
0x5DAEFA: push    0
0x5DAEFC: push    offset aStat_misc_temp; "stat_misc_template"
0x5DAF01: push    ecx
0x5DAF02: mov     ecx, esi
0x5DAF04: mov     [esp+0Ch+arg_14], eax; a3
0x5DAF08: call    Menu_CreateTileFromTemplate
0x5DAF0D: mov     edx, edi
0x5DAF0F: test    edx, edx
0x5DAF11: mov     [esp+arg_1C], edx
0x5DAF15: fild    [esp+arg_1C]
0x5DAF19: mov     ebx, eax
0x5DAF1B: jge     short loc_5DAF23
0x5DAF1D: fadd    dword ptr ds:0A2FC78h
0x5DAF23: push    ecx
0x5DAF24: fstp    [esp+4+a2]; a3
0x5DAF27: push    0FAAh; a2
0x5DAF2C: mov     ecx, ebx; this
0x5DAF2E: call    Tile_SetFloat
0x5DAF33: mov     eax, [esp+arg_14]
0x5DAF37: push    eax
0x5DAF38: push    0FAFh
0x5DAF3D: mov     ecx, ebx
0x5DAF3F: call    Tile_SetString
0x5DAF44: test    ebp, ebp
0x5DAF46: mov     [esp+arg_1C], ebp; a3
0x5DAF4A: fild    [esp+arg_1C]
0x5DAF4E: jge     short loc_5DAF56
0x5DAF50: fadd    dword ptr ds:0A2FC78h
0x5DAF56: push    ecx
0x5DAF57: fstp    [esp+4+a2]; a3
0x5DAF5A: push    0FB0h; a2
0x5DAF5F: mov     ecx, ebx; this
0x5DAF61: call    Tile_SetFloat
0x5DAF66: mov     ecx, ds:0B333C4h
0x5DAF6C: mov     eax, [esi+4Ch]
0x5DAF6F: mov     ebp, [ecx+66Ch]
0x5DAF75: mov     edx, ds:0B38418h
0x5DAF7B: push    0
0x5DAF7D: push    offset aStat_misc_temp; "stat_misc_template"
0x5DAF82: push    eax
0x5DAF83: mov     ecx, esi
0x5DAF85: add     edi, 2
0x5DAF88: mov     [esp+0Ch+arg_14], edx; a3
0x5DAF8C: call    Menu_CreateTileFromTemplate
0x5DAF91: mov     ecx, edi
0x5DAF93: test    ecx, ecx
0x5DAF95: mov     [esp+arg_1C], ecx
0x5DAF99: fild    [esp+arg_1C]
0x5DAF9D: mov     ebx, eax
0x5DAF9F: jge     short loc_5DAFA7
0x5DAFA1: fadd    dword ptr ds:0A2FC78h
0x5DAFA7: push    ecx
0x5DAFA8: fstp    [esp+4+a2]; a3
0x5DAFAB: push    0FAAh; a2
0x5DAFB0: mov     ecx, ebx; this
0x5DAFB2: call    Tile_SetFloat
0x5DAFB7: mov     edx, [esp+arg_14]
0x5DAFBB: push    edx
0x5DAFBC: push    0FAFh
0x5DAFC1: mov     ecx, ebx
0x5DAFC3: call    Tile_SetString
0x5DAFC8: test    ebp, ebp
0x5DAFCA: mov     [esp+arg_1C], ebp; a3
0x5DAFCE: fild    [esp+arg_1C]
0x5DAFD2: jge     short loc_5DAFDA
0x5DAFD4: fadd    dword ptr ds:0A2FC78h
0x5DAFDA: push    ecx
0x5DAFDB: fstp    [esp+4+a2]; a3
0x5DAFDE: push    0FB0h; a2
0x5DAFE3: mov     ecx, ebx; this
0x5DAFE5: call    Tile_SetFloat
0x5DAFEA: mov     ecx, ds:0B38420h
0x5DAFF0: mov     edx, [esi+4Ch]
0x5DAFF3: mov     eax, ds:0B333C4h
0x5DAFF8: mov     ebp, [eax+670h]
0x5DAFFE: push    0
0x5DB000: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB005: mov     [esp+8+arg_14], ecx; a3
0x5DB009: push    edx
0x5DB00A: mov     ecx, esi
0x5DB00C: add     edi, 1
0x5DB00F: call    Menu_CreateTileFromTemplate
0x5DB014: mov     ebx, eax
0x5DB016: mov     eax, edi
0x5DB018: test    eax, eax
0x5DB01A: mov     [esp+arg_1C], eax
0x5DB01E: fild    [esp+arg_1C]
0x5DB022: jge     short loc_5DB02A
0x5DB024: fadd    dword ptr ds:0A2FC78h
0x5DB02A: push    ecx
0x5DB02B: fstp    [esp+4+a2]; a3
0x5DB02E: push    0FAAh; a2
0x5DB033: mov     ecx, ebx; this
0x5DB035: call    Tile_SetFloat
0x5DB03A: mov     ecx, [esp+arg_14]
0x5DB03E: push    ecx
0x5DB03F: push    0FAFh
0x5DB044: mov     ecx, ebx
0x5DB046: call    Tile_SetString
0x5DB04B: test    ebp, ebp
0x5DB04D: mov     [esp+arg_1C], ebp; a3
0x5DB051: fild    [esp+arg_1C]
0x5DB055: jge     short loc_5DB05D
0x5DB057: fadd    dword ptr ds:0A2FC78h
0x5DB05D: push    ecx
0x5DB05E: fstp    [esp+4+a2]; a3
0x5DB061: push    0FB0h; a2
0x5DB066: mov     ecx, ebx; this
0x5DB068: call    Tile_SetFloat
0x5DB06D: mov     ecx, [esi+4Ch]
0x5DB070: mov     edx, ds:0B333C4h
0x5DB076: mov     eax, ds:0B38478h
0x5DB07B: mov     ebp, [edx+674h]
0x5DB081: push    0
0x5DB083: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB088: push    ecx
0x5DB089: mov     ecx, esi
0x5DB08B: add     edi, 2
0x5DB08E: mov     [esp+0Ch+arg_14], eax; a3
0x5DB092: call    Menu_CreateTileFromTemplate
0x5DB097: mov     edx, edi
0x5DB099: test    edx, edx
0x5DB09B: mov     [esp+arg_1C], edx
0x5DB09F: fild    [esp+arg_1C]
0x5DB0A3: mov     ebx, eax
0x5DB0A5: jge     short loc_5DB0AD
0x5DB0A7: fadd    dword ptr ds:0A2FC78h
0x5DB0AD: push    ecx
0x5DB0AE: fstp    [esp+4+a2]; a3
0x5DB0B1: push    0FAAh; a2
0x5DB0B6: mov     ecx, ebx; this
0x5DB0B8: call    Tile_SetFloat
0x5DB0BD: mov     eax, [esp+arg_14]
0x5DB0C1: push    eax
0x5DB0C2: push    0FAFh
0x5DB0C7: mov     ecx, ebx
0x5DB0C9: call    Tile_SetString
0x5DB0CE: test    ebp, ebp
0x5DB0D0: mov     [esp+arg_1C], ebp; a3
0x5DB0D4: fild    [esp+arg_1C]
0x5DB0D8: jge     short loc_5DB0E0
0x5DB0DA: fadd    dword ptr ds:0A2FC78h
0x5DB0E0: push    ecx
0x5DB0E1: fstp    [esp+4+a2]; a3
0x5DB0E4: push    0FB0h; a2
0x5DB0E9: mov     ecx, ebx; this
0x5DB0EB: call    Tile_SetFloat
0x5DB0F0: mov     ecx, ds:0B333C4h
0x5DB0F6: mov     eax, [esi+4Ch]
0x5DB0F9: mov     ebp, [ecx+678h]
0x5DB0FF: mov     edx, ds:0B38428h
0x5DB105: push    0
0x5DB107: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB10C: push    eax
0x5DB10D: mov     ecx, esi
0x5DB10F: add     edi, 2
0x5DB112: mov     [esp+0Ch+arg_14], edx; a3
0x5DB116: call    Menu_CreateTileFromTemplate
0x5DB11B: mov     ecx, edi
0x5DB11D: test    ecx, ecx
0x5DB11F: mov     [esp+arg_1C], ecx
0x5DB123: fild    [esp+arg_1C]
0x5DB127: mov     ebx, eax
0x5DB129: jge     short loc_5DB131
0x5DB12B: fadd    dword ptr ds:0A2FC78h
0x5DB131: push    ecx
0x5DB132: fstp    [esp+4+a2]; a3
0x5DB135: push    0FAAh; a2
0x5DB13A: mov     ecx, ebx; this
0x5DB13C: call    Tile_SetFloat
0x5DB141: mov     edx, [esp+arg_14]
0x5DB145: push    edx
0x5DB146: push    0FAFh
0x5DB14B: mov     ecx, ebx
0x5DB14D: call    Tile_SetString
0x5DB152: test    ebp, ebp
0x5DB154: mov     [esp+arg_1C], ebp; a3
0x5DB158: fild    [esp+arg_1C]
0x5DB15C: jge     short loc_5DB164
0x5DB15E: fadd    dword ptr ds:0A2FC78h
0x5DB164: push    ecx
0x5DB165: fstp    [esp+4+a2]; a3
0x5DB168: push    0FB0h; a2
0x5DB16D: mov     ecx, ebx; this
0x5DB16F: call    Tile_SetFloat
0x5DB174: mov     ecx, ds:0B38438h
0x5DB17A: mov     edx, [esi+4Ch]
0x5DB17D: mov     eax, ds:0B333C4h
0x5DB182: mov     ebp, [eax+67Ch]
0x5DB188: push    0
0x5DB18A: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB18F: mov     [esp+8+arg_14], ecx; a3
0x5DB193: push    edx
0x5DB194: mov     ecx, esi
0x5DB196: add     edi, 1
0x5DB199: call    Menu_CreateTileFromTemplate
0x5DB19E: mov     ebx, eax
0x5DB1A0: mov     eax, edi
0x5DB1A2: test    eax, eax
0x5DB1A4: mov     [esp+arg_1C], eax
0x5DB1A8: fild    [esp+arg_1C]
0x5DB1AC: jge     short loc_5DB1B4
0x5DB1AE: fadd    dword ptr ds:0A2FC78h
0x5DB1B4: push    ecx
0x5DB1B5: fstp    [esp+4+a2]; a3
0x5DB1B8: push    0FAAh; a2
0x5DB1BD: mov     ecx, ebx; this
0x5DB1BF: call    Tile_SetFloat
0x5DB1C4: mov     ecx, [esp+arg_14]
0x5DB1C8: push    ecx
0x5DB1C9: push    0FAFh
0x5DB1CE: mov     ecx, ebx
0x5DB1D0: call    Tile_SetString
0x5DB1D5: test    ebp, ebp
0x5DB1D7: mov     [esp+arg_1C], ebp; a3
0x5DB1DB: fild    [esp+arg_1C]
0x5DB1DF: jge     short loc_5DB1E7
0x5DB1E1: fadd    dword ptr ds:0A2FC78h
0x5DB1E7: push    ecx
0x5DB1E8: fstp    [esp+4+a2]; a3
0x5DB1EB: push    0FB0h; a2
0x5DB1F0: mov     ecx, ebx; this
0x5DB1F2: call    Tile_SetFloat
0x5DB1F7: mov     ecx, [esi+4Ch]
0x5DB1FA: mov     edx, ds:0B333C4h
0x5DB200: mov     eax, ds:0B38480h
0x5DB205: mov     ebp, [edx+680h]
0x5DB20B: push    0
0x5DB20D: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB212: push    ecx
0x5DB213: mov     ecx, esi
0x5DB215: add     edi, 2
0x5DB218: mov     [esp+0Ch+arg_14], eax; a3
0x5DB21C: call    Menu_CreateTileFromTemplate
0x5DB221: mov     edx, edi
0x5DB223: test    edx, edx
0x5DB225: mov     [esp+arg_1C], edx
0x5DB229: fild    [esp+arg_1C]
0x5DB22D: mov     ebx, eax
0x5DB22F: jge     short loc_5DB237
0x5DB231: fadd    dword ptr ds:0A2FC78h
0x5DB237: push    ecx
0x5DB238: fstp    [esp+4+a2]; a3
0x5DB23B: push    0FAAh; a2
0x5DB240: mov     ecx, ebx; this
0x5DB242: call    Tile_SetFloat
0x5DB247: mov     eax, [esp+arg_14]
0x5DB24B: push    eax
0x5DB24C: push    0FAFh
0x5DB251: mov     ecx, ebx
0x5DB253: call    Tile_SetString
0x5DB258: test    ebp, ebp
0x5DB25A: mov     [esp+arg_1C], ebp; a3
0x5DB25E: fild    [esp+arg_1C]
0x5DB262: jge     short loc_5DB26A
0x5DB264: fadd    dword ptr ds:0A2FC78h
0x5DB26A: push    ecx
0x5DB26B: fstp    [esp+4+a2]; a3
0x5DB26E: push    0FB0h; a2
0x5DB273: mov     ecx, ebx; this
0x5DB275: call    Tile_SetFloat
0x5DB27A: mov     ecx, ds:0B333C4h
0x5DB280: mov     eax, [esi+4Ch]
0x5DB283: mov     ebp, [ecx+684h]
0x5DB289: mov     edx, ds:0B38500h
0x5DB28F: push    0
0x5DB291: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB296: push    eax
0x5DB297: mov     ecx, esi
0x5DB299: add     edi, 2
0x5DB29C: mov     [esp+0Ch+arg_14], edx; a3
0x5DB2A0: call    Menu_CreateTileFromTemplate
0x5DB2A5: mov     ecx, edi
0x5DB2A7: test    ecx, ecx
0x5DB2A9: mov     [esp+arg_1C], ecx
0x5DB2AD: fild    [esp+arg_1C]
0x5DB2B1: mov     ebx, eax
0x5DB2B3: jge     short loc_5DB2BB
0x5DB2B5: fadd    dword ptr ds:0A2FC78h
0x5DB2BB: push    ecx
0x5DB2BC: fstp    [esp+4+a2]; a3
0x5DB2BF: push    0FAAh; a2
0x5DB2C4: mov     ecx, ebx; this
0x5DB2C6: call    Tile_SetFloat
0x5DB2CB: mov     edx, [esp+arg_14]
0x5DB2CF: push    edx
0x5DB2D0: push    0FAFh
0x5DB2D5: mov     ecx, ebx
0x5DB2D7: call    Tile_SetString
0x5DB2DC: test    ebp, ebp
0x5DB2DE: mov     [esp+arg_1C], ebp; a3
0x5DB2E2: fild    [esp+arg_1C]
0x5DB2E6: jge     short loc_5DB2EE
0x5DB2E8: fadd    dword ptr ds:0A2FC78h
0x5DB2EE: push    ecx
0x5DB2EF: fstp    [esp+4+a2]; a3
0x5DB2F2: push    0FB0h; a2
0x5DB2F7: mov     ecx, ebx; this
0x5DB2F9: call    Tile_SetFloat
0x5DB2FE: mov     ecx, ds:0B38488h
0x5DB304: mov     edx, [esi+4Ch]
0x5DB307: mov     eax, ds:0B333C4h
0x5DB30C: mov     ebp, [eax+688h]
0x5DB312: push    0
0x5DB314: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB319: mov     [esp+8+arg_14], ecx; a3
0x5DB31D: push    edx
0x5DB31E: mov     ecx, esi
0x5DB320: add     edi, 1
0x5DB323: call    Menu_CreateTileFromTemplate
0x5DB328: mov     ebx, eax
0x5DB32A: mov     eax, edi
0x5DB32C: test    eax, eax
0x5DB32E: mov     [esp+arg_1C], eax
0x5DB332: fild    [esp+arg_1C]
0x5DB336: jge     short loc_5DB33E
0x5DB338: fadd    dword ptr ds:0A2FC78h
0x5DB33E: push    ecx
0x5DB33F: fstp    [esp+4+a2]; a3
0x5DB342: push    0FAAh; a2
0x5DB347: mov     ecx, ebx; this
0x5DB349: call    Tile_SetFloat
0x5DB34E: mov     ecx, [esp+arg_14]
0x5DB352: push    ecx
0x5DB353: push    0FAFh
0x5DB358: mov     ecx, ebx
0x5DB35A: call    Tile_SetString
0x5DB35F: test    ebp, ebp
0x5DB361: mov     [esp+arg_1C], ebp; a3
0x5DB365: fild    [esp+arg_1C]
0x5DB369: jge     short loc_5DB371
0x5DB36B: fadd    dword ptr ds:0A2FC78h
0x5DB371: push    ecx
0x5DB372: fstp    [esp+4+a2]; a3
0x5DB375: push    0FB0h; a2
0x5DB37A: mov     ecx, ebx; this
0x5DB37C: call    Tile_SetFloat
0x5DB381: mov     ecx, [esi+4Ch]
0x5DB384: mov     edx, ds:0B333C4h
0x5DB38A: mov     eax, ds:0B38508h
0x5DB38F: mov     ebp, [edx+68Ch]
0x5DB395: push    0
0x5DB397: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB39C: push    ecx
0x5DB39D: mov     ecx, esi
0x5DB39F: add     edi, 2
0x5DB3A2: mov     [esp+0Ch+arg_14], eax; a3
0x5DB3A6: call    Menu_CreateTileFromTemplate
0x5DB3AB: mov     edx, edi
0x5DB3AD: test    edx, edx
0x5DB3AF: mov     [esp+arg_1C], edx
0x5DB3B3: fild    [esp+arg_1C]
0x5DB3B7: mov     ebx, eax
0x5DB3B9: jge     short loc_5DB3C1
0x5DB3BB: fadd    dword ptr ds:0A2FC78h
0x5DB3C1: push    ecx
0x5DB3C2: fstp    [esp+4+a2]; a3
0x5DB3C5: push    0FAAh; a2
0x5DB3CA: mov     ecx, ebx; this
0x5DB3CC: call    Tile_SetFloat
0x5DB3D1: mov     eax, [esp+arg_14]
0x5DB3D5: push    eax
0x5DB3D6: push    0FAFh
0x5DB3DB: mov     ecx, ebx
0x5DB3DD: call    Tile_SetString
0x5DB3E2: test    ebp, ebp
0x5DB3E4: mov     [esp+arg_1C], ebp; a3
0x5DB3E8: fild    [esp+arg_1C]
0x5DB3EC: jge     short loc_5DB3F4
0x5DB3EE: fadd    dword ptr ds:0A2FC78h
0x5DB3F4: push    ecx
0x5DB3F5: fstp    [esp+4+a2]; a3
0x5DB3F8: push    0FB0h; a2
0x5DB3FD: mov     ecx, ebx; this
0x5DB3FF: call    Tile_SetFloat
0x5DB404: mov     ecx, ds:0B333C4h
0x5DB40A: mov     eax, [esi+4Ch]
0x5DB40D: mov     ebp, [ecx+690h]
0x5DB413: mov     edx, ds:0B38510h
0x5DB419: push    0
0x5DB41B: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB420: push    eax
0x5DB421: mov     ecx, esi
0x5DB423: add     edi, 2
0x5DB426: mov     [esp+0Ch+arg_14], edx; a3
0x5DB42A: call    Menu_CreateTileFromTemplate
0x5DB42F: mov     ecx, edi
0x5DB431: test    ecx, ecx
0x5DB433: mov     [esp+arg_1C], ecx
0x5DB437: fild    [esp+arg_1C]
0x5DB43B: mov     ebx, eax
0x5DB43D: jge     short loc_5DB445
0x5DB43F: fadd    dword ptr ds:0A2FC78h
0x5DB445: push    ecx
0x5DB446: fstp    [esp+4+a2]; a3
0x5DB449: push    0FAAh; a2
0x5DB44E: mov     ecx, ebx; this
0x5DB450: call    Tile_SetFloat
0x5DB455: mov     edx, [esp+arg_14]
0x5DB459: push    edx
0x5DB45A: push    0FAFh
0x5DB45F: mov     ecx, ebx
0x5DB461: call    Tile_SetString
0x5DB466: test    ebp, ebp
0x5DB468: mov     [esp+arg_1C], ebp; a3
0x5DB46C: fild    [esp+arg_1C]
0x5DB470: jge     short loc_5DB478
0x5DB472: fadd    dword ptr ds:0A2FC78h
0x5DB478: push    ecx
0x5DB479: fstp    [esp+4+a2]; a3
0x5DB47C: push    0FB0h; a2
0x5DB481: mov     ecx, ebx; this
0x5DB483: call    Tile_SetFloat
0x5DB488: mov     ecx, ds:0B38518h
0x5DB48E: mov     edx, [esi+4Ch]
0x5DB491: mov     eax, ds:0B333C4h
0x5DB496: mov     ebp, [eax+694h]
0x5DB49C: push    0
0x5DB49E: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB4A3: mov     [esp+8+arg_14], ecx; a3
0x5DB4A7: push    edx
0x5DB4A8: mov     ecx, esi
0x5DB4AA: add     edi, 1
0x5DB4AD: call    Menu_CreateTileFromTemplate
0x5DB4B2: mov     ebx, eax
0x5DB4B4: mov     eax, edi
0x5DB4B6: test    eax, eax
0x5DB4B8: mov     [esp+arg_1C], eax
0x5DB4BC: fild    [esp+arg_1C]
0x5DB4C0: jge     short loc_5DB4C8
0x5DB4C2: fadd    dword ptr ds:0A2FC78h
0x5DB4C8: push    ecx
0x5DB4C9: fstp    [esp+4+a2]; a3
0x5DB4CC: push    0FAAh; a2
0x5DB4D1: mov     ecx, ebx; this
0x5DB4D3: call    Tile_SetFloat
0x5DB4D8: mov     ecx, [esp+arg_14]
0x5DB4DC: push    ecx
0x5DB4DD: push    0FAFh
0x5DB4E2: mov     ecx, ebx
0x5DB4E4: call    Tile_SetString
0x5DB4E9: test    ebp, ebp
0x5DB4EB: mov     [esp+arg_1C], ebp; a3
0x5DB4EF: fild    [esp+arg_1C]
0x5DB4F3: jge     short loc_5DB4FB
0x5DB4F5: fadd    dword ptr ds:0A2FC78h
0x5DB4FB: push    ecx
0x5DB4FC: fstp    [esp+4+a2]; a3
0x5DB4FF: push    0FB0h; a2
0x5DB504: mov     ecx, ebx; this
0x5DB506: call    Tile_SetFloat
0x5DB50B: mov     ecx, [esi+4Ch]
0x5DB50E: mov     edx, ds:0B333C4h
0x5DB514: mov     eax, ds:0B38520h
0x5DB519: mov     ebp, [edx+698h]
0x5DB51F: push    0
0x5DB521: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB526: push    ecx
0x5DB527: mov     ecx, esi
0x5DB529: add     edi, 1
0x5DB52C: mov     [esp+0Ch+arg_14], eax; a3
0x5DB530: call    Menu_CreateTileFromTemplate
0x5DB535: mov     edx, edi
0x5DB537: test    edx, edx
0x5DB539: mov     [esp+arg_1C], edx
0x5DB53D: fild    [esp+arg_1C]
0x5DB541: mov     ebx, eax
0x5DB543: jge     short loc_5DB54B
0x5DB545: fadd    dword ptr ds:0A2FC78h
0x5DB54B: push    ecx
0x5DB54C: fstp    [esp+4+a2]; a3
0x5DB54F: push    0FAAh; a2
0x5DB554: mov     ecx, ebx; this
0x5DB556: call    Tile_SetFloat
0x5DB55B: mov     eax, [esp+arg_14]
0x5DB55F: push    eax
0x5DB560: push    0FAFh
0x5DB565: mov     ecx, ebx
0x5DB567: call    Tile_SetString
0x5DB56C: test    ebp, ebp
0x5DB56E: mov     [esp+arg_1C], ebp; a3
0x5DB572: fild    [esp+arg_1C]
0x5DB576: jge     short loc_5DB57E
0x5DB578: fadd    dword ptr ds:0A2FC78h
0x5DB57E: push    ecx
0x5DB57F: fstp    [esp+4+a2]; a3
0x5DB582: push    0FB0h; a2
0x5DB587: mov     ecx, ebx; this
0x5DB589: call    Tile_SetFloat
0x5DB58E: mov     ecx, ds:0B333C4h
0x5DB594: mov     eax, [esi+4Ch]
0x5DB597: mov     ebp, [ecx+69Ch]
0x5DB59D: mov     edx, ds:0B384F0h
0x5DB5A3: push    0
0x5DB5A5: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB5AA: push    eax
0x5DB5AB: mov     ecx, esi
0x5DB5AD: add     edi, 2
0x5DB5B0: mov     [esp+0Ch+arg_14], edx; a3
0x5DB5B4: call    Menu_CreateTileFromTemplate
0x5DB5B9: mov     ecx, edi
0x5DB5BB: test    ecx, ecx
0x5DB5BD: mov     [esp+arg_1C], ecx
0x5DB5C1: fild    [esp+arg_1C]
0x5DB5C5: mov     ebx, eax
0x5DB5C7: jge     short loc_5DB5CF
0x5DB5C9: fadd    dword ptr ds:0A2FC78h
0x5DB5CF: push    ecx
0x5DB5D0: fstp    [esp+4+a2]; a3
0x5DB5D3: push    0FAAh; a2
0x5DB5D8: mov     ecx, ebx; this
0x5DB5DA: call    Tile_SetFloat
0x5DB5DF: mov     edx, [esp+arg_14]
0x5DB5E3: push    edx
0x5DB5E4: push    0FAFh
0x5DB5E9: mov     ecx, ebx
0x5DB5EB: call    Tile_SetString
0x5DB5F0: test    ebp, ebp
0x5DB5F2: mov     [esp+arg_1C], ebp; a3
0x5DB5F6: fild    [esp+arg_1C]
0x5DB5FA: jge     short loc_5DB602
0x5DB5FC: fadd    dword ptr ds:0A2FC78h
0x5DB602: push    ecx
0x5DB603: fstp    [esp+4+a2]; a3
0x5DB606: push    0FB0h; a2
0x5DB60B: mov     ecx, ebx; this
0x5DB60D: call    Tile_SetFloat
0x5DB612: mov     ecx, ds:0B384F8h
0x5DB618: mov     edx, [esi+4Ch]
0x5DB61B: mov     eax, ds:0B333C4h
0x5DB620: mov     ebp, [eax+6A0h]
0x5DB626: push    0
0x5DB628: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB62D: mov     [esp+8+arg_14], ecx; a3
0x5DB631: push    edx
0x5DB632: mov     ecx, esi
0x5DB634: add     edi, 1
0x5DB637: call    Menu_CreateTileFromTemplate
0x5DB63C: mov     ebx, eax
0x5DB63E: mov     eax, edi
0x5DB640: test    eax, eax
0x5DB642: mov     [esp+arg_1C], eax
0x5DB646: fild    [esp+arg_1C]
0x5DB64A: jge     short loc_5DB652
0x5DB64C: fadd    dword ptr ds:0A2FC78h
0x5DB652: push    ecx
0x5DB653: fstp    [esp+4+a2]; a3
0x5DB656: push    0FAAh; a2
0x5DB65B: mov     ecx, ebx; this
0x5DB65D: call    Tile_SetFloat
0x5DB662: mov     ecx, [esp+arg_14]
0x5DB666: push    ecx
0x5DB667: push    0FAFh
0x5DB66C: mov     ecx, ebx
0x5DB66E: call    Tile_SetString
0x5DB673: test    ebp, ebp
0x5DB675: mov     [esp+arg_1C], ebp; a3
0x5DB679: fild    [esp+arg_1C]
0x5DB67D: jge     short loc_5DB685
0x5DB67F: fadd    dword ptr ds:0A2FC78h
0x5DB685: push    ecx
0x5DB686: fstp    [esp+4+a2]; a3
0x5DB689: push    0FB0h; a2
0x5DB68E: mov     ecx, ebx; this
0x5DB690: call    Tile_SetFloat
0x5DB695: mov     ecx, [esi+4Ch]
0x5DB698: mov     edx, ds:0B333C4h
0x5DB69E: mov     eax, ds:0B38550h
0x5DB6A3: mov     ebp, [edx+6A4h]
0x5DB6A9: push    0
0x5DB6AB: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB6B0: push    ecx
0x5DB6B1: mov     ecx, esi
0x5DB6B3: add     edi, 1
0x5DB6B6: mov     [esp+0Ch+arg_14], eax; a3
0x5DB6BA: call    Menu_CreateTileFromTemplate
0x5DB6BF: mov     edx, edi
0x5DB6C1: test    edx, edx
0x5DB6C3: mov     [esp+arg_1C], edx
0x5DB6C7: fild    [esp+arg_1C]
0x5DB6CB: mov     ebx, eax
0x5DB6CD: jge     short loc_5DB6D5
0x5DB6CF: fadd    dword ptr ds:0A2FC78h
0x5DB6D5: push    ecx
0x5DB6D6: fstp    [esp+4+a2]; a3
0x5DB6D9: push    0FAAh; a2
0x5DB6DE: mov     ecx, ebx; this
0x5DB6E0: call    Tile_SetFloat
0x5DB6E5: mov     eax, [esp+arg_14]
0x5DB6E9: push    eax
0x5DB6EA: push    0FAFh
0x5DB6EF: mov     ecx, ebx
0x5DB6F1: call    Tile_SetString
0x5DB6F6: test    ebp, ebp
0x5DB6F8: mov     [esp+arg_1C], ebp; a3
0x5DB6FC: fild    [esp+arg_1C]
0x5DB700: jge     short loc_5DB708
0x5DB702: fadd    dword ptr ds:0A2FC78h
0x5DB708: push    ecx
0x5DB709: fstp    [esp+4+a2]; a3
0x5DB70C: push    0FB0h; a2
0x5DB711: mov     ecx, ebx; this
0x5DB713: call    Tile_SetFloat
0x5DB718: mov     ecx, ds:0B333C4h
0x5DB71E: mov     eax, [esi+4Ch]
0x5DB721: mov     ebp, [ecx+6A8h]
0x5DB727: mov     edx, ds:0B384C8h
0x5DB72D: push    0
0x5DB72F: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB734: push    eax
0x5DB735: mov     ecx, esi
0x5DB737: add     edi, 2
0x5DB73A: mov     [esp+0Ch+arg_14], edx; a3
0x5DB73E: call    Menu_CreateTileFromTemplate
0x5DB743: mov     ecx, edi
0x5DB745: test    ecx, ecx
0x5DB747: mov     [esp+arg_1C], ecx
0x5DB74B: fild    [esp+arg_1C]
0x5DB74F: mov     ebx, eax
0x5DB751: jge     short loc_5DB759
0x5DB753: fadd    dword ptr ds:0A2FC78h
0x5DB759: push    ecx
0x5DB75A: fstp    [esp+4+a2]; a3
0x5DB75D: push    0FAAh; a2
0x5DB762: mov     ecx, ebx; this
0x5DB764: call    Tile_SetFloat
0x5DB769: mov     edx, [esp+arg_14]
0x5DB76D: push    edx
0x5DB76E: push    0FAFh
0x5DB773: mov     ecx, ebx
0x5DB775: call    Tile_SetString
0x5DB77A: test    ebp, ebp
0x5DB77C: mov     [esp+arg_1C], ebp; a3
0x5DB780: fild    [esp+arg_1C]
0x5DB784: jge     short loc_5DB78C
0x5DB786: fadd    dword ptr ds:0A2FC78h
0x5DB78C: push    ecx
0x5DB78D: fstp    [esp+4+a2]; a3
0x5DB790: push    0FB0h; a2
0x5DB795: mov     ecx, ebx; this
0x5DB797: call    Tile_SetFloat
0x5DB79C: mov     ecx, ds:0B384D0h
0x5DB7A2: mov     edx, [esi+4Ch]
0x5DB7A5: mov     eax, ds:0B333C4h
0x5DB7AA: mov     ebp, [eax+6ACh]
0x5DB7B0: push    0
0x5DB7B2: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB7B7: mov     [esp+8+arg_14], ecx; a3
0x5DB7BB: push    edx
0x5DB7BC: mov     ecx, esi
0x5DB7BE: add     edi, 1
0x5DB7C1: call    Menu_CreateTileFromTemplate
0x5DB7C6: mov     ebx, eax
0x5DB7C8: mov     eax, edi
0x5DB7CA: test    eax, eax
0x5DB7CC: mov     [esp+arg_1C], eax
0x5DB7D0: fild    [esp+arg_1C]
0x5DB7D4: jge     short loc_5DB7DC
0x5DB7D6: fadd    dword ptr ds:0A2FC78h
0x5DB7DC: push    ecx
0x5DB7DD: fstp    [esp+4+a2]; a3
0x5DB7E0: push    0FAAh; a2
0x5DB7E5: mov     ecx, ebx; this
0x5DB7E7: call    Tile_SetFloat
0x5DB7EC: mov     ecx, [esp+arg_14]
0x5DB7F0: push    ecx
0x5DB7F1: push    0FAFh
0x5DB7F6: mov     ecx, ebx
0x5DB7F8: call    Tile_SetString
0x5DB7FD: test    ebp, ebp
0x5DB7FF: mov     [esp+arg_1C], ebp; a3
0x5DB803: fild    [esp+arg_1C]
0x5DB807: jge     short loc_5DB80F
0x5DB809: fadd    dword ptr ds:0A2FC78h
0x5DB80F: push    ecx
0x5DB810: fstp    [esp+4+a2]; a3
0x5DB813: push    0FB0h; a2
0x5DB818: mov     ecx, ebx; this
0x5DB81A: call    Tile_SetFloat
0x5DB81F: mov     ecx, [esi+4Ch]
0x5DB822: mov     edx, ds:0B333C4h
0x5DB828: mov     eax, ds:0B38528h
0x5DB82D: mov     ebp, [edx+6B0h]
0x5DB833: push    0
0x5DB835: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB83A: push    ecx
0x5DB83B: mov     ecx, esi
0x5DB83D: add     edi, 2
0x5DB840: mov     [esp+0Ch+arg_14], eax; a3
0x5DB844: call    Menu_CreateTileFromTemplate
0x5DB849: mov     edx, edi
0x5DB84B: test    edx, edx
0x5DB84D: mov     [esp+arg_1C], edx
0x5DB851: fild    [esp+arg_1C]
0x5DB855: mov     ebx, eax
0x5DB857: jge     short loc_5DB85F
0x5DB859: fadd    dword ptr ds:0A2FC78h
0x5DB85F: push    ecx
0x5DB860: fstp    [esp+4+a2]; a3
0x5DB863: push    0FAAh; a2
0x5DB868: mov     ecx, ebx; this
0x5DB86A: call    Tile_SetFloat
0x5DB86F: mov     eax, [esp+arg_14]
0x5DB873: push    eax
0x5DB874: push    0FAFh
0x5DB879: mov     ecx, ebx
0x5DB87B: call    Tile_SetString
0x5DB880: test    ebp, ebp
0x5DB882: mov     [esp+arg_1C], ebp; a3
0x5DB886: fild    [esp+arg_1C]
0x5DB88A: jge     short loc_5DB892
0x5DB88C: fadd    dword ptr ds:0A2FC78h
0x5DB892: push    ecx
0x5DB893: fstp    [esp+4+a2]; a3
0x5DB896: push    0FB0h; a2
0x5DB89B: mov     ecx, ebx; this
0x5DB89D: call    Tile_SetFloat
0x5DB8A2: mov     ecx, ds:0B333C4h
0x5DB8A8: mov     eax, [esi+4Ch]
0x5DB8AB: mov     ebp, [ecx+6B8h]
0x5DB8B1: mov     edx, ds:0B384E8h
0x5DB8B7: push    0
0x5DB8B9: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB8BE: push    eax
0x5DB8BF: mov     ecx, esi
0x5DB8C1: add     edi, 1
0x5DB8C4: mov     [esp+0Ch+arg_14], edx; a3
0x5DB8C8: call    Menu_CreateTileFromTemplate
0x5DB8CD: mov     ecx, edi
0x5DB8CF: test    ecx, ecx
0x5DB8D1: mov     [esp+arg_1C], ecx
0x5DB8D5: fild    [esp+arg_1C]
0x5DB8D9: mov     ebx, eax
0x5DB8DB: jge     short loc_5DB8E3
0x5DB8DD: fadd    dword ptr ds:0A2FC78h
0x5DB8E3: push    ecx
0x5DB8E4: fstp    [esp+4+a2]; a3
0x5DB8E7: push    0FAAh; a2
0x5DB8EC: mov     ecx, ebx; this
0x5DB8EE: call    Tile_SetFloat
0x5DB8F3: mov     edx, [esp+arg_14]
0x5DB8F7: push    edx
0x5DB8F8: push    0FAFh
0x5DB8FD: mov     ecx, ebx
0x5DB8FF: call    Tile_SetString
0x5DB904: test    ebp, ebp
0x5DB906: mov     [esp+arg_1C], ebp; a3
0x5DB90A: fild    [esp+arg_1C]
0x5DB90E: jge     short loc_5DB916
0x5DB910: fadd    dword ptr ds:0A2FC78h
0x5DB916: push    ecx
0x5DB917: fstp    [esp+4+a2]; a3
0x5DB91A: push    0FB0h; a2
0x5DB91F: mov     ecx, ebx; this
0x5DB921: call    Tile_SetFloat
0x5DB926: mov     ecx, ds:0B384D8h
0x5DB92C: mov     edx, [esi+4Ch]
0x5DB92F: mov     eax, ds:0B333C4h
0x5DB934: mov     ebp, [eax+6BCh]
0x5DB93A: push    0
0x5DB93C: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB941: mov     [esp+8+arg_14], ecx; a3
0x5DB945: push    edx
0x5DB946: mov     ecx, esi
0x5DB948: add     edi, 2
0x5DB94B: call    Menu_CreateTileFromTemplate
0x5DB950: mov     ebx, eax
0x5DB952: mov     eax, edi
0x5DB954: test    eax, eax
0x5DB956: mov     [esp+arg_1C], eax
0x5DB95A: fild    [esp+arg_1C]
0x5DB95E: jge     short loc_5DB966
0x5DB960: fadd    dword ptr ds:0A2FC78h
0x5DB966: push    ecx
0x5DB967: fstp    [esp+4+a2]; a3
0x5DB96A: push    0FAAh; a2
0x5DB96F: mov     ecx, ebx; this
0x5DB971: call    Tile_SetFloat
0x5DB976: mov     ecx, [esp+arg_14]
0x5DB97A: push    ecx
0x5DB97B: push    0FAFh
0x5DB980: mov     ecx, ebx
0x5DB982: call    Tile_SetString
0x5DB987: test    ebp, ebp
0x5DB989: mov     [esp+arg_1C], ebp
0x5DB98D: fild    [esp+arg_1C]
0x5DB991: jge     short loc_5DB999
0x5DB993: fadd    dword ptr ds:0A2FC78h
0x5DB999: push    ecx
0x5DB99A: fstp    [esp+4+a2]; a3
0x5DB99D: push    0FB0h; a2
0x5DB9A2: mov     ecx, ebx; this
0x5DB9A4: call    Tile_SetFloat
0x5DB9A9: mov     ecx, [esi+4Ch]
0x5DB9AC: mov     edx, ds:0B333C4h
0x5DB9B2: mov     eax, ds:0B384E0h
0x5DB9B7: mov     ebp, [edx+6C0h]
0x5DB9BD: push    0
0x5DB9BF: push    offset aStat_misc_temp; "stat_misc_template"
0x5DB9C4: push    ecx
0x5DB9C5: mov     ecx, esi
0x5DB9C7: add     edi, 1
0x5DB9CA: mov     [esp+0Ch+arg_14], eax; a3
0x5DB9CE: call    Menu_CreateTileFromTemplate
0x5DB9D3: mov     edx, edi
0x5DB9D5: test    edx, edx
0x5DB9D7: mov     [esp+arg_1C], edx
0x5DB9DB: fild    [esp+arg_1C]
0x5DB9DF: mov     ebx, eax
0x5DB9E1: jge     short loc_5DB9E9
0x5DB9E3: fadd    dword ptr ds:0A2FC78h
0x5DB9E9: push    ecx
0x5DB9EA: fstp    [esp+4+a2]; a3
0x5DB9ED: push    0FAAh; a2
0x5DB9F2: mov     ecx, ebx; this
0x5DB9F4: call    Tile_SetFloat
0x5DB9F9: mov     eax, [esp+arg_14]
0x5DB9FD: push    eax
0x5DB9FE: push    0FAFh
0x5DBA03: mov     ecx, ebx
0x5DBA05: call    Tile_SetString
0x5DBA0A: test    ebp, ebp
0x5DBA0C: mov     [esp+arg_1C], ebp
0x5DBA10: fild    [esp+arg_1C]
0x5DBA14: jge     short loc_5DBA1C
0x5DBA16: fadd    dword ptr ds:0A2FC78h
0x5DBA1C: push    ecx
0x5DBA1D: fstp    [esp+4+a2]; a3
0x5DBA20: push    0FB0h; a2
0x5DBA25: mov     ecx, ebx; this
0x5DBA27: call    Tile_SetFloat
0x5DBA2C: mov     ecx, ds:0B333C4h
0x5DBA32: mov     eax, [esi+4Ch]
0x5DBA35: mov     ebp, [ecx+6C4h]
0x5DBA3B: mov     edx, ds:0B38538h
0x5DBA41: push    0
0x5DBA43: push    offset aStat_misc_temp; "stat_misc_template"
0x5DBA48: push    eax
0x5DBA49: mov     ecx, esi
0x5DBA4B: mov     [esp+0Ch+arg_14], edx
0x5DBA4F: call    Menu_CreateTileFromTemplate
0x5DBA54: add     edi, 2
0x5DBA57: test    edi, edi
0x5DBA59: mov     [esp+arg_1C], edi
0x5DBA5D: fild    [esp+arg_1C]
0x5DBA61: mov     ebx, eax
0x5DBA63: jge     short loc_5DBA6B
0x5DBA65: fadd    dword ptr ds:0A2FC78h
0x5DBA6B: push    ecx
0x5DBA6C: fstp    [esp+4+a2]; a3
0x5DBA6F: push    0FAAh; a2
0x5DBA74: mov     ecx, ebx; this
0x5DBA76: call    Tile_SetFloat
0x5DBA7B: mov     ecx, [esp+arg_14]
0x5DBA7F: push    ecx
0x5DBA80: push    0FAFh
0x5DBA85: mov     ecx, ebx
0x5DBA87: call    Tile_SetString
0x5DBA8C: test    ebp, ebp
0x5DBA8E: mov     [esp+arg_1C], ebp
0x5DBA92: fild    [esp+arg_1C]
0x5DBA96: jge     short loc_5DBA9E
0x5DBA98: fadd    dword ptr ds:0A2FC78h
0x5DBA9E: push    ecx
0x5DBA9F: fstp    [esp+4+a2]; a3
0x5DBAA2: push    0FB0h; a2
0x5DBAA7: mov     ecx, ebx; this
0x5DBAA9: call    Tile_SetFloat
0x5DBAAE: fld     dword ptr ds:0A6B328h
0x5DBAB4: push    ecx
0x5DBAB5: mov     ecx, [esi+50h]; this
0x5DBAB8: fstp    [esp+4+a2]; a3
0x5DBABB: push    0FB3h; a2
0x5DBAC0: call    Tile_SetFloat
0x5DBAC5: fild    [esp+arg_18]
0x5DBAC9: push    ecx
0x5DBACA: mov     ecx, [esi+50h]; this
0x5DBACD: fstp    [esp+4+a2]; a3
0x5DBAD0: push    0FB3h; a2
0x5DBAD5: call    Tile_SetFloat
0x5DBADA: fldz
0x5DBADC: push    ecx
0x5DBADD: fstp    [esp+4+a2]; a3
0x5DBAE0: mov     ecx, [esi+50h]; this
0x5DBAE3: push    0FB3h; a2
0x5DBAE8: call    Tile_SetFloat
0x5DBAED: pop     edi
0x5DBAEE: pop     esi
0x5DBAEF: pop     ebp
0x5DBAF0: pop     ebx
0x5DBAF1: add     esp, 34h
0x5DBAF4: retn
