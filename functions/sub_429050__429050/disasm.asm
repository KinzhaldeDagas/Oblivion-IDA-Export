0x429050: push    ebx
0x429051: mov     ebx, [esp+4+arg_0]
0x429055: push    esi
0x429056: push    edi
0x429057: push    0; int
0x429059: push    offset ??_R0?AVExtraGlobal@@@8; struct TypeDescriptor *
0x42905E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429063: push    0; int
0x429065: push    ebx; void *
0x429066: mov     edi, ecx
0x429068: call    OblivionDynamicCast
0x42906D: mov     esi, eax
0x42906F: add     esp, 14h
0x429072: test    esi, esi
0x429074: jnz     short loc_42907E
0x429076: pop     edi
0x429077: pop     esi
0x429078: mov     al, 1
0x42907A: pop     ebx
0x42907B: retn    4
0x42907E: push    ebx
0x42907F: mov     ecx, edi
0x429081: call    BSExtraData_CompareTo
0x429086: test    al, al
0x429088: jnz     short loc_429076
0x42908A: mov     eax, [edi+0Ch]
0x42908D: cmp     eax, [esi+0Ch]
0x429090: pop     edi
0x429091: pop     esi
0x429092: setnz   al
0x429095: pop     ebx
0x429096: retn    4
