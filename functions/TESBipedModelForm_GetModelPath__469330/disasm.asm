0x469330: push    esi
0x469331: mov     esi, [esp+4+arg_0]
0x469335: lea     eax, [esi+esi*2]
0x469338: movzx   edx, word ptr [ecx+eax*8+10h]
0x46933D: cmp     dx, 0FFFFh
0x469342: lea     eax, [ecx+eax*8+0Ch]
0x469346: jnz     short loc_46935E
0x469348: mov     eax, [eax]
0x46934A: push    edi
0x46934B: lea     edi, [eax+1]
0x46934E: mov     edi, edi
0x469350: mov     dl, [eax]
0x469352: add     eax, 1
0x469355: test    dl, dl
0x469357: jnz     short loc_469350
0x469359: sub     eax, edi
0x46935B: pop     edi
0x46935C: jmp     short loc_469361
0x46935E: movzx   eax, dx
0x469361: test    eax, eax
0x469363: jnz     short loc_46936C
0x469365: cmp     esi, 1
0x469368: jnz     short loc_46936C
0x46936A: xor     esi, esi
0x46936C: lea     edx, [esi+esi*2]
0x46936F: mov     eax, [ecx+edx*8+8]
0x469373: lea     ecx, [ecx+edx*8+8]
0x469377: mov     edx, [eax+14h]
0x46937A: call    edx
0x46937C: pop     esi
0x46937D: retn    4
