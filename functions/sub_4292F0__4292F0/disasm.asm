0x4292F0: push    ebx
0x4292F1: mov     ebx, [esp+4+arg_0]
0x4292F5: push    esi
0x4292F6: push    edi
0x4292F7: push    0; int
0x4292F9: push    offset ??_R0?AVExtraSoul@@@8; struct TypeDescriptor *
0x4292FE: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429303: push    0; int
0x429305: push    ebx; void *
0x429306: mov     edi, ecx
0x429308: call    OblivionDynamicCast
0x42930D: mov     esi, eax
0x42930F: add     esp, 14h
0x429312: test    esi, esi
0x429314: jnz     short loc_42931E
0x429316: pop     edi
0x429317: pop     esi
0x429318: mov     al, 1
0x42931A: pop     ebx
0x42931B: retn    4
0x42931E: push    ebx
0x42931F: mov     ecx, edi
0x429321: call    BSExtraData_CompareTo
0x429326: test    al, al
0x429328: jnz     short loc_429316
0x42932A: mov     al, [edi+0Ch]
0x42932D: cmp     al, [esi+0Ch]
0x429330: pop     edi
0x429331: pop     esi
0x429332: setnz   al
0x429335: pop     ebx
0x429336: retn    4
