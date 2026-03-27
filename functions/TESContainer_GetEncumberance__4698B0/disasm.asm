0x4698B0: sub     esp, 8
0x4698B3: test    byte ptr [ecx+4], 1
0x4698B7: fldz
0x4698B9: fst     [esp+8+var_8]
0x4698BC: jz      short loc_46990D
0x4698BE: cmp     dword ptr [ecx+8], 0
0x4698C2: fstp    st
0x4698C4: push    esi
0x4698C5: lea     esi, [ecx+8]
0x4698C8: jz      short loc_469908
0x4698CA: push    edi
0x4698CB: jmp     short loc_4698D0
0x4698CD: align 10h
0x4698D0: mov     edi, [esi]
0x4698D2: mov     eax, [edi+4]
0x4698D5: mov     ecx, [eax+8]
0x4698D8: mov     esi, [esi+4]
0x4698DB: shr     ecx, 5
0x4698DE: test    cl, 1
0x4698E1: jnz     short loc_469903
0x4698E3: push    eax
0x4698E4: call    TESWeightForm_GetWeightForForm_Fast
0x4698E9: mov     eax, [edi]
0x4698EB: cdq
0x4698EC: xor     eax, edx
0x4698EE: add     esp, 4
0x4698F1: sub     eax, edx
0x4698F3: mov     [esp+10h+var_4], eax
0x4698F7: fimul   [esp+10h+var_4]
0x4698FB: fadd    [esp+10h+var_8]
0x4698FF: fstp    [esp+10h+var_8]
0x469903: test    esi, esi
0x469905: jnz     short loc_4698D0
0x469907: pop     edi
0x469908: fld     [esp+0Ch+var_8]
0x46990C: pop     esi
0x46990D: add     esp, 8
0x469910: retn
