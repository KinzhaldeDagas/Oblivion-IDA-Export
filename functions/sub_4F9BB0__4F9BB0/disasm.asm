0x4F9BB0: push    ecx
0x4F9BB1: cmp     dword ptr [ecx+30h], 0
0x4F9BB5: push    ebx
0x4F9BB6: lea     ebx, [ecx+2Ch]
0x4F9BB9: mov     [esp+8+var_1], 0
0x4F9BBE: jnz     short loc_4F9BD3
0x4F9BC0: cmp     dword ptr [ebx], 0
0x4F9BC3: jnz     short loc_4F9BD3
0x4F9BC5: mov     [esp+8+var_1], 1
0x4F9BCA: mov     al, [esp+8+var_1]
0x4F9BCE: pop     ebx
0x4F9BCF: pop     ecx
0x4F9BD0: retn    4
0x4F9BD3: push    esi
0x4F9BD4: mov     esi, [esp+0Ch+arg_0]
0x4F9BD8: test    esi, esi
0x4F9BDA: jz      def_4F9BF2
0x4F9BE0: movzx   eax, byte ptr [esi+4]
0x4F9BE4: add     eax, 0FFFFFFD0h; switch 6 cases
0x4F9BE7: cmp     eax, 5
0x4F9BEA: ja      def_4F9BF2
0x4F9BF0: push    ebp
0x4F9BF1: push    edi
0x4F9BF2: jmp     ds:jpt_4F9BF2[eax*4]; switch jump
0x4F9BF9: mov     ecx, esi; jumptable 004F9BF2 case 48
0x4F9BFB: call    TESObjectCELL_IsInterior
0x4F9C00: test    al, al
0x4F9C02: jz      short loc_4F9C0D
0x4F9C04: mov     edi, [esi+0Ch]; jumptable 004F9BF2 case 53
0x4F9C07: xor     ebp, ebp
0x4F9C09: xor     eax, eax
0x4F9C0B: jmp     short loc_4F9C81
0x4F9C0D: mov     ecx, esi; this
0x4F9C0F: call    TESObjectCELL_GetWorldSpace
0x4F9C14: test    eax, eax
0x4F9C16: jz      loc_4F9CC1; jumptable 004F9BF2 case 52
0x4F9C1C: mov     ebp, [eax+0Ch]
0x4F9C1F: mov     ecx, esi; this
0x4F9C21: xor     edi, edi
0x4F9C23: call    TESObjectCELL_GetYCoordinate
0x4F9C28: push    eax
0x4F9C29: mov     ecx, esi; this
0x4F9C2B: call    TESObjectCELL_GetXCoordinate
0x4F9C30: push    eax
0x4F9C31: call    sub_4EF1D0
0x4F9C36: add     esp, 8
0x4F9C39: jmp     short loc_4F9C81
0x4F9C3B: mov     ecx, esi; jumptable 004F9BF2 cases 49-51
0x4F9C3D: call    TESObjectREFR_GetParentCell
0x4F9C42: mov     edi, eax
0x4F9C44: test    edi, edi
0x4F9C46: jz      short loc_4F9C5C
0x4F9C48: mov     ecx, edi; this
0x4F9C4A: call    TESObjectCELL_IsInterior
0x4F9C4F: test    al, al
0x4F9C51: jz      short loc_4F9C5C
0x4F9C53: mov     edi, [edi+0Ch]
0x4F9C56: xor     ebp, ebp
0x4F9C58: xor     eax, eax
0x4F9C5A: jmp     short loc_4F9C81
0x4F9C5C: mov     ecx, esi; this
0x4F9C5E: call    TESObjectREFR_GetWorldSpace
0x4F9C63: test    eax, eax
0x4F9C65: jz      short loc_4F9CC1; jumptable 004F9BF2 case 52
0x4F9C67: mov     ebp, [eax+0Ch]
0x4F9C6A: mov     eax, [esi]
0x4F9C6C: mov     edx, [eax+174h]
0x4F9C72: mov     ecx, esi
0x4F9C74: xor     edi, edi
0x4F9C76: call    edx
0x4F9C78: push    eax
0x4F9C79: call    sub_4EFE40
0x4F9C7E: add     esp, 4
0x4F9C81: mov     ecx, ebx
0x4F9C83: test    ecx, ecx
0x4F9C85: jz      short loc_4F9CC1; jumptable 004F9BF2 case 52
0x4F9C87: mov     edx, [ecx+4]
0x4F9C8A: test    edx, edx
0x4F9C8C: jnz     short loc_4F9C92
0x4F9C8E: cmp     [ecx], edx
0x4F9C90: jz      short loc_4F9CC1; jumptable 004F9BF2 case 52
0x4F9C92: test    edi, edi
0x4F9C94: mov     ecx, [ecx]
0x4F9C96: jz      short loc_4F9C9C
0x4F9C98: cmp     [ecx], edi
0x4F9C9A: jmp     short loc_4F9CA8
0x4F9C9C: test    ebp, ebp
0x4F9C9E: jz      short loc_4F9CAA
0x4F9CA0: cmp     [ecx+4], ebp
0x4F9CA3: jnz     short loc_4F9CAA
0x4F9CA5: cmp     [ecx+8], eax
0x4F9CA8: jz      short loc_4F9CBC
0x4F9CAA: mov     ecx, edx
0x4F9CAC: test    ecx, ecx
0x4F9CAE: jnz     short loc_4F9C87
0x4F9CB0: mov     al, [esp+14h+var_1]
0x4F9CB4: pop     edi
0x4F9CB5: pop     ebp
0x4F9CB6: pop     esi
0x4F9CB7: pop     ebx
0x4F9CB8: pop     ecx
0x4F9CB9: retn    4
0x4F9CBC: mov     [esp+14h+var_1], 1
0x4F9CC1: pop     edi; jumptable 004F9BF2 case 52
0x4F9CC2: pop     ebp
