0x9A4310: push    ebp
0x9A4311: push    edi
0x9A4312: mov     edi, ecx
0x9A4314: xor     eax, eax
0x9A4316: xor     ebp, ebp
0x9A4318: cmp     [edi+0Ah], ax
0x9A431C: jbe     short loc_9A435F
0x9A431E: push    ebx
0x9A431F: push    esi
0x9A4320: mov     edx, [edi+4]
0x9A4323: movzx   ecx, bp
0x9A4326: mov     esi, [edx+ecx*4]
0x9A4329: cmp     esi, eax
0x9A432B: lea     ebx, [edx+ecx*4]
0x9A432E: jz      short loc_9A4354
0x9A4330: lea     eax, [esi+4]
0x9A4333: push    eax; lpAddend
0x9A4334: call    ds:InterlockedDecrement
0x9A433A: test    eax, eax
0x9A433C: jnz     short loc_9A434C
0x9A433E: test    esi, esi
0x9A4340: jz      short loc_9A434C
0x9A4342: mov     edx, [esi]
0x9A4344: mov     eax, [edx]
0x9A4346: push    1
0x9A4348: mov     ecx, esi
0x9A434A: call    eax
0x9A434C: mov     dword ptr [ebx], 0
0x9A4352: xor     eax, eax
0x9A4354: add     ebp, 1
0x9A4357: cmp     bp, [edi+0Ah]
0x9A435B: jb      short loc_9A4320
0x9A435D: pop     esi
0x9A435E: pop     ebx
0x9A435F: mov     [edi+0Ch], ax
0x9A4363: mov     [edi+0Ah], ax
0x9A4367: pop     edi
0x9A4368: pop     ebp
0x9A4369: retn
