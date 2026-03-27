0x437350: push    0FFFFFFFFh
0x437352: push    offset SEH_437250
0x437357: mov     eax, large fs:0
0x43735D: push    eax
0x43735E: push    ecx
0x43735F: push    ebx
0x437360: push    esi
0x437361: mov     eax, ___security_cookie
0x437366: xor     eax, esp
0x437368: push    eax
0x437369: lea     eax, [esp+1Ch+var_C]
0x43736D: mov     large fs:0, eax
0x437373: mov     esi, ecx
0x437375: mov     [esp+1Ch+var_10], esi
0x437379: mov     eax, dword ptr [esp+1Ch+a2]
0x43737D: push    eax; a2
0x43737E: call    sub_436500
0x437383: xor     ebx, ebx
0x437385: mov     [esi+18h], ebx
0x437388: mov     [esi+1Ch], ebx
0x43738B: mov     [esi+20h], ebx
0x43738E: mov     [esi+24h], ebx
0x437391: mov     dword ptr [esi], offset ??_7QueuedModel@@6B@; const QueuedModel::`vftable'
0x437397: mov     [esp+1Ch+var_4], ebx
0x43739B: mov     [esi+28h], ebx
0x43739E: mov     ecx, [esp+1Ch+arg_0]
0x4373A2: mov     edx, [esp+1Ch+arg_8]
0x4373A6: mov     [esi+30h], edx
0x4373A9: mov     [esi+2Ch], ecx
0x4373AC: mov     [esi+34h], bl
0x4373AF: mov     eax, [ecx]
0x4373B1: mov     edx, [eax+14h]
0x4373B4: mov     byte ptr [esp+1Ch+var_4], 1
0x4373B9: call    edx
0x4373BB: push    eax
0x4373BC: mov     ecx, esi
0x4373BE: call    sub_434600
0x4373C3: push    1
0x4373C5: push    ebx
0x4373C6: mov     ecx, esi
0x4373C8: call    sub_434CB0
0x4373CD: cmp     [esp+1Ch+arg_C], bl
0x4373D1: jz      short loc_4373D9
0x4373D3: or      byte ptr [esi+34h], 4
0x4373D7: jmp     short loc_4373DD
0x4373D9: and     byte ptr [esi+34h], 0FBh
0x4373DD: cmp     [esp+1Ch+arg_10], bl
0x4373E1: jz      short loc_4373E9
0x4373E3: or      byte ptr [esi+34h], 1
0x4373E7: jmp     short loc_4373ED
0x4373E9: and     byte ptr [esi+34h], 0FEh
0x4373ED: cmp     [esp+1Ch+arg_14], bl
0x4373F1: mov     eax, esi
0x4373F3: jz      short loc_43740D
0x4373F5: or      byte ptr [esi+34h], 2
0x4373F9: mov     ecx, [esp+1Ch+var_C]
0x4373FD: mov     large fs:0, ecx
0x437404: pop     ecx
0x437405: pop     esi
0x437406: pop     ebx
0x437407: add     esp, 10h
0x43740A: retn    18h
0x43740D: and     byte ptr [esi+34h], 0FDh
0x437411: mov     ecx, [esp+1Ch+var_C]
0x437415: mov     large fs:0, ecx
0x43741C: pop     ecx
0x43741D: pop     esi
0x43741E: pop     ebx
0x43741F: add     esp, 10h
0x437422: retn    18h
