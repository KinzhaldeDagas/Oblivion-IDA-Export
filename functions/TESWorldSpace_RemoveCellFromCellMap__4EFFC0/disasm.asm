0x4EFFC0: push    ebx
0x4EFFC1: push    edi
0x4EFFC2: mov     edi, [esp+8+arg_0]
0x4EFFC6: test    edi, edi
0x4EFFC8: mov     ebx, ecx
0x4EFFCA: jz      short loc_4F0021
0x4EFFCC: mov     ecx, edi; this
0x4EFFCE: call    TESObjectCELL_IsInterior
0x4EFFD3: test    al, al
0x4EFFD5: jnz     short loc_4F0021
0x4EFFD7: push    ebp
0x4EFFD8: push    esi
0x4EFFD9: mov     ecx, edi; this
0x4EFFDB: call    TESObjectCELL_GetYCoordinate
0x4EFFE0: mov     ecx, edi; this
0x4EFFE2: movzx   ebp, ax
0x4EFFE5: call    TESObjectCELL_GetXCoordinate
0x4EFFEA: movsx   esi, ax
0x4EFFED: movzx   eax, bp
0x4EFFF0: lea     ecx, [esp+10h+arg_0]
0x4EFFF4: shl     esi, 10h
0x4EFFF7: push    ecx
0x4EFFF8: mov     ecx, [ebx+30h]
0x4EFFFB: or      esi, eax
0x4EFFFD: push    esi
0x4EFFFE: call    NiTMap_GetAt
0x4F0003: test    al, al
0x4F0005: jz      short loc_4F001F
0x4F0007: cmp     edi, [esp+10h+arg_0]
0x4F000B: jnz     short loc_4F001F
0x4F000D: mov     ecx, [ebx+30h]
0x4F0010: push    esi
0x4F0011: call    NiTMap_RemoveAt
0x4F0016: push    0; a2
0x4F0018: mov     ecx, edi; this
0x4F001A: call    TESObjectCELL__SetWorldspace
0x4F001F: pop     esi
0x4F0020: pop     ebp
0x4F0021: pop     edi
0x4F0022: pop     ebx
0x4F0023: retn    4
