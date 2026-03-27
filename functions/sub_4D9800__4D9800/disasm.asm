0x4D9800: push    0FFFFFFFFh
0x4D9802: push    offset SEH_4D9800
0x4D9807: mov     eax, large fs:0
0x4D980D: push    eax
0x4D980E: push    esi
0x4D980F: mov     eax, ds:0B30AACh
0x4D9814: xor     eax, esp
0x4D9816: push    eax
0x4D9817: lea     eax, [esp+14h+var_C]
0x4D981B: mov     large fs:0, eax
0x4D9821: mov     esi, [esp+14h+arg_0]
0x4D9825: test    esi, esi
0x4D9827: mov     [esp+14h+arg_0], esi
0x4D982B: jz      short loc_4D9837
0x4D982D: lea     eax, [esi+4]
0x4D9830: push    eax; lpAddend
0x4D9831: call    dword ptr ds:0A28078h
0x4D9837: lea     ecx, [esp+14h+arg_0]
0x4D983B: push    ecx
0x4D983C: mov     ecx, offset off_B082F0
0x4D9841: mov     [esp+18h+var_4], 0
0x4D9849: call    sub_4B24F0
0x4D984E: test    esi, esi
0x4D9850: mov     [esp+14h+var_4], 0FFFFFFFFh
0x4D9858: jz      short loc_4D9872
0x4D985A: lea     edx, [esi+4]
0x4D985D: push    edx; lpAddend
0x4D985E: call    dword ptr ds:0A2807Ch
0x4D9864: test    eax, eax
0x4D9866: jnz     short loc_4D9872
0x4D9868: mov     eax, [esi]
0x4D986A: mov     edx, [eax]
0x4D986C: push    1
0x4D986E: mov     ecx, esi
0x4D9870: call    edx
0x4D9872: mov     ecx, dword ptr [esp+14h+var_C]
0x4D9876: mov     large fs:0, ecx
0x4D987D: pop     ecx
0x4D987E: pop     esi
0x4D987F: add     esp, 0Ch
0x4D9882: retn
