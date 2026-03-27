0x4B2410: push    esi
0x4B2411: mov     esi, ecx
0x4B2413: cmp     dword ptr [esi+8], 0
0x4B2417: jz      short TESObjectListHead_Clear___ClearObjectListHead
0x4B2419: push    edi
0x4B241A: lea     ebx, [ebx+0]
0x4B2420: mov     ecx, [esi+8]
0x4B2423: test    ecx, ecx
0x4B2425: mov     edi, [ecx+1Ch]
0x4B2428: jz      short loc_4B2433
0x4B242A: mov     eax, [ecx]
0x4B242C: mov     edx, [eax+10h]
0x4B242F: push    1
0x4B2431: call    edx
0x4B2433: test    edi, edi
0x4B2435: mov     [esi+8], edi
0x4B2438: jnz     short loc_4B2420
0x4B243A: pop     edi
