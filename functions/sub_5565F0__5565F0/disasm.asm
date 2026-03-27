0x5565F0: mov     edx, [ecx+8]
0x5565F3: sub     esp, 24h
0x5565F6: push    edi
0x5565F7: xor     edi, edi
0x5565F9: test    edx, edx
0x5565FB: jz      short loc_55663D
0x5565FD: movzx   eax, word ptr [edx+4]
0x556601: cmp     ax, 0FFFFh
0x556605: jnz     short loc_55661E
0x556607: mov     eax, [edx]
0x556609: push    esi
0x55660A: lea     esi, [eax+1]
0x55660D: lea     ecx, [ecx+0]
0x556610: mov     cl, [eax]
0x556612: add     eax, 1
0x556615: test    cl, cl
0x556617: jnz     short loc_556610
0x556619: sub     eax, esi
0x55661B: pop     esi
0x55661C: jmp     short loc_556621
0x55661E: movzx   eax, ax
0x556621: test    eax, eax
0x556623: jz      short loc_55663D
0x556625: mov     edx, [edx]
0x556627: lea     eax, [esp+28h+FileInformation]
0x55662B: push    eax; lpFileInformation
0x55662C: push    0; fInfoLevelId
0x55662E: push    edx; lpFileName
0x55662F: call    dword ptr ds:0A2817Ch
0x556635: test    eax, eax
0x556637: mov     eax, [esp+28h+var_4]
0x55663B: jnz     short loc_55663F
0x55663D: mov     eax, edi
0x55663F: pop     edi
0x556640: add     esp, 24h
0x556643: retn
