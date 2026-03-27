0x89BCC0: sub     esp, 1Ch
0x89BCC3: push    ebx
0x89BCC4: push    ebp
0x89BCC5: push    esi
0x89BCC6: mov     esi, [esp+28h+arg_0]
0x89BCCA: xor     ebp, ebp
0x89BCCC: cmp     [esi+4], bp
0x89BCD0: mov     ebx, ecx
0x89BCD2: jz      short loc_89BCD8
0x89BCD4: inc     word ptr [esi+6]
0x89BCD8: mov     ecx, [ebx+88h]
0x89BCDE: push    edi
0x89BCDF: inc     ecx
0x89BCE0: push    esi
0x89BCE1: push    ebx
0x89BCE2: mov     [ebx+88h], ecx
0x89BCE8: call    sub_8DC2F0
0x89BCED: mov     edx, [esi]
0x89BCEF: lea     eax, [esp+34h+var_10]
0x89BCF3: mov     [esp+34h+var_1C], eax
0x89BCF7: add     esp, 8
0x89BCFA: lea     eax, [esp+2Ch+var_1C]
0x89BCFE: push    eax
0x89BCFF: mov     ecx, esi
0x89BD01: mov     [esp+30h+var_18], ebp
0x89BD05: mov     [esp+30h+var_14], 80000004h
0x89BD0D: call    dword ptr [edx+0Ch]
0x89BD10: cmp     [esp+2Ch+var_18], ebp
0x89BD14: jle     short loc_89BD65
0x89BD16: jmp     short loc_89BD20
0x89BD18: align 10h
0x89BD20: mov     ecx, [esp+2Ch+var_1C]
0x89BD24: mov     edi, [ecx+ebp*4]
0x89BD27: mov     ecx, [edi+0BCh]
0x89BD2D: xor     eax, eax
0x89BD2F: test    ecx, ecx
0x89BD31: jle     short loc_89BD4C
0x89BD33: mov     edx, [edi+0B8h]
0x89BD39: lea     esp, [esp+0]
0x89BD40: cmp     [edx], esi
0x89BD42: jz      short loc_89BD4F
0x89BD44: inc     eax
0x89BD45: add     edx, 4
0x89BD48: cmp     eax, ecx
0x89BD4A: jl      short loc_89BD40
0x89BD4C: or      eax, 0FFFFFFFFh
0x89BD4F: mov     edx, [edi+0B8h]
0x89BD55: mov     dword ptr [edx+eax*4], 0
0x89BD5C: mov     eax, [esp+2Ch+var_18]
0x89BD60: inc     ebp
0x89BD61: cmp     ebp, eax
0x89BD63: jl      short loc_89BD20
0x89BD65: mov     ebp, [esi+0Ch]
0x89BD68: push    esi
0x89BD69: mov     ecx, ebp
0x89BD6B: call    sub_8DDC90
0x89BD70: cmp     word ptr [esi+4], 0
0x89BD75: mov     dword ptr [esi+8], 0
0x89BD7C: jz      short loc_89BD91
0x89BD7E: dec     word ptr [esi+6]
0x89BD82: cmp     word ptr [esi+6], 0
0x89BD87: jnz     short loc_89BD91
0x89BD89: mov     eax, [esi]
0x89BD8B: push    1
0x89BD8D: mov     ecx, esi
0x89BD8F: call    dword ptr [eax]
0x89BD91: cmp     word ptr [ebp+22h], 0FFFFh
0x89BD97: mov     eax, [ebp+1Ch]
0x89BD9A: jnz     short loc_89BDCD
0x89BD9C: mov     cx, [eax+54h]
0x89BDA0: lea     edi, [eax+50h]
0x89BDA3: mov     [ebp+22h], cx
0x89BDA7: mov     edx, [edi+8]
0x89BDAA: mov     eax, [edi+4]
0x89BDAD: and     edx, 3FFFFFFFh
0x89BDB3: cmp     eax, edx
0x89BDB5: jnz     short loc_89BDC2
0x89BDB7: push    4
0x89BDB9: push    edi
0x89BDBA: call    sub_8A6EE0
0x89BDBF: add     esp, 8
0x89BDC2: mov     eax, [edi+4]
0x89BDC5: mov     ecx, [edi]
0x89BDC7: mov     [ecx+eax*4], ebp
0x89BDCA: inc     dword ptr [edi+4]
0x89BDCD: mov     eax, [esp+2Ch+var_14]
0x89BDD1: test    eax, eax
0x89BDD3: pop     edi
0x89BDD4: js      short loc_89BE0B
0x89BDD6: mov     ecx, large fs:2Ch
0x89BDDD: mov     edx, ds:0BA9DE4h
0x89BDE3: mov     edx, [ecx+edx*4]
0x89BDE6: mov     ecx, [edx+19Ch]
0x89BDEC: test    ecx, ecx
0x89BDEE: jnz     short loc_89BDF6
0x89BDF0: mov     ecx, ds:0BA7D9Ch
0x89BDF6: and     eax, 3FFFFFFFh
0x89BDFB: push    14h
0x89BDFD: shl     eax, 2
0x89BE00: push    eax
0x89BE01: mov     eax, [esp+30h+var_1C]
0x89BE05: push    eax
0x89BE06: call    sub_8A75D0
0x89BE0B: dec     dword ptr [ebx+88h]
0x89BE11: jnz     short loc_89BE2E
0x89BE13: mov     eax, [ebx+84h]
0x89BE19: test    eax, eax
0x89BE1B: jz      short loc_89BE2E
0x89BE1D: mov     al, [ebx+90h]
0x89BE23: test    al, al
0x89BE25: jnz     short loc_89BE2E
0x89BE27: mov     ecx, ebx
0x89BE29: call    sub_899210
0x89BE2E: cmp     word ptr [esi+4], 0
0x89BE33: jz      short loc_89BE48
0x89BE35: dec     word ptr [esi+6]
0x89BE39: cmp     word ptr [esi+6], 0
0x89BE3E: jnz     short loc_89BE48
0x89BE40: mov     edx, [esi]
0x89BE42: push    1
0x89BE44: mov     ecx, esi
0x89BE46: call    dword ptr [edx]
0x89BE48: pop     esi
0x89BE49: pop     ebp
0x89BE4A: pop     ebx
0x89BE4B: add     esp, 1Ch
0x89BE4E: retn    4
