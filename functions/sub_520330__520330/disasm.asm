0x520330: mov     eax, [esp+arg_0]
0x520334: push    esi
0x520335: push    edi
0x520336: push    0; int
0x520338: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x52033D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x520342: push    0; int
0x520344: push    eax; void *
0x520345: mov     edi, ecx
0x520347: call    OblivionDynamicCast
0x52034C: mov     esi, eax
0x52034E: add     esp, 14h
0x520351: test    esi, esi
0x520353: jz      short loc_52036F
0x520355: push    esi; a2
0x520356: mov     ecx, edi; this
0x520358: call    TESForm_CopyAllComponentsFrom
0x52035D: lea     ecx, [esi+30h]
0x520360: push    ecx
0x520361: lea     ecx, [edi+30h]
0x520364: call    sub_56A850
0x520369: mov     dl, [esi+38h]
0x52036C: mov     [edi+38h], dl
0x52036F: pop     edi
0x520370: pop     esi
0x520371: retn    4
