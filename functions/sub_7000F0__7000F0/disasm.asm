0x7000F0: push    ebp
0x7000F1: mov     ebp, [esp+4+a2]
0x7000F5: push    edi
0x7000F6: push    ebp; a2
0x7000F7: mov     edi, ecx
0x7000F9: call    sub_700650
0x7000FE: test    al, al
0x700100: jnz     short loc_700107
0x700102: pop     edi
0x700103: pop     ebp
0x700104: retn    4
0x700107: push    ebx
0x700108: xor     ebx, ebx
0x70010A: cmp     [edi+14h], bx
0x70010E: jbe     short loc_70013F
0x700110: push    esi
0x700111: mov     ecx, [edi+10h]
0x700114: movzx   eax, bx
0x700117: mov     esi, [ecx+eax*4]
0x70011A: test    esi, esi
0x70011C: jz      short loc_700135
0x70011E: mov     edx, [esi]
0x700120: mov     eax, [edx+4Ch]
0x700123: mov     ecx, esi
0x700125: call    eax
0x700127: test    al, al
0x700129: jz      short loc_700135
0x70012B: mov     edx, [esi]
0x70012D: mov     eax, [edx+24h]
0x700130: push    ebp
0x700131: mov     ecx, esi
0x700133: call    eax
0x700135: add     ebx, 1
0x700138: cmp     bx, [edi+14h]
0x70013C: jb      short loc_700111
0x70013E: pop     esi
0x70013F: mov     ecx, [edi+0Ch]
0x700142: test    ecx, ecx
0x700144: pop     ebx
0x700145: jz      short loc_70014F
0x700147: mov     edx, [ecx]
0x700149: mov     eax, [edx+24h]
0x70014C: push    ebp
0x70014D: call    eax
0x70014F: pop     edi
0x700150: mov     al, 1
0x700152: pop     ebp
0x700153: retn    4
