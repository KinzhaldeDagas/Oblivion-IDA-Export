0x959410: push    ebx
0x959411: mov     ebx, [esp+4+arg_C]
0x959415: push    ebp
0x959416: mov     ebp, [esp+8+arg_8]
0x95941A: push    esi
0x95941B: mov     esi, ecx
0x95941D: push    edi
0x95941E: mov     edi, [esp+10h+arg_0]
0x959422: mov     dword ptr [ebx], 0
0x959428: lea     eax, [esi+4]
0x95942B: push    eax
0x95942C: mov     dword ptr [ebp+0], 0
0x959433: mov     dword ptr [eax], 7F7FFFFFh
0x959439: mov     eax, [esp+14h+arg_4]
0x95943D: push    esi
0x95943E: push    eax
0x95943F: mov     ecx, edi
0x959441: mov     dword ptr [esi], 33D6BF95h
0x959447: call    sub_958A30
0x95944C: cmp     eax, 1
0x95944F: mov     [edi+44h], eax
0x959452: jnz     short loc_95946A
0x959454: mov     ecx, [esp+10h+arg_4]
0x959458: push    ebx
0x959459: push    ebp
0x95945A: push    ecx
0x95945B: push    edi
0x95945C: mov     ecx, esi
0x95945E: call    sub_958AD0
0x959463: pop     edi
0x959464: pop     esi
0x959465: pop     ebp
0x959466: pop     ebx
0x959467: retn    10h
0x95946A: pop     edi
0x95946B: pop     esi
0x95946C: pop     ebp
0x95946D: mov     eax, 2
0x959472: pop     ebx
0x959473: retn    10h
