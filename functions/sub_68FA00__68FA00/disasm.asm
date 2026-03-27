0x68FA00: push    esi
0x68FA01: mov     esi, ecx
0x68FA03: cmp     dword ptr [esi+0Ch], 0
0x68FA07: push    edi
0x68FA08: jz      short loc_68FA3B
0x68FA0A: mov     ecx, [esi+0Ch]
0x68FA0D: mov     eax, [ecx]
0x68FA0F: mov     edx, [eax+154h]
0x68FA15: call    edx
0x68FA17: push    0; int
0x68FA19: push    offset ??_R0?AVBSFadeNode@@@8; struct TypeDescriptor *
0x68FA1E: push    offset ??_R0?AVNiAVObject@@@8; struct _s_RTTICompleteObjectLocator *
0x68FA23: push    0; int
0x68FA25: push    eax; void *
0x68FA26: call    OblivionDynamicCast
0x68FA2B: add     esp, 14h
0x68FA2E: test    eax, eax
0x68FA30: jz      short loc_68FA3B
0x68FA32: push    2
0x68FA34: mov     ecx, eax
0x68FA36: call    sub_4A01B0
0x68FA3B: mov     ecx, [esi+10h]
0x68FA3E: test    ecx, ecx
0x68FA40: mov     edx, [esi+14h]
0x68FA43: jz      short loc_68FA54
0x68FA45: mov     eax, [ecx+8]
0x68FA48: test    eax, eax
0x68FA4A: jz      short loc_68FA54
0x68FA4C: add     eax, 14h
0x68FA4F: jz      short loc_68FA54
0x68FA51: mov     [eax+1Ch], edx
0x68FA54: mov     eax, [ecx]
0x68FA56: mov     edx, [eax+80h]
0x68FA5C: call    edx
0x68FA5E: mov     edi, [esp+8+arg_0]
0x68FA62: push    esi
0x68FA63: mov     ecx, edi
0x68FA65: call    sub_8A63A0
0x68FA6A: lea     eax, [esi+4]
0x68FA6D: push    eax
0x68FA6E: mov     ecx, edi
0x68FA70: call    sub_8A6300
0x68FA75: lea     ecx, [esi+8]
0x68FA78: push    ecx
0x68FA79: mov     ecx, edi
0x68FA7B: call    sub_8A6350
0x68FA80: mov     edx, [esi]
0x68FA82: mov     eax, [edx+10h]
0x68FA85: push    1
0x68FA87: mov     ecx, esi
0x68FA89: call    eax
0x68FA8B: pop     edi
0x68FA8C: pop     esi
0x68FA8D: retn    4
