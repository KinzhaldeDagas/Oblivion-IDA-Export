0x9A23F0: cmp     [esp+arg_C], 0
0x9A23F5: mov     eax, [esp+arg_4]
0x9A23F9: push    esi
0x9A23FA: push    edi
0x9A23FB: mov     edi, [esp+8+Size]
0x9A23FF: mov     esi, ecx
0x9A2401: mov     [esi+28h], edi
0x9A2404: mov     [esi+2Ch], eax
0x9A2407: jz      short loc_9A2433
0x9A2409: mov     ecx, [esi+30h]
0x9A240C: push    ecx
0x9A240D: mov     byte ptr [esi+34h], 1
0x9A2411: call    FormHeapFree
0x9A2416: push    edi; Size
0x9A2417: call    FormHeapAlloc
0x9A241C: mov     edx, [esp+10h+Src]
0x9A2420: push    edi; Size
0x9A2421: push    edx; Src
0x9A2422: push    eax; Dst
0x9A2423: mov     [esi+30h], eax
0x9A2426: call    _memcpy
0x9A242B: add     esp, 14h
0x9A242E: pop     edi
0x9A242F: pop     esi
0x9A2430: retn    10h
0x9A2433: mov     eax, [esp+8+Src]
0x9A2437: pop     edi
0x9A2438: mov     byte ptr [esi+34h], 0
0x9A243C: mov     [esi+30h], eax
0x9A243F: pop     esi
0x9A2440: retn    10h
