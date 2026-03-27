0x42C600: push    esi
0x42C601: mov     esi, ecx
0x42C603: mov     eax, [esi+154h]
0x42C609: test    eax, eax
0x42C60B: push    edi
0x42C60C: jz      short loc_42C61D
0x42C60E: lea     ecx, [eax+3Ch]
0x42C611: push    ecx
0x42C612: lea     ecx, [eax+200h]
0x42C618: call    NiEnterCriticalSection
0x42C61D: mov     ecx, [esi+30h]
0x42C620: cmp     ecx, 0FFFFFFFFh
0x42C623: jnz     short loc_42C62B
0x42C625: mov     ecx, [esi+148h]
0x42C62B: mov     eax, [esi+158h]
0x42C631: add     eax, ecx
0x42C633: mov     ecx, [esi+154h]
0x42C639: mov     edx, [ecx+30h]
0x42C63C: cmp     edx, 0FFFFFFFFh
0x42C63F: jnz     short loc_42C647
0x42C641: mov     edx, [ecx+148h]
0x42C647: cmp     edx, eax
0x42C649: jz      short loc_42C655
0x42C64B: mov     edx, [ecx]
0x42C64D: push    0
0x42C64F: push    eax
0x42C650: mov     eax, [edx+0Ch]
0x42C653: call    eax
0x42C655: mov     eax, [esi+150h]
0x42C65B: mov     ecx, [esi+154h]
0x42C661: mov     edx, [ecx]
0x42C663: mov     edx, [edx+20h]
0x42C666: push    eax
0x42C667: mov     eax, [esp+0Ch+arg_0]
0x42C66B: push    eax; lpCriticalSection
0x42C66C: call    edx
0x42C66E: mov     edi, eax
0x42C670: add     [esi+148h], edi
0x42C676: mov     esi, [esi+154h]
0x42C67C: test    esi, esi
0x42C67E: jz      short loc_42C68B
0x42C680: lea     ecx, [esi+200h]; lpCriticalSection
0x42C686: call    NiLeaveCriticalSection_0
0x42C68B: mov     eax, edi
0x42C68D: pop     edi
0x42C68E: pop     esi
0x42C68F: retn    8
