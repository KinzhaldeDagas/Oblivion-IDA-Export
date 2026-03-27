0x429180: push    ebx
0x429181: mov     ebx, [esp+4+arg_0]
0x429185: push    esi
0x429186: push    edi
0x429187: push    0; int
0x429189: push    offset ??_R0?AVExtraHealth@@@8; struct TypeDescriptor *
0x42918E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429193: push    0; int
0x429195: push    ebx; void *
0x429196: mov     edi, ecx
0x429198: call    OblivionDynamicCast
0x42919D: mov     esi, eax
0x42919F: add     esp, 14h
0x4291A2: test    esi, esi
0x4291A4: jnz     short loc_4291AE
0x4291A6: pop     edi
0x4291A7: pop     esi
0x4291A8: mov     al, 1
0x4291AA: pop     ebx
0x4291AB: retn    4
0x4291AE: push    ebx
0x4291AF: mov     ecx, edi
0x4291B1: call    BSExtraData_CompareTo
0x4291B6: test    al, al
0x4291B8: jnz     short loc_4291A6
0x4291BA: fld     dword ptr [edi+0Ch]
0x4291BD: fld     dword ptr [esi+0Ch]
0x4291C0: fucompp
0x4291C2: fnstsw  ax
0x4291C4: test    ah, 44h
0x4291C7: jp      short loc_4291A6
0x4291C9: pop     edi
0x4291CA: pop     esi
0x4291CB: xor     al, al
0x4291CD: pop     ebx
0x4291CE: retn    4
