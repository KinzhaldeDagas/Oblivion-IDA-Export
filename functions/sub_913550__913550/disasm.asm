0x913550: push    esi
0x913551: push    edi
0x913552: mov     edi, ecx
0x913554: mov     esi, [edi+4]
0x913557: mov     eax, [esi+24h]
0x91355A: mov     ecx, [esi+20h]
0x91355D: add     esi, 1Ch
0x913560: and     eax, 3FFFFFFFh
0x913565: cmp     ecx, eax
0x913567: jnz     short loc_913574
0x913569: push    4
0x91356B: push    esi
0x91356C: call    sub_8A6EE0
0x913571: add     esp, 8
0x913574: mov     ecx, [esi+4]
0x913577: mov     edx, [esi]
0x913579: mov     dword ptr [edx+ecx*4], 0Dh
0x913580: inc     dword ptr [esi+4]
0x913583: mov     eax, [edi+4]
0x913586: mov     esi, [eax+8]
0x913589: mov     edx, [eax+4]
0x91358C: add     esi, 4
0x91358F: mov     [eax+8], esi
0x913592: mov     esi, [eax+0Ch]
0x913595: mov     ecx, 20h ; ' '
0x91359A: add     edx, ecx
0x91359C: mov     [eax+4], edx
0x91359F: inc     esi
0x9135A0: mov     [eax+0Ch], esi
0x9135A3: mov     eax, [edi+4]
0x9135A6: mov     edx, [eax+8]
0x9135A9: mov     esi, [eax+4]
0x9135AC: add     edx, 4
0x9135AF: mov     [eax+8], edx
0x9135B2: mov     edx, [eax+0Ch]
0x9135B5: add     esi, ecx
0x9135B7: mov     [eax+4], esi
0x9135BA: inc     edx
0x9135BB: mov     [eax+0Ch], edx
0x9135BE: mov     eax, [edi+4]
0x9135C1: mov     edx, [eax+4]
0x9135C4: mov     esi, [eax+8]
0x9135C7: add     edx, ecx
0x9135C9: mov     ecx, [eax+0Ch]
0x9135CC: add     esi, 4
0x9135CF: inc     ecx
0x9135D0: pop     edi
0x9135D1: mov     [eax+8], esi
0x9135D4: mov     [eax+4], edx
0x9135D7: mov     [eax+0Ch], ecx
0x9135DA: pop     esi
0x9135DB: retn
