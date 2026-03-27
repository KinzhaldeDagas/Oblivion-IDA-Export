0x6FFE10: push    ebx
0x6FFE11: mov     ebx, [esp+4+arg0]
0x6FFE15: push    esi
0x6FFE16: push    edi
0x6FFE17: push    ebx; arg0
0x6FFE18: mov     esi, ecx
0x6FFE1A: call    sub_700750
0x6FFE1F: xor     edi, edi
0x6FFE21: cmp     [esi+14h], di
0x6FFE25: jbe     short loc_6FFE45
0x6FFE27: mov     ecx, [esi+10h]
0x6FFE2A: movzx   eax, di
0x6FFE2D: mov     ecx, [ecx+eax*4]
0x6FFE30: test    ecx, ecx
0x6FFE32: jz      short loc_6FFE3C
0x6FFE34: mov     edx, [ecx]
0x6FFE36: mov     eax, [edx+38h]
0x6FFE39: push    ebx
0x6FFE3A: call    eax
0x6FFE3C: add     edi, 1
0x6FFE3F: cmp     di, [esi+14h]
0x6FFE43: jb      short loc_6FFE27
0x6FFE45: mov     ecx, [esi+0Ch]
0x6FFE48: test    ecx, ecx
0x6FFE4A: jz      short loc_6FFE54
0x6FFE4C: mov     edx, [ecx]
0x6FFE4E: mov     eax, [edx+38h]
0x6FFE51: push    ebx
0x6FFE52: call    eax
0x6FFE54: pop     edi
0x6FFE55: pop     esi
0x6FFE56: pop     ebx
0x6FFE57: retn    4
