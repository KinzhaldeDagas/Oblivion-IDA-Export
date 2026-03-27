0x447300: mov     ecx, [ecx]
0x447302: push    esi
0x447303: call    TESHealthForm_GetHealth
0x447308: mov     esi, eax
0x44730A: test    esi, esi
0x44730C: jz      short loc_44734C
0x44730E: mov     edi, edi
0x447310: push    0; int
0x447312: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x447317: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x44731C: push    0; int
0x44731E: push    esi; void *
0x44731F: call    OblivionDynamicCast
0x447324: add     esp, 14h
0x447327: test    eax, eax
0x447329: jz      short loc_44733F
0x44732B: mov     ecx, [eax+28h]
0x44732E: shr     ecx, 7
0x447331: test    cl, 1
0x447334: jz      short loc_44733F
0x447336: push    0
0x447338: mov     ecx, eax
0x44733A: call    sub_5222D0
0x44733F: mov     ecx, esi
0x447341: call    TESObject_GetNextObject
0x447346: mov     esi, eax
0x447348: test    esi, esi
0x44734A: jnz     short loc_447310
0x44734C: pop     esi
0x44734D: retn
