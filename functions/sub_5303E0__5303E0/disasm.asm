0x5303E0: mov     eax, [esp+a3]
0x5303E4: push    esi
0x5303E5: push    edi
0x5303E6: mov     edi, [esp+8+Dst]
0x5303EA: push    eax; a3
0x5303EB: push    edi; Dst
0x5303EC: mov     esi, ecx
0x5303EE: call    TESForm_LoadModifiedForm
0x5303F3: test    edi, 10000000h
0x5303F9: jz      short loc_5303FF
0x5303FB: mov     byte ptr [esi+22h], 1
0x5303FF: pop     edi
0x530400: pop     esi
0x530401: retn    8
