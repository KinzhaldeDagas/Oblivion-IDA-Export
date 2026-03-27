0x588B80: mov     eax, [ecx+18h]
0x588B83: test    eax, eax
0x588B85: push    esi
0x588B86: jz      short loc_588BA6
0x588B88: mov     esi, [esp+4+arg_0]
0x588B8C: lea     esp, [esp+0]
0x588B90: mov     edx, [eax+8]
0x588B93: lea     ecx, [eax+8]
0x588B96: movzx   ecx, word ptr [edx+18h]
0x588B9A: cmp     ecx, esi
0x588B9C: mov     eax, [eax]
0x588B9E: jz      short loc_588BAC
0x588BA0: jg      short loc_588BA6
0x588BA2: test    eax, eax
0x588BA4: jnz     short loc_588B90
0x588BA6: xor     al, al
0x588BA8: pop     esi
0x588BA9: retn    4
0x588BAC: cmp     byte ptr [edx+1Ah], 0
0x588BB0: jnz     short loc_588BC4
0x588BB2: fldz
0x588BB4: fcomp   dword ptr [edx+4]
0x588BB7: fnstsw  ax
0x588BB9: test    ah, 44h
0x588BBC: jp      short loc_588BC4
0x588BBE: xor     eax, eax
0x588BC0: pop     esi
0x588BC1: retn    4
0x588BC4: mov     eax, 1
0x588BC9: pop     esi
0x588BCA: retn    4
