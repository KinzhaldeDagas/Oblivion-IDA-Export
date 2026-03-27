0x4D7C50: mov     eax, [ecx+1Ch]
0x4D7C53: sub     esp, 48h
0x4D7C56: test    eax, eax
0x4D7C58: push    ebp
0x4D7C59: mov     ebp, [esp+4Ch+arg_4]
0x4D7C5D: push    esi
0x4D7C5E: push    edi
0x4D7C5F: jz      loc_4D7CF2
0x4D7C65: cmp     byte ptr [eax+4], 23h ; '#'
0x4D7C69: jnz     loc_4D7CF2
0x4D7C6F: push    ebx
0x4D7C70: mov     ebx, [eax+0E8h]
0x4D7C76: test    ebx, ebx
0x4D7C78: jz      short loc_4D7CF1
0x4D7C7A: mov     ecx, 9
0x4D7C7F: mov     esi, offset unk_B3FADC
0x4D7C84: lea     edi, [esp+58h+var_48]
0x4D7C88: rep movsd
0x4D7C8A: mov     ecx, eax
0x4D7C8C: call    TESActorBase_IsFemale
0x4D7C91: mov     esi, eax
0x4D7C93: push    esi
0x4D7C94: mov     ecx, ebx
0x4D7C96: call    sub_4D6BC0
0x4D7C9B: cmp     [esp+58h+arg_8], 0
0x4D7CA0: push    esi
0x4D7CA1: mov     ecx, ebx
0x4D7CA3: jz      short loc_4D7CC0
0x4D7CA5: fld1
0x4D7CA7: fdivrp  st(1), st
0x4D7CA9: fstp    [esp+5Ch+var_48]
0x4D7CAD: fld     [esp+5Ch+var_48]
0x4D7CB1: fstp    [esp+5Ch+var_38]
0x4D7CB5: call    sub_4D6B90
0x4D7CBA: fld1
0x4D7CBC: fdivrp  st(1), st
0x4D7CBE: jmp     short loc_4D7CD1
0x4D7CC0: fstp    [esp+5Ch+var_48]
0x4D7CC4: fld     [esp+5Ch+var_48]
0x4D7CC8: fstp    [esp+5Ch+var_38]
0x4D7CCC: call    sub_4D6B90
0x4D7CD1: lea     eax, [esp+58h+var_48]
0x4D7CD5: fstp    [esp+58h+var_28]
0x4D7CD9: push    eax
0x4D7CDA: lea     ecx, [esp+5Ch+var_24]
0x4D7CDE: push    ecx
0x4D7CDF: mov     ecx, ebp
0x4D7CE1: call    NiMAtrix33_Multiply
0x4D7CE6: mov     ecx, 9
0x4D7CEB: mov     esi, eax
0x4D7CED: mov     edi, ebp
0x4D7CEF: rep movsd
0x4D7CF1: pop     ebx
0x4D7CF2: mov     eax, [esp+54h+arg_0]
0x4D7CF6: mov     esi, ebp
0x4D7CF8: mov     ecx, 9
0x4D7CFD: mov     edi, eax
0x4D7CFF: rep movsd
0x4D7D01: pop     edi
0x4D7D02: pop     esi
0x4D7D03: pop     ebp
0x4D7D04: add     esp, 48h
0x4D7D07: retn    0Ch
