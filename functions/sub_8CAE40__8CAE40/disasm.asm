0x8CAE40: push    ecx
0x8CAE41: push    edi
0x8CAE42: mov     edi, ecx
0x8CAE44: mov     eax, [edi+0Ch]
0x8CAE47: test    eax, eax
0x8CAE49: jz      loc_8CAF36
0x8CAE4F: push    ebx
0x8CAE50: push    ebp
0x8CAE51: push    esi
0x8CAE52: mov     esi, [esp+14h+arg_0]
0x8CAE56: lea     ebx, [edi+4Ch]
0x8CAE59: push    ebx
0x8CAE5A: mov     ecx, esi
0x8CAE5C: call    sub_8989E0
0x8CAE61: lea     ebp, [edi+50h]
0x8CAE64: push    ebp
0x8CAE65: mov     ecx, esi
0x8CAE67: call    sub_898A30
0x8CAE6C: lea     eax, [edi+58h]
0x8CAE6F: push    eax
0x8CAE70: mov     ecx, esi
0x8CAE72: mov     [esp+18h+arg_0], eax
0x8CAE76: call    sub_898940
0x8CAE7B: add     edi, 54h ; 'T'
0x8CAE7E: push    edi
0x8CAE7F: mov     ecx, esi
0x8CAE81: mov     [esp+18h+var_4], edi
0x8CAE85: call    sub_898990
0x8CAE8A: mov     ecx, esi
0x8CAE8C: call    sub_8991C0
0x8CAE91: mov     esi, eax
0x8CAE93: mov     eax, [esi+0Ch]
0x8CAE96: xor     edi, edi
0x8CAE98: test    eax, eax
0x8CAE9A: jle     short loc_8CAEB6
0x8CAE9C: lea     esp, [esp+0]
0x8CAEA0: mov     ecx, [esi+8]
0x8CAEA3: mov     edx, [ecx+edi*4]
0x8CAEA6: mov     eax, [ebx]
0x8CAEA8: push    edx
0x8CAEA9: mov     ecx, ebx
0x8CAEAB: call    dword ptr [eax+8]
0x8CAEAE: mov     eax, [esi+0Ch]
0x8CAEB1: inc     edi
0x8CAEB2: cmp     edi, eax
0x8CAEB4: jl      short loc_8CAEA0
0x8CAEB6: mov     eax, [esi+30h]
0x8CAEB9: xor     edi, edi
0x8CAEBB: test    eax, eax
0x8CAEBD: jle     short loc_8CAED7
0x8CAEBF: nop
0x8CAEC0: mov     ecx, [esi+2Ch]
0x8CAEC3: mov     edx, [ecx+edi*4]
0x8CAEC6: mov     eax, [ebp+0]
0x8CAEC9: push    edx
0x8CAECA: mov     ecx, ebp
0x8CAECC: call    dword ptr [eax+8]
0x8CAECF: mov     eax, [esi+30h]
0x8CAED2: inc     edi
0x8CAED3: cmp     edi, eax
0x8CAED5: jl      short loc_8CAEC0
0x8CAED7: mov     eax, [esi+24h]
0x8CAEDA: xor     edi, edi
0x8CAEDC: test    eax, eax
0x8CAEDE: jle     short loc_8CAEF8
0x8CAEE0: mov     edx, [esi+20h]
0x8CAEE3: mov     ecx, [esp+14h+arg_0]
0x8CAEE7: mov     edx, [edx+edi*4]
0x8CAEEA: mov     eax, [ecx]
0x8CAEEC: push    edx
0x8CAEED: call    dword ptr [eax+8]
0x8CAEF0: mov     eax, [esi+24h]
0x8CAEF3: inc     edi
0x8CAEF4: cmp     edi, eax
0x8CAEF6: jl      short loc_8CAEE0
0x8CAEF8: mov     eax, [esi+18h]
0x8CAEFB: xor     edi, edi
0x8CAEFD: test    eax, eax
0x8CAEFF: jle     short loc_8CAF19
0x8CAF01: mov     edx, [esi+14h]
0x8CAF04: mov     ecx, [esp+14h+var_4]
0x8CAF08: mov     edx, [edx+edi*4]
0x8CAF0B: mov     eax, [ecx]
0x8CAF0D: push    edx
0x8CAF0E: call    dword ptr [eax+8]
0x8CAF11: mov     eax, [esi+18h]
0x8CAF14: inc     edi
0x8CAF15: cmp     edi, eax
0x8CAF17: jl      short loc_8CAF01
0x8CAF19: cmp     word ptr [esi+4], 0
0x8CAF1E: jz      short loc_8CAF33
0x8CAF20: dec     word ptr [esi+6]
0x8CAF24: cmp     word ptr [esi+6], 0
0x8CAF29: jnz     short loc_8CAF33
0x8CAF2B: mov     eax, [esi]
0x8CAF2D: push    1
0x8CAF2F: mov     ecx, esi
0x8CAF31: call    dword ptr [eax]
0x8CAF33: pop     esi
0x8CAF34: pop     ebp
0x8CAF35: pop     ebx
0x8CAF36: pop     edi
0x8CAF37: pop     ecx
0x8CAF38: retn    4
