0x5BEC70: push    0FFFFFFFFh
0x5BEC72: push    offset SEH_5BEC70
0x5BEC77: mov     eax, large fs:0
0x5BEC7D: push    eax
0x5BEC7E: sub     esp, 28h
0x5BEC81: push    ebx
0x5BEC82: push    ebp
0x5BEC83: push    esi
0x5BEC84: push    edi
0x5BEC85: mov     eax, ds:0B30AACh
0x5BEC8A: xor     eax, esp
0x5BEC8C: push    eax
0x5BEC8D: lea     eax, [esp+48h+var_C]
0x5BEC91: mov     large fs:0, eax
0x5BEC97: mov     esi, ecx
0x5BEC99: push    40Ah
0x5BEC9E: call    Menu_GetOpenMenuTile
0x5BECA3: xor     ebx, ebx
0x5BECA5: add     esp, 4
0x5BECA8: cmp     eax, ebx
0x5BECAA: jz      loc_5BF145
0x5BECB0: mov     ecx, eax
0x5BECB2: call    Tile_GetParentMenu
0x5BECB7: push    40Ah
0x5BECBC: mov     [esp+4Ch+var_24], eax
0x5BECC0: call    InterfaceManager_MenuModeHasFocus
0x5BECC5: add     esp, 4
0x5BECC8: test    al, al
0x5BECCA: jnz     short loc_5BECE5
0x5BECCC: push    1; arg1
0x5BECCE: push    ebx; canCreate
0x5BECCF: call    InterfaceManager_GetSingleton
0x5BECD4: add     esp, 8
0x5BECD7: push    1
0x5BECD9: push    offset aMenusMiscCurso; "Menus\\Misc\\cursor.dds"
0x5BECDE: mov     ecx, eax
0x5BECE0: call    sub_57DA20
0x5BECE5: mov     eax, [esi+0D8h]
0x5BECEB: mov     ecx, [eax+58h]
0x5BECEE: mov     edx, [ecx]
0x5BECF0: mov     eax, [edx+33Ch]
0x5BECF6: push    ebx
0x5BECF7: call    eax
0x5BECF9: cmp     eax, ebx
0x5BECFB: mov     byte ptr [esp+4Ch+var_38+3], bl
0x5BECFF: jz      short loc_5BED11
0x5BED01: mov     ecx, eax
0x5BED03: call    sub_6B7260
0x5BED08: test    al, al
0x5BED0A: jz      short loc_5BED11
0x5BED0C: mov     byte ptr [esp+4Ch+var_38+3], 1
0x5BED11: cmp     dword ptr [esi+28h], 2
0x5BED15: jnz     loc_5BF10D
0x5BED1B: mov     ecx, esi
0x5BED1D: call    sub_5BEB70
0x5BED22: test    al, al
0x5BED24: jz      loc_5BF10D
0x5BED2A: xor     edi, edi
0x5BED2C: lea     eax, [esi+38h]
0x5BED2F: mov     ecx, 4
0x5BED34: cmp     [eax], bl
0x5BED36: jz      short loc_5BED3B
0x5BED38: add     edi, 1
0x5BED3B: add     eax, 14h
0x5BED3E: sub     ecx, 1
0x5BED41: jnz     short loc_5BED34
0x5BED43: push    1
0x5BED45: call    sub_5BEA90
0x5BED4A: mov     ecx, ds:0B333C4h
0x5BED50: add     esp, 4
0x5BED53: push    20h ; ' '
0x5BED55: call    Actor_GetSkillMasteryLevel
0x5BED5A: cmp     eax, 4
0x5BED5D: jz      short loc_5BED71
0x5BED5F: mov     ecx, ds:0B333C4h
0x5BED65: push    20h ; ' '
0x5BED67: call    Actor_GetSkillMasteryLevel
0x5BED6C: cmp     eax, 3
0x5BED6F: jnz     short loc_5BEDA1
0x5BED71: mov     ecx, ds:0B333C4h
0x5BED77: push    20h ; ' '
0x5BED79: call    Actor_GetSkillMasteryLevel
0x5BED7E: cmp     eax, 4
0x5BED81: jz      short loc_5BED99
0x5BED83: mov     ecx, ds:0B333C4h
0x5BED89: push    20h ; ' '
0x5BED8B: call    Actor_GetSkillMasteryLevel
0x5BED90: cmp     eax, 3
0x5BED93: jnz     loc_5BEE8A
0x5BED99: cmp     edi, ebx
0x5BED9B: jz      loc_5BEE8A
0x5BEDA1: mov     ecx, ds:0B333C4h
0x5BEDA7: push    20h ; ' '
0x5BEDA9: call    Actor_GetSkillMasteryLevel
0x5BEDAE: test    eax, eax
0x5BEDB0: jz      short loc_5BEDD3
0x5BEDB2: mov     ecx, ds:0B333C4h
0x5BEDB8: push    20h ; ' '
0x5BEDBA: call    Actor_GetSkillMasteryLevel
0x5BEDBF: cmp     eax, 1
0x5BEDC2: jz      short loc_5BEDD3
0x5BEDC4: fld     dword ptr ds:0B38E28h
0x5BEDCA: call    Double_To_SInt32
0x5BEDCF: add     eax, eax
0x5BEDD1: jmp     short loc_5BEDDE
0x5BEDD3: fld     dword ptr ds:0B38E28h
0x5BEDD9: call    Double_To_SInt32
0x5BEDDE: mov     ecx, ds:0B33EA0h
0x5BEDE4: sub     ecx, [esi+80h]
0x5BEDEA: cmp     ecx, eax
0x5BEDEC: jbe     loc_5BEE8A
0x5BEDF2: cmp     byte ptr [esp+4Ch+var_38+3], bl
0x5BEDF6: jnz     loc_5BEE8A
0x5BEDFC: mov     ecx, [esi+0D8h]
0x5BEE02: fld     dword ptr ds:0A30634h
0x5BEE08: mov     edx, [ecx]
0x5BEE0A: mov     eax, ds:0B333C4h
0x5BEE0F: mov     edx, [edx+374h]
0x5BEE15: push    ecx
0x5BEE16: fstp    [esp+50h+var_50]
0x5BEE19: push    eax
0x5BEE1A: call    edx
0x5BEE1C: mov     [esp+54h+var_3C], ebx
0x5BEE20: mov     word ptr [esp+54h+var_38], bx
0x5BEE25: mov     word ptr [esp+54h+var_38+2], bx
0x5BEE2A: mov     ecx, [esi+0D8h]
0x5BEE30: mov     eax, [ecx]
0x5BEE32: mov     edx, ds:0B333C4h
0x5BEE38: mov     eax, [eax+224h]
0x5BEE3E: push    edx; a3
0x5BEE3F: mov     [esp+58h+var_10], ebx
0x5BEE43: call    eax
0x5BEE45: push    eax; ArgList
0x5BEE46: lea     ecx, [esp+5Ch+hinstDLL]
0x5BEE4A: push    offset aI; "%i"
0x5BEE4F: push    ecx; hinstDLL
0x5BEE50: call    BSStringT_Static_Format
0x5BEE55: mov     edi, [esp+64h+hinstDLL.unused]
0x5BEE59: mov     ecx, [esi+0CCh]
0x5BEE5F: add     esp, 0Ch
0x5BEE62: push    edi
0x5BEE63: push    0FDEh
0x5BEE68: call    Tile_SetString
0x5BEE6D: mov     edx, ds:0B33EA0h
0x5BEE73: push    edi
0x5BEE74: mov     [esi+80h], edx
0x5BEE7A: mov     [esp+5Ch+var_14], 0FFFFFFFFh
0x5BEE82: call    FormHeapFree
0x5BEE87: add     esp, 4
0x5BEE8A: lea     edi, [esi+3Ch]
0x5BEE8D: mov     ebp, 4
0x5BEE92: mov     al, [edi-4]
0x5BEE95: neg     al
0x5BEE97: push    ecx
0x5BEE98: mov     ecx, [edi]; this
0x5BEE9A: sbb     eax, eax
0x5BEE9C: and     eax, 0FFh
0x5BEEA1: mov     [esp+5Ch+hinstDLL.unused], eax
0x5BEEA5: fild    [esp+5Ch+hinstDLL.unused]
0x5BEEA9: fstp    [esp+5Ch+a2]; a3
0x5BEEAC: push    0FA7h; a2
0x5BEEB1: call    Tile_SetFloat
0x5BEEB6: add     edi, 14h
0x5BEEB9: sub     ebp, 1
0x5BEEBC: jnz     short loc_5BEE92
0x5BEEBE: mov     eax, dword ptr [esp+58h+var_34]
0x5BEEC2: cmp     eax, ebx
0x5BEEC4: jz      loc_5BF0E0
0x5BEECA: cmp     dword ptr [eax+24h], 1
0x5BEECE: jnz     loc_5BF0E0
0x5BEED4: push    1; arg1
0x5BEED6: push    ebx; canCreate
0x5BEED7: call    InterfaceManager_GetSingleton
0x5BEEDC: add     esp, 8
0x5BEEDF: mov     edi, eax
0x5BEEE1: call    sub_57D7A0
0x5BEEE6: fmul    qword ptr ds:0A2FAA0h
0x5BEEEC: fadd    dword ptr [edi+20h]
0x5BEEEF: call    Double_To_SInt32
0x5BEEF4: mov     dword ptr [esp+58h+var_34], eax
0x5BEEF8: fild    dword ptr [esp+58h+var_34]
0x5BEEFC: fstp    [esp+58h+hinstDLL.unused]
0x5BEF00: call    sub_57D7F0
0x5BEF05: fstp    [esp+58h+var_34]
0x5BEF09: call    sub_57D7F0
0x5BEF0E: fmul    qword ptr ds:0A2FAA0h
0x5BEF14: fadd    dword ptr [edi+28h]
0x5BEF17: fsubr   [esp+58h+var_34]
0x5BEF1B: call    Double_To_SInt32
0x5BEF20: mov     dword ptr [esp+58h+var_34], eax
0x5BEF24: fild    dword ptr [esp+58h+var_34]
0x5BEF28: fstp    [esp+58h+var_3C]
0x5BEF2C: fldz
0x5BEF2E: fstp    [esp+58h+var_38]
0x5BEF32: fild    dword ptr [esi+0E0h]
0x5BEF38: fstp    [esp+58h+var_28]
0x5BEF3C: fild    dword ptr [esi+0E4h]
0x5BEF42: fstp    [esp+58h+var_24]
0x5BEF46: fld     [esp+58h+var_28]
0x5BEF4A: fsub    [esp+58h+hinstDLL.unused]
0x5BEF4E: fstp    dword ptr [esp+58h+var_34]
0x5BEF52: fld     [esp+58h+var_24]
0x5BEF56: fsub    [esp+58h+var_3C]
0x5BEF5A: fstp    dword ptr [esp+58h+var_34+4]
0x5BEF5E: fldz
0x5BEF60: fsubr   st, st
0x5BEF62: fstp    [esp+58h+var_2C]
0x5BEF66: fld     dword ptr [esp+58h+var_34+4]
0x5BEF6A: fld     dword ptr [esp+58h+var_34]
0x5BEF6E: fld     [esp+58h+var_2C]
0x5BEF72: fld     st(1)
0x5BEF74: fmulp   st(2), st
0x5BEF76: fld     st(2)
0x5BEF78: fmulp   st(3), st
0x5BEF7A: fxch    st(1)
0x5BEF7C: faddp   st(2), st
0x5BEF7E: fmul    st, st
0x5BEF80: faddp   st(1), st
0x5BEF82: fstp    dword ptr [esp+58h+var_34]
0x5BEF86: fld     dword ptr [esp+58h+var_34]
0x5BEF8A: call    __CIsqrt
0x5BEF8F: fstp    dword ptr [esp+58h+var_34]
0x5BEF93: fld     dword ptr [esp+58h+var_34]
0x5BEF97: fstp    dword ptr [esp+58h+var_34]
0x5BEF9B: fld     dword ptr [esp+58h+var_34]
0x5BEF9F: fild    dword ptr [esi+0DCh]
0x5BEFA5: fcomp   st(1)
0x5BEFA7: fnstsw  ax
0x5BEFA9: test    ah, 1
0x5BEFAC: jnz     short loc_5BEFFC
0x5BEFAE: fild    dword ptr [esi+0E8h]
0x5BEFB4: fcompp
0x5BEFB6: fnstsw  ax
0x5BEFB8: test    ah, 41h
0x5BEFBB: jp      short loc_5BEFFE
0x5BEFBD: push    1; int
0x5BEFBF: push    offset aMenusPersuasio; "Menus\\Persuasion\\Ball_cursor.dds"
0x5BEFC4: mov     ecx, edi
0x5BEFC6: mov     bl, 1
0x5BEFC8: call    sub_57DA20
0x5BEFCD: mov     ecx, [esp+58h+hinstDLL.unused]
0x5BEFD1: mov     edx, [esp+58h+var_3C]
0x5BEFD5: sub     esp, 0Ch
0x5BEFD8: mov     eax, esp
0x5BEFDA: mov     [eax], ecx
0x5BEFDC: mov     ecx, [esp+64h+var_38]
0x5BEFE0: mov     [eax+4], edx
0x5BEFE3: mov     [eax+8], ecx
0x5BEFE6: mov     ecx, esi
0x5BEFE8: call    sub_5BE6F0
0x5BEFED: mov     ecx, esi
0x5BEFEF: mov     [esi+84h], eax
0x5BEFF5: call    sub_5BE800
0x5BEFFA: jmp     short loc_5BF00E
0x5BEFFC: fstp    st
0x5BEFFE: push    1
0x5BF000: push    offset aMenusMiscCurso; "Menus\\Misc\\cursor.dds"
0x5BF005: mov     ecx, edi
0x5BF007: xor     bl, bl
0x5BF009: call    sub_57DA20
0x5BF00E: cmp     [esp+58h+var_41], 0
0x5BF013: jnz     loc_5BF0B4
0x5BF019: test    bl, bl
0x5BF01B: jz      loc_5BF0B4
0x5BF021: mov     eax, [esi+84h]
0x5BF027: lea     edx, [eax+eax*4]
0x5BF02A: mov     eax, [esi+edx*4+2Ch]
0x5BF02E: add     eax, 0FFFFFFFFh; switch 4 cases
0x5BF031: cmp     eax, 3
0x5BF034: ja      short def_5BF036
0x5BF036: jmp     ds:jpt_5BF036[eax*4]; switch jump
0x5BF03D: mov     eax, [esi+0D8h]; jumptable 005BF036 case 1
0x5BF043: mov     dword ptr [eax+70h], 5
0x5BF04A: jmp     short loc_5BF095
0x5BF04C: mov     edx, [esi+0D8h]; jumptable 005BF036 case 2
0x5BF052: fld     dword ptr ds:0A3D9A4h
0x5BF058: mov     dword ptr [edx+70h], 5
0x5BF05F: mov     eax, [esi+0D8h]
0x5BF065: fstp    dword ptr [eax+74h]
0x5BF068: jmp     short def_5BF036
0x5BF06A: mov     ecx, [esi+0D8h]; jumptable 005BF036 case 3
0x5BF070: fld     dword ptr ds:0A3D9A4h
0x5BF076: mov     dword ptr [ecx+70h], 1
0x5BF07D: mov     edx, [esi+0D8h]
0x5BF083: fstp    dword ptr [edx+74h]
0x5BF086: jmp     short def_5BF036
0x5BF088: mov     eax, [esi+0D8h]; jumptable 005BF036 case 4
0x5BF08E: mov     dword ptr [eax+70h], 1
0x5BF095: fld1
0x5BF097: mov     ecx, [esi+0D8h]
0x5BF09D: fstp    dword ptr [ecx+74h]
