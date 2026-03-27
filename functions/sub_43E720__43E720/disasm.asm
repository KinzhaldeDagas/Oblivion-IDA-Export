0x43E720: push    ebx
0x43E721: push    esi
0x43E722: push    edi
0x43E723: mov     edi, [esp+0Ch+arg_0]
0x43E727: mov     al, [edi]
0x43E729: xor     esi, esi
0x43E72B: test    al, al
0x43E72D: mov     ebx, ecx
0x43E72F: jz      short loc_43E751
0x43E731: movsx   eax, al
0x43E734: push    eax; C
0x43E735: call    _tolower
0x43E73A: mov     ecx, esi
0x43E73C: shl     ecx, 5
0x43E73F: add     ecx, esi
0x43E741: add     eax, ecx
0x43E743: add     edi, 1
0x43E746: mov     esi, eax
0x43E748: mov     al, [edi]
0x43E74A: add     esp, 4
0x43E74D: test    al, al
0x43E74F: jnz     short loc_43E731
0x43E751: mov     eax, esi
0x43E753: xor     edx, edx
0x43E755: div     dword ptr [ebx+8]
0x43E758: pop     edi
0x43E759: pop     esi
0x43E75A: pop     ebx
0x43E75B: mov     eax, edx
0x43E75D: retn    4
