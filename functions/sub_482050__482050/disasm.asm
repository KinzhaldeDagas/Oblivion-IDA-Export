0x482050: mov     eax, [ecx]
0x482052: mov     edx, [eax+14h]
0x482055: push    esi
0x482056: mov     esi, [esp+4+arg_0]
0x48205A: sub     esi, [ecx+4]
0x48205D: push    edi
0x48205E: mov     edi, [esp+8+arg_4]
0x482062: sub     edi, [ecx+8]
0x482065: push    edi
0x482066: push    esi
0x482067: call    edx
0x482069: test    esi, esi
0x48206B: jnz     short loc_482078
0x48206D: test    edi, edi
0x48206F: jnz     short loc_482078
0x482071: pop     edi
0x482072: xor     al, al
0x482074: pop     esi
0x482075: retn    8
0x482078: pop     edi
0x482079: mov     al, 1
0x48207B: pop     esi
0x48207C: retn    8
