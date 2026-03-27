0x700B60: mov     edx, [esp+arg_0]
0x700B64: push    ebx
0x700B65: push    esi
0x700B66: push    edi
0x700B67: mov     esi, ecx
0x700B69: xor     edi, edi
0x700B6B: xor     eax, eax
0x700B6D: lea     ecx, [esi+1Ch]
0x700B70: cmp     [ecx-8], edx
0x700B73: jz      short loc_700B8D
0x700B75: movzx   ebx, byte ptr [ecx]
0x700B78: add     eax, 1
0x700B7B: add     edi, ebx
0x700B7D: add     ecx, 0Ch
0x700B80: cmp     eax, 4
0x700B83: jb      short loc_700B70
0x700B85: xor     eax, eax
0x700B87: pop     edi
0x700B88: pop     esi
0x700B89: pop     ebx
0x700B8A: retn    4
0x700B8D: lea     eax, [eax+eax*2]
0x700B90: mov     cl, [esi+eax*4+1Ch]
0x700B94: mov     al, cl
0x700B96: xor     edx, edx
0x700B98: sub     al, 1
0x700B9A: test    cl, cl
0x700B9C: jz      short loc_700B85
0x700B9E: test    al, al
0x700BA0: jz      short loc_700BB7
0x700BA2: movzx   ecx, al
0x700BA5: mov     ebx, 1
0x700BAA: shl     ebx, cl
0x700BAC: add     al, 0FFh
0x700BAE: sub     ecx, 1
0x700BB1: add     edx, ebx
0x700BB3: test    al, al
0x700BB5: jnz     short loc_700BA5
0x700BB7: lea     eax, [edx+1]
0x700BBA: mov     ecx, edi
0x700BBC: shl     eax, cl
0x700BBE: test    byte ptr [esi], 1
0x700BC1: mov     [esp+0Ch+arg_0], eax
0x700BC5: jnz     short loc_700B87
0x700BC7: mov     cl, byte ptr [esp+0Ch+arg_0+3]
0x700BCB: mov     dl, byte ptr [esp+0Ch+arg_0+2]
0x700BCF: mov     byte ptr [esp+0Ch+arg_0+3], al
0x700BD3: mov     al, byte ptr [esp+0Ch+arg_0+1]
0x700BD7: mov     byte ptr [esp+0Ch+arg_0+2], al
0x700BDB: movzx   eax, byte ptr [esi+1]
0x700BDF: mov     byte ptr [esp+0Ch+arg_0], cl
0x700BE3: mov     ecx, 20h ; ' '
0x700BE8: pop     edi
0x700BE9: sub     ecx, eax
0x700BEB: mov     byte ptr [esp+8+arg_0+1], dl
0x700BEF: mov     eax, [esp+8+arg_0]
0x700BF3: pop     esi
0x700BF4: shr     eax, cl
0x700BF6: pop     ebx
0x700BF7: retn    4
