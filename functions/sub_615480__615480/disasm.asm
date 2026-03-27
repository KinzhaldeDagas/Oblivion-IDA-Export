0x615480: cmp     dword ptr [ecx+178h], 0
0x615487: jle     locret_615511
0x61548D: push    ebp
0x61548E: lea     ebp, [ecx+15Ch]
0x615494: push    edi
0x615495: mov     edi, ebp
0x615497: test    edi, edi
0x615499: jz      short loc_61550F
0x61549B: push    ebx
0x61549C: mov     ebx, [esp+0Ch+arg_0]
0x6154A0: push    esi
0x6154A1: mov     esi, [edi]
0x6154A3: test    esi, esi
0x6154A5: mov     edi, [edi+4]
0x6154A8: jz      short loc_615509
0x6154AA: mov     eax, [esi]
0x6154AC: mov     edx, [eax+330h]
0x6154B2: mov     ecx, esi
0x6154B4: call    edx
0x6154B6: test    eax, eax
0x6154B8: jz      short loc_615509
0x6154BA: mov     eax, [esi]
0x6154BC: mov     edx, [eax+330h]
0x6154C2: mov     ecx, esi
0x6154C4: call    edx
0x6154C6: mov     eax, [eax+40h]
0x6154C9: test    eax, eax
0x6154CB: jz      short loc_615509
0x6154CD: lea     ecx, [ecx+0]
0x6154D0: mov     ecx, [eax+4]
0x6154D3: test    ecx, ecx
0x6154D5: jnz     short loc_6154DB
0x6154D7: cmp     [eax], ecx
0x6154D9: jz      short loc_615509
0x6154DB: mov     eax, [eax]
0x6154DD: cmp     [eax], ebx
0x6154DF: jz      short loc_6154E9
0x6154E1: mov     eax, ecx
0x6154E3: test    eax, eax
0x6154E5: jnz     short loc_6154D0
0x6154E7: jmp     short loc_615509
0x6154E9: mov     edx, [esi]
0x6154EB: mov     eax, [edx+370h]
0x6154F1: push    ebx
0x6154F2: mov     ecx, esi
0x6154F4: call    eax
0x6154F6: test    al, al
0x6154F8: jz      short loc_615509
0x6154FA: mov     edx, [esi]
0x6154FC: mov     eax, [edx+340h]
0x615502: push    ebx
0x615503: mov     ecx, esi
0x615505: call    eax
0x615507: mov     edi, ebp
0x615509: test    edi, edi
0x61550B: jnz     short loc_6154A1
0x61550D: pop     esi
0x61550E: pop     ebx
0x61550F: pop     edi
0x615510: pop     ebp
0x615511: retn    4
