0x5819A0: push    0FFFFFFFFh
0x5819A2: push    offset ??1TileText@@UAE@XZ_SEH
0x5819A7: mov     eax, large fs:0
0x5819AD: push    eax
0x5819AE: push    ecx
0x5819AF: push    esi
0x5819B0: mov     eax, ds:0B30AACh
0x5819B5: xor     eax, esp
0x5819B7: push    eax
0x5819B8: lea     eax, [esp+18h+var_C]
0x5819BC: mov     large fs:0, eax
0x5819C2: mov     esi, ecx
0x5819C4: mov     [esp+18h+var_10], esi
0x5819C8: mov     dword ptr [esi], offset ??_7TileRect@@6B@; const TileRect::`vftable'
0x5819CE: cmp     byte ptr [esi+4], 0
0x5819D2: mov     [esp+18h+var_4], 0
0x5819DA: jnz     short loc_5819E1
0x5819DC: call    Tile__Release; Verified: marks subtree release-in-progress (+5), clears matching interface active/drag references, marks released (+4), detaches parent, destroys each Value, detaches model, then deletes children. Native loop at 0x58DA90 advances child iterator EDX before call; pseudocode may omit this advance.
0x5819E1: mov     ecx, esi; this
0x5819E3: mov     [esp+18h+var_4], 0FFFFFFFFh
0x5819EB: call    ??1Tile@@UAE@XZ; Tile::~Tile(void)
0x5819F0: mov     ecx, [esp+18h+var_C]
0x5819F4: mov     large fs:0, ecx
0x5819FB: pop     ecx
0x5819FC: pop     esi
0x5819FD: add     esp, 10h
0x581A00: retn
0x9BFA30: mov     ecx, [ebp-10h]; this
0x9BFA33: jmp     ??1Tile@@UAE@XZ; Tile::~Tile(void)
0x9BFA38: mov     edx, [esp+arg_4]
0x9BFA3C: lea     eax, [edx-8]
0x9BFA3F: mov     ecx, [edx-0Ch]
0x9BFA42: xor     ecx, eax
0x9BFA44: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BFA49: mov     eax, offset stru_AE8EE8
0x9BFA4E: jmp     ___CxxFrameHandler3
