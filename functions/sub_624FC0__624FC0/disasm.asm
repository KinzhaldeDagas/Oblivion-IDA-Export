0x624FC0: push    ecx
0x624FC1: push    esi
0x624FC2: push    0; int
0x624FC4: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x624FC9: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x624FCE: push    0; int
0x624FD0: push    0; a2
0x624FD2: mov     esi, ecx
0x624FD4: call    Actor_GetActorBaseForm
0x624FD9: push    eax; void *
0x624FDA: call    OblivionDynamicCast
0x624FDF: add     esp, 14h
0x624FE2: test    eax, eax
0x624FE4: jz      short loc_624FFF
0x624FE6: mov     eax, [esi]
0x624FE8: mov     edx, [eax+284h]
0x624FEE: push    0Ch
0x624FF0: mov     ecx, esi
0x624FF2: call    edx
0x624FF4: mov     [esp+8+var_4], eax
0x624FF8: fild    [esp+8+var_4]
0x624FFC: pop     esi
0x624FFD: pop     ecx
0x624FFE: retn
0x624FFF: mov     [esp+8+var_4], 0
0x625007: fild    [esp+8+var_4]
0x62500B: pop     esi
0x62500C: pop     ecx
0x62500D: retn
