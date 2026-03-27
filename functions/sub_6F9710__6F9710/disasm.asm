0x6F9710: push    0FFFFFFFFh
0x6F9712: push    offset SEH_7B2A00
0x6F9717: mov     eax, large fs:0
0x6F971D: push    eax
0x6F971E: push    esi
0x6F971F: push    edi
0x6F9720: mov     eax, ds:0B30AACh
0x6F9725: xor     eax, esp
0x6F9727: push    eax
0x6F9728: lea     eax, [esp+18h+var_C]
0x6F972C: mov     large fs:0, eax
0x6F9732: push    offset stru_B3F400; lpCriticalSection
0x6F9737: call    dword ptr ds:0A2806Ch
0x6F973D: call    dword ptr ds:0A2808Ch
0x6F9743: mov     esi, [esp+18h+arg_0]
0x6F9747: add     dword ptr ds:0B3F47Ch, 1
0x6F974E: test    esi, esi
0x6F9750: mov     ds:0B3F478h, eax
0x6F9755: mov     [esp+18h+arg_0], esi
0x6F9759: jz      short loc_6F9765
0x6F975B: lea     eax, [esi+4]
0x6F975E: push    eax; lpAddend
0x6F975F: call    dword ptr ds:0A28078h
0x6F9765: movzx   edi, word ptr ds:0B252F2h
0x6F976C: movzx   ecx, word ptr ds:0B252F0h
0x6F9773: cmp     edi, ecx
0x6F9775: mov     [esp+18h+var_4], 0
0x6F977D: jb      short loc_6F9793
0x6F977F: movzx   edx, word ptr ds:0B252F6h
0x6F9786: add     edx, edi
0x6F9788: push    edx
0x6F9789: mov     ecx, offset off_B252E8
0x6F978E: call    sub_6C4510
0x6F9793: lea     eax, [esp+18h+arg_0]
0x6F9797: push    eax
0x6F9798: push    edi
0x6F9799: mov     ecx, offset off_B252E8
0x6F979E: call    sub_6F95E0
0x6F97A3: test    esi, esi
0x6F97A5: mov     [esp+18h+var_4], 0FFFFFFFFh
0x6F97AD: jz      short loc_6F97C7
0x6F97AF: lea     ecx, [esi+4]
0x6F97B2: push    ecx; lpAddend
0x6F97B3: call    dword ptr ds:0A2807Ch
0x6F97B9: test    eax, eax
0x6F97BB: jnz     short loc_6F97C7
0x6F97BD: mov     edx, [esi]
0x6F97BF: mov     eax, [edx]
0x6F97C1: push    1
0x6F97C3: mov     ecx, esi
0x6F97C5: call    eax
0x6F97C7: sub     dword ptr ds:0B3F47Ch, 1
0x6F97CE: jnz     short loc_6F97DA
0x6F97D0: mov     dword ptr ds:0B3F478h, 0
0x6F97DA: push    offset stru_B3F400; lpCriticalSection
0x6F97DF: call    dword ptr ds:0A28074h
0x6F97E5: mov     ecx, dword ptr [esp+18h+var_C]
0x6F97E9: mov     large fs:0, ecx
0x6F97F0: pop     ecx
0x6F97F1: pop     edi
0x6F97F2: pop     esi
0x6F97F3: add     esp, 0Ch
0x6F97F6: retn
