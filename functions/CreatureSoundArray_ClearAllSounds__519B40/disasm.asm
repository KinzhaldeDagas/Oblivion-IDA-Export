0x519B40: push    ebx
0x519B41: push    esi
0x519B42: push    edi
0x519B43: mov     ebx, ecx
0x519B45: xor     esi, esi
0x519B47: mov     edi, 0Ah
0x519B4C: lea     esp, [esp+0]
0x519B50: push    esi
0x519B51: mov     ecx, ebx
0x519B53: call    CreatureSoundArray_ClearNthSound
0x519B58: add     esi, 1
0x519B5B: sub     edi, 1
0x519B5E: jnz     short loc_519B50
0x519B60: pop     edi
0x519B61: pop     esi
0x519B62: pop     ebx
0x519B63: retn
