0x611C80: push    esi
0x611C81: push    0; int
0x611C83: mov     esi, ecx
0x611C85: mov     ecx, [esi+58h]
0x611C88: mov     eax, [ecx]
0x611C8A: mov     edx, [eax+184h]
0x611C90: push    offset ??_R0?AVTrespassPackage@@@8; struct TypeDescriptor *
0x611C95: push    offset ??_R0?AVTESPackage@@@8; struct _s_RTTICompleteObjectLocator *
0x611C9A: push    0; int
0x611C9C: call    edx
0x611C9E: push    eax; void *
0x611C9F: call    OblivionDynamicCast
0x611CA4: add     esp, 14h
0x611CA7: test    eax, eax
0x611CA9: jnz     short loc_611CCD
0x611CAB: mov     ecx, esi
0x611CAD: call    sub_5E03B0
0x611CB2: test    al, al
0x611CB4: jz      short loc_611CC9
0x611CB6: mov     ecx, [esi+58h]
0x611CB9: mov     eax, [ecx]
0x611CBB: mov     edx, [eax+184h]
0x611CC1: call    edx
0x611CC3: cmp     byte ptr [eax+20h], 1
0x611CC7: jz      short loc_611CCD
0x611CC9: xor     al, al
0x611CCB: pop     esi
0x611CCC: retn
0x611CCD: mov     al, 1
0x611CCF: pop     esi
0x611CD0: retn
