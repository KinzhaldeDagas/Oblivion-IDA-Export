0x8B14B0: push    ebx
0x8B14B1: mov     ebx, [esp+4+arg_0]
0x8B14B5: push    ebp
0x8B14B6: push    esi
0x8B14B7: push    edi
0x8B14B8: mov     esi, ecx
0x8B14BA: mov     ecx, ds:0BA7D98h
0x8B14C0: mov     edi, [esi+8]
0x8B14C3: mov     eax, [ecx]
0x8B14C5: mov     ebp, [esi]
0x8B14C7: mov     edx, ebx
0x8B14C9: push    14h
0x8B14CB: shl     edx, 4
0x8B14CE: push    edx
0x8B14CF: inc     edi
0x8B14D0: call    dword ptr [eax+10h]
0x8B14D3: lea     ecx, ds:0[ebx*8]
0x8B14DA: push    ecx
0x8B14DB: push    0
0x8B14DD: push    eax
0x8B14DE: mov     [esi], eax
0x8B14E0: call    sub_8B18C0
0x8B14E5: add     esp, 0Ch
0x8B14E8: dec     ebx
0x8B14E9: mov     [esi+8], ebx
0x8B14EC: xor     ebx, ebx
0x8B14EE: test    edi, edi
0x8B14F0: mov     dword ptr [esi+4], 0
0x8B14F7: jle     short loc_8B1537
0x8B14F9: lea     edx, [ebp+edi*8+0]
0x8B14FD: mov     [esp+10h+arg_0], edx
0x8B1501: mov     eax, [ebp+ebx*8+0]
0x8B1505: mov     ecx, [ebp+ebx*8+4]
0x8B1509: mov     edx, eax
0x8B150B: or      edx, ecx
0x8B150D: jz      short loc_8B1527
0x8B150F: mov     edx, [esp+10h+arg_0]
0x8B1513: mov     edx, [edx+4]
0x8B1516: push    edx
0x8B1517: mov     edx, [esp+14h+arg_0]
0x8B151B: mov     edx, [edx]
0x8B151D: push    edx
0x8B151E: push    ecx
0x8B151F: push    eax
0x8B1520: mov     ecx, esi
0x8B1522: call    sub_8B1170
0x8B1527: mov     ecx, [esp+10h+arg_0]
0x8B152B: inc     ebx
0x8B152C: add     ecx, 8
0x8B152F: cmp     ebx, edi
0x8B1531: mov     [esp+10h+arg_0], ecx
0x8B1535: jl      short loc_8B1501
0x8B1537: mov     ecx, ds:0BA7D98h
0x8B153D: mov     eax, [ecx]
0x8B153F: push    14h
0x8B1541: shl     edi, 4
0x8B1544: push    edi
0x8B1545: push    ebp
0x8B1546: call    dword ptr [eax+14h]
0x8B1549: pop     edi
0x8B154A: pop     esi
0x8B154B: pop     ebp
0x8B154C: pop     ebx
0x8B154D: retn    4
