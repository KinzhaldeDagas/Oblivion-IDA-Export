0x66F370: push    ebx
0x66F371: mov     ebx, [esp+4+arg_18]
0x66F375: test    ebx, ebx
0x66F377: push    esi
0x66F378: push    edi
0x66F379: jz      loc_66F418; If destination worldspace is null, this helper returns without moving the player. Successful world-map fast travel therefore implies the 0x66FAFA path had a valid worldspace or loaded cell.
0x66F37F: mov     ecx, ds:0B35B90h
0x66F385: test    ecx, ecx
0x66F387: jz      short loc_66F38E
0x66F389: call    sub_4BE5A0
0x66F38E: mov     ecx, ds:0B35B8Ch
0x66F394: test    ecx, ecx
0x66F396: jz      short loc_66F39D
0x66F398: call    sub_4BD980
0x66F39D: fld     [esp+0Ch+arg_0]
0x66F3A1: fistp   [esp+0Ch+arg_18]
0x66F3A5: mov     esi, [esp+0Ch+arg_18]
0x66F3A9: sar     esi, 0Ch; Exterior cell coordinate conversion uses signed arithmetic shift by 12 after float-to-int, so cell size is 4096 world units and negative coordinates round via signed integer conversion then SAR.
0x66F3AC: fld     [esp+0Ch+arg_4]
0x66F3B0: fistp   [esp+0Ch+arg_18]
0x66F3B4: mov     edi, [esp+0Ch+arg_18]
0x66F3B8: sar     edi, 0Ch
0x66F3BB: push    edi; cellY
0x66F3BC: push    esi; cellX
0x66F3BD: mov     ecx, ebx; this
0x66F3BF: call    TESWorldSpace__GetCellAtCellCoord; Relocation resolves exterior cell from destination pos: cellX=(int)posX >> 12, cellY=(int)posY >> 12 via TESWorldSpace::GetCellAtCellCoord.
0x66F3C4: test    eax, eax
0x66F3C6: jnz     short loc_66F3D5
0x66F3C8: push    edi; int
0x66F3C9: push    esi; ArgList
0x66F3CA: mov     ecx, ebx
0x66F3CC: call    TESWorldSpace_LoadExteriorCellAtCoord; Verified: exterior-cell loader checks cellMap first, searches master files using cellOffsetsArray fast path or GRUP/CELL fallback, creates a missing TESObjectCELL, post-fixes it, then attaches worldspace-indexed references.
0x66F3D1: test    eax, eax
0x66F3D3: jz      short loc_66F418
0x66F3D5: mov     ecx, dword ptr [esp+0Ch+arg_1C]; Relocation helper passes through to PlayerCharacter_ChangeCellAndPosition with ECX=g_PlayerRef, pos[3], rot[3], resolved exterior cell, and a15.
0x66F3D9: mov     edx, [esp+0Ch+arg_C]
0x66F3DD: push    ecx; char
0x66F3DE: mov     ecx, [esp+10h+arg_10]; If target cell is not already loaded, load/create it for the worldspace and destination cell coords before moving the player.
0x66F3E2: push    eax; int
0x66F3E3: sub     esp, 0Ch
0x66F3E6: mov     eax, esp
0x66F3E8: mov     [eax], edx
0x66F3EA: mov     edx, [esp+20h+arg_14]
0x66F3EE: mov     [eax+4], ecx
0x66F3F1: mov     ecx, [esp+20h+arg_0]
0x66F3F5: mov     [eax+8], edx
0x66F3F8: mov     edx, [esp+20h+arg_4]
0x66F3FC: sub     esp, 0Ch
0x66F3FF: mov     eax, esp
0x66F401: mov     [eax], ecx
0x66F403: mov     ecx, [esp+2Ch+arg_8]
0x66F407: mov     [eax+4], edx
0x66F40A: mov     [eax+8], ecx
0x66F40D: mov     ecx, ds:0B333C4h; int
0x66F413: call    PlayerCharacter_ChangeCellAndPosition; Final move call into sub_66EAF0 with player, pos/rot, resolved TESObjectCELL, and a15 flag.
0x66F418: pop     edi; Function epilogue ends with retn 0x20 at 0x66F41B, so callers rely on callee stack cleanup for pos[3],rot[3],worldspace,a15.
0x66F419: pop     esi
0x66F41A: pop     ebx
0x66F41B: retn    20h ; ' '; Epilogue is retn 0x20: relocation helper pops pos[3], rot[3], worldspace, a15.
