0x496FD0: sub     esp, 8
0x496FD3: push    ebx
0x496FD4: push    esi
0x496FD5: mov     esi, ecx
0x496FD7: push    edi
0x496FD8: lea     edi, [esi+80h]
0x496FDE: push    offset unk_A2F830; lpCriticalSection
0x496FE3: mov     ecx, edi
0x496FE5: xor     ebx, ebx
0x496FE7: call    NiEnterCriticalSection
0x496FEC: mov     ecx, [esp+14h+arg_0]
0x496FF0: lea     eax, [esp+14h+var_8]
0x496FF4: push    eax
0x496FF5: push    ecx
0x496FF6: mov     ecx, esi
0x496FF8: mov     [esp+1Ch+var_4], ebx
0x496FFC: call    sub_496DF0
0x497001: test    al, al
0x497003: jz      short loc_497009
0x497005: mov     ebx, [esp+14h+var_4]
0x497009: mov     ecx, edi; lpCriticalSection
0x49700B: call    NiLeaveCriticalSection_0
0x497010: pop     edi
0x497011: pop     esi
0x497012: mov     eax, ebx
0x497014: pop     ebx
0x497015: add     esp, 8
0x497018: retn    4
