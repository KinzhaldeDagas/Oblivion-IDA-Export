0x956550: mov     al, [esp+arg_4]
0x956554: add     al, [esp+arg_0]
0x956558: mov     edx, [ecx+10h]
0x95655B: push    esi
0x95655C: sub     edx, [ecx+0Ch]
0x95655F: mov     esi, [ecx+8]
0x956562: mov     [edx+esi-1], al
0x956566: mov     esi, [ecx+0Ch]
0x956569: mov     edx, [ecx+8]
0x95656C: inc     esi
0x95656D: mov     eax, esi
0x95656F: cmp     eax, edx
0x956571: mov     [ecx+0Ch], esi
0x956574: pop     esi
0x956575: jl      short locret_95657C
0x956577: call    sub_9564D0
0x95657C: retn    8
