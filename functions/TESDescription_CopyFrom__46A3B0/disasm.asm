0x46A3B0: mov     eax, [esp+arg_0]
0x46A3B4: push    esi
0x46A3B5: push    edi
0x46A3B6: push    0; int
0x46A3B8: push    offset ??_R0?AVTESDescription@@@8; struct TypeDescriptor *
0x46A3BD: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46A3C2: push    0; int
0x46A3C4: push    eax; void *
0x46A3C5: mov     edi, ecx
0x46A3C7: call    OblivionDynamicCast
0x46A3CC: mov     esi, eax
0x46A3CE: add     esp, 14h
0x46A3D1: test    esi, esi
0x46A3D3: jz      short loc_46A3F8
0x46A3D5: mov     edx, [esi]
0x46A3D7: mov     eax, [edx+10h]
0x46A3DA: push    0; a3
0x46A3DC: push    43534544h
0x46A3E1: push    0
0x46A3E3: mov     ecx, esi
0x46A3E5: call    eax
0x46A3E7: push    eax; a2
0x46A3E8: mov     ecx, offset TESDescription_CachedDesc; this
0x46A3ED: call    BSStringT_Set
0x46A3F2: mov     ecx, [esi+4]
0x46A3F5: mov     [edi+4], ecx
0x46A3F8: pop     edi
0x46A3F9: pop     esi
0x46A3FA: retn    4
