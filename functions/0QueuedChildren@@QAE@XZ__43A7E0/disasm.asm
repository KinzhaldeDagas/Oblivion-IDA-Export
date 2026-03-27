0x43A7E0: push    0FFFFFFFFh
0x43A7E2: push    offset ??0QueuedChildren@@QAE@XZ_SEH
0x43A7E7: mov     eax, large fs:0
0x43A7ED: push    eax
0x43A7EE: push    ecx
0x43A7EF: push    ebx
0x43A7F0: push    esi
0x43A7F1: push    edi
0x43A7F2: mov     eax, ___security_cookie
0x43A7F7: xor     eax, esp
0x43A7F9: push    eax
0x43A7FA: lea     eax, [esp+20h+var_C]
0x43A7FE: mov     large fs:0, eax
0x43A804: mov     edi, ecx
0x43A806: cmp     dword ptr [edi+1Ch], 0
0x43A80A: jnz     short loc_43A847
0x43A80C: push    14h; Size
0x43A80E: call    FormHeapAlloc
0x43A813: mov     esi, eax
0x43A815: add     esp, 4
0x43A818: mov     [esp+20h+var_10], esi
0x43A81C: test    esi, esi
0x43A81E: mov     [esp+20h+var_4], 0
0x43A826: jz      short loc_43A842
0x43A828: push    0Ah
0x43A82A: push    5
0x43A82C: mov     ecx, esi
0x43A82E: call    sub_435B50
0x43A833: mov     dword ptr [esi], offset ??_7QueuedChildren@@6B@; const QueuedChildren::`vftable'
0x43A839: mov     dword ptr [esi+10h], 0
0x43A840: jmp     short loc_43A844
0x43A842: xor     esi, esi
0x43A844: mov     [edi+1Ch], esi
0x43A847: mov     ebx, [esp+20h+arg_0]
0x43A84B: test    ebx, ebx
0x43A84D: mov     [esp+20h+var_10], ebx
0x43A851: jz      short loc_43A85D
0x43A853: lea     eax, [ebx+8]
0x43A856: push    eax; lpAddend
0x43A857: call    ds:InterlockedIncrement
0x43A85D: mov     esi, [edi+1Ch]
0x43A860: movzx   edi, word ptr [esi+0Ah]
0x43A864: movzx   ecx, word ptr [esi+8]
0x43A868: cmp     edi, ecx
0x43A86A: mov     [esp+20h+var_4], 1
0x43A872: jb      short loc_43A882
0x43A874: movzx   edx, word ptr [esi+0Eh]
0x43A878: add     edx, edi
0x43A87A: push    edx
0x43A87B: mov     ecx, esi
0x43A87D: call    sub_4360A0
0x43A882: lea     eax, [esp+20h+var_10]
0x43A886: push    eax
0x43A887: push    edi
0x43A888: mov     ecx, esi
0x43A88A: call    sub_4362F0
0x43A88F: test    ebx, ebx
0x43A891: mov     [esp+20h+var_4], 0FFFFFFFFh
0x43A899: jz      short loc_43A8B3
0x43A89B: lea     ecx, [ebx+8]
0x43A89E: push    ecx; lpAddend
0x43A89F: call    ds:InterlockedDecrement
0x43A8A5: test    eax, eax
0x43A8A7: jnz     short loc_43A8B3
0x43A8A9: mov     edx, [ebx]
0x43A8AB: mov     eax, [edx]
0x43A8AD: push    1
0x43A8AF: mov     ecx, ebx
0x43A8B1: call    eax
0x43A8B3: mov     ecx, dword ptr [esp+20h+var_C]
0x43A8B7: mov     large fs:0, ecx
0x43A8BE: pop     ecx
0x43A8BF: pop     edi
0x43A8C0: pop     esi
0x43A8C1: pop     ebx
0x43A8C2: add     esp, 10h
0x43A8C5: retn    4
