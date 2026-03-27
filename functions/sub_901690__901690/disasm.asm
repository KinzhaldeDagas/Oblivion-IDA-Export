0x901690: mov     eax, [esp+arg_C]
0x901694: sub     esp, 8
0x901697: test    eax, eax
0x901699: push    ebp
0x90169A: mov     ebp, ecx
0x90169C: push    esi
0x90169D: lea     esi, [ebp+0Ch]
0x9016A0: mov     word ptr [ebp+6], 1
0x9016A6: mov     [ebp+8], eax
0x9016A9: mov     dword ptr [ebp+0], offset off_A9BB10
0x9016B0: mov     dword ptr [esi], 0
0x9016B6: mov     dword ptr [esi+4], 0
0x9016BD: mov     dword ptr [esi+8], 80000000h
0x9016C4: jz      short loc_901722
0x9016C6: mov     eax, [esp+10h+arg_0]
0x9016CA: mov     ecx, [eax]
0x9016CC: mov     edx, [ecx]
0x9016CE: push    ebx
0x9016CF: push    edi
0x9016D0: lea     eax, [esp+18h+var_8]
0x9016D4: push    eax
0x9016D5: call    dword ptr [edx+1Ch]
0x9016D8: mov     eax, dword ptr [esp+18h+var_8]
0x9016DC: mov     ebx, [esi+4]
0x9016DF: cmp     eax, ebx
0x9016E1: mov     edi, eax
0x9016E3: jle     short loc_90171D
0x9016E5: mov     ecx, [esi+8]
0x9016E8: and     ecx, 3FFFFFFFh
0x9016EE: cmp     ecx, eax
0x9016F0: jge     short loc_901706
0x9016F2: add     ecx, ecx
0x9016F4: cmp     eax, ecx
0x9016F6: jge     short loc_9016FA
0x9016F8: mov     eax, ecx
0x9016FA: push    2
0x9016FC: push    eax
0x9016FD: push    esi
0x9016FE: call    sub_8A6E40
0x901703: add     esp, 0Ch
0x901706: cmp     ebx, edi
0x901708: mov     eax, ebx
0x90170A: jge     short loc_90171D
0x90170C: lea     esp, [esp+0]
0x901710: mov     ecx, [esi]
0x901712: mov     word ptr [ecx+eax*2], 0FFFFh
0x901718: inc     eax
0x901719: cmp     eax, edi
0x90171B: jl      short loc_901710
0x90171D: mov     [esi+4], edi
0x901720: pop     edi
0x901721: pop     ebx
0x901722: pop     esi
0x901723: mov     eax, ebp
0x901725: pop     ebp
0x901726: add     esp, 8
0x901729: retn    10h
