0x74C5D0: push    ebx
0x74C5D1: mov     ebx, [esp+4+arg_0]
0x74C5D5: mov     edx, [ebx]
0x74C5D7: test    edx, edx
0x74C5D9: setz    al
0x74C5DC: test    al, al
0x74C5DE: push    esi
0x74C5DF: mov     esi, ecx
0x74C5E1: jz      short loc_74C5EB
0x74C5E3: pop     esi
0x74C5E4: or      eax, 0FFFFFFFFh
0x74C5E7: pop     ebx
0x74C5E8: retn    4
0x74C5EB: push    ebp
0x74C5EC: push    edi
0x74C5ED: movzx   edi, word ptr [esi+0Ah]
0x74C5F1: xor     eax, eax
0x74C5F3: test    di, di
0x74C5F6: jbe     short loc_74C618
0x74C5F8: mov     ebp, [esi+4]
0x74C5FB: jmp     short loc_74C600
0x74C5FD: align 10h
0x74C600: movzx   ecx, ax
0x74C603: cmp     dword ptr [ebp+ecx*4+0], 0
0x74C608: setz    cl
0x74C60B: test    cl, cl
0x74C60D: jnz     short loc_74C643
0x74C60F: add     eax, 1
0x74C612: cmp     ax, [esi+0Ah]
0x74C616: jb      short loc_74C600
0x74C618: movzx   ecx, word ptr [esi+8]
0x74C61C: movzx   edi, di
0x74C61F: cmp     edi, ecx
0x74C621: jb      short loc_74C631
0x74C623: movzx   edx, word ptr [esi+0Eh]
0x74C627: add     edx, edi
0x74C629: push    edx
0x74C62A: mov     ecx, esi
0x74C62C: call    sub_74A8C0
0x74C631: push    ebx
0x74C632: push    edi
0x74C633: mov     ecx, esi
0x74C635: call    sub_74AB20
0x74C63A: mov     eax, edi
0x74C63C: pop     edi
0x74C63D: pop     ebp
0x74C63E: pop     esi
0x74C63F: pop     ebx
0x74C640: retn    4
0x74C643: movzx   ebx, ax
0x74C646: mov     edi, [ebp+ebx*4+0]
0x74C64A: cmp     edi, edx
0x74C64C: jz      short loc_74C686
0x74C64E: test    edi, edi
0x74C650: jz      short loc_74C66E
0x74C652: lea     edx, [edi+4]
0x74C655: push    edx; lpAddend
0x74C656: call    dword ptr ds:0A2807Ch
0x74C65C: test    eax, eax
0x74C65E: jnz     short loc_74C66E
0x74C660: test    edi, edi
0x74C662: jz      short loc_74C66E
0x74C664: mov     eax, [edi]
0x74C666: mov     edx, [eax]
0x74C668: push    1
0x74C66A: mov     ecx, edi
0x74C66C: call    edx
0x74C66E: mov     eax, [esp+10h+arg_0]
0x74C672: mov     eax, [eax]
0x74C674: test    eax, eax
0x74C676: mov     [ebp+ebx*4+0], eax
0x74C67A: jz      short loc_74C686
0x74C67C: add     eax, 4
0x74C67F: push    eax; lpAddend
0x74C680: call    dword ptr ds:0A28078h
0x74C686: add     word ptr [esi+0Ch], 1
0x74C68B: pop     edi
0x74C68C: pop     ebp
0x74C68D: pop     esi
0x74C68E: mov     eax, ebx
0x74C690: pop     ebx
0x74C691: retn    4
