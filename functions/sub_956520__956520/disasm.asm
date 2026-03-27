0x956520: mov     edx, [ecx+0Ch]
0x956523: mov     eax, [ecx+10h]
0x956526: sub     eax, edx
0x956528: mov     edx, [ecx+8]
0x95652B: push    ebx
0x95652C: mov     bl, [esp+4+arg_0]
0x956530: mov     [eax+edx-1], bl
0x956534: mov     ebx, [ecx+0Ch]
0x956537: mov     edx, [ecx+8]
0x95653A: inc     ebx
0x95653B: mov     eax, ebx
0x95653D: cmp     eax, edx
0x95653F: mov     [ecx+0Ch], ebx
0x956542: pop     ebx
0x956543: jl      short locret_95654A
0x956545: call    sub_9564D0
0x95654A: retn    4
