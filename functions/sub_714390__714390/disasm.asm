0x714390: push    esi
0x714391: mov     esi, ecx
0x714393: mov     eax, [esi]
0x714395: mov     edx, [eax+34h]
0x714398: call    edx
0x71439A: test    al, al
0x71439C: jnz     short loc_7143A0
0x71439E: pop     esi
0x71439F: retn
0x7143A0: push    ebx
0x7143A1: push    ebp
0x7143A2: xor     ebp, ebp
0x7143A4: mov     ecx, esi
0x7143A6: mov     [esi+270h], ebp
0x7143AC: mov     [esi+26Ch], ebp
0x7143B2: mov     [esi+268h], ebp
0x7143B8: call    sub_712930
0x7143BD: cmp     dword ptr [esi+0D8h], 5000001h
0x7143C7: setnb   bl
0x7143CA: test    bl, bl
0x7143CC: jz      short loc_7143DD
0x7143CE: mov     ecx, esi
0x7143D0: call    sub_713FF0
0x7143D5: test    al, al
0x7143D7: jnz     short loc_7143DD
0x7143D9: pop     ebp
0x7143DA: pop     ebx
0x7143DB: pop     esi
0x7143DC: retn
0x7143DD: cmp     dword ptr [esi+0D8h], 5000006h
0x7143E7: jb      short loc_7143F0
0x7143E9: mov     ecx, esi
0x7143EB: call    sub_713030
0x7143F0: push    edi
0x7143F1: mov     edi, [esi+1F4h]
0x7143F7: cmp     [esi+268h], edi
0x7143FD: jnb     short loc_714462
0x7143FF: nop
0x714400: mov     eax, [esi+260h]
0x714406: cmp     eax, 2
0x714409: jz      loc_7144BD
0x71440F: cmp     eax, 3
0x714412: jnz     short loc_714429
0x714414: mov     ecx, [esi+274h]
0x71441A: mov     dword ptr [esi+260h], 4
0x714424: call    sub_748810
0x714429: test    bl, bl
0x71442B: jz      short loc_714446
0x71442D: mov     eax, [esi+268h]
0x714433: mov     ecx, [esi+1F0h]
0x714439: mov     ecx, [ecx+eax*4]
0x71443C: mov     edx, [ecx]
0x71443E: mov     eax, [edx+1Ch]
0x714441: push    esi
0x714442: call    eax
0x714444: jmp     short loc_714453
0x714446: mov     edx, [esi]
0x714448: mov     eax, [edx+50h]
0x71444B: mov     ecx, esi
0x71444D: call    eax
0x71444F: test    al, al
0x714451: jz      short loc_7144BD
0x714453: add     dword ptr [esi+268h], 1
0x71445A: cmp     [esi+268h], edi
0x714460: jb      short loc_714400
0x714462: mov     edx, [esi]
0x714464: mov     eax, [edx+48h]
0x714467: mov     ecx, esi
0x714469: call    eax
0x71446B: cmp     [esi+26Ch], edi
0x714471: jnb     short loc_7144CB
0x714473: mov     ebx, 3
0x714478: cmp     [esi+260h], ebx
0x71447E: jnz     short loc_714495
0x714480: mov     ecx, [esi+274h]
0x714486: mov     dword ptr [esi+260h], 4
0x714490: call    sub_748810
0x714495: mov     edx, [esi+1F0h]
0x71449B: mov     ecx, [esi+26Ch]
0x7144A1: mov     ecx, [edx+ecx*4]
0x7144A4: mov     eax, [ecx]
0x7144A6: mov     edx, [eax+20h]
0x7144A9: push    esi
0x7144AA: call    edx
0x7144AC: add     dword ptr [esi+26Ch], 1
0x7144B3: cmp     [esi+26Ch], edi
0x7144B9: jb      short loc_714473
0x7144BB: jmp     short loc_7144D0
0x7144BD: mov     ecx, esi
0x7144BF: call    sub_7135C0
0x7144C4: pop     edi
0x7144C5: pop     ebp
0x7144C6: pop     ebx
0x7144C7: xor     al, al
0x7144C9: pop     esi
0x7144CA: retn
0x7144CB: mov     ebx, 3
0x7144D0: cmp     [esi+270h], edi
0x7144D6: jnb     short loc_71451B
0x7144D8: cmp     [esi+260h], ebx
0x7144DE: jnz     short loc_7144F5
0x7144E0: mov     ecx, [esi+274h]
0x7144E6: mov     dword ptr [esi+260h], 4
0x7144F0: call    sub_748810
0x7144F5: mov     eax, [esi+270h]
0x7144FB: mov     ecx, [esi+1F0h]
0x714501: mov     ecx, [ecx+eax*4]
0x714504: mov     edx, [ecx]
0x714506: mov     eax, [edx+3Ch]
0x714509: push    esi
0x71450A: call    eax
0x71450C: add     dword ptr [esi+270h], 1
0x714513: cmp     [esi+270h], edi
0x714519: jb      short loc_7144D8
0x71451B: mov     eax, [esi+260h]
0x714521: cmp     eax, 2
0x714524: jz      loc_7145AD
0x71452A: cmp     eax, ebx
0x71452C: jnz     short loc_714543
0x71452E: mov     ecx, [esi+274h]
0x714534: mov     dword ptr [esi+260h], 4
0x71453E: call    sub_748810
0x714543: mov     ecx, ds:0B3FB84h
0x714549: cmp     [ecx+0Ch], bp
0x71454D: jbe     short loc_7145A4
0x71454F: xor     ebx, ebx
0x714551: cmp     [esi+210h], ebp
0x714557: jbe     short loc_7145A4
0x714559: lea     esp, [esp+0]
0x714560: mov     edx, [esi+208h]
0x714566: mov     ebp, [edx+ebx*4]
0x714569: test    ebp, ebp
0x71456B: jz      short loc_714597
0x71456D: xor     edi, edi
0x71456F: cmp     [ecx+0Ah], di
0x714573: jbe     short loc_714597
0x714575: mov     eax, [ecx+4]
0x714578: mov     eax, [eax+edi*4]
0x71457B: test    eax, eax
0x71457D: jz      short loc_71458C
0x71457F: push    ebp
0x714580: push    esi
0x714581: call    eax
0x714583: mov     ecx, ds:0B3FB84h
0x714589: add     esp, 8
0x71458C: movzx   edx, word ptr [ecx+0Ah]
0x714590: add     edi, 1
0x714593: cmp     edi, edx
0x714595: jb      short loc_714575
0x714597: add     ebx, 1
0x71459A: cmp     ebx, [esi+210h]
0x7145A0: jb      short loc_714560
0x7145A2: xor     ebp, ebp
0x7145A4: cmp     dword ptr [esi+260h], 2
0x7145AB: jnz     short loc_714611
0x7145AD: push    offset stru_B3FC00; lpCriticalSection
0x7145B2: call    dword ptr ds:0A2806Ch
0x7145B8: call    dword ptr ds:0A2808Ch
0x7145BE: mov     edi, 1
0x7145C3: add     ds:0B3FC7Ch, edi
0x7145C9: lea     ecx, [esi+1ECh]
0x7145CF: mov     ds:0B3FC78h, eax
0x7145D4: call    sub_8BCC50
0x7145D9: mov     [esi+22Ch], ebp
0x7145DF: mov     [esi+23Ch], ebp
0x7145E5: mov     [esi+230h], ebp
0x7145EB: mov     [esi+240h], ebp
0x7145F1: sub     ds:0B3FC7Ch, edi
0x7145F7: jnz     short loc_7145FF
0x7145F9: mov     ds:0B3FC78h, ebp
0x7145FF: push    offset stru_B3FC00; lpCriticalSection
0x714604: call    dword ptr ds:0A28074h
0x71460A: pop     edi
0x71460B: pop     ebp
0x71460C: pop     ebx
0x71460D: xor     al, al
0x71460F: pop     esi
0x714610: retn
0x714611: mov     ecx, esi
0x714613: call    sub_7126A0
0x714618: push    offset stru_B3FC00; lpCriticalSection
0x71461D: call    dword ptr ds:0A2806Ch
0x714623: call    dword ptr ds:0A2808Ch
0x714629: mov     edi, 1
0x71462E: add     ds:0B3FC7Ch, edi
0x714634: lea     ecx, [esi+1ECh]
0x71463A: mov     ds:0B3FC78h, eax
0x71463F: call    sub_8BCC50
0x714644: mov     [esi+22Ch], ebp
0x71464A: mov     [esi+23Ch], ebp
0x714650: mov     [esi+230h], ebp
0x714656: mov     [esi+240h], ebp
0x71465C: sub     ds:0B3FC7Ch, edi
0x714662: jnz     short loc_71466A
0x714664: mov     ds:0B3FC78h, ebp
0x71466A: push    offset stru_B3FC00; lpCriticalSection
0x71466F: call    dword ptr ds:0A28074h
0x714675: pop     edi
0x714676: pop     ebp
0x714677: pop     ebx
0x714678: mov     al, 1
0x71467A: pop     esi
0x71467B: retn
