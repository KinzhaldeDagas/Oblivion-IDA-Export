0x8CE720: push    esi
0x8CE721: push    edi
0x8CE722: mov     esi, ecx
0x8CE724: xor     edi, edi
0x8CE726: cmp     [esi+1A8h], edi
0x8CE72C: jle     short loc_8CE749
0x8CE72E: mov     edi, edi
0x8CE730: mov     eax, [esi+1A4h]
0x8CE736: mov     ecx, [eax+edi*4]
0x8CE739: call    sub_8BC730
0x8CE73E: add     edi, 1
0x8CE741: cmp     edi, [esi+1A8h]
0x8CE747: jl      short loc_8CE730
0x8CE749: pop     edi
0x8CE74A: mov     dword ptr [esi+1A8h], 0
0x8CE754: mov     dword ptr [esi+1C0h], 0
0x8CE75E: mov     dword ptr [esi+1B4h], 0
0x8CE768: pop     esi
0x8CE769: retn
