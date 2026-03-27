0x948490: push    ecx
0x948491: push    esi
0x948492: mov     esi, ecx
0x948494: mov     ecx, [esi+4]
0x948497: test    ecx, ecx
0x948499: jz      short loc_9484AC
0x94849B: push    1
0x94849D: call    sub_918440
0x9484A2: mov     ecx, [esi+4]
0x9484A5: push    0Bh
0x9484A7: call    sub_9181B0
0x9484AC: mov     ecx, [esi+4]
0x9484AF: test    ecx, ecx
0x9484B1: pop     esi
0x9484B2: jz      short loc_9484C7
0x9484B4: lea     eax, [esp+4+var_1]
0x9484B8: push    eax
0x9484B9: call    sub_918060
0x9484BE: cmp     byte ptr [eax], 0
0x9484C1: jz      short loc_9484C7
0x9484C3: xor     eax, eax
0x9484C5: pop     ecx
0x9484C6: retn
0x9484C7: mov     eax, 1
0x9484CC: pop     ecx
0x9484CD: retn
