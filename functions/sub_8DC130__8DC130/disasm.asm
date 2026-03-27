0x8DC130: push    ebx
0x8DC131: mov     ebx, [esp+4+arg_4]
0x8DC135: push    esi
0x8DC136: mov     esi, [esp+8+arg_0]
0x8DC13A: push    edi
0x8DC13B: mov     [ebx+8], esi
0x8DC13E: mov     edi, [esi+98h]
0x8DC144: dec     edi
0x8DC145: js      short loc_8DC166
0x8DC147: jmp     short loc_8DC150
0x8DC149: align 10h
0x8DC150: mov     eax, [esi+94h]
0x8DC156: mov     ecx, [eax+edi*4]
0x8DC159: test    ecx, ecx
0x8DC15B: jz      short loc_8DC163
0x8DC15D: mov     edx, [ecx]
0x8DC15F: push    ebx
0x8DC160: call    dword ptr [edx+0Ch]
0x8DC163: dec     edi
0x8DC164: jns     short loc_8DC150
0x8DC166: mov     edx, [esi+98h]
0x8DC16C: dec     edx
0x8DC16D: js      short loc_8DC1AE
0x8DC16F: nop
0x8DC170: mov     eax, [esi+94h]
0x8DC176: cmp     dword ptr [eax+edx*4], 0
0x8DC17A: jnz     short loc_8DC1AB
0x8DC17C: mov     ebx, [esi+98h]
0x8DC182: dec     ebx
0x8DC183: mov     ecx, ebx
0x8DC185: cmp     edx, ecx
0x8DC187: mov     [esi+98h], ebx
0x8DC18D: mov     eax, edx
0x8DC18F: jge     short loc_8DC1AB
0x8DC191: mov     ecx, [esi+94h]
0x8DC197: mov     edi, [ecx+eax*4+4]
0x8DC19B: lea     ecx, [ecx+eax*4]
0x8DC19E: mov     [ecx], edi
0x8DC1A0: mov     ecx, [esi+98h]
0x8DC1A6: inc     eax
0x8DC1A7: cmp     eax, ecx
0x8DC1A9: jl      short loc_8DC191
0x8DC1AB: dec     edx
0x8DC1AC: jns     short loc_8DC170
0x8DC1AE: pop     edi
0x8DC1AF: pop     esi
0x8DC1B0: pop     ebx
0x8DC1B1: retn
