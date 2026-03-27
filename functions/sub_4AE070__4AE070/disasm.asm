0x4AE070: push    esi
0x4AE071: mov     esi, ecx
0x4AE073: mov     eax, [esi+8]
0x4AE076: shr     eax, 3
0x4AE079: test    al, 1
0x4AE07B: jnz     short loc_4AE09D
0x4AE07D: call    sub_4B3D30
0x4AE082: lea     eax, [esi-0Ch]
0x4AE085: neg     eax
0x4AE087: sbb     eax, eax
0x4AE089: and     eax, esi
0x4AE08B: push    eax
0x4AE08C: lea     ecx, [esi-0Ch]
0x4AE08F: call    sub_46E220
0x4AE094: push    1; a2
0x4AE096: mov     ecx, esi; this
0x4AE098: call    TESForm_SetIsLinked
0x4AE09D: pop     esi
0x4AE09E: retn
