0x4F9580: mov     eax, [esp+arg_0]
0x4F9584: push    esi
0x4F9585: push    edi
0x4F9586: push    0; int
0x4F9588: push    offset ??_R0?AVTESGlobal@@@8; struct TypeDescriptor *
0x4F958D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F9592: push    0; int
0x4F9594: push    eax; void *
0x4F9595: mov     edi, ecx
0x4F9597: call    OblivionDynamicCast
0x4F959C: mov     esi, eax
0x4F959E: add     esp, 14h
0x4F95A1: test    esi, esi
0x4F95A3: jnz     short loc_4F95AC
0x4F95A5: pop     edi
0x4F95A6: mov     al, 1
0x4F95A8: pop     esi
0x4F95A9: retn    4
0x4F95AC: push    esi; a2
0x4F95AD: mov     ecx, edi; this
0x4F95AF: call    TESForm_CompareAllComponentsTo
0x4F95B4: test    al, al
0x4F95B6: jnz     short loc_4F95A5
0x4F95B8: mov     cl, [edi+20h]
0x4F95BB: cmp     cl, [esi+20h]
0x4F95BE: jnz     short loc_4F95A5
0x4F95C0: fld     dword ptr [edi+24h]
0x4F95C3: fld     dword ptr [esi+24h]
0x4F95C6: fucompp
0x4F95C8: fnstsw  ax
0x4F95CA: test    ah, 44h
0x4F95CD: jp      short loc_4F95A5
0x4F95CF: pop     edi
0x4F95D0: xor     al, al
0x4F95D2: pop     esi
0x4F95D3: retn    4
