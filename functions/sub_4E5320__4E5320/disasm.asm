0x4E5320: sub     esp, 8; Verified spatial-index key encoder used by both insertion and lookup. Converts world X/Y to signed integers, arithmetic-shifts each by 9 (512 world units), accepts bucket coordinates only in [-0x7FFF, 0x7FFE], and packs X into the high halfword and Y into the low halfword. Z is ignored. Out-of-range input returns 0, which also encodes bucket (0,0); handling/significance of that collision is Unknown. This is not the 4096-unit exterior cell-coordinate key. Fallout NavMeshInfoMap uses a separate global registry keyed by NavMeshInfo IDs and nested worldspace/cell keys (e.g. Fallout constructor 0x824A7D30), so that system is architectural context only and does not establish this Oblivion behavior.
0x4E5323: mov     eax, [esp+8+position]
0x4E5327: fld     dword ptr [eax]
0x4E5329: push    esi
0x4E532A: fstp    [esp+0Ch+var_8]
0x4E532E: fld     [esp+0Ch+var_8]
0x4E5332: fistp   [esp+0Ch+position]
0x4E5336: fld     dword ptr [eax+4]
0x4E5339: fstp    [esp+0Ch+var_4]
0x4E533D: fld     [esp+0Ch+var_4]
0x4E5341: fistp   [esp+0Ch+var_8]
0x4E5345: mov     ecx, [esp+0Ch+position]
0x4E5349: mov     edx, [esp+0Ch+var_8]
0x4E534D: sar     ecx, 9
0x4E5350: lea     esi, [ecx+7FFFh]
0x4E5356: sar     edx, 9
0x4E5359: xor     eax, eax
0x4E535B: cmp     esi, 0FFFDh
0x4E5361: ja      short loc_4E537B
0x4E5363: lea     esi, [edx+7FFFh]
0x4E5369: cmp     esi, 0FFFDh
0x4E536F: ja      short loc_4E537B
0x4E5371: movzx   eax, dx
0x4E5374: shl     ecx, 10h
0x4E5377: or      ecx, eax
0x4E5379: mov     eax, ecx
0x4E537B: pop     esi
0x4E537C: add     esp, 8
0x4E537F: retn
