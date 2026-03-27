0x51C980: sub     esp, 8
0x51C983: push    edi
0x51C984: mov     edi, ecx
0x51C986: mov     eax, [edi-0BCh]
0x51C98C: shr     eax, 7
0x51C98F: test    al, 1
0x51C991: jz      short loc_51C9FD
0x51C993: push    esi
0x51C994: lea     ecx, [edi-0C0h]
0x51C99A: call    TESActorBaseData_GetLevel
0x51C99F: movzx   esi, ax
0x51C9A2: cmp     si, 1
0x51C9A6: jge     short loc_51C9AD
0x51C9A8: mov     esi, 1
0x51C9AD: mov     ecx, edi
0x51C9AF: call    TESAttackDamageForm_GetDamage
0x51C9B4: fld     dword ptr ds:0B3629Ch
0x51C9BA: movzx   eax, ax
0x51C9BD: movsx   ecx, si
0x51C9C0: movzx   edx, ax
0x51C9C3: mov     [esp+10h+var_8], ecx
0x51C9C7: pop     esi
0x51C9C8: pop     edi
0x51C9C9: fild    [esp+8+var_8]
0x51C9CC: mov     [esp+8+var_8], edx
0x51C9CF: fmulp   st(1), st
0x51C9D1: fild    [esp+8+var_8]
0x51C9D4: fnstcw  word ptr [esp+8+var_8]
0x51C9D7: movzx   eax, word ptr [esp+8+var_8]
0x51C9DB: faddp   st(1), st
0x51C9DD: or      eax, 0C00h
0x51C9E2: mov     [esp+8+var_4], eax
0x51C9E6: fldcw   word ptr [esp+8+var_4]
0x51C9EA: fistp   [esp+8+var_4]
0x51C9EE: mov     ax, word ptr [esp+8+var_4]
0x51C9F3: movzx   eax, ax
0x51C9F6: fldcw   word ptr [esp+8+var_8]
0x51C9F9: add     esp, 8
0x51C9FC: retn
0x51C9FD: call    TESAttackDamageForm_GetDamage
0x51CA02: movzx   eax, ax
0x51CA05: pop     edi
0x51CA06: add     esp, 8
0x51CA09: retn
