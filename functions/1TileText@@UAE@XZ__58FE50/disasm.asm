0x58FE50: push    0FFFFFFFFh
0x58FE52: push    offset ??1TileText@@UAE@XZ_SEH
0x58FE57: mov     eax, large fs:0
0x58FE5D: push    eax
0x58FE5E: push    ecx
0x58FE5F: push    esi
0x58FE60: mov     eax, ds:0B30AACh
0x58FE65: xor     eax, esp
0x58FE67: push    eax
0x58FE68: lea     eax, [esp+18h+var_C]
0x58FE6C: mov     large fs:0, eax
0x58FE72: mov     esi, ecx
0x58FE74: mov     [esp+18h+var_10], esi
0x58FE78: mov     dword ptr [esi], offset ??_7TileText@@6B@; const TileText::`vftable'
0x58FE7E: cmp     byte ptr [esi+4], 0
0x58FE82: mov     [esp+18h+var_4], 0
0x58FE8A: jnz     short loc_58FE91
0x58FE8C: call    Tile__Release; Verified: marks subtree release-in-progress (+5), clears matching interface active/drag references, marks released (+4), detaches parent, destroys each Value, detaches model, then deletes children. Native loop at 0x58DA90 advances child iterator EDX before call; pseudocode may omit this advance.
0x58FE91: mov     ecx, esi; this
0x58FE93: mov     [esp+18h+var_4], 0FFFFFFFFh
0x58FE9B: call    ??1Tile@@UAE@XZ; Tile::~Tile(void)
0x58FEA0: mov     ecx, [esp+18h+var_C]
0x58FEA4: mov     large fs:0, ecx
0x58FEAB: pop     ecx
0x58FEAC: pop     esi
0x58FEAD: add     esp, 10h
0x58FEB0: retn
0x9BFA30: mov     ecx, [ebp-10h]; this
0x9BFA33: jmp     ??1Tile@@UAE@XZ; Tile::~Tile(void)
0x9BFA38: mov     edx, [esp+arg_4]
0x9BFA3C: lea     eax, [edx-8]
0x9BFA3F: mov     ecx, [edx-0Ch]
0x9BFA42: xor     ecx, eax
0x9BFA44: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BFA49: mov     eax, offset stru_AE8EE8
0x9BFA4E: jmp     ___CxxFrameHandler3
