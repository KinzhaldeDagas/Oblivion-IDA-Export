0x8DCAC0: push    ebx
0x8DCAC1: mov     ebx, [esp+4+arg_0]
0x8DCAC5: mov     ecx, [ebx+88h]
0x8DCACB: inc     ecx
0x8DCACC: push    esi
0x8DCACD: mov     [ebx+88h], ecx
0x8DCAD3: mov     esi, [ebx+104h]
0x8DCAD9: dec     esi
0x8DCADA: js      short loc_8DCAFA
0x8DCADC: lea     esp, [esp+0]
0x8DCAE0: mov     eax, [ebx+100h]
0x8DCAE6: mov     ecx, [eax+esi*4]
0x8DCAE9: test    ecx, ecx
0x8DCAEB: jz      short loc_8DCAF7
0x8DCAED: mov     eax, [esp+8+arg_4]
0x8DCAF1: mov     edx, [ecx]
0x8DCAF3: push    eax
0x8DCAF4: call    dword ptr [edx+4]
0x8DCAF7: dec     esi
0x8DCAF8: jns     short loc_8DCAE0
0x8DCAFA: mov     edx, [ebx+104h]
0x8DCB00: dec     edx
0x8DCB01: push    ebp
0x8DCB02: push    edi
0x8DCB03: js      short loc_8DCB4E
0x8DCB05: jmp     short loc_8DCB10
0x8DCB07: align 10h
0x8DCB10: mov     ecx, [ebx+100h]
0x8DCB16: cmp     dword ptr [ecx+edx*4], 0
0x8DCB1A: jnz     short loc_8DCB4B
0x8DCB1C: mov     edi, [ebx+104h]
0x8DCB22: dec     edi
0x8DCB23: mov     ecx, edi
0x8DCB25: cmp     edx, ecx
0x8DCB27: mov     [ebx+104h], edi
0x8DCB2D: mov     eax, edx
0x8DCB2F: jge     short loc_8DCB4B
0x8DCB31: mov     ecx, [ebx+100h]
0x8DCB37: mov     esi, [ecx+eax*4+4]
0x8DCB3B: lea     ecx, [ecx+eax*4]
0x8DCB3E: mov     [ecx], esi
0x8DCB40: mov     ecx, [ebx+104h]
0x8DCB46: inc     eax
0x8DCB47: cmp     eax, ecx
0x8DCB49: jl      short loc_8DCB31
0x8DCB4B: dec     edx
0x8DCB4C: jns     short loc_8DCB10
0x8DCB4E: mov     eax, [esp+10h+arg_4]
0x8DCB52: mov     ecx, [eax+38h]
0x8DCB55: xor     ebp, ebp
0x8DCB57: test    ecx, ecx
0x8DCB59: jle     short loc_8DCBD2
0x8DCB5B: jmp     short loc_8DCB60
0x8DCB5D: align 10h
0x8DCB60: mov     edx, [eax+34h]
0x8DCB63: mov     esi, [edx+ebp*4]
0x8DCB66: mov     edi, [esi+0A4h]
0x8DCB6C: add     esi, 0A0h ; ' '
0x8DCB72: dec     edi
0x8DCB73: js      short loc_8DCB91
0x8DCB75: mov     eax, [esi]
0x8DCB77: mov     ecx, [eax+edi*4]
0x8DCB7A: test    ecx, ecx
0x8DCB7C: jz      short loc_8DCB8E
0x8DCB7E: mov     eax, [esp+10h+arg_4]
0x8DCB82: mov     eax, [eax+34h]
0x8DCB85: mov     eax, [eax+ebp*4]
0x8DCB88: mov     edx, [ecx]
0x8DCB8A: push    eax
0x8DCB8B: call    dword ptr [edx+8]
0x8DCB8E: dec     edi
0x8DCB8F: jns     short loc_8DCB75
0x8DCB91: mov     edx, [esi+4]
0x8DCB94: dec     edx
0x8DCB95: js      short loc_8DCBC6
0x8DCB97: mov     ecx, [esi]
0x8DCB99: cmp     dword ptr [ecx+edx*4], 0
0x8DCB9D: jnz     short loc_8DCBC3
0x8DCB9F: mov     eax, [esi+4]
0x8DCBA2: dec     eax
0x8DCBA3: mov     ecx, eax
0x8DCBA5: cmp     edx, ecx
0x8DCBA7: mov     [esi+4], eax
0x8DCBAA: mov     eax, edx
0x8DCBAC: jge     short loc_8DCBC3
0x8DCBAE: mov     edi, edi
0x8DCBB0: mov     ecx, [esi]
0x8DCBB2: mov     edi, [ecx+eax*4+4]
0x8DCBB6: lea     ecx, [ecx+eax*4]
0x8DCBB9: mov     [ecx], edi
0x8DCBBB: mov     ecx, [esi+4]
0x8DCBBE: inc     eax
0x8DCBBF: cmp     eax, ecx
0x8DCBC1: jl      short loc_8DCBB0
0x8DCBC3: dec     edx
0x8DCBC4: jns     short loc_8DCB97
0x8DCBC6: mov     eax, [esp+10h+arg_4]
0x8DCBCA: mov     ecx, [eax+38h]
0x8DCBCD: inc     ebp
0x8DCBCE: cmp     ebp, ecx
0x8DCBD0: jl      short loc_8DCB60
0x8DCBD2: mov     eax, [ebx+88h]
0x8DCBD8: dec     eax
0x8DCBD9: pop     edi
0x8DCBDA: mov     [ebx+88h], eax
0x8DCBE0: pop     ebp
0x8DCBE1: jnz     short loc_8DCC00
0x8DCBE3: mov     eax, [ebx+84h]
0x8DCBE9: test    eax, eax
0x8DCBEB: jz      short loc_8DCC00
0x8DCBED: mov     al, [ebx+90h]
0x8DCBF3: test    al, al
0x8DCBF5: jnz     short loc_8DCC00
0x8DCBF7: pop     esi
0x8DCBF8: mov     ecx, ebx
0x8DCBFA: pop     ebx
0x8DCBFB: jmp     sub_899210
0x8DCC00: pop     esi
0x8DCC01: pop     ebx
0x8DCC02: retn
