0x414059: mov     eax, [edi+1Ch]
0x41405C: mov     edx, [eax+58h]
0x41405F: shr     edx, 7
0x414062: test    dl, 1
0x414065: jz      short loc_41406B
0x414067: xor     eax, eax
0x414069: jmp     short loc_41406E
0x41406B: mov     eax, [edi+0Ch]
0x41406E: mov     ecx, [ecx+58h]
0x414071: shr     ecx, 7
0x414074: test    cl, 1
0x414077: jnz     short EffectItem_CopyFrom___CopyParam
0x414079: cmp     eax, ebp
0x41407B: jl      short EffectItem_CopyFrom___CopyParam
0x41407D: fst     dword ptr [esi+20h]
0x414080: mov     [esi+0Ch], eax
