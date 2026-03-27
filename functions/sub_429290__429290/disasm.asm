0x429290: push    ebx
0x429291: mov     ebx, [esp+4+arg_0]
0x429295: push    esi
0x429296: push    edi
0x429297: push    0; int
0x429299: push    offset ??_R0?AVExtraCharge@@@8; struct TypeDescriptor *
0x42929E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x4292A3: push    0; int
0x4292A5: push    ebx; void *
0x4292A6: mov     edi, ecx
0x4292A8: call    OblivionDynamicCast
0x4292AD: mov     esi, eax
0x4292AF: add     esp, 14h
0x4292B2: test    esi, esi
0x4292B4: jnz     short loc_4292BE
0x4292B6: pop     edi
0x4292B7: pop     esi
0x4292B8: mov     al, 1
0x4292BA: pop     ebx
0x4292BB: retn    4
0x4292BE: push    ebx
0x4292BF: mov     ecx, edi
0x4292C1: call    BSExtraData_CompareTo
0x4292C6: test    al, al
0x4292C8: jnz     short loc_4292B6
0x4292CA: fld     dword ptr [edi+0Ch]
0x4292CD: fld     dword ptr [esi+0Ch]
0x4292D0: fucompp
0x4292D2: fnstsw  ax
0x4292D4: test    ah, 44h
0x4292D7: jp      short loc_4292B6
0x4292D9: pop     edi
0x4292DA: pop     esi
0x4292DB: xor     al, al
0x4292DD: pop     ebx
0x4292DE: retn    4
