0x8C95F0: push    0FFFFFFFFh
0x8C95F2: push    offset SEH_8C5340
0x8C95F7: mov     eax, large fs:0
0x8C95FD: push    eax
0x8C95FE: push    ebx
0x8C95FF: push    esi
0x8C9600: push    edi
0x8C9601: mov     eax, ds:0B30AACh
0x8C9606: xor     eax, esp
0x8C9608: push    eax
0x8C9609: lea     eax, [esp+1Ch+var_C]
0x8C960D: mov     large fs:0, eax
0x8C9613: mov     edi, ecx
0x8C9615: mov     ebx, [esp+1Ch+arg_0]
0x8C9619: test    ebx, ebx
0x8C961B: jz      loc_8C96AF
0x8C9621: mov     ecx, ds:0BA7D98h
0x8C9627: mov     eax, [ecx]
0x8C9629: mov     edx, [eax+10h]
0x8C962C: push    24h ; '$'
0x8C962E: push    60h ; '`'
0x8C9630: call    edx
0x8C9632: mov     word ptr [eax+4], 60h ; '`'
0x8C9638: mov     [esp+1Ch+arg_0], eax
0x8C963C: mov     edx, [ebx+8]
0x8C963F: lea     ecx, [ebx+10h]
0x8C9642: push    ecx
0x8C9643: push    edx
0x8C9644: mov     ecx, eax
0x8C9646: mov     [esp+24h+var_4], 0
0x8C964E: call    sub_9179B0
0x8C9653: mov     esi, eax
0x8C9655: mov     eax, [edi]
0x8C9657: mov     edx, [eax+4Ch]
0x8C965A: push    esi
0x8C965B: mov     ecx, edi
0x8C965D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x8C9665: call    edx
0x8C9667: cmp     word ptr [esi+4], 0
0x8C966C: jz      short loc_8C9686
0x8C966E: add     word ptr [esi+6], 0FFFFh
0x8C9673: movzx   eax, word ptr [esi+6]
0x8C9677: test    ax, ax
0x8C967A: jnz     short loc_8C9686
0x8C967C: mov     eax, [esi]
0x8C967E: mov     edx, [eax]
0x8C9680: push    1
0x8C9682: mov     ecx, esi
0x8C9684: call    edx
0x8C9686: mov     eax, [edi]
0x8C9688: mov     edx, [eax+7Ch]
0x8C968B: push    ebx
0x8C968C: mov     ecx, edi
0x8C968E: call    edx
0x8C9690: mov     eax, [edi+8]
0x8C9693: test    eax, eax
0x8C9695: jz      short loc_8C96A3
0x8C9697: mov     eax, [eax+10h]
0x8C969A: test    eax, eax
0x8C969C: jz      short loc_8C96A3
0x8C969E: mov     eax, [eax+8]
0x8C96A1: jmp     short loc_8C96A5
0x8C96A3: xor     eax, eax
0x8C96A5: test    eax, eax
0x8C96A7: jz      short loc_8C96AF
0x8C96A9: mov     eax, [eax+10h]
0x8C96AC: mov     [edi+10h], eax
0x8C96AF: mov     ecx, [esp+1Ch+var_C]
0x8C96B3: mov     large fs:0, ecx
0x8C96BA: pop     ecx
0x8C96BB: pop     edi
0x8C96BC: pop     esi
0x8C96BD: pop     ebx
0x8C96BE: add     esp, 0Ch
0x8C96C1: retn    4
