0x8BC9B0: push    ebx
0x8BC9B1: mov     ebx, [esp+4+a2]
0x8BC9B5: push    ebp
0x8BC9B6: push    esi
0x8BC9B7: push    edi
0x8BC9B8: push    ebx; a2
0x8BC9B9: mov     edi, ecx
0x8BC9BB: call    sub_731E60
0x8BC9C0: mov     ebp, [edi+1Ch]
0x8BC9C3: xor     esi, esi
0x8BC9C5: test    ebp, ebp
0x8BC9C7: mov     byte ptr [esp+10h+a2], al
0x8BC9CB: jbe     short loc_8BC9ED
0x8BC9CD: lea     ecx, [ecx+0]
0x8BC9D0: mov     eax, [edi+10h]
0x8BC9D3: mov     ecx, [eax+esi*4]
0x8BC9D6: test    ecx, ecx
0x8BC9D8: jz      short loc_8BC9E2
0x8BC9DA: mov     edx, [ecx]
0x8BC9DC: mov     eax, [edx+24h]
0x8BC9DF: push    ebx
0x8BC9E0: call    eax
0x8BC9E2: add     esi, 1
0x8BC9E5: cmp     esi, ebp
0x8BC9E7: jb      short loc_8BC9D0
0x8BC9E9: mov     al, byte ptr [esp+10h+a2]
0x8BC9ED: pop     edi
0x8BC9EE: pop     esi
0x8BC9EF: pop     ebp
0x8BC9F0: pop     ebx
0x8BC9F1: retn    4
