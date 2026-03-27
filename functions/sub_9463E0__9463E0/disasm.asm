0x9463E0: mov     eax, 1
0x9463E5: push    esi
0x9463E6: mov     esi, ecx
0x9463E8: mov     [esi+6], ax
0x9463EC: mov     [esi+0Ch], al
0x9463EF: mov     eax, [esp+4+arg_0]
0x9463F3: mov     dword ptr [esi+8], offset off_A9D1C0
0x9463FA: mov     dword ptr [esi], offset off_AA2950
0x946400: mov     dword ptr [esi+8], offset off_AA2938
0x946407: xor     ecx, ecx
0x946409: mov     [esi+20h], ecx
0x94640C: mov     [esi+24h], ecx
0x94640F: mov     dword ptr [esi+28h], 80000000h
0x946416: cmp     [eax+4], ecx
0x946419: jle     short loc_946424
0x94641B: mov     eax, [eax]
0x94641D: mov     edx, [eax]
0x94641F: mov     eax, [edx+4]
0x946422: jmp     short loc_946426
0x946424: xor     eax, eax
0x946426: cmp     eax, ecx
0x946428: mov     [esi+2Ch], eax
0x94642B: jz      short loc_946445
0x94642D: cmp     [eax+4], cx
0x946431: jz      short loc_946437
0x946433: inc     word ptr [eax+6]
0x946437: mov     ecx, [esi+2Ch]
0x94643A: push    esi
0x94643B: push    offset sub_9463B0
0x946440: call    sub_8CA4D0
0x946445: mov     eax, esi
0x946447: pop     esi
0x946448: retn    4
