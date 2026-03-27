0x954860: mov     edx, [esp+arg_4]
0x954864: mov     eax, [edx+34h]
0x954867: mov     ecx, [esp+arg_0]
0x95486B: push    ebx
0x95486C: push    esi
0x95486D: mov     esi, [esp+8+arg_8]
0x954871: mov     [esi+34h], eax
0x954874: mov     ebx, [edx+34h]
0x954877: push    edi
0x954878: mov     edi, [ecx+24h]
0x95487B: mov     ecx, [esi+38h]
0x95487E: mov     eax, ecx
0x954880: sub     eax, ebx
0x954882: add     eax, edi
0x954884: cmp     eax, 20h ; ' '
0x954887: jb      short loc_9548C5
0x954889: cmp     ecx, 2
0x95488C: ja      short loc_954895
0x95488E: cmp     eax, 100h
0x954893: jb      short loc_9548C5
0x954895: cmp     ecx, 20h ; ' '
0x954898: jnb     short loc_9548A0
0x95489A: cmp     dword ptr [edx+38h], 20h ; ' '
0x95489E: jnb     short loc_9548C2
0x9548A0: cmp     ecx, 100h
0x9548A6: jnb     short loc_9548B1
0x9548A8: cmp     dword ptr [edx+38h], 100h
0x9548AF: jnb     short loc_9548C2
0x9548B1: cmp     ecx, 10000h
0x9548B7: jnb     short loc_9548C5
0x9548B9: cmp     dword ptr [edx+38h], 10000h
0x9548C0: jb      short loc_9548C5
0x9548C2: mov     [esi+34h], edi
0x9548C5: pop     edi
0x9548C6: pop     esi
0x9548C7: pop     ebx
0x9548C8: retn    0Ch
