0x4D7510: push    ebx
0x4D7511: push    esi
0x4D7512: push    edi
0x4D7513: push    0; int
0x4D7515: push    offset ??_R0?AVTESUsesForm@@@8; struct TypeDescriptor *
0x4D751A: mov     esi, ecx
0x4D751C: mov     eax, [esi]
0x4D751E: mov     edx, [eax+170h]
0x4D7524: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4D7529: push    0; int
0x4D752B: or      bl, 0FFh
0x4D752E: call    edx
0x4D7530: push    eax; void *
0x4D7531: call    OblivionDynamicCast
0x4D7536: mov     edi, eax
0x4D7538: add     esp, 14h
0x4D753B: test    edi, edi
0x4D753D: jz      short loc_4D755B
0x4D753F: push    2Ch ; ','; a2
0x4D7541: lea     ecx, [esi+44h]; this
0x4D7544: call    BaseExtraList_GetExtraData
0x4D7549: test    eax, eax
0x4D754B: jz      short loc_4D7554
0x4D754D: mov     al, [eax+0Ch]
0x4D7550: pop     edi
0x4D7551: pop     esi
0x4D7552: pop     ebx
0x4D7553: retn
0x4D7554: mov     al, [edi+4]
0x4D7557: pop     edi
0x4D7558: pop     esi
0x4D7559: pop     ebx
0x4D755A: retn
0x4D755B: pop     edi
0x4D755C: pop     esi
0x4D755D: mov     al, bl
0x4D755F: pop     ebx
0x4D7560: retn
