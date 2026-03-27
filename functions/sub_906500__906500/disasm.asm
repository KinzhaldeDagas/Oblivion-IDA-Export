0x906500: mov     eax, [ecx+10h]
0x906503: push    esi
0x906504: mov     esi, [ecx+0Ch]
0x906507: lea     eax, [eax+eax*2]
0x90650A: mov     ecx, esi
0x90650C: push    edi
0x90650D: lea     edi, [ecx+eax*4]
0x906510: cmp     esi, edi
0x906512: jz      short loc_906537
0x906514: push    ebx
0x906515: mov     ebx, [esp+0Ch+arg_0]
0x906519: lea     esp, [esp+0]
0x906520: mov     eax, [esi+8]
0x906523: test    eax, eax
0x906525: jz      short loc_90652F
0x906527: mov     ecx, eax
0x906529: mov     edx, [ecx]
0x90652B: push    ebx
0x90652C: call    dword ptr [edx+20h]
0x90652F: add     esi, 0Ch
0x906532: cmp     esi, edi
0x906534: jnz     short loc_906520
0x906536: pop     ebx
0x906537: pop     edi
0x906538: pop     esi
0x906539: retn    4
