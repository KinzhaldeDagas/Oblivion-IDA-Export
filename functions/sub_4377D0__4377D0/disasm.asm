0x4377D0: push    0FFFFFFFFh
0x4377D2: push    offset SEH_4377D0
0x4377D7: mov     eax, large fs:0
0x4377DD: push    eax
0x4377DE: push    ecx
0x4377DF: push    ebx
0x4377E0: push    esi
0x4377E1: mov     eax, ___security_cookie
0x4377E6: xor     eax, esp
0x4377E8: push    eax
0x4377E9: lea     eax, [esp+1Ch+var_C]
0x4377ED: mov     large fs:0, eax
0x4377F3: mov     esi, ecx
0x4377F5: mov     [esp+1Ch+var_10], esi
0x4377F9: mov     eax, dword ptr [esp+1Ch+a2]
0x4377FD: push    eax; a2
0x4377FE: call    sub_436500
0x437803: xor     ebx, ebx
0x437805: mov     [esi+18h], ebx
0x437808: mov     [esi+1Ch], ebx
0x43780B: mov     [esi+20h], ebx
0x43780E: mov     [esi+24h], ebx
0x437811: mov     dword ptr [esi], offset ??_7QueuedKF@@6B@; const QueuedKF::`vftable'
0x437817: mov     [esp+1Ch+var_4], ebx
0x43781B: mov     [esi+28h], ebx
0x43781E: mov     ecx, [esp+1Ch+arg_0]
0x437822: push    ecx
0x437823: mov     ecx, esi
0x437825: mov     byte ptr [esp+20h+var_4], 1
0x43782A: mov     [esi+2Ch], bl
0x43782D: call    sub_434600
0x437832: push    1
0x437834: push    ebx
0x437835: mov     ecx, esi
0x437837: call    sub_434CB0
0x43783C: mov     eax, esi
0x43783E: mov     ecx, [esp+1Ch+var_C]
0x437842: mov     large fs:0, ecx
0x437849: pop     ecx
0x43784A: pop     esi
0x43784B: pop     ebx
0x43784C: add     esp, 10h
0x43784F: retn    8
