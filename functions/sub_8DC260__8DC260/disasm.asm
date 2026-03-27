0x8DC260: push    ebx
0x8DC261: push    esi
0x8DC262: mov     esi, [esp+8+arg_0]
0x8DC266: push    edi
0x8DC267: mov     edi, [esi+0C8h]
0x8DC26D: dec     edi
0x8DC26E: js      short loc_8DC28A
0x8DC270: mov     ebx, [esp+0Ch+arg_4]
0x8DC274: mov     eax, [esi+0C4h]
0x8DC27A: mov     ecx, [eax+edi*4]
0x8DC27D: test    ecx, ecx
0x8DC27F: jz      short loc_8DC287
0x8DC281: mov     edx, [ecx]
0x8DC283: push    ebx
0x8DC284: call    dword ptr [edx+4]
0x8DC287: dec     edi
0x8DC288: jns     short loc_8DC274
0x8DC28A: mov     edx, [esi+0C8h]
0x8DC290: dec     edx
0x8DC291: js      short loc_8DC2DD
0x8DC293: mov     eax, [esi+0C4h]
0x8DC299: cmp     dword ptr [eax+edx*4], 0
0x8DC29D: jnz     short loc_8DC2DA
0x8DC29F: mov     ebx, [esi+0C8h]
0x8DC2A5: dec     ebx
0x8DC2A6: mov     ecx, ebx
0x8DC2A8: cmp     edx, ecx
0x8DC2AA: mov     [esi+0C8h], ebx
0x8DC2B0: mov     eax, edx
0x8DC2B2: jge     short loc_8DC2DA
0x8DC2B4: jmp     short loc_8DC2C0
0x8DC2B6: align 10h
0x8DC2C0: mov     ecx, [esi+0C4h]
0x8DC2C6: mov     edi, [ecx+eax*4+4]
0x8DC2CA: lea     ecx, [ecx+eax*4]
0x8DC2CD: mov     [ecx], edi
0x8DC2CF: mov     ecx, [esi+0C8h]
0x8DC2D5: inc     eax
0x8DC2D6: cmp     eax, ecx
0x8DC2D8: jl      short loc_8DC2C0
0x8DC2DA: dec     edx
0x8DC2DB: jns     short loc_8DC293
0x8DC2DD: pop     edi
0x8DC2DE: pop     esi
0x8DC2DF: pop     ebx
0x8DC2E0: retn
