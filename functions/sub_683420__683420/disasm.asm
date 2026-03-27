0x683420: push    esi
0x683421: mov     esi, ecx
0x683423: mov     ecx, offset stru_B3C000
0x683428: call    sub_49F470
0x68342D: cmp     dword ptr [esi+40h], 0
0x683431: jnz     short loc_683440
0x683433: mov     ecx, esi
0x683435: call    sub_6829C0
0x68343A: cmp     dword ptr [esi+40h], 0
0x68343E: jz      short loc_683480
0x683440: push    0; char
0x683442: push    1; dwMilliseconds
0x683444: call    sub_498EE0
0x683449: add     esp, 8
0x68344C: push    0
0x68344E: mov     ecx, esi
0x683450: call    sub_42FC20
0x683455: test    eax, eax
0x683457: jnz     short loc_683480
0x683459: push    edi
0x68345A: mov     edi, [esi+40h]
0x68345D: mov     [esi+40h], eax
0x683460: mov     eax, [esi]
0x683462: mov     edx, [eax+8]
0x683465: mov     ecx, esi
0x683467: call    edx
0x683469: push    edi
0x68346A: mov     ecx, esi
0x68346C: mov     dword ptr [esi+8], 0
0x683473: call    sub_682950
0x683478: mov     ecx, esi
0x68347A: call    sub_6829C0
0x68347F: pop     edi
0x683480: mov     ecx, offset stru_B3C000
0x683485: pop     esi
0x683486: jmp     j_NiLeaveCriticalSection_0
