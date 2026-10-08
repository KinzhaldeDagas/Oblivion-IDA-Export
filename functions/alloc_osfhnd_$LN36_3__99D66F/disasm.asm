0x99D66F: cmp     dword ptr [ebp-24h], 0
0x99D673: jnz     short loc_99D68C
0x99D675: lea     ebx, [esi+0Ch]
0x99D678: push    ebx; lpCriticalSection
0x99D679: call    ds:EnterCriticalSection
0x99D67F: test    byte ptr [esi+4], 1
0x99D683: jz      short loc_99D6A0
0x99D685: push    ebx; lpCriticalSection
0x99D686: call    ds:LeaveCriticalSection
0x99D68C: add     esi, 28h ; '('
0x99D68F: jmp     short loc_99D613
0x99D6A0: cmp     dword ptr [ebp-24h], 0
0x99D6A4: jnz     short loc_99D68C
0x99D6A6: mov     byte ptr [esi+4], 1
0x99D6AA: or      dword ptr [esi], 0FFFFFFFFh
0x99D6AD: mov     eax, esi
0x99D6AF: sub     eax, dword ptr unk_BAAAC0[edi*4]
0x99D6B6: cdq
0x99D6B7: push    28h ; '('
0x99D6B9: pop     ecx
0x99D6BA: idiv    ecx
0x99D6BC: mov     ecx, edi
0x99D6BE: shl     ecx, 5
0x99D6C1: add     eax, ecx
0x99D6C3: mov     [ebp-1Ch], eax
