0x4CD320: push    ebx
0x4CD321: mov     ebx, [esp+4+arg_0]
0x4CD325: push    esi
0x4CD326: mov     esi, ecx
0x4CD328: test    esi, esi
0x4CD32A: jz      short loc_4CD33F
0x4CD32C: mov     eax, [esi]
0x4CD32E: mov     edx, [eax+58h]
0x4CD331: call    edx
0x4CD333: test    eax, eax
0x4CD335: jz      short loc_4CD33F
0x4CD337: push    ebx
0x4CD338: mov     ecx, eax
0x4CD33A: call    sub_899CA0
0x4CD33F: mov     eax, [esi+68h]
0x4CD342: push    edi
0x4CD343: lea     edi, [esi+60h]
0x4CD346: and     eax, 3FFFFFFFh
0x4CD34B: cmp     [edi+4], eax
0x4CD34E: jnz     short loc_4CD35B
0x4CD350: push    4
0x4CD352: push    edi
0x4CD353: call    sub_8A6EE0
0x4CD358: add     esp, 8
0x4CD35B: mov     ecx, [edi+4]
0x4CD35E: mov     edx, [edi]
0x4CD360: mov     [edx+ecx*4], ebx
0x4CD363: add     dword ptr [edi+4], 1
0x4CD367: test    esi, esi
0x4CD369: pop     edi
0x4CD36A: jz      short loc_4CD39A
0x4CD36C: mov     eax, [esi]
0x4CD36E: mov     edx, [eax+58h]
0x4CD371: mov     ecx, esi
0x4CD373: call    edx
0x4CD375: test    eax, eax
0x4CD377: jz      short loc_4CD39A
0x4CD379: test    ebx, ebx
0x4CD37B: jz      short loc_4CD390
0x4CD37D: lea     edx, [ebx+14h]
0x4CD380: push    edx
0x4CD381: mov     ecx, eax
0x4CD383: call    sub_899CE0
0x4CD388: mov     [esi+24h], ebx
0x4CD38B: pop     esi
0x4CD38C: pop     ebx
0x4CD38D: retn    4
0x4CD390: xor     edx, edx
0x4CD392: push    edx
0x4CD393: mov     ecx, eax
0x4CD395: call    sub_899CE0
0x4CD39A: mov     [esi+24h], ebx
0x4CD39D: pop     esi
0x4CD39E: pop     ebx
0x4CD39F: retn    4
