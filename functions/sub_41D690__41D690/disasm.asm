0x41D690: push    ebx
0x41D691: mov     ebx, [esp+4+arg_0]
0x41D695: push    esi
0x41D696: push    edi
0x41D697: push    0; int
0x41D699: push    offset ??_R0?AVExtraWaterHeight@@@8; struct TypeDescriptor *
0x41D69E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x41D6A3: push    0; int
0x41D6A5: push    ebx; void *
0x41D6A6: mov     edi, ecx
0x41D6A8: call    OblivionDynamicCast
0x41D6AD: mov     esi, eax
0x41D6AF: add     esp, 14h
0x41D6B2: test    esi, esi
0x41D6B4: jnz     short loc_41D6BE
0x41D6B6: pop     edi
0x41D6B7: pop     esi
0x41D6B8: mov     al, 1
0x41D6BA: pop     ebx
0x41D6BB: retn    4
0x41D6BE: push    ebx
0x41D6BF: mov     ecx, edi
0x41D6C1: call    BSExtraData_CompareTo
0x41D6C6: test    al, al
0x41D6C8: jnz     short loc_41D6B6
0x41D6CA: fld     dword ptr [esi+0Ch]
0x41D6CD: fld     dword ptr [edi+0Ch]
0x41D6D0: fucompp
0x41D6D2: fnstsw  ax
0x41D6D4: test    ah, 44h
0x41D6D7: jp      short loc_41D6B6
0x41D6D9: pop     edi
0x41D6DA: pop     esi
0x41D6DB: xor     al, al
0x41D6DD: pop     ebx
0x41D6DE: retn    4
