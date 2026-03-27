0x46A800: mov     eax, [esp+arg_0]
0x46A804: push    esi
0x46A805: push    0; int
0x46A807: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x46A80C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46A811: push    0; int
0x46A813: push    eax; void *
0x46A814: mov     esi, ecx
0x46A816: call    OblivionDynamicCast
0x46A81B: add     esp, 14h
0x46A81E: test    eax, eax
0x46A820: jz      short loc_46A83C
0x46A822: mov     ecx, [eax+4]
0x46A825: mov     [esi+4], ecx
0x46A828: mov     dx, [eax+8]
0x46A82C: mov     [esi+8], dx
0x46A830: mov     edx, [eax]
0x46A832: mov     ecx, eax
0x46A834: mov     eax, [edx+10h]
0x46A837: call    eax
0x46A839: mov     [esi+0Ch], eax
0x46A83C: pop     esi
0x46A83D: retn    4
