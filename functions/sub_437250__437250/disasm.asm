0x437250: push    0FFFFFFFFh
0x437252: push    offset SEH_437250
0x437257: mov     eax, large fs:0
0x43725D: push    eax
0x43725E: push    ecx
0x43725F: push    ebx
0x437260: push    esi
0x437261: mov     eax, ___security_cookie
0x437266: xor     eax, esp
0x437268: push    eax
0x437269: lea     eax, [esp+1Ch+var_C]
0x43726D: mov     large fs:0, eax
0x437273: mov     esi, ecx
0x437275: mov     [esp+1Ch+var_10], esi
0x437279: mov     eax, dword ptr [esp+1Ch+a2]
0x43727D: push    eax; a2
0x43727E: call    sub_436500
0x437283: xor     ebx, ebx
0x437285: mov     [esi+18h], ebx
0x437288: mov     [esi+1Ch], ebx
0x43728B: mov     [esi+20h], ebx
0x43728E: mov     [esi+24h], ebx
0x437291: mov     dword ptr [esi], offset ??_7QueuedModel@@6B@; const QueuedModel::`vftable'
0x437297: mov     [esp+1Ch+var_4], ebx
0x43729B: mov     [esi+28h], ebx
0x43729E: mov     ecx, [esp+1Ch+arg_8]
0x4372A2: mov     edx, [esp+1Ch+arg_0]
0x4372A6: mov     [esi+30h], ecx
0x4372A9: push    edx
0x4372AA: mov     ecx, esi
0x4372AC: mov     byte ptr [esp+20h+var_4], 1
0x4372B1: mov     [esi+2Ch], ebx
0x4372B4: mov     [esi+34h], bl
0x4372B7: call    sub_434600
0x4372BC: push    1
0x4372BE: push    ebx
0x4372BF: mov     ecx, esi
0x4372C1: call    sub_434CB0
0x4372C6: cmp     [esp+1Ch+arg_C], bl
0x4372CA: jz      short loc_4372D2
0x4372CC: or      byte ptr [esi+34h], 4
0x4372D0: jmp     short loc_4372D6
0x4372D2: and     byte ptr [esi+34h], 0FBh
0x4372D6: cmp     [esp+1Ch+arg_10], bl
0x4372DA: jz      short loc_4372E2
0x4372DC: or      byte ptr [esi+34h], 1
0x4372E0: jmp     short loc_4372E6
0x4372E2: and     byte ptr [esi+34h], 0FEh
0x4372E6: cmp     [esp+1Ch+arg_14], bl
0x4372EA: mov     eax, esi
0x4372EC: jz      short loc_437306
0x4372EE: or      byte ptr [esi+34h], 2
0x4372F2: mov     ecx, [esp+1Ch+var_C]
0x4372F6: mov     large fs:0, ecx
0x4372FD: pop     ecx
0x4372FE: pop     esi
0x4372FF: pop     ebx
0x437300: add     esp, 10h
0x437303: retn    18h
0x437306: and     byte ptr [esi+34h], 0FDh
0x43730A: mov     ecx, [esp+1Ch+var_C]
0x43730E: mov     large fs:0, ecx
0x437315: pop     ecx
0x437316: pop     esi
0x437317: pop     ebx
0x437318: add     esp, 10h
0x43731B: retn    18h
