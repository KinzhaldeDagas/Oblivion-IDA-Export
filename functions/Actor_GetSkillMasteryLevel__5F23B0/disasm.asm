0x5F23B0: mov     edx, [esp+arg_0]
0x5F23B4: push    esi
0x5F23B5: lea     esi, [edx-0Ch]
0x5F23B8: xor     eax, eax
0x5F23BA: cmp     esi, 14h
0x5F23BD: pop     esi
0x5F23BE: ja      short locret_5F23CF
0x5F23C0: push    edx
0x5F23C1: call    Actor_GetBaseCalcAVi
0x5F23C6: push    eax
0x5F23C7: call    Calc_MasteryFromSkill
0x5F23CC: add     esp, 4
0x5F23CF: retn    4
