0x8C3230: push    esi
0x8C3231: push    edi
0x8C3232: mov     edi, [esp+8+arg_0]
0x8C3236: push    edi
0x8C3237: mov     esi, ecx
0x8C3239: call    sub_8A0C80
0x8C323E: mov     esi, [esi+4]
0x8C3241: mov     eax, [edi+220h]
0x8C3247: push    1
0x8C3249: lea     ecx, [esp+0Ch+arg_0]
0x8C324D: push    ecx
0x8C324E: push    10h
0x8C3250: lea     edx, [esi+10h]
0x8C3253: push    edx
0x8C3254: push    eax
0x8C3255: mov     eax, [eax+8]
0x8C3258: mov     [esp+1Ch+arg_0], 10h
0x8C3260: call    eax
0x8C3262: mov     edi, [edi+220h]
0x8C3268: mov     edx, [edi+8]
0x8C326B: push    1
0x8C326D: lea     ecx, [esp+20h+arg_0]
0x8C3271: push    ecx
0x8C3272: push    10h
0x8C3274: add     esi, 20h ; ' '
0x8C3277: push    esi
0x8C3278: push    edi
0x8C3279: mov     [esp+30h+arg_0], 10h
0x8C3281: call    edx
0x8C3283: add     esp, 28h
0x8C3286: pop     edi
0x8C3287: pop     esi
0x8C3288: retn    4
