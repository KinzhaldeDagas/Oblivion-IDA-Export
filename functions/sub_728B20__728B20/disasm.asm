0x728B20: push    esi
0x728B21: mov     esi, ecx
0x728B23: cmp     byte ptr [esi+3Ch], 0
0x728B27: jz      short loc_728B52
0x728B29: push    edi
0x728B2A: mov     edi, [esi+34h]
0x728B2D: test    edi, edi
0x728B2F: jz      short loc_728B4D
0x728B31: mov     eax, [edi]
0x728B33: mov     edx, [eax+4Ch]
0x728B36: mov     ecx, edi
0x728B38: call    edx
0x728B3A: test    al, al
0x728B3C: jz      short loc_728B4D
0x728B3E: cmp     byte ptr [esi+3Dh], 0
0x728B42: jnz     short loc_728B4D
0x728B44: push    0
0x728B46: mov     ecx, edi
0x728B48: call    sub_7261D0
0x728B4D: mov     byte ptr [esi+3Ch], 0
0x728B51: pop     edi
0x728B52: pop     esi
0x728B53: retn
