0x88A9F0: mov     ecx, [esp+arg_0]
0x88A9F4: push    esi
0x88A9F5: call    sub_452A60
0x88A9FA: mov     esi, eax
0x88A9FC: test    esi, esi
0x88A9FE: jz      short loc_88AA53
0x88AA00: push    edi
0x88AA01: mov     edi, [esi+0A8h]
0x88AA07: test    edi, edi
0x88AA09: jz      short loc_88AA31
0x88AA0B: lea     eax, [edi+4]
0x88AA0E: push    eax; lpAddend
0x88AA0F: call    dword ptr ds:0A2807Ch
0x88AA15: test    eax, eax
0x88AA17: jnz     short loc_88AA27
0x88AA19: test    edi, edi
0x88AA1B: jz      short loc_88AA27
0x88AA1D: mov     edx, [edi]
0x88AA1F: mov     eax, [edx]
0x88AA21: push    1
0x88AA23: mov     ecx, edi
0x88AA25: call    eax
0x88AA27: mov     dword ptr [esi+0A8h], 0
0x88AA31: mov     ecx, [esi+0A8h]
0x88AA37: test    ecx, ecx
0x88AA39: pop     edi
0x88AA3A: jz      short loc_88AA53
0x88AA3C: call    sub_452A60
0x88AA41: cmp     eax, esi
0x88AA43: jz      short loc_88AA53
0x88AA45: mov     ecx, [esi+0A8h]
0x88AA4B: mov     edx, [ecx]
0x88AA4D: mov     eax, [edx+4Ch]
0x88AA50: push    esi
0x88AA51: call    eax
0x88AA53: pop     esi
0x88AA54: retn
