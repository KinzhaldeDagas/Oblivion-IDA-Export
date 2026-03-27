0x6D6EF0: sub     esp, 8
0x6D6EF3: push    esi
0x6D6EF4: mov     esi, ecx
0x6D6EF6: call    sub_6D6C80
0x6D6EFB: test    al, al
0x6D6EFD: jz      def_6D6F28
0x6D6F03: mov     eax, [esi+44h]
0x6D6F06: mov     eax, [eax+0Ch]
0x6D6F09: test    eax, eax
0x6D6F0B: jnz     short loc_6D6F1C
0x6D6F0D: fldz
0x6D6F0F: mov     ecx, [esp+0Ch+arg_0]
0x6D6F13: fstp    dword ptr [ecx]
0x6D6F15: pop     esi
0x6D6F16: add     esp, 8
0x6D6F19: retn    4
0x6D6F1C: mov     esi, [esi+50h]
0x6D6F1F: cmp     esi, 4; switch 5 cases
0x6D6F22: ja      def_6D6F28
0x6D6F28: jmp     ds:jpt_6D6F28[esi*4]; switch jump
0x6D6F2F: mov     edx, [eax]; jumptable 006D6F28 case 0
0x6D6F31: mov     eax, [eax+4]
0x6D6F34: mov     ecx, [esp+0Ch+arg_0]
0x6D6F38: mov     [esp+0Ch+var_8], edx
0x6D6F3C: fld     [esp+0Ch+var_8]
0x6D6F40: fstp    dword ptr [ecx]
0x6D6F42: mov     [esp+0Ch+var_4], eax
0x6D6F46: pop     esi
0x6D6F47: add     esp, 8
0x6D6F4A: retn    4
0x6D6F4D: mov     edx, [eax]; jumptable 006D6F28 case 1
0x6D6F4F: mov     eax, [eax+4]
0x6D6F52: mov     ecx, [esp+0Ch+arg_0]
0x6D6F56: mov     [esp+0Ch+var_4], eax
0x6D6F5A: fld     [esp+0Ch+var_4]
0x6D6F5E: fstp    dword ptr [ecx]
0x6D6F60: mov     [esp+0Ch+var_8], edx
0x6D6F64: pop     esi
0x6D6F65: add     esp, 8
0x6D6F68: retn    4
0x6D6F6B: fld     dword ptr [eax+8]; jumptable 006D6F28 case 2
0x6D6F6E: mov     edx, [esp+0Ch+arg_0]
0x6D6F72: fstp    dword ptr [edx]
0x6D6F74: pop     esi
0x6D6F75: add     esp, 8
0x6D6F78: retn    4
0x6D6F7B: mov     ecx, [eax+0Ch]; jumptable 006D6F28 case 3
0x6D6F7E: mov     edx, [eax+10h]
0x6D6F81: mov     eax, [esp+0Ch+arg_0]
0x6D6F85: mov     [esp+0Ch+var_8], ecx
0x6D6F89: fld     [esp+0Ch+var_8]
0x6D6F8D: fstp    dword ptr [eax]
0x6D6F8F: mov     [esp+0Ch+var_4], edx
0x6D6F93: pop     esi
0x6D6F94: add     esp, 8
0x6D6F97: retn    4
0x6D6F9A: mov     edx, [eax+10h]; jumptable 006D6F28 case 4
0x6D6F9D: mov     ecx, [eax+0Ch]
0x6D6FA0: mov     eax, [esp+0Ch+arg_0]
0x6D6FA4: mov     [esp+0Ch+var_4], edx
0x6D6FA8: fld     [esp+0Ch+var_4]
0x6D6FAC: fstp    dword ptr [eax]
0x6D6FAE: mov     [esp+0Ch+var_8], ecx
