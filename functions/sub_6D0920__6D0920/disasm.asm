0x6D0920: push    ebx
0x6D0921: mov     ebx, [esp+4+arg_0]
0x6D0925: push    esi
0x6D0926: push    ebx
0x6D0927: mov     esi, ecx
0x6D0929: call    sub_754EA0
0x6D092E: test    al, al
0x6D0930: jnz     short loc_6D0937
0x6D0932: pop     esi
0x6D0933: pop     ebx
0x6D0934: retn    4
0x6D0937: mov     ecx, [esi+50h]
0x6D093A: test    ecx, ecx
0x6D093C: jz      short loc_6D0946
0x6D093E: mov     eax, [ecx]
0x6D0940: mov     edx, [eax+24h]
0x6D0943: push    ebx
0x6D0944: call    edx
0x6D0946: mov     eax, [esi]
0x6D0948: mov     edx, [eax+74h]
0x6D094B: push    edi
0x6D094C: mov     ecx, esi
0x6D094E: xor     edi, edi
0x6D0950: call    edx
0x6D0952: test    ax, ax
0x6D0955: jbe     short loc_6D0983
0x6D0957: mov     eax, [esi]
0x6D0959: mov     edx, [eax+80h]
0x6D095F: push    edi
0x6D0960: mov     ecx, esi
0x6D0962: call    edx
0x6D0964: test    eax, eax
0x6D0966: jz      short loc_6D0972
0x6D0968: mov     edx, [eax]
0x6D096A: mov     ecx, eax
0x6D096C: mov     eax, [edx+24h]
0x6D096F: push    ebx
0x6D0970: call    eax
0x6D0972: mov     edx, [esi]
0x6D0974: mov     eax, [edx+74h]
0x6D0977: mov     ecx, esi
0x6D0979: add     edi, 1
0x6D097C: call    eax
0x6D097E: cmp     di, ax
0x6D0981: jb      short loc_6D0957
0x6D0983: pop     edi
0x6D0984: pop     esi
0x6D0985: mov     al, 1
0x6D0987: pop     ebx
0x6D0988: retn    4
