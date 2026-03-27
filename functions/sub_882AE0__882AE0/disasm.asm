0x882AE0: push    0FFFFFFFFh
0x882AE2: push    offset SEH_882AE0
0x882AE7: mov     eax, large fs:0
0x882AED: push    eax
0x882AEE: sub     esp, 2Ch
0x882AF1: push    ebx
0x882AF2: push    ebp
0x882AF3: push    esi
0x882AF4: push    edi
0x882AF5: mov     eax, ds:0B30AACh
0x882AFA: xor     eax, esp
0x882AFC: push    eax
0x882AFD: lea     eax, [esp+4Ch+var_C]
0x882B01: mov     large fs:0, eax
0x882B07: mov     esi, ecx
0x882B09: cmp     byte ptr ds:0B42F3Eh, 0
0x882B10: jz      short loc_882B43
0x882B12: mov     eax, [esi+1Ch]
0x882B15: test    eax, 8000h
0x882B1A: ja      short loc_882B23
0x882B1C: test    eax, 10000h
0x882B21: jbe     short loc_882B43
0x882B23: mov     eax, [esp+4Ch+arg_C]
0x882B27: mov     ecx, [esp+4Ch+arg_8]
0x882B2B: mov     edx, [esp+4Ch+arg_4]
0x882B2F: push    eax
0x882B30: mov     eax, [esp+50h+arg_0]
0x882B34: push    ecx
0x882B35: push    edx
0x882B36: push    eax
0x882B37: mov     ecx, esi
0x882B39: call    sub_7D85D0
0x882B3E: jmp     loc_882FA8
0x882B43: movzx   eax, word ptr ds:0B42EACh
0x882B4A: movzx   edi, ax
0x882B4D: shl     edi, 8
0x882B50: or      edi, [esp+4Ch+arg_4]
0x882B54: cmp     ax, 5
0x882B58: jnz     short loc_882B62
0x882B5A: lea     eax, [esi+38h]
0x882B5D: jmp     loc_882FA8
0x882B62: cmp     ax, 6
0x882B66: jnz     short loc_882B89
0x882B68: mov     eax, [esp+4Ch+arg_0]
0x882B6C: cmp     dword ptr [eax+0B8h], 0
0x882B73: push    0
0x882B75: setnz   cl
0x882B78: push    ecx
0x882B79: push    eax
0x882B7A: mov     ecx, esi
0x882B7C: call    sub_85ABD0
0x882B81: lea     eax, [esi+48h]
0x882B84: jmp     loc_882FA8
0x882B89: cmp     [esi+24h], edi
0x882B8C: mov     ebx, [esp+4Ch+arg_C]
0x882B90: jnz     short loc_882B9A
0x882B92: test    bl, bl
0x882B94: jnz     loc_882F7E
0x882B9A: cmp     bl, 1
0x882B9D: jnz     short loc_882BA9
0x882B9F: call    sub_7E24C0
0x882BA4: mov     [esi+24h], edi
0x882BA7: jmp     short loc_882BB2
0x882BA9: mov     edx, [esp+4Ch+arg_8]
0x882BAD: mov     word ptr [edx], 0
0x882BB2: mov     eax, [esi+1Ch]
0x882BB5: shr     eax, 1Ch
0x882BB8: movzx   eax, al
0x882BBB: push    eax
0x882BBC: call    GetShadowSceneNode
0x882BC1: mov     ebp, [eax+118h]
0x882BC7: add     esp, 4
0x882BCA: mov     ecx, esi
0x882BCC: call    sub_7ED600
0x882BD1: movzx   eax, ax
0x882BD4: xor     edi, edi
0x882BD6: cmp     ax, di
0x882BD9: jnz     short loc_882C3E
0x882BDB: cmp     bl, 1
0x882BDE: jnz     loc_882EF7
0x882BE4: push    10h; Size
0x882BE6: call    FormHeapAlloc
0x882BEB: add     esp, 4
0x882BEE: mov     [esp+4Ch+arg_C], eax
0x882BF2: cmp     eax, edi
0x882BF4: mov     [esp+4Ch+var_4], edi
0x882BF8: jz      short loc_882C14
0x882BFA: mov     ecx, [esp+4Ch+arg_0]
0x882BFE: push    ebp
0x882BFF: push    1
0x882C01: push    1
0x882C03: push    0E0h ; 'à'
0x882C08: push    ecx
0x882C09: push    eax
0x882C0A: call    sub_7E2370
0x882C0F: add     esp, 18h
0x882C12: jmp     short loc_882C16
0x882C14: xor     eax, eax
0x882C16: lea     edx, [esp+4Ch+arg_4]
0x882C1A: push    edx
0x882C1B: lea     ecx, [esi+28h]
0x882C1E: mov     [esp+50h+var_4], 0FFFFFFFFh
0x882C26: mov     [esp+50h+arg_4], eax
0x882C2A: call    sub_5B1E20
0x882C2F: and     dword ptr [esi+1Ch], 0FFFFE3FFh
0x882C36: mov     [esi+24h], edi
0x882C39: jmp     loc_882EFF
0x882C3E: mov     ecx, esi
0x882C40: call    sub_7ED2A0
0x882C45: mov     ebx, eax
0x882C47: lea     eax, [esp+4Ch+arg_4]
0x882C4B: push    eax
0x882C4C: mov     ecx, ebp
0x882C4E: call    sub_405AD0
0x882C53: mov     eax, [eax]
0x882C55: mov     ecx, [eax+0ECh]
0x882C5B: mov     edx, [eax+0F0h]
0x882C61: mov     eax, [eax+0F4h]
0x882C67: mov     [esp+4Ch+var_28], ecx
0x882C6B: lea     ecx, [esp+4Ch+arg_4]; this
0x882C6F: mov     [esp+4Ch+var_24], edx
0x882C73: mov     [esp+4Ch+var_20], eax
0x882C77: call    sub_7016A0
0x882C7C: lea     ecx, [esp+4Ch+var_28]
0x882C80: call    sub_8823C0
0x882C85: fstp    [esp+4Ch+var_2C]
0x882C89: mov     eax, [esp+4Ch+arg_0]
0x882C8D: mov     ecx, [eax+20h]
0x882C90: mov     edx, [eax+24h]
0x882C93: mov     [esp+4Ch+var_1C], ecx
0x882C97: mov     ecx, [eax+28h]
0x882C9A: mov     [esp+4Ch+var_18], edx
0x882C9E: mov     edx, [eax+2Ch]
0x882CA1: lea     eax, [esp+4Ch+arg_4]
0x882CA5: mov     [esp+4Ch+var_14], ecx
0x882CA9: push    eax
0x882CAA: mov     ecx, ebx
0x882CAC: mov     [esp+50h+var_10], edx
0x882CB0: call    sub_405AD0
0x882CB5: mov     edi, [eax]
0x882CB7: lea     ecx, [esp+4Ch+arg_4]; this
0x882CBB: call    sub_7016A0
0x882CC0: fld     dword ptr [edi+88h]
0x882CC6: fsub    [esp+4Ch+var_1C]
0x882CCA: lea     ecx, [esp+4Ch+var_28]
0x882CCE: fstp    [esp+4Ch+var_38]
0x882CD2: fld     dword ptr [edi+8Ch]
0x882CD8: fsub    [esp+4Ch+var_18]
0x882CDC: fstp    [esp+4Ch+var_34]
0x882CE0: fld     dword ptr [edi+90h]
0x882CE6: fsub    [esp+4Ch+var_14]
0x882CEA: fstp    [esp+4Ch+var_30]
0x882CEE: fld     [esp+4Ch+var_38]
0x882CF2: fstp    [esp+4Ch+var_28]
0x882CF6: fld     [esp+4Ch+var_34]
0x882CFA: fstp    [esp+4Ch+var_24]
0x882CFE: fld     [esp+4Ch+var_30]
0x882D02: fstp    [esp+4Ch+var_20]
0x882D06: call    sub_404C90
0x882D0B: fsub    [esp+4Ch+var_10]
0x882D0F: fldz
0x882D11: fcom    st(1)
0x882D13: fnstsw  ax
0x882D15: fstp    st(1)
0x882D17: test    ah, 41h
0x882D1A: jz      short loc_882D6D
0x882D1C: fstp    st
0x882D1E: lea     ecx, [esp+4Ch+var_28]
0x882D22: fld     dword ptr [edi+88h]
0x882D28: fsub    [esp+4Ch+var_1C]
0x882D2C: fstp    [esp+4Ch+var_30]
0x882D30: fld     dword ptr [edi+8Ch]
0x882D36: fsub    [esp+4Ch+var_18]
0x882D3A: fstp    [esp+4Ch+var_34]
0x882D3E: fld     dword ptr [edi+90h]
0x882D44: fsub    [esp+4Ch+var_14]
0x882D48: fstp    [esp+4Ch+var_38]
0x882D4C: fld     [esp+4Ch+var_30]
0x882D50: fstp    [esp+4Ch+var_28]
0x882D54: fld     [esp+4Ch+var_34]
0x882D58: fstp    [esp+4Ch+var_24]
0x882D5C: fld     [esp+4Ch+var_38]
0x882D60: fstp    [esp+4Ch+var_20]
0x882D64: call    sub_404C90
0x882D69: fsub    [esp+4Ch+var_10]
0x882D6D: mov     ecx, [edi+0ECh]
0x882D73: fstp    [esp+4Ch+var_30]
0x882D77: mov     edx, [edi+0F0h]
0x882D7D: mov     eax, [edi+0F4h]
0x882D83: mov     [esp+4Ch+var_28], ecx
0x882D87: lea     ecx, [esp+4Ch+var_28]
0x882D8B: mov     [esp+4Ch+var_24], edx
0x882D8F: mov     [esp+4Ch+var_20], eax
0x882D93: call    sub_8823C0
0x882D98: fld     [esp+4Ch+var_30]
0x882D9C: fld     st
0x882D9E: fld1
0x882DA0: fdivrp  st(1), st
0x882DA2: fmulp   st(1), st
0x882DA4: fmulp   st(1), st
0x882DA6: fstp    [esp+4Ch+arg_4]
0x882DAA: fld     [esp+4Ch+var_2C]
0x882DAE: fld     [esp+4Ch+arg_4]
0x882DB2: fcomp   st(1)
0x882DB4: fnstsw  ax
0x882DB6: test    ah, 5
0x882DB9: jp      short loc_882E07
0x882DBB: and     dword ptr [esi+1Ch], 0FFFFE3FFh
0x882DC2: fstp    st
0x882DC4: mov     eax, [esi+1Ch]
0x882DC7: xor     edi, edi
0x882DC9: mov     [esp+4Ch+var_28], ebp
0x882DCD: xor     ebp, ebp
0x882DCF: cmp     ebx, edi
0x882DD1: mov     [esi+24h], edi
0x882DD4: jz      short loc_882DE3
0x882DD6: or      eax, 800h
0x882DDB: mov     ebp, ebx
0x882DDD: mov     [esi+1Ch], eax
0x882DE0: mov     [esi+24h], edi
0x882DE3: mov     ecx, esi
0x882DE5: call    sub_7ED4B0
0x882DEA: test    eax, eax
0x882DEC: jz      loc_882E91
0x882DF2: or      dword ptr [esi+1Ch], 1000h
0x882DF9: mov     edi, eax
0x882DFB: mov     dword ptr [esi+24h], 0
0x882E02: jmp     loc_882E91
0x882E07: fldz
0x882E09: or      dword ptr [esi+1Ch], 400h
0x882E10: fcompp
0x882E12: mov     [esp+4Ch+var_28], ebx
0x882E16: xor     ebx, ebx
0x882E18: mov     [esi+24h], ebx
0x882E1B: mov     ecx, esi
0x882E1D: fnstsw  ax
0x882E1F: test    ah, 5
0x882E22: jp      short loc_882E51
0x882E24: call    sub_7ED4B0
0x882E29: cmp     eax, ebx
0x882E2B: mov     [esi+24h], ebx
0x882E2E: jz      short loc_882E3B
0x882E30: or      dword ptr [esi+1Ch], 1800h
0x882E37: mov     edi, eax
0x882E39: jmp     short loc_882E91
0x882E3B: mov     ecx, [esi+1Ch]
0x882E3E: and     ecx, 0FFFFEFFFh
0x882E44: xor     edi, edi
0x882E46: or      ecx, 800h
0x882E4C: mov     [esi+1Ch], ecx
0x882E4F: jmp     short loc_882E91
0x882E51: call    sub_7ED4B0
0x882E56: cmp     eax, ebx
0x882E58: jz      short loc_882E83
0x882E5A: mov     ecx, esi
0x882E5C: mov     ebp, eax
0x882E5E: call    sub_7ED4B0
0x882E63: or      dword ptr [esi+1Ch], 800h
0x882E6A: mov     edi, eax
0x882E6C: cmp     edi, ebx
0x882E6E: setnz   dl
0x882E71: mov     ecx, esi
0x882E73: mov     [esi+24h], ebx
0x882E76: push    edx
0x882E77: push    1000h
0x882E7C: call    sub_434980
0x882E81: jmp     short loc_882E91
0x882E83: xor     ebp, ebp
0x882E85: xor     edi, edi
0x882E87: and     dword ptr [esi+1Ch], 0FFFFE7FFh
0x882E8E: mov     [esi+24h], ebx
0x882E91: cmp     byte ptr [esp+4Ch+arg_C], 1
0x882E96: jnz     short loc_882EF3
0x882E98: push    10h; Size
0x882E9A: call    FormHeapAlloc
0x882E9F: add     esp, 4
0x882EA2: mov     [esp+4Ch+arg_4], eax
0x882EA6: test    eax, eax
0x882EA8: mov     [esp+4Ch+var_4], 1
0x882EB0: jz      short loc_882ED2
0x882EB2: mov     ecx, [esp+4Ch+var_28]
0x882EB6: mov     edx, [esp+4Ch+arg_0]
0x882EBA: push    edi
0x882EBB: push    ebp
0x882EBC: push    ecx
0x882EBD: push    3
0x882EBF: push    1
0x882EC1: push    0E1h ; 'á'
0x882EC6: push    edx
0x882EC7: push    eax
0x882EC8: call    sub_7E2370
0x882ECD: add     esp, 20h
0x882ED0: jmp     short loc_882ED4
0x882ED2: xor     eax, eax
0x882ED4: mov     [esp+4Ch+arg_4], eax
0x882ED8: lea     eax, [esp+4Ch+arg_4]
0x882EDC: push    eax
0x882EDD: lea     ecx, [esi+28h]
0x882EE0: mov     [esp+50h+var_4], 0FFFFFFFFh
0x882EE8: call    sub_5B1E20
0x882EED: mov     ebx, [esp+4Ch+arg_C]
0x882EF1: jmp     short loc_882EFF
0x882EF3: mov     ebx, [esp+4Ch+arg_C]
0x882EF7: mov     eax, [esp+4Ch+arg_8]
0x882EFB: add     word ptr [eax], 1
0x882EFF: cmp     dword ptr ds:0B42F48h, 3
0x882F06: jl      short loc_882F7E
0x882F08: test    byte ptr ds:0B42F40h, 10h
0x882F0F: mov     eax, 0
0x882F14: setnle  al
0x882F17: test    al, al
0x882F19: jz      short loc_882F7E
0x882F1B: test    bl, bl
0x882F1D: jz      short loc_882F7E
0x882F1F: mov     ebp, [esp+4Ch+arg_0]
0x882F23: push    0
0x882F25: mov     ecx, ebp
0x882F27: call    NiNode_GetNiPropertyByID
0x882F2C: mov     edi, eax
0x882F2E: test    edi, edi
0x882F30: jnz     short loc_882F50
0x882F32: lea     ecx, [esp+4Ch+arg_4]
0x882F36: push    ecx
0x882F37: mov     ecx, ebp
0x882F39: call    sub_405760
0x882F3E: mov     edx, [eax]
0x882F40: mov     edi, [edx+8]
0x882F43: lea     ecx, [esp+4Ch+arg_4]; this
0x882F47: call    sub_7016A0
0x882F4C: test    edi, edi
0x882F4E: jz      short loc_882F61
0x882F50: mov     ax, [edi+18h]
0x882F54: shr     ax, 9
0x882F58: test    al, 1
0x882F5A: mov     byte ptr [esp+4Ch+arg_C], 1
0x882F5F: jnz     short loc_882F66
0x882F61: mov     byte ptr [esp+4Ch+arg_C], 0
0x882F66: cmp     dword ptr [ebp+0B8h], 0
0x882F6D: mov     ecx, [esp+4Ch+arg_C]
0x882F71: setnz   dl
0x882F74: push    ecx
0x882F75: mov     ecx, esi
0x882F77: push    edx
0x882F78: push    ebp
0x882F79: call    sub_85AAC0
0x882F7E: cmp     dword ptr [esi+0E0h], 0
0x882F85: jz      short loc_882FA5
0x882F87: mov     ecx, [esp+4Ch+arg_8]
0x882F8B: mov     edx, [esp+4Ch+arg_0]
0x882F8F: push    0
0x882F91: lea     eax, [esp+50h+arg_C]
0x882F95: push    eax
0x882F96: push    ebx
0x882F97: push    ecx
0x882F98: push    edx
0x882F99: mov     ecx, esi
0x882F9B: mov     byte ptr [esp+60h+arg_C], 1
0x882FA0: call    sub_854B70
0x882FA5: lea     eax, [esi+28h]
0x882FA8: mov     ecx, [esp+4Ch+var_C]
0x882FAC: mov     large fs:0, ecx
0x882FB3: pop     ecx
0x882FB4: pop     edi
0x882FB5: pop     esi
0x882FB6: pop     ebp
0x882FB7: pop     ebx
0x882FB8: add     esp, 38h
0x882FBB: retn    10h
