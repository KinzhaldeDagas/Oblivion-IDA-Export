0x668440: push    ebx
0x668441: push    esi
0x668442: mov     esi, [esp+8+a2]
0x668446: cmp     esi, 7
0x668449: mov     ebx, ecx
0x66844B: ja      short loc_66849E
0x66844D: push    edi
0x66844E: push    esi
0x66844F: call    Actor_GetBaseCalcAVi
0x668454: push    esi
0x668455: mov     ecx, ebx
0x668457: mov     edi, eax
0x668459: call    sub_664970
0x66845E: push    eax
0x66845F: call    sub_5480A0
0x668464: add     edi, eax
0x668466: add     esp, 4
0x668469: cmp     edi, 64h ; 'd'
0x66846C: jle     short loc_668473
0x66846E: mov     edi, 64h ; 'd'
0x668473: push    0; a2
0x668475: mov     ecx, ebx; this
0x668477: call    Actor_GetActorBaseForm
0x66847C: mov     edx, [eax]
0x66847E: push    edi
0x66847F: mov     ecx, eax
0x668481: mov     eax, [edx+134h]
0x668487: push    esi
0x668488: call    eax
0x66848A: push    esi; a2
0x66848B: call    sub_57A6F0
0x668490: add     esp, 4
0x668493: push    1
0x668495: push    esi
0x668496: mov     ecx, ebx
0x668498: call    sub_5E2670
0x66849D: pop     edi
0x66849E: pop     esi
0x66849F: pop     ebx
0x6684A0: retn    4
