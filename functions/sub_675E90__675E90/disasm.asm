0x675E90: push    ebx
0x675E91: push    ebp
0x675E92: push    esi
0x675E93: push    edi
0x675E94: lea     ebx, [ecx+28h]
0x675E97: mov     ebp, 6
0x675E9C: lea     esp, [esp+0]
0x675EA0: mov     edi, [ebx]
0x675EA2: test    edi, edi
0x675EA4: mov     eax, edi
0x675EA6: jz      short loc_675EE1
0x675EA8: mov     esi, [eax]
0x675EAA: test    esi, esi
0x675EAC: jz      short loc_675EE1
0x675EAE: mov     ecx, [esp+10h+arg_0]
0x675EB2: cmp     [esi+0Ch], ecx
0x675EB5: jnz     short loc_675EDA
0x675EB7: mov     ecx, esi
0x675EB9: call    sub_607120
0x675EBE: mov     ecx, esi
0x675EC0: call    sub_605E80
0x675EC5: push    esi
0x675EC6: call    FormHeapFree
0x675ECB: add     esp, 4
0x675ECE: push    esi
0x675ECF: mov     ecx, edi
0x675ED1: call    BSSimpleList_Remove
0x675ED6: mov     eax, edi
0x675ED8: jmp     short loc_675EDD
0x675EDA: mov     eax, [eax+4]
0x675EDD: test    eax, eax
0x675EDF: jnz     short loc_675EA8
0x675EE1: add     ebx, 4
0x675EE4: sub     ebp, 1
0x675EE7: jnz     short loc_675EA0
0x675EE9: pop     edi
0x675EEA: pop     esi
0x675EEB: pop     ebp
0x675EEC: pop     ebx
0x675EED: retn    4
