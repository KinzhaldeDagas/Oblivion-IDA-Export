0x46F170: mov     eax, [esp+arg_0]
0x46F174: push    esi
0x46F175: push    0; int
0x46F177: push    offset ??_R0?AVTESSoundFile@@@8; struct TypeDescriptor *
0x46F17C: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46F181: push    0; int
0x46F183: push    eax; void *
0x46F184: mov     esi, ecx
0x46F186: call    OblivionDynamicCast
0x46F18B: add     esp, 14h
0x46F18E: test    eax, eax
0x46F190: jz      short loc_46F1A8
0x46F192: mov     eax, [eax+4]
0x46F195: test    eax, eax
0x46F197: jnz     short loc_46F19E
0x46F199: mov     eax, offset EmptyString
0x46F19E: mov     edx, [esi]
0x46F1A0: push    eax
0x46F1A1: mov     eax, [edx+10h]
0x46F1A4: mov     ecx, esi
0x46F1A6: call    eax
0x46F1A8: pop     esi
0x46F1A9: retn    4
