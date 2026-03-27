0x729C50: push    ebx
0x729C51: mov     ebx, ecx
0x729C53: push    ebp
0x729C54: push    esi
0x729C55: movzx   esi, word ptr [ebx+8]
0x729C59: movzx   ebp, si
0x729C5C: xor     ecx, ecx
0x729C5E: mov     eax, ebp
0x729C60: mov     edx, 2
0x729C65: mul     edx
0x729C67: seto    cl
0x729C6A: push    edi
0x729C6B: neg     ecx
0x729C6D: or      ecx, eax
0x729C6F: push    ecx; Size
0x729C70: call    FormHeapAlloc
0x729C75: mov     edi, [esp+14h+arg_0]
0x729C79: mov     [edi], eax
0x729C7B: xor     ecx, ecx
0x729C7D: mov     eax, ebp
0x729C7F: mov     edx, 2
0x729C84: mul     edx
0x729C86: seto    cl
0x729C89: neg     ecx
0x729C8B: or      ecx, eax
0x729C8D: push    ecx; Size
0x729C8E: call    FormHeapAlloc
0x729C93: mov     ecx, [esp+18h+arg_4]
0x729C97: mov     [ecx], eax
0x729C99: add     esp, 8
0x729C9C: xor     eax, eax
0x729C9E: test    si, si
0x729CA1: jbe     short loc_729CB6
0x729CA3: xor     ecx, ecx
0x729CA5: mov     edx, [edi]
0x729CA7: mov     [ecx+edx], ax
0x729CAB: add     eax, 1
0x729CAE: add     ecx, 2
0x729CB1: cmp     ax, si
0x729CB4: jb      short loc_729CA5
0x729CB6: mov     eax, [esp+10h+arg_8]
0x729CBA: mov     ecx, [edi]
0x729CBC: add     ebp, 0FFFFFFFFh
0x729CBF: push    ebp
0x729CC0: push    0
0x729CC2: push    eax
0x729CC3: push    ecx
0x729CC4: mov     ecx, ebx
0x729CC6: call    sub_729370
0x729CCB: xor     eax, eax
0x729CCD: test    si, si
0x729CD0: jbe     short loc_729CEF
0x729CD2: xor     ecx, ecx
0x729CD4: mov     edx, [edi]
0x729CD6: movzx   edx, word ptr [edx+ecx]
0x729CDA: mov     ebx, [esp+10h+arg_4]
0x729CDE: mov     ebx, [ebx]
0x729CE0: mov     [ebx+edx*2], ax
0x729CE4: add     eax, 1
0x729CE7: add     ecx, 2
0x729CEA: cmp     ax, si
0x729CED: jb      short loc_729CD4
0x729CEF: pop     edi
0x729CF0: pop     esi
0x729CF1: pop     ebp
0x729CF2: pop     ebx
0x729CF3: retn    0Ch
