0x8A71B0: push    ebx
0x8A71B1: push    esi
0x8A71B2: mov     ebx, ecx
0x8A71B4: push    edi
0x8A71B5: mov     edi, 10h
0x8A71BA: lea     esi, [ebx+74h]
0x8A71BD: lea     ecx, [ecx+0]
0x8A71C0: cmp     dword ptr [esi], 0
0x8A71C3: jz      short loc_8A71DC
0x8A71C5: mov     eax, [esi]
0x8A71C7: mov     ecx, [eax]
0x8A71C9: push    1
0x8A71CB: mov     [esi], ecx
0x8A71CD: mov     ecx, [ebx+10h]
0x8A71D0: mov     edx, [ecx]
0x8A71D2: push    edi
0x8A71D3: push    eax
0x8A71D4: call    dword ptr [edx+1Ch]
0x8A71D7: cmp     dword ptr [esi], 0
0x8A71DA: jnz     short loc_8A71C5
0x8A71DC: mov     dword ptr [esi], 0
0x8A71E2: mov     dword ptr [esi+44h], 0
0x8A71E9: dec     edi
0x8A71EA: sub     esi, 4
0x8A71ED: test    edi, edi
0x8A71EF: jge     short loc_8A71C0
0x8A71F1: pop     edi
0x8A71F2: pop     esi
0x8A71F3: pop     ebx
0x8A71F4: retn
