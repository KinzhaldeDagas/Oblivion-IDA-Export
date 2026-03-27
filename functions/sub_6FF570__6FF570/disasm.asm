0x6FF570: push    esi
0x6FF571: push    edi
0x6FF572: mov     edi, [esp+8+arg_0]
0x6FF576: test    edi, edi
0x6FF578: mov     esi, ecx
0x6FF57A: jnz     short loc_6FF583
0x6FF57C: pop     edi
0x6FF57D: xor     al, al
0x6FF57F: pop     esi
0x6FF580: retn    4
0x6FF583: push    ebp
0x6FF584: lea     eax, [edi+4]
0x6FF587: push    eax; lpAddend
0x6FF588: call    dword ptr ds:0A28078h
0x6FF58E: push    offset stru_B3F600; lpCriticalSection
0x6FF593: call    dword ptr ds:0A2806Ch
0x6FF599: call    dword ptr ds:0A2808Ch
0x6FF59F: mov     ebp, 1
0x6FF5A4: add     ds:0B3F67Ch, ebp
0x6FF5AA: mov     ds:0B3F678h, eax
0x6FF5AF: movzx   eax, word ptr [esi+16h]
0x6FF5B3: cmp     ax, bp
0x6FF5B6: jnb     short loc_6FF605
0x6FF5B8: xor     ecx, ecx
0x6FF5BA: mov     eax, ebp
0x6FF5BC: mov     edx, 4
0x6FF5C1: mul     edx
0x6FF5C3: seto    cl
0x6FF5C6: mov     [esi+16h], bp
0x6FF5CA: mov     [esi+14h], bp
0x6FF5CE: neg     ecx
0x6FF5D0: or      ecx, eax
0x6FF5D2: push    ecx; Size
0x6FF5D3: call    FormHeapAlloc
0x6FF5D8: mov     [esi+10h], eax
0x6FF5DB: add     esp, 4
0x6FF5DE: mov     [eax], edi
0x6FF5E0: sub     ds:0B3F67Ch, ebp
0x6FF5E6: jnz     short loc_6FF5F2
0x6FF5E8: mov     dword ptr ds:0B3F678h, 0
0x6FF5F2: push    offset stru_B3F600; lpCriticalSection
0x6FF5F7: call    dword ptr ds:0A28074h
0x6FF5FD: pop     ebp
0x6FF5FE: pop     edi
0x6FF5FF: mov     al, 1
0x6FF601: pop     esi
0x6FF602: retn    4
0x6FF605: cmp     [esi+14h], ax
0x6FF609: push    ebx
0x6FF60A: jnz     short loc_6FF651
0x6FF60C: lea     eax, [eax+eax+1]
0x6FF610: mov     [esi+16h], ax
0x6FF614: movzx   eax, ax
0x6FF617: xor     ecx, ecx
0x6FF619: mov     edx, 4
0x6FF61E: mul     edx
0x6FF620: seto    cl
0x6FF623: neg     ecx
0x6FF625: or      ecx, eax
0x6FF627: push    ecx; Size
0x6FF628: call    FormHeapAlloc
0x6FF62D: mov     ecx, [esi+10h]
0x6FF630: mov     ebx, eax
0x6FF632: movzx   eax, word ptr [esi+14h]
0x6FF636: add     eax, eax
0x6FF638: add     eax, eax
0x6FF63A: push    eax; Size
0x6FF63B: push    ecx; Src
0x6FF63C: push    ebx; Dst
0x6FF63D: call    _memcpy
0x6FF642: mov     edx, [esi+10h]
0x6FF645: push    edx
0x6FF646: call    FormHeapFree
0x6FF64B: add     esp, 14h
0x6FF64E: mov     [esi+10h], ebx
0x6FF651: movzx   eax, word ptr [esi+14h]
0x6FF655: mov     ecx, [esi+10h]
0x6FF658: mov     [ecx+eax*4], edi
0x6FF65B: add     [esi+14h], bp
0x6FF65F: movzx   eax, word ptr [esi+14h]
0x6FF663: movzx   eax, ax
0x6FF666: cmp     ax, [esi+16h]
0x6FF66A: jnb     short loc_6FF685
0x6FF66C: lea     esp, [esp+0]
0x6FF670: mov     ecx, [esi+10h]
0x6FF673: movzx   edx, ax
0x6FF676: add     eax, ebp
0x6FF678: mov     dword ptr [ecx+edx*4], 0
0x6FF67F: cmp     ax, [esi+16h]
0x6FF683: jb      short loc_6FF670
0x6FF685: mov     dx, [esi+14h]
0x6FF689: sub     dx, bp
0x6FF68C: movzx   ebx, dx
0x6FF68F: test    bx, bx
0x6FF692: jbe     short loc_6FF704
0x6FF694: mov     eax, [esi+10h]
0x6FF697: movzx   ebp, bx
0x6FF69A: add     ebp, ebp
0x6FF69C: add     ebp, ebp
0x6FF69E: mov     ecx, [eax+ebp]
0x6FF6A1: call    sub_452A60
0x6FF6A6: mov     ecx, [esi+10h]
0x6FF6A9: mov     ecx, [ecx+ebp-4]
0x6FF6AD: mov     edi, eax
0x6FF6AF: call    sub_452A60
0x6FF6B4: mov     cl, [eax]
0x6FF6B6: cmp     cl, [edi]
0x6FF6B8: jnz     short loc_6FF6D4
0x6FF6BA: test    cl, cl
0x6FF6BC: jz      short loc_6FF6D0
0x6FF6BE: mov     cl, [eax+1]
0x6FF6C1: cmp     cl, [edi+1]
0x6FF6C4: jnz     short loc_6FF6D4
0x6FF6C6: add     eax, 2
0x6FF6C9: add     edi, 2
0x6FF6CC: test    cl, cl
0x6FF6CE: jnz     short loc_6FF6B4
0x6FF6D0: xor     eax, eax
0x6FF6D2: jmp     short loc_6FF6D9
0x6FF6D4: sbb     eax, eax
0x6FF6D6: sbb     eax, 0FFFFFFFFh
0x6FF6D9: test    eax, eax
0x6FF6DB: jz      short loc_6FF72A
0x6FF6DD: jle     short loc_6FF6FF
0x6FF6DF: mov     edx, [esi+10h]
0x6FF6E2: mov     ecx, [edx+ebp-4]
0x6FF6E6: lea     eax, [edx+ebp]
0x6FF6E9: mov     edx, [eax]
0x6FF6EB: mov     [eax-4], edx
0x6FF6EE: mov     eax, [esi+10h]
0x6FF6F1: add     ebx, 0FFFFh
0x6FF6F7: test    bx, bx
0x6FF6FA: mov     [eax+ebp], ecx
0x6FF6FD: ja      short loc_6FF694
0x6FF6FF: mov     ebp, 1
0x6FF704: sub     ds:0B3F67Ch, ebp
0x6FF70A: jnz     short loc_6FF716
0x6FF70C: mov     dword ptr ds:0B3F678h, 0
0x6FF716: push    offset stru_B3F600; lpCriticalSection
0x6FF71B: call    dword ptr ds:0A28074h
0x6FF721: pop     ebx
0x6FF722: pop     ebp
0x6FF723: pop     edi
0x6FF724: mov     al, 1
0x6FF726: pop     esi
0x6FF727: retn    4
0x6FF72A: push    ebx
0x6FF72B: mov     ecx, esi
0x6FF72D: call    sub_6FF480
0x6FF732: sub     dword ptr ds:0B3F67Ch, 1
0x6FF739: jnz     short loc_6FF745
0x6FF73B: mov     dword ptr ds:0B3F678h, 0
0x6FF745: push    offset stru_B3F600; lpCriticalSection
0x6FF74A: call    dword ptr ds:0A28074h
0x6FF750: pop     ebx
0x6FF751: pop     ebp
0x6FF752: pop     edi
0x6FF753: xor     al, al
0x6FF755: pop     esi
0x6FF756: retn    4
