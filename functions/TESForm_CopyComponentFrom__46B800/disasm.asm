0x46B800: mov     eax, [esp+a2]
0x46B804: push    esi
0x46B805: push    edi
0x46B806: push    0; int
0x46B808: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x46B80D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46B812: push    0; int
0x46B814: push    eax; void *
0x46B815: mov     esi, ecx
0x46B817: call    OblivionDynamicCast
0x46B81C: mov     edi, eax
0x46B81E: add     esp, 14h
0x46B821: test    edi, edi
0x46B823: jz      short loc_46B85D
0x46B825: mov     eax, [edi+8]
0x46B828: mov     ecx, [esi+8]
0x46B82B: shr     eax, 1
0x46B82D: shr     ecx, 1
0x46B82F: and     al, 1
0x46B831: and     cl, 1
0x46B834: cmp     cl, al
0x46B836: jz      short loc_46B845
0x46B838: mov     edx, [esi]
0x46B83A: push    eax
0x46B83B: mov     eax, [edx+90h]
0x46B841: mov     ecx, esi
0x46B843: call    eax
0x46B845: mov     cl, [edi+4]
0x46B848: mov     edx, [esi+8]
0x46B84B: mov     [esi+4], cl
0x46B84E: xor     edx, [edi+8]
0x46B851: and     edx, 4000h
0x46B857: xor     edx, [edi+8]
0x46B85A: mov     [esi+8], edx
0x46B85D: pop     edi
0x46B85E: pop     esi
0x46B85F: retn    4
