0x5901B0: push    0FFFFFFFFh
0x5901B2: push    offset ??1TileText@@UAE@XZ_SEH
0x5901B7: mov     eax, large fs:0
0x5901BD: push    eax
0x5901BE: push    ecx
0x5901BF: push    esi
0x5901C0: mov     eax, ds:0B30AACh
0x5901C5: xor     eax, esp
0x5901C7: push    eax
0x5901C8: lea     eax, [esp+18h+var_C]
0x5901CC: mov     large fs:0, eax
0x5901D2: mov     esi, ecx
0x5901D4: mov     [esp+18h+var_10], esi
0x5901D8: mov     dword ptr [esi], offset ??_7TileWindow@@6B@; const TileWindow::`vftable'
0x5901DE: cmp     byte ptr [esi+4], 0
0x5901E2: mov     [esp+18h+var_4], 0
0x5901EA: jnz     short loc_5901F1
0x5901EC: call    Tile__Release; Verified: marks subtree release-in-progress (+5), clears matching interface active/drag references, marks released (+4), detaches parent, destroys each Value, detaches model, then deletes children. Native loop at 0x58DA90 advances child iterator EDX before call; pseudocode may omit this advance.
0x5901F1: mov     ecx, esi; this
0x5901F3: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5901FB: call    ??1Tile@@UAE@XZ; Tile::~Tile(void)
0x590200: mov     ecx, [esp+18h+var_C]
0x590204: mov     large fs:0, ecx
0x59020B: pop     ecx
0x59020C: pop     esi
0x59020D: add     esp, 10h
0x590210: retn
0x9BFA30: mov     ecx, [ebp-10h]; this
0x9BFA33: jmp     ??1Tile@@UAE@XZ; Tile::~Tile(void)
0x9BFA38: mov     edx, [esp+arg_4]
0x9BFA3C: lea     eax, [edx-8]
0x9BFA3F: mov     ecx, [edx-0Ch]
0x9BFA42: xor     ecx, eax
0x9BFA44: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BFA49: mov     eax, offset stru_AE8EE8
0x9BFA4E: jmp     ___CxxFrameHandler3
