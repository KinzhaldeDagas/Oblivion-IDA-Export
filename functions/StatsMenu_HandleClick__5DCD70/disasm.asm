0x5DCD70: push    ebx; a3
0x5DCD71: mov     ebx, [esp+4+arg_0]
0x5DCD75: lea     eax, [ebx-1]
0x5DCD78: cmp     eax, 4
0x5DCD7B: push    edi; a3
0x5DCD7C: mov     edi, ecx
0x5DCD7E: ja      loc_5DCE3E
0x5DCD84: mov     ecx, [esp+8+arg_4]
0x5DCD88: test    ecx, ecx
0x5DCD8A: jnz     short loc_5DCDA2
0x5DCD8C: mov     ecx, ds:0B33B00h
0x5DCD92: call    sub_45A500
0x5DCD97: test    al, al
0x5DCD99: jz      short loc_5DCDBB
0x5DCD9B: mov     ecx, [edi+28h]
0x5DCD9E: test    ecx, ecx
0x5DCDA0: jz      short loc_5DCDBB
0x5DCDA2: call    sub_589390
0x5DCDA7: fild    [esp+8+arg_0]
0x5DCDAB: push    ecx
0x5DCDAC: mov     ecx, eax; this
0x5DCDAE: fstp    [esp+0Ch+a2]; a3
0x5DCDB1: push    0FAEh; a2
0x5DCDB6: call    Tile_SetFloat
0x5DCDBB: push    1; arg1
0x5DCDBD: push    0; canCreate
0x5DCDBF: call    InterfaceManager_GetSingleton
0x5DCDC4: fld1
0x5DCDC6: add     esp, 4
0x5DCDC9: fstp    [esp+0Ch+a2]; a3
0x5DCDCC: mov     [eax+0Ah], bl
0x5DCDCF: mov     ecx, [edi+54h]; this
0x5DCDD2: push    0FA1h; a2
0x5DCDD7: call    Tile_SetFloat
0x5DCDDC: mov     ecx, ds:0B33B00h
0x5DCDE2: call    sub_45A500
0x5DCDE7: test    al, al
0x5DCDE9: jnz     loc_5DCEEB
0x5DCDEF: cmp     ebx, 1
0x5DCDF2: jnz     short loc_5DCE00
0x5DCDF4: mov     ecx, edi
0x5DCDF6: call    sub_5DBB00
0x5DCDFB: pop     edi
0x5DCDFC: pop     ebx
0x5DCDFD: retn    8
0x5DCE00: cmp     ebx, 2
0x5DCE03: jz      short loc_5DCE30
0x5DCE05: cmp     ebx, 3
0x5DCE08: jz      short loc_5DCE30
0x5DCE0A: cmp     ebx, 4
0x5DCE0D: jnz     short loc_5DCE1B
0x5DCE0F: mov     ecx, edi
0x5DCE11: call    sub_5DC950
0x5DCE16: pop     edi
0x5DCE17: pop     ebx
0x5DCE18: retn    8
0x5DCE1B: cmp     ebx, 5
0x5DCE1E: jnz     loc_5DCEEB
0x5DCE24: mov     ecx, edi
0x5DCE26: call    StatsMenu_MiscTab_HandleClick
0x5DCE2B: pop     edi
0x5DCE2C: pop     ebx
0x5DCE2D: retn    8
0x5DCE30: push    0FFFFFFFFh
0x5DCE32: mov     ecx, edi
0x5DCE34: call    sub_5DA1A0
0x5DCE39: pop     edi
0x5DCE3A: pop     ebx
0x5DCE3B: retn    8
0x5DCE3E: cmp     ebx, 8
0x5DCE41: jz      short loc_5DCE4C
0x5DCE43: cmp     ebx, 9
0x5DCE46: jnz     loc_5DCEEB
0x5DCE4C: mov     ecx, [edi+4]
0x5DCE4F: push    esi; a3
0x5DCE50: push    0FAEh
0x5DCE55: call    Tile_GetFloat
0x5DCE5A: call    Double_To_SInt32
0x5DCE5F: cmp     ebx, 8
0x5DCE62: mov     esi, eax
0x5DCE64: jnz     short loc_5DCE6B
0x5DCE66: sub     esi, 1
0x5DCE69: jmp     short loc_5DCE6E
0x5DCE6B: add     esi, 1
0x5DCE6E: cmp     esi, 1
0x5DCE71: mov     [esp+0Ch+arg_0], esi
0x5DCE75: jge     short loc_5DCE7E
0x5DCE77: mov     esi, 5
0x5DCE7C: jmp     short loc_5DCE88
0x5DCE7E: cmp     esi, 5
0x5DCE81: jle     short loc_5DCE8C
0x5DCE83: mov     esi, 1
0x5DCE88: mov     [esp+0Ch+arg_0], esi
0x5DCE8C: fild    [esp+0Ch+arg_0]
0x5DCE90: push    ecx
0x5DCE91: mov     ecx, [edi+4]; this
0x5DCE94: fstp    [esp+10h+var_10]; a3
0x5DCE97: push    0FAEh; a2
0x5DCE9C: call    Tile_SetFloat
0x5DCEA1: cmp     esi, 1
0x5DCEA4: jnz     short loc_5DCEB3
0x5DCEA6: mov     ecx, edi
0x5DCEA8: call    sub_5DBB00
0x5DCEAD: pop     esi
0x5DCEAE: pop     edi
0x5DCEAF: pop     ebx
0x5DCEB0: retn    8
0x5DCEB3: cmp     esi, 2
0x5DCEB6: jz      short loc_5DCEE1
0x5DCEB8: cmp     ebx, 3
0x5DCEBB: jz      short loc_5DCEE1
0x5DCEBD: cmp     esi, 4
0x5DCEC0: jnz     short loc_5DCECF
0x5DCEC2: mov     ecx, edi
0x5DCEC4: call    sub_5DC950
0x5DCEC9: pop     esi
0x5DCECA: pop     edi
0x5DCECB: pop     ebx
0x5DCECC: retn    8
0x5DCECF: cmp     esi, 5
0x5DCED2: jnz     short loc_5DCEEA
0x5DCED4: mov     ecx, edi
0x5DCED6: call    StatsMenu_MiscTab_HandleClick
0x5DCEDB: pop     esi
0x5DCEDC: pop     edi
0x5DCEDD: pop     ebx
0x5DCEDE: retn    8
0x5DCEE1: push    0FFFFFFFFh
0x5DCEE3: mov     ecx, edi
0x5DCEE5: call    sub_5DA1A0
0x5DCEEA: pop     esi
0x5DCEEB: pop     edi
0x5DCEEC: pop     ebx
0x5DCEED: retn    8
