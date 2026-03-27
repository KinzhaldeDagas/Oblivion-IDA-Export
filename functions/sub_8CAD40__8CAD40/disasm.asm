0x8CAD40: push    ecx
0x8CAD41: push    edi
0x8CAD42: mov     edi, ecx
0x8CAD44: mov     eax, [edi+0Ch]
0x8CAD47: test    eax, eax
0x8CAD49: jz      loc_8CAE36
0x8CAD4F: push    ebx
0x8CAD50: push    ebp
0x8CAD51: push    esi
0x8CAD52: mov     esi, [esp+14h+arg_0]
0x8CAD56: lea     ebx, [edi+4Ch]
0x8CAD59: push    ebx
0x8CAD5A: mov     ecx, esi
0x8CAD5C: call    sub_899CA0
0x8CAD61: lea     ebp, [edi+50h]
0x8CAD64: push    ebp
0x8CAD65: mov     ecx, esi
0x8CAD67: call    sub_899CE0
0x8CAD6C: lea     eax, [edi+58h]
0x8CAD6F: push    eax
0x8CAD70: mov     ecx, esi
0x8CAD72: mov     [esp+18h+arg_0], eax
0x8CAD76: call    sub_899C20
0x8CAD7B: add     edi, 54h ; 'T'
0x8CAD7E: push    edi
0x8CAD7F: mov     ecx, esi
0x8CAD81: mov     [esp+18h+var_4], edi
0x8CAD85: call    sub_899C60
0x8CAD8A: mov     ecx, esi
0x8CAD8C: call    sub_8991C0
0x8CAD91: mov     esi, eax
0x8CAD93: mov     eax, [esi+0Ch]
0x8CAD96: xor     edi, edi
0x8CAD98: test    eax, eax
0x8CAD9A: jle     short loc_8CADB6
0x8CAD9C: lea     esp, [esp+0]
0x8CADA0: mov     ecx, [esi+8]
0x8CADA3: mov     edx, [ecx+edi*4]
0x8CADA6: mov     eax, [ebx]
0x8CADA8: push    edx
0x8CADA9: mov     ecx, ebx
0x8CADAB: call    dword ptr [eax+4]
0x8CADAE: mov     eax, [esi+0Ch]
0x8CADB1: inc     edi
0x8CADB2: cmp     edi, eax
0x8CADB4: jl      short loc_8CADA0
0x8CADB6: mov     eax, [esi+30h]
0x8CADB9: xor     edi, edi
0x8CADBB: test    eax, eax
0x8CADBD: jle     short loc_8CADD7
0x8CADBF: nop
0x8CADC0: mov     ecx, [esi+2Ch]
0x8CADC3: mov     edx, [ecx+edi*4]
0x8CADC6: mov     eax, [ebp+0]
0x8CADC9: push    edx
0x8CADCA: mov     ecx, ebp
0x8CADCC: call    dword ptr [eax+4]
0x8CADCF: mov     eax, [esi+30h]
0x8CADD2: inc     edi
0x8CADD3: cmp     edi, eax
0x8CADD5: jl      short loc_8CADC0
0x8CADD7: mov     eax, [esi+24h]
0x8CADDA: xor     edi, edi
0x8CADDC: test    eax, eax
0x8CADDE: jle     short loc_8CADF8
0x8CADE0: mov     edx, [esi+20h]
0x8CADE3: mov     ecx, [esp+14h+arg_0]
0x8CADE7: mov     edx, [edx+edi*4]
0x8CADEA: mov     eax, [ecx]
0x8CADEC: push    edx
0x8CADED: call    dword ptr [eax+4]
0x8CADF0: mov     eax, [esi+24h]
0x8CADF3: inc     edi
0x8CADF4: cmp     edi, eax
0x8CADF6: jl      short loc_8CADE0
0x8CADF8: mov     eax, [esi+18h]
0x8CADFB: xor     edi, edi
0x8CADFD: test    eax, eax
0x8CADFF: jle     short loc_8CAE19
0x8CAE01: mov     edx, [esi+14h]
0x8CAE04: mov     ecx, [esp+14h+var_4]
0x8CAE08: mov     edx, [edx+edi*4]
0x8CAE0B: mov     eax, [ecx]
0x8CAE0D: push    edx
0x8CAE0E: call    dword ptr [eax+4]
0x8CAE11: mov     eax, [esi+18h]
0x8CAE14: inc     edi
0x8CAE15: cmp     edi, eax
0x8CAE17: jl      short loc_8CAE01
0x8CAE19: cmp     word ptr [esi+4], 0
0x8CAE1E: jz      short loc_8CAE33
0x8CAE20: dec     word ptr [esi+6]
0x8CAE24: cmp     word ptr [esi+6], 0
0x8CAE29: jnz     short loc_8CAE33
0x8CAE2B: mov     eax, [esi]
0x8CAE2D: push    1
0x8CAE2F: mov     ecx, esi
0x8CAE31: call    dword ptr [eax]
0x8CAE33: pop     esi
0x8CAE34: pop     ebp
0x8CAE35: pop     ebx
0x8CAE36: pop     edi
0x8CAE37: pop     ecx
0x8CAE38: retn    4
