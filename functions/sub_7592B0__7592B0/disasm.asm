0x7592B0: push    esi
0x7592B1: push    edi
0x7592B2: push    40h ; '@'; Size
0x7592B4: mov     edi, ecx
0x7592B6: call    FormHeapAlloc
0x7592BB: mov     esi, eax
0x7592BD: add     esp, 4
0x7592C0: test    esi, esi
0x7592C2: jz      short loc_7592F1
0x7592C4: mov     ecx, esi
0x7592C6: call    sub_75E800
0x7592CB: mov     dword ptr [esi], offset ??_7NiPSysDragFieldModifier@@6B@; const NiPSysDragFieldModifier::`vftable'
0x7592D1: mov     byte ptr [esi+30h], 0
0x7592D5: mov     eax, ds:0B3F9A8h
0x7592DA: mov     [esi+34h], eax
0x7592DD: mov     ecx, ds:0B3F9ACh
0x7592E3: mov     [esi+38h], ecx
0x7592E6: mov     edx, ds:0B3F9B0h
0x7592EC: mov     [esi+3Ch], edx
0x7592EF: jmp     short loc_7592F3
0x7592F1: xor     esi, esi
0x7592F3: mov     eax, [esp+8+arg_0]
0x7592F7: push    eax
0x7592F8: push    esi
0x7592F9: mov     ecx, edi
0x7592FB: call    sub_75E830
0x759300: mov     cl, [edi+30h]
0x759303: lea     eax, [edi+34h]
0x759306: mov     [esi+30h], cl
0x759309: mov     edx, [eax]
0x75930B: mov     [esi+34h], edx
0x75930E: mov     ecx, [eax+4]
0x759311: mov     [esi+38h], ecx
0x759314: mov     edx, [eax+8]
0x759317: pop     edi
0x759318: mov     [esi+3Ch], edx
0x75931B: mov     eax, esi
0x75931D: pop     esi
0x75931E: retn    4
