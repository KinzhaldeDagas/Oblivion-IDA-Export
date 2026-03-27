0x4374E0: push    0FFFFFFFFh
0x4374E2: push    offset SEH_437250
0x4374E7: mov     eax, large fs:0
0x4374ED: push    eax
0x4374EE: push    ecx
0x4374EF: push    ebx
0x4374F0: push    esi
0x4374F1: mov     eax, ___security_cookie
0x4374F6: xor     eax, esp
0x4374F8: push    eax
0x4374F9: lea     eax, [esp+1Ch+var_C]
0x4374FD: mov     large fs:0, eax
0x437503: mov     esi, ecx
0x437505: mov     [esp+1Ch+var_10], esi
0x437509: mov     eax, dword ptr [esp+1Ch+a2]
0x43750D: push    eax; a2
0x43750E: call    sub_436500
0x437513: xor     ebx, ebx
0x437515: mov     [esi+18h], ebx
0x437518: mov     [esi+1Ch], ebx
0x43751B: mov     [esi+20h], ebx
0x43751E: mov     [esi+24h], ebx
0x437521: mov     dword ptr [esi], offset ??_7QueuedModel@@6B@; const QueuedModel::`vftable'
0x437527: mov     [esp+1Ch+var_4], ebx
0x43752B: mov     [esi+28h], ebx
0x43752E: mov     ecx, [esp+1Ch+arg_0]
0x437532: push    ecx
0x437533: mov     ecx, esi
0x437535: mov     byte ptr [esp+20h+var_4], 1
0x43753A: mov     [esi+2Ch], ebx
0x43753D: mov     [esi+30h], ebx
0x437540: mov     [esi+34h], bl
0x437543: call    sub_434600
0x437548: push    1
0x43754A: push    ebx
0x43754B: mov     ecx, esi
0x43754D: call    sub_434CB0
0x437552: mov     dl, [esi+34h]
0x437555: mov     eax, [esp+1Ch+arg_8]
0x437559: and     dl, 0F9h
0x43755C: or      dl, 1
0x43755F: mov     [esi+38h], eax
0x437562: mov     [esi+34h], dl
0x437565: mov     dword ptr [esi], offset ??_7QueuedDistantLOD@@6B@; const QueuedDistantLOD::`vftable'
0x43756B: mov     [esi+3Ch], ebx
0x43756E: mov     eax, esi
0x437570: mov     ecx, [esp+1Ch+var_C]
0x437574: mov     large fs:0, ecx
0x43757B: pop     ecx
0x43757C: pop     esi
0x43757D: pop     ebx
0x43757E: add     esp, 10h
0x437581: retn    0Ch
