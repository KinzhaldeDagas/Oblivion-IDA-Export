0x429760: mov     eax, [esp+arg_0]
0x429764: push    esi
0x429765: push    0; int
0x429767: push    offset ??_R0?AVExtraPersuasionPercent@@@8; struct TypeDescriptor *
0x42976C: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429771: push    0; int
0x429773: push    eax; void *
0x429774: mov     esi, ecx
0x429776: call    OblivionDynamicCast
0x42977B: mov     ecx, eax
0x42977D: add     esp, 14h
0x429780: test    ecx, ecx
0x429782: jnz     short loc_42978A
0x429784: mov     al, 1
0x429786: pop     esi
0x429787: retn    4
0x42978A: fld     dword ptr [ecx+10h]
0x42978D: fld     dword ptr [esi+10h]
0x429790: fucompp
0x429792: fnstsw  ax
0x429794: test    ah, 44h
0x429797: jp      short loc_429784
0x429799: fld     dword ptr [ecx+0Ch]
0x42979C: fld     dword ptr [esi+0Ch]
0x42979F: fucompp
0x4297A1: fnstsw  ax
0x4297A3: test    ah, 44h
0x4297A6: jp      short loc_429784
0x4297A8: xor     al, al
0x4297AA: pop     esi
0x4297AB: retn    4
