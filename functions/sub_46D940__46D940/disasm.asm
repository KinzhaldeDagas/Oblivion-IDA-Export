0x46D940: push    esi
0x46D941: mov     esi, [esp+4+arg_0]
0x46D945: test    esi, esi
0x46D947: jz      short loc_46D97E
0x46D949: push    edi
0x46D94A: mov     edi, [esp+8+arg_4]
0x46D94E: test    edi, edi
0x46D950: jz      short loc_46D97D
0x46D952: mov     eax, [esi]
0x46D954: mov     edx, [eax+14h]
0x46D957: mov     ecx, esi
0x46D959: call    edx
0x46D95B: push    eax
0x46D95C: push    0; int
0x46D95E: push    offset ??_R0?AVTESForm@@@8; struct TypeDescriptor *
0x46D963: push    offset ??_R0?AVTESModel@@@8; struct _s_RTTICompleteObjectLocator *
0x46D968: push    0; int
0x46D96A: push    esi; void *
0x46D96B: call    OblivionDynamicCast
0x46D970: add     esp, 14h
0x46D973: push    eax
0x46D974: push    edi
0x46D975: lea     ecx, [esi+10h]
0x46D978: call    sub_46D750
0x46D97D: pop     edi
0x46D97E: pop     esi
0x46D97F: retn
