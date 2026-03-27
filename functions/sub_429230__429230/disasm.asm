0x429230: push    ebx
0x429231: mov     ebx, [esp+4+arg_0]
0x429235: push    esi
0x429236: push    edi
0x429237: push    0; int
0x429239: push    offset ??_R0?AVExtraTimeLeft@@@8; struct TypeDescriptor *
0x42923E: push    offset ??_R0?AVBSExtraData@@@8; struct _s_RTTICompleteObjectLocator *
0x429243: push    0; int
0x429245: push    ebx; void *
0x429246: mov     edi, ecx
0x429248: call    OblivionDynamicCast
0x42924D: mov     esi, eax
0x42924F: add     esp, 14h
0x429252: test    esi, esi
0x429254: jnz     short loc_42925E
0x429256: pop     edi
0x429257: pop     esi
0x429258: mov     al, 1
0x42925A: pop     ebx
0x42925B: retn    4
0x42925E: push    ebx
0x42925F: mov     ecx, edi
0x429261: call    BSExtraData_CompareTo
0x429266: test    al, al
0x429268: jnz     short loc_429256
0x42926A: fld     dword ptr [edi+0Ch]
0x42926D: fld     dword ptr [esi+0Ch]
0x429270: fucompp
0x429272: fnstsw  ax
0x429274: test    ah, 44h
0x429277: jp      short loc_429256
0x429279: pop     edi
0x42927A: pop     esi
0x42927B: xor     al, al
0x42927D: pop     ebx
0x42927E: retn    4
