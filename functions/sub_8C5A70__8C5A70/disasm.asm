0x8C5A70: push    ebp
0x8C5A71: mov     ebp, esp
0x8C5A73: and     esp, 0FFFFFFF0h
0x8C5A76: push    0FFFFFFFFh
0x8C5A78: push    offset SEH_8C5A70
0x8C5A7D: mov     eax, large fs:0
0x8C5A83: push    eax
0x8C5A84: sub     esp, 98h
0x8C5A8A: mov     eax, ds:0B30AACh
0x8C5A8F: xor     eax, esp
0x8C5A91: mov     [esp+0A4h+var_14], eax
0x8C5A98: push    ebx
0x8C5A99: push    esi
0x8C5A9A: push    edi
0x8C5A9B: mov     eax, ds:0B30AACh
0x8C5AA0: xor     eax, esp
0x8C5AA2: push    eax
0x8C5AA3: lea     eax, [esp+0B4h+var_C]
0x8C5AAA: mov     large fs:0, eax
0x8C5AB0: mov     eax, [ebp+arg_0]
0x8C5AB3: xor     edi, edi
0x8C5AB5: cmp     ecx, edi
0x8C5AB7: mov     [esp+0B4h+var_48], ecx
0x8C5ABB: mov     [esp+0B4h+var_44], eax
0x8C5ABF: jz      short loc_8C5AC6
0x8C5AC1: mov     eax, [ecx+8]
0x8C5AC4: jmp     short loc_8C5AC8
0x8C5AC6: xor     eax, eax
0x8C5AC8: mov     edx, [eax+10h]
0x8C5ACB: mov     eax, offset ??_7?$NiTArray@G@@6B@; const NiTArray<ushort>::`vftable'
0x8C5AD0: mov     ecx, 1
0x8C5AD5: mov     [esp+0B4h+var_64], edx
0x8C5AD9: mov     [esp+0B4h+var_78], eax
0x8C5ADD: mov     word ptr [esp+0B4h+var_70], di
0x8C5AE2: mov     [esp+0B4h+var_6A], cx
0x8C5AE7: mov     word ptr [esp+0B4h+var_70+2], di
0x8C5AEC: mov     [esp+0B4h+var_6C], di
0x8C5AF1: mov     [esp+0B4h+Src], edi
0x8C5AF5: mov     [esp+0B4h+var_4], edi
0x8C5AFC: mov     [esp+0B4h+var_9C], eax
0x8C5B00: mov     word ptr [esp+0B4h+var_94], di
0x8C5B05: mov     word ptr [esp+0B4h+var_90+2], cx
0x8C5B0A: mov     word ptr [esp+0B4h+var_94+2], di
0x8C5B0F: mov     word ptr [esp+0B4h+var_90], di
0x8C5B14: mov     [esp+0B4h+var_98], edi
0x8C5B18: mov     byte ptr [esp+0B4h+var_4], cl
0x8C5B1F: xor     ecx, ecx
0x8C5B21: cmp     [edx+10h], di
0x8C5B25: mov     [esp+0B4h+var_88], ecx
0x8C5B29: mov     [esp+0B4h+var_60], edi
0x8C5B2D: mov     [esp+0B4h+var_80], edi
0x8C5B31: mov     [esp+0B4h+var_58], edi
0x8C5B35: jbe     loc_8C6159
0x8C5B3B: mov     [esp+0B4h+var_68], edi
0x8C5B3F: jmp     short loc_8C5B47
0x8C5B41: mov     ecx, [esp+0B4h+var_88]
0x8C5B45: xor     edi, edi
0x8C5B47: mov     eax, [esp+0B4h+var_80]
0x8C5B4B: mov     edx, [esp+0B4h+var_64]
0x8C5B4F: lea     eax, [eax+eax*4]
0x8C5B52: add     eax, eax
0x8C5B54: xor     ebx, ebx
0x8C5B56: add     eax, eax
0x8C5B58: mov     [esp+0B4h+var_8C], edi
0x8C5B5C: mov     [esp+0B4h+var_7C], edi
0x8C5B60: mov     [esp+0B4h+var_5C], edi
0x8C5B64: mov     [esp+0B4h+var_84], eax
0x8C5B68: jmp     short loc_8C5B74
0x8C5B6A: align 10h
0x8C5B70: mov     eax, [esp+0B4h+var_84]
0x8C5B74: mov     esi, [edx+14h]
0x8C5B77: add     esi, eax
0x8C5B79: cmp     ebx, edi
0x8C5B7B: jnz     loc_8C5D21
0x8C5B81: movzx   eax, word ptr [esi]
0x8C5B84: movzx   edi, word ptr [esi+2]
0x8C5B88: movzx   esi, word ptr [esi+4]
0x8C5B8C: mov     edx, [edx+1Ch]
0x8C5B8F: mov     [esp+0B4h+var_5C], esi
0x8C5B93: mov     esi, [esp+0B4h+var_68]
0x8C5B97: mov     edx, [edx+esi+4]
0x8C5B9B: movzx   esi, ax
0x8C5B9E: add     edx, ecx
0x8C5BA0: cmp     esi, edx
0x8C5BA2: mov     [esp+0B4h+var_8C], eax
0x8C5BA6: mov     [esp+0B4h+var_7C], edi
0x8C5BAA: jnb     loc_8C5E87
0x8C5BB0: movzx   esi, word ptr [esp+0B4h+var_94+2]
0x8C5BB5: sub     eax, ecx
0x8C5BB7: movzx   ebx, ax
0x8C5BBA: movzx   eax, word ptr [esp+0B4h+var_94]
0x8C5BBF: cmp     esi, eax
0x8C5BC1: jb      short loc_8C5BD8
0x8C5BC3: movzx   ecx, word ptr [esp+0B4h+var_90+2]
0x8C5BC8: add     ecx, esi
0x8C5BCA: push    ecx
0x8C5BCB: lea     ecx, [esp+0B8h+var_9C]
0x8C5BCF: call    sub_8C5490
0x8C5BD4: mov     ecx, [esp+0B4h+var_88]
0x8C5BD8: movzx   edx, word ptr [esp+0B4h+var_94+2]
0x8C5BDD: cmp     esi, edx
0x8C5BDF: jb      short loc_8C5BFA
0x8C5BE1: test    bx, bx
0x8C5BE4: lea     eax, [esi+1]
0x8C5BE7: mov     word ptr [esp+0B4h+var_94+2], ax
0x8C5BEC: mov     eax, [esp+0B4h+var_98]
0x8C5BF0: jz      short loc_8C5C24
0x8C5BF2: add     word ptr [esp+0B4h+var_90], 1
0x8C5BF8: jmp     short loc_8C5C24
0x8C5BFA: test    bx, bx
0x8C5BFD: mov     eax, [esp+0B4h+var_98]
0x8C5C01: jz      short loc_8C5C12
0x8C5C03: cmp     word ptr [eax+esi*2], 0
0x8C5C08: jnz     short loc_8C5C24
0x8C5C0A: add     word ptr [esp+0B4h+var_90], 1
0x8C5C10: jmp     short loc_8C5C24
0x8C5C12: mov     edx, [esp+0B4h+var_98]
0x8C5C16: cmp     word ptr [edx+esi*2], 0
0x8C5C1B: jz      short loc_8C5C24
0x8C5C1D: add     word ptr [esp+0B4h+var_90], 0FFFFh
0x8C5C24: movzx   edx, word ptr [esp+0B4h+var_94]
0x8C5C29: mov     [eax+esi*2], bx
0x8C5C2D: movzx   esi, word ptr [esp+0B4h+var_94+2]
0x8C5C32: sub     edi, ecx
0x8C5C34: cmp     esi, edx
0x8C5C36: movzx   ebx, di
0x8C5C39: jb      short loc_8C5C54
0x8C5C3B: movzx   eax, word ptr [esp+0B4h+var_90+2]
0x8C5C40: add     eax, esi
0x8C5C42: push    eax
0x8C5C43: lea     ecx, [esp+0B8h+var_9C]
0x8C5C47: call    sub_8C5490
0x8C5C4C: mov     ecx, [esp+0B4h+var_88]
0x8C5C50: mov     eax, [esp+0B4h+var_98]
0x8C5C54: movzx   edx, word ptr [esp+0B4h+var_94+2]
0x8C5C59: cmp     esi, edx
0x8C5C5B: jb      short loc_8C5C72
0x8C5C5D: test    bx, bx
0x8C5C60: lea     edx, [esi+1]
0x8C5C63: mov     word ptr [esp+0B4h+var_94+2], dx
0x8C5C68: jz      short loc_8C5C94
0x8C5C6A: add     word ptr [esp+0B4h+var_90], 1
0x8C5C70: jmp     short loc_8C5C94
0x8C5C72: test    bx, bx
0x8C5C75: jz      short loc_8C5C86
0x8C5C77: cmp     word ptr [eax+esi*2], 0
0x8C5C7C: jnz     short loc_8C5C94
0x8C5C7E: add     word ptr [esp+0B4h+var_90], 1
0x8C5C84: jmp     short loc_8C5C94
0x8C5C86: cmp     word ptr [eax+esi*2], 0
0x8C5C8B: jz      short loc_8C5C94
0x8C5C8D: add     word ptr [esp+0B4h+var_90], 0FFFFh
0x8C5C94: mov     edx, [esp+0B4h+var_5C]
0x8C5C98: sub     edx, ecx
0x8C5C9A: mov     [eax+esi*2], bx
0x8C5C9E: movzx   esi, word ptr [esp+0B4h+var_94+2]
0x8C5CA3: movzx   ebx, dx
0x8C5CA6: movzx   edx, word ptr [esp+0B4h+var_94]
0x8C5CAB: cmp     esi, edx
0x8C5CAD: jb      short loc_8C5CC8
0x8C5CAF: movzx   eax, word ptr [esp+0B4h+var_90+2]
0x8C5CB4: add     eax, esi
0x8C5CB6: push    eax
0x8C5CB7: lea     ecx, [esp+0B8h+var_9C]
0x8C5CBB: call    sub_8C5490
0x8C5CC0: mov     ecx, [esp+0B4h+var_88]
0x8C5CC4: mov     eax, [esp+0B4h+var_98]
0x8C5CC8: movzx   edx, word ptr [esp+0B4h+var_94+2]
0x8C5CCD: cmp     esi, edx
0x8C5CCF: jb      short loc_8C5CE6
0x8C5CD1: test    bx, bx
0x8C5CD4: lea     edx, [esi+1]
0x8C5CD7: mov     word ptr [esp+0B4h+var_94+2], dx
0x8C5CDC: jz      short loc_8C5D08
0x8C5CDE: add     word ptr [esp+0B4h+var_90], 1
0x8C5CE4: jmp     short loc_8C5D08
0x8C5CE6: test    bx, bx
0x8C5CE9: jz      short loc_8C5CFA
0x8C5CEB: cmp     word ptr [eax+esi*2], 0
0x8C5CF0: jnz     short loc_8C5D08
0x8C5CF2: add     word ptr [esp+0B4h+var_90], 1
0x8C5CF8: jmp     short loc_8C5D08
0x8C5CFA: cmp     word ptr [eax+esi*2], 0
0x8C5CFF: jz      short loc_8C5D08
0x8C5D01: add     word ptr [esp+0B4h+var_90], 0FFFFh
0x8C5D08: add     [esp+0B4h+var_84], 14h
0x8C5D0D: mov     [eax+esi*2], bx
0x8C5D11: mov     ebx, 1
0x8C5D16: add     [esp+0B4h+var_80], ebx
0x8C5D1A: xor     edi, edi
0x8C5D1C: jmp     loc_8C5E69
0x8C5D21: mov     ax, word ptr [esp+0B4h+var_7C]
0x8C5D26: cmp     ax, [esi]
0x8C5D29: jnz     loc_8C5DEE
0x8C5D2F: mov     dx, word ptr [esp+0B4h+var_5C]
0x8C5D34: cmp     dx, [esi+2]
0x8C5D38: jnz     loc_8C5DEE
0x8C5D3E: mov     ax, [esi+4]
0x8C5D42: movzx   edi, word ptr [esp+0B4h+var_94+2]
0x8C5D47: sub     ax, cx
0x8C5D4A: movzx   ecx, word ptr [esp+0B4h+var_94]
0x8C5D4F: cmp     edi, ecx
0x8C5D51: movzx   eax, ax
0x8C5D54: mov     [esp+0B4h+var_8C], eax
0x8C5D58: jb      short loc_8C5D6F
0x8C5D5A: movzx   edx, word ptr [esp+0B4h+var_90+2]
0x8C5D5F: add     edx, edi
0x8C5D61: push    edx
0x8C5D62: lea     ecx, [esp+0B8h+var_9C]
0x8C5D66: call    sub_8C5490
0x8C5D6B: mov     eax, [esp+0B4h+var_8C]
0x8C5D6F: movzx   ecx, word ptr [esp+0B4h+var_94+2]
0x8C5D74: cmp     edi, ecx
0x8C5D76: jb      short loc_8C5D8D
0x8C5D78: test    ax, ax
0x8C5D7B: lea     edx, [edi+1]
0x8C5D7E: mov     word ptr [esp+0B4h+var_94+2], dx
0x8C5D83: jz      short loc_8C5DB7
0x8C5D85: add     word ptr [esp+0B4h+var_90], 1
0x8C5D8B: jmp     short loc_8C5DB7
0x8C5D8D: test    ax, ax
0x8C5D90: jz      short loc_8C5DA5
0x8C5D92: mov     ecx, [esp+0B4h+var_98]
0x8C5D96: cmp     word ptr [ecx+edi*2], 0
0x8C5D9B: jnz     short loc_8C5DB7
0x8C5D9D: add     word ptr [esp+0B4h+var_90], 1
0x8C5DA3: jmp     short loc_8C5DB7
0x8C5DA5: mov     edx, [esp+0B4h+var_98]
0x8C5DA9: cmp     word ptr [edx+edi*2], 0
0x8C5DAE: jz      short loc_8C5DB7
0x8C5DB0: add     word ptr [esp+0B4h+var_90], 0FFFFh
0x8C5DB7: mov     ecx, [esp+0B4h+var_98]
0x8C5DBB: movzx   edx, word ptr [esp+0B4h+var_7C]
0x8C5DC0: add     [esp+0B4h+var_80], 1
0x8C5DC5: add     [esp+0B4h+var_84], 14h
0x8C5DCA: mov     [ecx+edi*2], ax
0x8C5DCE: movzx   ecx, word ptr [esi+4]
0x8C5DD2: movzx   eax, word ptr [esp+0B4h+var_5C]
0x8C5DD7: mov     [esp+0B4h+var_5C], ecx
0x8C5DDB: mov     ecx, [esp+0B4h+var_88]
0x8C5DDF: add     ebx, 1
0x8C5DE2: mov     [esp+0B4h+var_8C], edx
0x8C5DE6: mov     [esp+0B4h+var_7C], eax
0x8C5DEA: xor     edi, edi
0x8C5DEC: jmp     short loc_8C5E69
0x8C5DEE: movzx   esi, word ptr [esp+0B4h+var_70+2]
0x8C5DF3: movzx   edx, word ptr [esp+0B4h+var_70]
0x8C5DF8: add     ebx, 2
0x8C5DFB: cmp     esi, edx
0x8C5DFD: movzx   ebx, bx
0x8C5E00: jb      short loc_8C5E19
0x8C5E02: movzx   eax, [esp+0B4h+var_6A]
0x8C5E07: add     eax, esi
0x8C5E09: push    eax
0x8C5E0A: lea     ecx, [esp+0B8h+var_78]
0x8C5E0E: call    sub_8C5490
0x8C5E13: mov     ecx, [esp+0B4h+var_88]
0x8C5E17: xor     edi, edi
0x8C5E19: movzx   edx, word ptr [esp+0B4h+var_70+2]
0x8C5E1E: cmp     esi, edx
0x8C5E20: jb      short loc_8C5E37
0x8C5E22: cmp     bx, di
0x8C5E25: lea     eax, [esi+1]
0x8C5E28: mov     word ptr [esp+0B4h+var_70+2], ax
0x8C5E2D: jz      short loc_8C5E5F
0x8C5E2F: add     [esp+0B4h+var_6C], 1
0x8C5E35: jmp     short loc_8C5E5F
0x8C5E37: cmp     bx, di
0x8C5E3A: jz      short loc_8C5E4E
0x8C5E3C: mov     edx, [esp+0B4h+Src]
0x8C5E40: cmp     [edx+esi*2], di
0x8C5E44: jnz     short loc_8C5E5F
0x8C5E46: add     [esp+0B4h+var_6C], 1
0x8C5E4C: jmp     short loc_8C5E5F
0x8C5E4E: mov     eax, [esp+0B4h+Src]
0x8C5E52: cmp     [eax+esi*2], di
0x8C5E56: jz      short loc_8C5E5F
0x8C5E58: add     [esp+0B4h+var_6C], 0FFFFh
0x8C5E5F: mov     edx, [esp+0B4h+Src]
0x8C5E63: mov     [edx+esi*2], bx
0x8C5E67: xor     ebx, ebx
0x8C5E69: mov     edx, [esp+0B4h+var_64]
0x8C5E6D: mov     esi, [esp+0B4h+var_68]
0x8C5E71: mov     eax, [edx+1Ch]
0x8C5E74: mov     eax, [eax+esi+4]
0x8C5E78: movzx   esi, word ptr [esp+0B4h+var_8C]
0x8C5E7D: add     eax, ecx
0x8C5E7F: cmp     esi, eax
0x8C5E81: jb      loc_8C5B70
0x8C5E87: push    50h ; 'P'; Size
0x8C5E89: call    FormHeapAlloc
0x8C5E8E: add     esp, 4
0x8C5E91: mov     [esp+0B4h+var_8C], eax
0x8C5E95: test    eax, eax
0x8C5E97: mov     byte ptr [esp+0B4h+var_4], 2
0x8C5E9F: jz      short loc_8C5EAE
0x8C5EA1: mov     ecx, eax
0x8C5EA3: call    sub_719D20
0x8C5EA8: mov     [esp+0B4h+var_8C], eax
0x8C5EAC: jmp     short loc_8C5EB6
0x8C5EAE: mov     [esp+0B4h+var_8C], 0
0x8C5EB6: mov     ecx, [esp+0B4h+var_64]
0x8C5EBA: mov     edx, [ecx+1Ch]
0x8C5EBD: mov     eax, [esp+0B4h+var_68]
0x8C5EC1: mov     edi, [edx+eax+4]
0x8C5EC5: xor     ecx, ecx
0x8C5EC7: mov     eax, edi
0x8C5EC9: mov     edx, 0Ch
0x8C5ECE: mul     edx
0x8C5ED0: seto    cl
0x8C5ED3: mov     byte ptr [esp+0B4h+var_4], 1
0x8C5EDB: neg     ecx
0x8C5EDD: or      ecx, eax
0x8C5EDF: push    ecx; Size
0x8C5EE0: call    FormHeapAlloc
0x8C5EE5: mov     ecx, [esp+0B8h+var_88]
0x8C5EE9: lea     ebx, [edi+ecx]
0x8C5EEC: add     esp, 4
0x8C5EEF: cmp     ecx, ebx
0x8C5EF1: mov     [esp+0B4h+var_84], ebx
0x8C5EF5: jnb     loc_8C5F81
0x8C5EFB: fld     qword ptr ds:0A372E0h
0x8C5F01: lea     esi, [ecx+ecx*2]
0x8C5F04: add     esi, esi
0x8C5F06: add     esi, esi
0x8C5F08: lea     edx, [eax+8]
0x8C5F0B: sub     ebx, ecx
0x8C5F0D: mov     ecx, [esp+0B4h+var_64]
0x8C5F11: mov     ecx, [ecx+18h]
0x8C5F14: fld     dword ptr [ecx+esi]
0x8C5F17: add     ecx, esi
0x8C5F19: fstp    dword ptr [esp+0B4h+var_30]
0x8C5F20: add     esi, 0Ch
0x8C5F23: fld     dword ptr [ecx+4]
0x8C5F26: add     edx, 0Ch
0x8C5F29: sub     ebx, 1
0x8C5F2C: fstp    dword ptr [esp+0B4h+var_30+4]
0x8C5F33: fld     dword ptr [ecx+8]
0x8C5F36: fstp    dword ptr [esp+0B4h+var_30+8]
0x8C5F3D: movaps  xmm0, [esp+0B4h+var_30]
0x8C5F45: movss   [esp+0B4h+var_40], xmm0
0x8C5F4B: fld     [esp+0B4h+var_40]
0x8C5F4F: fmul    st, st(1)
0x8C5F51: movaps  xmm1, xmm0
0x8C5F54: shufps  xmm1, xmm0, 55h ; 'U'
0x8C5F58: movss   [esp+0B4h+var_40], xmm1
0x8C5F5E: fstp    dword ptr [edx-14h]
0x8C5F61: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8C5F65: fld     [esp+0B4h+var_40]
0x8C5F69: movss   [esp+0B4h+var_40], xmm0
0x8C5F6F: fmul    st, st(1)
0x8C5F71: fstp    dword ptr [edx-10h]
0x8C5F74: fld     [esp+0B4h+var_40]
0x8C5F78: fmul    st, st(1)
0x8C5F7A: fstp    dword ptr [edx-0Ch]
0x8C5F7D: jnz     short loc_8C5F0D
0x8C5F7F: fstp    st
0x8C5F81: mov     ecx, [esp+0B4h+var_8C]
0x8C5F85: push    0
0x8C5F87: push    0
0x8C5F89: push    0
0x8C5F8B: push    0
0x8C5F8D: push    0
0x8C5F8F: push    eax
0x8C5F90: push    edi
0x8C5F91: call    sub_728320
0x8C5F96: movzx   eax, word ptr [esp+0B4h+var_70+2]
0x8C5F9B: xor     ecx, ecx
0x8C5F9D: mov     [esp+0B4h+var_7C], eax
0x8C5FA1: mov     edx, 2
0x8C5FA6: mul     edx
0x8C5FA8: seto    cl
0x8C5FAB: neg     ecx
0x8C5FAD: or      ecx, eax
0x8C5FAF: push    ecx; Size
0x8C5FB0: call    FormHeapAlloc
0x8C5FB5: movzx   ebx, word ptr [esp+0B8h+var_94+2]
0x8C5FBA: mov     esi, eax
0x8C5FBC: xor     ecx, ecx
0x8C5FBE: mov     eax, ebx
0x8C5FC0: mov     edx, 2
0x8C5FC5: mul     edx
0x8C5FC7: seto    cl
0x8C5FCA: neg     ecx
0x8C5FCC: or      ecx, eax
0x8C5FCE: push    ecx; Size
0x8C5FCF: call    FormHeapAlloc
0x8C5FD4: mov     edx, [esp+0BCh+Src]
0x8C5FD8: mov     edi, eax
0x8C5FDA: mov     eax, [esp+0BCh+var_7C]
0x8C5FDE: lea     ecx, [eax+eax]
0x8C5FE1: push    ecx; Size
0x8C5FE2: push    edx; Src
0x8C5FE3: push    esi; Dst
0x8C5FE4: call    _memcpy
0x8C5FE9: mov     ecx, [esp+0C8h+var_98]
0x8C5FED: lea     eax, [ebx+ebx]
0x8C5FF0: push    eax; Size
0x8C5FF1: push    ecx; Src
0x8C5FF2: push    edi; Dst
0x8C5FF3: call    _memcpy
0x8C5FF8: mov     edx, [esp+0D4h+var_70+2]
0x8C5FFC: add     esp, 20h
0x8C5FFF: push    edi
0x8C6000: push    esi
0x8C6001: mov     esi, [esp+0BCh+var_8C]
0x8C6005: push    edx
0x8C6006: mov     ecx, esi
0x8C6008: call    sub_719F40
0x8C600D: mov     eax, [esp+0B4h+var_80]
0x8C6011: sub     eax, [esp+0B4h+var_60]
0x8C6015: push    0C0h ; 'À'; Size
0x8C601A: mov     [esi+40h], ax
0x8C601E: call    FormHeapAlloc
0x8C6023: add     esp, 4
0x8C6026: mov     [esp+0B4h+var_60], eax
0x8C602A: test    eax, eax
0x8C602C: mov     byte ptr [esp+0B4h+var_4], 3
0x8C6034: jz      short loc_8C6042
0x8C6036: push    esi
0x8C6037: mov     ecx, eax
0x8C6039: call    sub_719A20
0x8C603E: mov     esi, eax
0x8C6040: jmp     short loc_8C6044
0x8C6042: xor     esi, esi
0x8C6044: push    offset aBhkpackednitri; "bhkPackedNiTriStripsShape"
0x8C6049: mov     ecx, esi
0x8C604B: mov     byte ptr [esp+0B8h+var_4], 1
0x8C6053: call    NiObjectNET_SetName
0x8C6058: mov     edi, [esp+0B4h+var_48]
0x8C605C: mov     ecx, edi
0x8C605E: call    sub_8C5070
0x8C6063: fabs
0x8C6065: fstp    [esp+0B4h+var_60]
0x8C6069: push    esi
0x8C606A: fld     [esp+0B8h+var_60]
0x8C606E: mov     ecx, edi
0x8C6070: fstp    dword ptr [esi+60h]
0x8C6073: mov     edx, [edi]
0x8C6075: mov     eax, [edx+98h]
0x8C607B: call    eax
0x8C607D: push    2
0x8C607F: mov     ecx, esi
0x8C6081: call    NiNode_GetNiPropertyByID
0x8C6086: mov     edi, eax
0x8C6088: test    edi, edi
0x8C608A: jz      short loc_8C60D0
0x8C608C: fldz
0x8C608E: mov     edx, [esp+0B4h+var_64]
0x8C6092: mov     eax, [edx+1Ch]
0x8C6095: fst     [esp+0B4h+var_54]
0x8C6099: lea     ecx, [esp+0B4h+var_54]
0x8C609D: fst     [esp+0B4h+var_50]
0x8C60A1: push    ecx
0x8C60A2: fstp    [esp+0B8h+var_4C]
0x8C60A6: mov     ecx, [esp+0B8h+var_68]
0x8C60AA: mov     edx, [eax+ecx+8]
0x8C60AE: push    edx
0x8C60AF: call    sub_8A2730
0x8C60B4: mov     eax, [esp+0BCh+var_54]
0x8C60B8: mov     ecx, [esp+0BCh+var_50]
0x8C60BC: mov     edx, [esp+0BCh+var_4C]
0x8C60C0: mov     [edi+40h], eax
0x8C60C3: add     esp, 8
0x8C60C6: add     dword ptr [edi+54h], 1
0x8C60CA: mov     [edi+44h], ecx
0x8C60CD: mov     [edi+48h], edx
0x8C60D0: cmp     word ptr [esp+0B4h+var_94+2], 0
0x8C60D6: jbe     short loc_8C60E9
0x8C60D8: mov     edi, [esp+0B4h+var_98]
0x8C60DC: xor     eax, eax
0x8C60DE: mov     ecx, ebx
0x8C60E0: shr     ecx, 1
0x8C60E2: rep stosd
0x8C60E4: adc     ecx, ecx
0x8C60E6: rep stosw
0x8C60E9: xor     eax, eax
0x8C60EB: cmp     word ptr [esp+0B4h+var_70+2], ax
0x8C60F0: mov     word ptr [esp+0B4h+var_94+2], ax
0x8C60F5: mov     word ptr [esp+0B4h+var_90], ax
0x8C60FA: jbe     short loc_8C610D
0x8C60FC: mov     ecx, [esp+0B4h+var_7C]
0x8C6100: mov     edi, [esp+0B4h+Src]
0x8C6104: shr     ecx, 1
0x8C6106: rep stosd
0x8C6108: adc     ecx, ecx
0x8C610A: rep stosw
0x8C610D: mov     ecx, [esp+0B4h+var_44]
0x8C6111: mov     edx, [ecx]
0x8C6113: xor     eax, eax
0x8C6115: push    eax
0x8C6116: mov     word ptr [esp+0B8h+var_70+2], ax
0x8C611B: mov     [esp+0B8h+var_6C], ax
0x8C6120: mov     eax, [edx+84h]
0x8C6126: push    esi
0x8C6127: call    eax
0x8C6129: mov     ecx, [esp+0B4h+var_84]
0x8C612D: mov     edx, [esp+0B4h+var_80]
0x8C6131: mov     eax, [esp+0B4h+var_58]
0x8C6135: add     [esp+0B4h+var_68], 0Ch
0x8C613A: mov     [esp+0B4h+var_88], ecx
0x8C613E: mov     ecx, [esp+0B4h+var_64]
0x8C6142: mov     [esp+0B4h+var_60], edx
0x8C6146: movzx   edx, word ptr [ecx+10h]
0x8C614A: add     eax, 1
0x8C614D: cmp     eax, edx
0x8C614F: mov     [esp+0B4h+var_58], eax
0x8C6153: jl      loc_8C5B41
0x8C6159: mov     eax, [esp+0B4h+var_98]
0x8C615D: push    eax
0x8C615E: call    FormHeapFree
0x8C6163: mov     ecx, [esp+0B8h+Src]
0x8C6167: push    ecx
0x8C6168: call    FormHeapFree
0x8C616D: add     esp, 8
0x8C6170: mov     ecx, dword ptr [esp+0B4h+var_C]
0x8C6177: mov     large fs:0, ecx
0x8C617E: pop     ecx
0x8C617F: pop     edi
0x8C6180: pop     esi
0x8C6181: pop     ebx
0x8C6182: mov     ecx, [esp+0A4h+var_14]
0x8C6189: xor     ecx, esp
0x8C618B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8C6190: mov     esp, ebp
0x8C6192: pop     ebp
0x8C6193: retn    4
