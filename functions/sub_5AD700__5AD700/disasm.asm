0x5AD700: push    esi
0x5AD701: mov     esi, ecx
0x5AD703: cmp     dword ptr [esi+50h], 0
0x5AD707: push    edi
0x5AD708: jz      short loc_5AD726
0x5AD70A: lea     ebx, [ebx+0]
0x5AD710: mov     eax, [esi+50h]
0x5AD713: mov     edi, [eax+4]
0x5AD716: push    eax
0x5AD717: call    FormHeapFree
0x5AD71C: add     esp, 4
0x5AD71F: test    edi, edi
0x5AD721: mov     [esi+50h], edi
0x5AD724: jnz     short loc_5AD710
0x5AD726: mov     edi, [esp+8+arg_0]
0x5AD72A: push    edi
0x5AD72B: mov     ecx, esi
0x5AD72D: mov     dword ptr [esi+4Ch], 0
0x5AD734: call    sub_5AD440
0x5AD739: mov     [esi+44h], edi
0x5AD73C: pop     edi
0x5AD73D: pop     esi
0x5AD73E: retn    4
