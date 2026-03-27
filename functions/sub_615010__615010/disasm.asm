0x615010: mov     eax, [esp+arg_0]
0x615014: push    edi
0x615015: mov     edi, ecx
0x615017: cmp     eax, [edi+3Ch]
0x61501A: jz      short loc_615049
0x61501C: push    esi
0x61501D: lea     esi, [edi+15Ch]
0x615023: push    eax
0x615024: mov     ecx, esi
0x615026: call    BSSimpleList_Remove
0x61502B: mov     eax, esi
0x61502D: xor     ecx, ecx
0x61502F: test    eax, eax
0x615031: pop     esi
0x615032: jz      short loc_615043
0x615034: cmp     dword ptr [eax], 0
0x615037: jz      short loc_61503C
0x615039: add     ecx, 1
0x61503C: mov     eax, [eax+4]
0x61503F: test    eax, eax
0x615041: jnz     short loc_615034
0x615043: mov     [edi+178h], ecx
0x615049: pop     edi
0x61504A: retn    4
