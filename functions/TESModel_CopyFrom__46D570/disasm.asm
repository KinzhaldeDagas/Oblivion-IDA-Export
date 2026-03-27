0x46D570: mov     eax, [esp+arg_0]
0x46D574: push    esi
0x46D575: push    edi
0x46D576: push    0; int
0x46D578: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x46D57D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46D582: push    0; int
0x46D584: push    eax; void *
0x46D585: mov     edi, ecx
0x46D587: call    OblivionDynamicCast
0x46D58C: mov     esi, eax
0x46D58E: add     esp, 14h
0x46D591: test    esi, esi
0x46D593: jz      short loc_46D5B0
0x46D595: mov     edx, [esi]
0x46D597: mov     eax, [edx+14h]
0x46D59A: push    ebx
0x46D59B: mov     ebx, [edi]
0x46D59D: mov     ecx, esi
0x46D59F: call    eax
0x46D5A1: mov     edx, [ebx+18h]
0x46D5A4: push    eax
0x46D5A5: mov     ecx, edi
0x46D5A7: call    edx
0x46D5A9: fld     dword ptr [esi+0Ch]
0x46D5AC: fstp    dword ptr [edi+0Ch]
0x46D5AF: pop     ebx
0x46D5B0: pop     edi
0x46D5B1: pop     esi
0x46D5B2: retn    4
