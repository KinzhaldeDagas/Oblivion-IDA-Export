0x533E20: push    ebp
0x533E21: mov     ebp, ecx
0x533E23: cmp     byte ptr [ebp+0Ch], 0
0x533E27: jz      short loc_533E54
0x533E29: mov     eax, [ebp+8]
0x533E2C: push    esi
0x533E2D: mov     esi, ds:0B34D90h
0x533E33: push    edi; ArgList
0x533E34: lea     edi, [esi+10h]
0x533E37: push    edi; Format
0x533E38: push    eax; int
0x533E39: call    sub_533D30
0x533E3E: add     esp, 8
0x533E41: mov     byte ptr [edi], 0
0x533E44: mov     [esi+0Ch], eax
0x533E47: mov     dword ptr [esi+8], 0
0x533E4E: pop     edi
0x533E4F: mov     byte ptr [ebp+0Ch], 0
0x533E53: pop     esi
0x533E54: pop     ebp
0x533E55: retn
