0x429340: push    ebx
0x429341: mov     ebx, [esp+4+arg_0]
0x429345: push    esi
0x429346: push    edi
0x429347: push    0; int
0x429349: push    offset ??_R0?AVExtraScale@@@8; struct TypeDescriptor *
0x42934E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429353: push    0; int
0x429355: push    ebx; void *
0x429356: mov     edi, ecx
0x429358: call    OblivionDynamicCast
0x42935D: mov     esi, eax
0x42935F: add     esp, 14h
0x429362: test    esi, esi
0x429364: jnz     short loc_42936E
0x429366: pop     edi
0x429367: pop     esi
0x429368: mov     al, 1
0x42936A: pop     ebx
0x42936B: retn    4
0x42936E: push    ebx
0x42936F: mov     ecx, edi
0x429371: call    BSExtraData_CompareTo
0x429376: test    al, al
0x429378: jnz     short loc_429366
0x42937A: fld     dword ptr [edi+0Ch]
0x42937D: fld     dword ptr [esi+0Ch]
0x429380: fucompp
0x429382: fnstsw  ax
0x429384: test    ah, 44h
0x429387: jp      short loc_429366
0x429389: pop     edi
0x42938A: pop     esi
0x42938B: xor     al, al
0x42938D: pop     ebx
0x42938E: retn    4
