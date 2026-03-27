0x77D720: push    ebx
0x77D721: mov     ebx, [esp+4+arg_0]
0x77D725: push    ebp
0x77D726: push    esi
0x77D727: xor     ebp, ebp
0x77D729: cmp     [esp+0Ch+arg_4], 0
0x77D72E: push    edi
0x77D72F: mov     edi, ecx
0x77D731: jnz     short loc_77D73F
0x77D733: push    ebx
0x77D734: call    sub_77D220
0x77D739: mov     esi, eax
0x77D73B: test    esi, esi
0x77D73D: jnz     short loc_77D74D
0x77D73F: push    ebx
0x77D740: mov     ecx, edi
0x77D742: call    sub_77D650
0x77D747: mov     esi, eax
0x77D749: test    esi, esi
0x77D74B: jz      short loc_77D770
0x77D74D: push    ebx
0x77D74E: mov     ecx, esi
0x77D750: call    sub_782840
0x77D755: mov     ebx, eax
0x77D757: mov     eax, [esi+24h]
0x77D75A: cmp     eax, [edi+30h]
0x77D75D: jbe     short loc_77D767
0x77D75F: push    esi
0x77D760: mov     ecx, edi
0x77D762: call    sub_77D270
0x77D767: pop     edi
0x77D768: pop     esi
0x77D769: pop     ebp
0x77D76A: mov     eax, ebx
0x77D76C: pop     ebx
0x77D76D: retn    8
0x77D770: pop     edi
0x77D771: pop     esi
0x77D772: mov     eax, ebp
0x77D774: pop     ebp
0x77D775: pop     ebx
0x77D776: retn    8
