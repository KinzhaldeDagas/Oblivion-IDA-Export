0x7225F0: push    ebx
0x7225F1: push    esi
0x7225F2: mov     esi, [esp+8+arg_0]
0x7225F6: push    edi
0x7225F7: push    esi
0x7225F8: mov     ebx, ecx
0x7225FA: call    sub_70BAE0
0x7225FF: mov     eax, ds:0B3FD4Ch
0x722604: push    eax; ArgList
0x722605: call    TESOutput_PrintString
0x72260A: movzx   edi, word ptr [esi+0Ah]
0x72260E: movzx   ecx, word ptr [esi+8]
0x722612: add     esp, 4
0x722615: cmp     edi, ecx
0x722617: mov     [esp+0Ch+arg_0], eax
0x72261B: jb      short loc_72262B
0x72261D: movzx   edx, word ptr [esi+0Eh]
0x722621: add     edx, edi
0x722623: push    edx
0x722624: mov     ecx, esi
0x722626: call    NiTArray_SetSize
0x72262B: lea     eax, [esp+0Ch+arg_0]
0x72262F: push    eax
0x722630: push    edi
0x722631: mov     ecx, esi
0x722633: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x722638: movzx   eax, byte ptr [ebx+0DCh]
0x72263F: and     eax, 7
0x722642: push    eax; int
0x722643: push    offset aM_emode; "m_eMode"
0x722648: call    sub_721A90
0x72264D: movzx   edi, word ptr [esi+0Ah]
0x722651: movzx   ecx, word ptr [esi+8]
0x722655: add     esp, 8
0x722658: cmp     edi, ecx
0x72265A: mov     [esp+0Ch+arg_0], eax
0x72265E: jb      short loc_72266E
0x722660: movzx   edx, word ptr [esi+0Eh]
0x722664: add     edx, edi
0x722666: push    edx
0x722667: mov     ecx, esi
0x722669: call    NiTArray_SetSize
0x72266E: lea     eax, [esp+0Ch+arg_0]
0x722672: push    eax
0x722673: push    edi
0x722674: mov     ecx, esi
0x722676: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x72267B: pop     edi
0x72267C: pop     esi
0x72267D: pop     ebx
0x72267E: retn    4
