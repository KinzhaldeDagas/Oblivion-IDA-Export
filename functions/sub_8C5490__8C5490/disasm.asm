0x8C5490: mov     edx, [esp+arg_0]
0x8C5494: push    esi
0x8C5495: mov     esi, ecx
0x8C5497: movzx   eax, word ptr [esi+8]
0x8C549B: cmp     edx, eax
0x8C549D: jz      loc_8C5576
0x8C54A3: movzx   eax, word ptr [esi+0Ah]
0x8C54A7: movzx   ecx, ax
0x8C54AA: cmp     edx, ecx
0x8C54AC: push    ebx
0x8C54AD: push    edi
0x8C54AE: jnb     short loc_8C54E6
0x8C54B0: cmp     dx, ax
0x8C54B3: movzx   ecx, dx
0x8C54B6: jnb     short loc_8C54E2
0x8C54B8: mov     edi, 0FFFFh
0x8C54BD: lea     ecx, [ecx+0]
0x8C54C0: mov     ebx, [esi+4]
0x8C54C3: movzx   eax, cx
0x8C54C6: cmp     word ptr [ebx+eax*2], 0
0x8C54CB: lea     eax, [ebx+eax*2]
0x8C54CE: jz      short loc_8C54D9
0x8C54D0: mov     word ptr [eax], 0
0x8C54D5: add     [esi+0Ch], di
0x8C54D9: add     ecx, 1
0x8C54DC: cmp     cx, [esi+0Ah]
0x8C54E0: jb      short loc_8C54C0
0x8C54E2: mov     [esi+0Ah], dx
0x8C54E6: test    edx, edx
0x8C54E8: mov     edi, [esi+4]
0x8C54EB: mov     [esi+8], dx
0x8C54EF: jbe     short loc_8C5564
0x8C54F1: movzx   eax, dx
0x8C54F4: xor     ecx, ecx
0x8C54F6: mov     edx, 2
0x8C54FB: mul     edx
0x8C54FD: seto    cl
0x8C5500: neg     ecx
0x8C5502: or      ecx, eax
0x8C5504: push    ecx; Size
0x8C5505: call    FormHeapAlloc
0x8C550A: xor     ecx, ecx
0x8C550C: add     esp, 4
0x8C550F: cmp     [esi+0Ah], cx
0x8C5513: mov     [esi+4], eax
0x8C5516: jbe     short loc_8C5531
0x8C5518: mov     edx, [esi+4]
0x8C551B: movzx   eax, cx
0x8C551E: add     eax, eax
0x8C5520: mov     bx, [eax+edi]
0x8C5524: add     ecx, 1
0x8C5527: mov     [eax+edx], bx
0x8C552B: cmp     cx, [esi+0Ah]
0x8C552F: jb      short loc_8C5518
0x8C5531: movzx   eax, word ptr [esi+0Ah]
0x8C5535: cmp     ax, [esi+8]
0x8C5539: jnb     short loc_8C556B
0x8C553B: jmp     short loc_8C5540
0x8C553D: align 10h
0x8C5540: mov     edx, [esi+4]
0x8C5543: movzx   ecx, ax
0x8C5546: add     eax, 1
0x8C5549: mov     word ptr [edx+ecx*2], 0
0x8C554F: cmp     ax, [esi+8]
0x8C5553: jb      short loc_8C5540
0x8C5555: push    edi
0x8C5556: call    FormHeapFree
0x8C555B: add     esp, 4
0x8C555E: pop     edi
0x8C555F: pop     ebx
0x8C5560: pop     esi
0x8C5561: retn    4
0x8C5564: mov     dword ptr [esi+4], 0
0x8C556B: push    edi
0x8C556C: call    FormHeapFree
0x8C5571: add     esp, 4
0x8C5574: pop     edi
0x8C5575: pop     ebx
0x8C5576: pop     esi
0x8C5577: retn    4
