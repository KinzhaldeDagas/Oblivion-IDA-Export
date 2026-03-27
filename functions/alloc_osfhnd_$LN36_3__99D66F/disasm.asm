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
