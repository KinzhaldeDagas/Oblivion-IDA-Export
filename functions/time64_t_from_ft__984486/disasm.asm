0x984486: push    ebp
0x984487: mov     ebp, esp
0x984489: mov     eax, [ebp+lpFileTime]
0x98448C: sub     esp, 18h
0x98448F: cmp     dword ptr [eax], 0
0x984492: jnz     short loc_98449A
0x984494: cmp     dword ptr [eax+4], 0
0x984498: jz      short loc_9844E5
0x98449A: lea     ecx, [ebp+LocalFileTime]
0x98449D: push    ecx; lpLocalFileTime
0x98449E: push    eax; lpFileTime
0x98449F: call    dword ptr ds:0A28168h
0x9844A5: test    eax, eax
0x9844A7: jz      short loc_9844E5
0x9844A9: lea     eax, [ebp+SystemTime]
0x9844AC: push    eax; lpSystemTime
0x9844AD: lea     eax, [ebp+LocalFileTime]
0x9844B0: push    eax; lpFileTime
0x9844B1: call    dword ptr ds:0A28138h
0x9844B7: test    eax, eax
0x9844B9: jz      short loc_9844E5
0x9844BB: movzx   eax, [ebp+SystemTime.wSecond]
0x9844BF: push    0FFFFFFFFh
0x9844C1: push    eax
0x9844C2: movzx   eax, [ebp+SystemTime.wMinute]
0x9844C6: push    eax
0x9844C7: movzx   eax, [ebp+SystemTime.wHour]
0x9844CB: push    eax
0x9844CC: movzx   eax, [ebp+SystemTime.wDay]
0x9844D0: push    eax
0x9844D1: movzx   eax, [ebp+SystemTime.wMonth]
0x9844D5: push    eax
0x9844D6: movzx   eax, [ebp+SystemTime.wYear]
0x9844DA: push    eax
0x9844DB: call    ___loctotime64_t
0x9844E0: add     esp, 1Ch
0x9844E3: leave
0x9844E4: retn
0x9844E5: or      edx, 0FFFFFFFFh
0x9844E8: mov     eax, edx
0x9844EA: leave
0x9844EB: retn
