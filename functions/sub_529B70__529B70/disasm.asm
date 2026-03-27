0x529B70: push    ebx
0x529B71: lea     eax, [ecx+40h]
0x529B74: xor     bl, bl
0x529B76: test    eax, eax
0x529B78: jz      short loc_529BA1
0x529B7A: lea     ebx, [ebx+0]
0x529B80: mov     edx, [eax+4]
0x529B83: test    edx, edx
0x529B85: jnz     short loc_529B8B
0x529B87: cmp     [eax], edx
0x529B89: jz      short loc_529BA1
0x529B8B: mov     eax, [eax]
0x529B8D: cmp     byte ptr [eax+1], 0
0x529B91: jz      short loc_529B9B
0x529B93: mov     al, [eax]
0x529B95: cmp     al, bl
0x529B97: jbe     short loc_529B9B
0x529B99: mov     bl, al
0x529B9B: mov     eax, edx
0x529B9D: test    eax, eax
0x529B9F: jnz     short loc_529B80
0x529BA1: cmp     bl, [ecx+5Ch]
0x529BA4: jbe     short loc_529BA9
0x529BA6: mov     [ecx+5Ch], bl
0x529BA9: pop     ebx
0x529BAA: retn
