0x4973D0: push    esi
0x4973D1: mov     esi, ecx
0x4973D3: mov     ecx, ds:0B33B00h
0x4973D9: push    1; Size
0x4973DB: push    esi; Dst
0x4973DC: call    SaveLoad_LoadData
0x4973E1: movzx   eax, byte ptr [esi]
0x4973E4: xor     ecx, ecx
0x4973E6: mov     edx, 1Ch
0x4973EB: mul     edx
0x4973ED: seto    cl
0x4973F0: neg     ecx
0x4973F2: or      ecx, eax
0x4973F4: push    ecx; Size
0x4973F5: call    FormHeapAlloc
0x4973FA: movzx   ecx, byte ptr [esi]
0x4973FD: lea     edx, ds:0[ecx*8]
0x497404: sub     edx, ecx
0x497406: add     edx, edx
0x497408: add     esp, 4
0x49740B: add     edx, edx
0x49740D: push    edx; Size
0x49740E: mov     [esi+4], eax
0x497411: mov     ecx, ds:0B33B00h
0x497417: push    eax; Dst
0x497418: call    SaveLoad_LoadData
0x49741D: pop     esi
0x49741E: retn
