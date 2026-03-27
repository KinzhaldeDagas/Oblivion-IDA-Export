0x558520: push    edi
0x558521: mov     edi, ecx
0x558523: mov     edx, [edi+0Ch]
0x558526: test    edx, edx
0x558528: jnz     short loc_55852E
0x55852A: xor     al, al
0x55852C: pop     edi
0x55852D: retn
0x55852E: cmp     dword ptr [edx+8], 0
0x558532: jnz     short loc_55856A
0x558534: movzx   eax, word ptr [edx+4]
0x558538: cmp     ax, 0FFFFh
0x55853C: jnz     short loc_558552
0x55853E: mov     eax, [edx]
0x558540: push    esi
0x558541: lea     esi, [eax+1]
0x558544: mov     cl, [eax]
0x558546: add     eax, 1
0x558549: test    cl, cl
0x55854B: jnz     short loc_558544
0x55854D: sub     eax, esi
0x55854F: pop     esi
0x558550: jmp     short loc_558555
0x558552: movzx   eax, ax
0x558555: test    eax, eax
0x558557: jz      short loc_55852A
0x558559: mov     edx, [edx]
0x55855B: push    edx; Src
0x55855C: call    sub_557C80
0x558561: mov     ecx, [edi+0Ch]
0x558564: add     esp, 4
0x558567: mov     [ecx+8], eax
0x55856A: mov     al, 1
0x55856C: pop     edi
0x55856D: retn
