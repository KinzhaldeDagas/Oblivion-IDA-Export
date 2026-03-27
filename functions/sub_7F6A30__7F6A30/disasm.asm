0x7F6A30: push    ebx
0x7F6A31: mov     ebx, [esp+4+arg_0]
0x7F6A35: push    ebp
0x7F6A36: push    esi
0x7F6A37: mov     esi, ds:0B3F928h
0x7F6A3D: push    edi
0x7F6A3E: lea     eax, [esp+10h+arg_0]
0x7F6A42: push    eax
0x7F6A43: mov     ecx, ebx
0x7F6A45: call    sub_405760
0x7F6A4A: mov     ecx, [eax]
0x7F6A4C: mov     eax, [esp+10h+arg_0]
0x7F6A50: test    eax, eax
0x7F6A52: mov     ebp, ds:0A2807Ch
0x7F6A58: mov     [esi+0Ch], ecx
0x7F6A5B: jz      short loc_7F6A77
0x7F6A5D: mov     edi, eax
0x7F6A5F: add     eax, 4
0x7F6A62: push    eax; lpAddend
0x7F6A63: call    ebp ; InterlockedDecrement
0x7F6A65: test    eax, eax
0x7F6A67: jnz     short loc_7F6A77
0x7F6A69: test    edi, edi
0x7F6A6B: jz      short loc_7F6A77
0x7F6A6D: mov     edx, [edi]
0x7F6A6F: mov     eax, [edx]
0x7F6A71: push    1
0x7F6A73: mov     ecx, edi
0x7F6A75: call    eax
0x7F6A77: lea     ecx, [esp+10h+arg_0]
0x7F6A7B: push    ecx
0x7F6A7C: mov     ecx, ebx
0x7F6A7E: call    sub_7016D0
0x7F6A83: mov     edx, [eax]
0x7F6A85: mov     eax, [esp+10h+arg_0]
0x7F6A89: test    eax, eax
0x7F6A8B: mov     [esi+10h], edx
0x7F6A8E: jz      short loc_7F6AAA
0x7F6A90: mov     edi, eax
0x7F6A92: add     eax, 4
0x7F6A95: push    eax; lpAddend
0x7F6A96: call    ebp ; InterlockedDecrement
0x7F6A98: test    eax, eax
0x7F6A9A: jnz     short loc_7F6AAA
0x7F6A9C: test    edi, edi
0x7F6A9E: jz      short loc_7F6AAA
0x7F6AA0: mov     eax, [edi]
0x7F6AA2: mov     edx, [eax]
0x7F6AA4: push    1
0x7F6AA6: mov     ecx, edi
0x7F6AA8: call    edx
0x7F6AAA: mov     eax, [ebx+0B4h]
0x7F6AB0: mov     ecx, [esi+8A4h]
0x7F6AB6: push    0; int
0x7F6AB8: push    0; int
0x7F6ABA: push    0; char
0x7F6ABC: push    0; NiSkinInstance *
0x7F6ABE: push    eax; NiGeometryData *
0x7F6ABF: push    ecx; NiGeometryGroup *
0x7F6AC0: mov     ecx, [esi+8A0h]
0x7F6AC6: call    NiGeometryGroup__AddGeometryDataToGroup
0x7F6ACB: pop     edi
0x7F6ACC: pop     esi
0x7F6ACD: pop     ebp
0x7F6ACE: pop     ebx
0x7F6ACF: retn    4
