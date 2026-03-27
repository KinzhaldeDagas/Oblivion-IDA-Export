0x84D900: push    0FFFFFFFFh
0x84D902: push    offset SEH_882120
0x84D907: mov     eax, large fs:0
0x84D90D: push    eax
0x84D90E: push    ebx
0x84D90F: push    ebp
0x84D910: push    esi
0x84D911: push    edi
0x84D912: mov     eax, ds:0B30AACh
0x84D917: xor     eax, esp
0x84D919: push    eax
0x84D91A: lea     eax, [esp+20h+var_C]
0x84D91E: mov     large fs:0, eax
0x84D924: mov     ebx, ecx
0x84D926: mov     esi, [esp+20h+arg_8]
0x84D92A: mov     eax, [esi+10h]
0x84D92D: mov     edi, ds:0B456A8h
0x84D933: push    eax
0x84D934: call    sub_848C40
0x84D939: mov     esi, [esi+0Ch]
0x84D93C: push    esi
0x84D93D: mov     ecx, ebx
0x84D93F: call    sub_848E50
0x84D944: mov     eax, [edi+24h]
0x84D947: mov     ebp, [esp+20h+arg_C]
0x84D94B: mov     esi, [eax]
0x84D94D: mov     edx, [ebp+0]
0x84D950: mov     eax, [edx+88h]
0x84D956: push    0
0x84D958: mov     ecx, ebp
0x84D95A: mov     [esp+24h+arg_8], esi
0x84D95E: call    eax
0x84D960: mov     esi, [esi+4]
0x84D963: cmp     esi, eax
0x84D965: mov     [esp+20h+arg_C], eax
0x84D969: jz      short loc_84D9A6
0x84D96B: test    esi, esi
0x84D96D: jz      short loc_84D98F
0x84D96F: lea     ecx, [esi+4]
0x84D972: push    ecx; lpAddend
0x84D973: call    dword ptr ds:0A2807Ch
0x84D979: test    eax, eax
0x84D97B: jnz     short loc_84D98B
0x84D97D: test    esi, esi
0x84D97F: jz      short loc_84D98B
0x84D981: mov     edx, [esi]
0x84D983: mov     eax, [edx]
0x84D985: push    1
0x84D987: mov     ecx, esi
0x84D989: call    eax
0x84D98B: mov     eax, [esp+20h+arg_C]
0x84D98F: test    eax, eax
0x84D991: mov     esi, [esp+20h+arg_8]
0x84D995: mov     [esi+4], eax
0x84D998: jz      short loc_84D9AA
0x84D99A: add     eax, 4
0x84D99D: push    eax; lpAddend
0x84D99E: call    dword ptr ds:0A28078h
0x84D9A4: jmp     short loc_84D9AA
0x84D9A6: mov     esi, [esp+20h+arg_8]
0x84D9AA: test    esi, esi
0x84D9AC: jz      short loc_84D9C9
0x84D9AE: cmp     byte ptr ds:0B42CDDh, 0
0x84D9B5: jz      short loc_84D9C9
0x84D9B7: mov     edx, [ebp+0]
0x84D9BA: mov     eax, [edx+78h]
0x84D9BD: mov     ecx, ebp
0x84D9BF: call    eax
0x84D9C1: push    eax
0x84D9C2: mov     ecx, esi
0x84D9C4: call    sub_7715E0
0x84D9C9: mov     ecx, [edi+24h]
0x84D9CC: mov     esi, [ecx+4]
0x84D9CF: mov     edx, [ebp+0]
0x84D9D2: mov     eax, [edx+8Ch]
0x84D9D8: push    0
0x84D9DA: mov     ecx, ebp
0x84D9DC: mov     [esp+24h+arg_8], esi
0x84D9E0: call    eax
0x84D9E2: test    eax, eax
0x84D9E4: jz      short loc_84D9FB
0x84D9E6: mov     edx, [ebp+0]
0x84D9E9: mov     eax, [edx+8Ch]
0x84D9EF: push    0
0x84D9F1: mov     ecx, ebp
0x84D9F3: call    eax
0x84D9F5: mov     [esp+20h+arg_C], eax
0x84D9F9: jmp     short loc_84DA1A
0x84D9FB: test    dword ptr [ebp+1Ch], 80h
0x84DA02: jbe     short loc_84DA10
0x84DA04: mov     ecx, ds:0B430F0h
0x84DA0A: mov     [esp+20h+arg_C], ecx
0x84DA0E: jmp     short loc_84DA1A
0x84DA10: mov     edx, ds:0B430DCh
0x84DA16: mov     [esp+20h+arg_C], edx
0x84DA1A: mov     esi, [esi+4]
0x84DA1D: cmp     esi, [esp+20h+arg_C]
0x84DA21: jz      short loc_84DA5E
0x84DA23: test    esi, esi
0x84DA25: jz      short loc_84DA43
0x84DA27: lea     eax, [esi+4]
0x84DA2A: push    eax; lpAddend
0x84DA2B: call    dword ptr ds:0A2807Ch
0x84DA31: test    eax, eax
0x84DA33: jnz     short loc_84DA43
0x84DA35: test    esi, esi
0x84DA37: jz      short loc_84DA43
0x84DA39: mov     edx, [esi]
0x84DA3B: mov     eax, [edx]
0x84DA3D: push    1
0x84DA3F: mov     ecx, esi
0x84DA41: call    eax
0x84DA43: mov     eax, [esp+20h+arg_C]
0x84DA47: test    eax, eax
0x84DA49: mov     esi, [esp+20h+arg_8]
0x84DA4D: mov     [esi+4], eax
0x84DA50: jz      short loc_84DA62
0x84DA52: add     eax, 4
0x84DA55: push    eax; lpAddend
0x84DA56: call    dword ptr ds:0A28078h
0x84DA5C: jmp     short loc_84DA62
0x84DA5E: mov     esi, [esp+20h+arg_8]
0x84DA62: test    esi, esi
0x84DA64: jz      short loc_84DA81
0x84DA66: cmp     byte ptr ds:0B42CDDh, 0
0x84DA6D: jz      short loc_84DA81
0x84DA6F: mov     edx, [ebp+0]
0x84DA72: mov     eax, [edx+78h]
0x84DA75: mov     ecx, ebp
0x84DA77: call    eax
0x84DA79: push    eax
0x84DA7A: mov     ecx, esi
0x84DA7C: call    sub_7715E0
0x84DA81: mov     esi, 1
0x84DA86: add     [edi+60h], esi
0x84DA89: mov     [esp+20h+arg_8], edi
0x84DA8D: mov     edx, [ebx+38h]
0x84DA90: lea     ecx, [esp+20h+arg_8]
0x84DA94: push    ecx
0x84DA95: push    edx
0x84DA96: lea     ecx, [ebx+40h]
0x84DA99: mov     [esp+28h+var_4], 0
0x84DAA1: call    sub_76CE40
0x84DAA6: or      eax, 0FFFFFFFFh
0x84DAA9: add     [edi+60h], eax
0x84DAAC: mov     [esp+20h+var_4], eax
0x84DAB0: jnz     short loc_84DAB9
0x84DAB2: mov     ecx, edi
0x84DAB4: call    sub_7604D0
0x84DAB9: add     [ebx+38h], esi
0x84DABC: mov     ecx, [esp+20h+var_C]
0x84DAC0: mov     large fs:0, ecx
0x84DAC7: pop     ecx
0x84DAC8: pop     edi
0x84DAC9: pop     esi
0x84DACA: pop     ebp
0x84DACB: pop     ebx
0x84DACC: add     esp, 0Ch
0x84DACF: retn    10h
