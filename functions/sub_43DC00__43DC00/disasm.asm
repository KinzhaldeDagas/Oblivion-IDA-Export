0x43DC00: push    0FFFFFFFFh
0x43DC02: push    offset SEH_43DC00
0x43DC07: mov     eax, large fs:0
0x43DC0D: push    eax
0x43DC0E: sub     esp, 8
0x43DC11: push    ebx
0x43DC12: push    esi
0x43DC13: push    edi
0x43DC14: mov     eax, ___security_cookie
0x43DC19: xor     eax, esp
0x43DC1B: push    eax
0x43DC1C: lea     eax, [esp+24h+var_C]
0x43DC20: mov     large fs:0, eax
0x43DC26: mov     esi, ecx
0x43DC28: mov     ecx, [esi+20h]
0x43DC2B: mov     eax, [ecx]
0x43DC2D: mov     edx, [eax+170h]
0x43DC33: call    edx
0x43DC35: mov     ecx, [esi+20h]
0x43DC38: mov     ebx, eax
0x43DC3A: mov     eax, [ecx]
0x43DC3C: mov     edx, [eax+168h]
0x43DC42: call    edx
0x43DC44: mov     edi, eax
0x43DC46: test    edi, edi
0x43DC48: jnz     short loc_43DC5F
0x43DC4A: mov     eax, [esi+20h]
0x43DC4D: push    eax
0x43DC4E: mov     ecx, ebx
0x43DC50: call    sub_523170
0x43DC55: mov     edi, eax
0x43DC57: test    edi, edi
0x43DC59: jz      loc_43DD2A
0x43DC5F: mov     ecx, [esi+20h]
0x43DC62: push    edi; int
0x43DC63: push    ecx; int
0x43DC64: mov     ecx, ebx; int
0x43DC66: call    sub_5268D0
0x43DC6B: mov     eax, [esi+10h]
0x43DC6E: mov     edx, [esi+14h]
0x43DC71: mov     cl, 10h
0x43DC73: call    __allshr
0x43DC78: movzx   eax, al
0x43DC7B: push    esi
0x43DC7C: push    eax
0x43DC7D: lea     edx, [esp+2Ch+var_14]
0x43DC81: push    edx
0x43DC82: mov     ecx, edi
0x43DC84: call    sub_4788E0
0x43DC89: push    eax
0x43DC8A: lea     ecx, [esi+3Ch]
0x43DC8D: mov     [esp+28h+var_4], 0
0x43DC95: call    sub_4348B0
0x43DC9A: mov     eax, [esp+24h+var_14]
0x43DC9E: test    eax, eax
0x43DCA0: mov     [esp+24h+var_4], 0FFFFFFFFh
0x43DCA8: jz      short loc_43DCC8
0x43DCAA: mov     edi, eax
0x43DCAC: add     eax, 8
0x43DCAF: push    eax; lpAddend
0x43DCB0: call    ds:InterlockedDecrement
0x43DCB6: test    eax, eax
0x43DCB8: jnz     short loc_43DCC8
0x43DCBA: test    edi, edi
0x43DCBC: jz      short loc_43DCC8
0x43DCBE: mov     eax, [edi]
0x43DCC0: mov     edx, [eax]
0x43DCC2: push    1
0x43DCC4: mov     ecx, edi
0x43DCC6: call    edx
0x43DCC8: mov     eax, [esi+10h]
0x43DCCB: mov     edx, [esi+14h]
0x43DCCE: mov     cl, 10h
0x43DCD0: call    __allshr
0x43DCD5: mov     ecx, ModelLoaderPtr
0x43DCDB: movzx   eax, al
0x43DCDE: push    esi
0x43DCDF: push    eax
0x43DCE0: push    ebx
0x43DCE1: lea     eax, [esp+30h+var_10]
0x43DCE5: push    eax
0x43DCE6: call    sub_43BA30
0x43DCEB: push    eax
0x43DCEC: lea     ecx, [esi+38h]
0x43DCEF: mov     [esp+28h+var_4], 1
0x43DCF7: call    sub_4348B0
0x43DCFC: mov     eax, [esp+24h+var_10]
0x43DD00: test    eax, eax
0x43DD02: mov     [esp+24h+var_4], 0FFFFFFFFh
0x43DD0A: jz      short loc_43DD2A
0x43DD0C: mov     edi, eax
0x43DD0E: add     eax, 8
0x43DD11: push    eax; lpAddend
0x43DD12: call    ds:InterlockedDecrement
0x43DD18: test    eax, eax
0x43DD1A: jnz     short loc_43DD2A
0x43DD1C: test    edi, edi
0x43DD1E: jz      short loc_43DD2A
0x43DD20: mov     edx, [edi]
0x43DD22: mov     eax, [edx]
0x43DD24: push    1
0x43DD26: mov     ecx, edi
0x43DD28: call    eax
0x43DD2A: test    ebx, ebx
0x43DD2C: jz      short loc_43DD36
0x43DD2E: lea     edi, [ebx+0ACh]
0x43DD34: jmp     short loc_43DD38
0x43DD36: xor     edi, edi
0x43DD38: mov     ecx, [esi+20h]
0x43DD3B: mov     eax, [esi+10h]
0x43DD3E: mov     edx, [esi+14h]
0x43DD41: push    0
0x43DD43: push    0
0x43DD45: push    ecx
0x43DD46: push    esi
0x43DD47: mov     cl, 10h
0x43DD49: call    __allshr
0x43DD4E: mov     ecx, ModelLoaderPtr
0x43DD54: movzx   edx, al
0x43DD57: push    edx
0x43DD58: push    edi
0x43DD59: call    sub_43D000
0x43DD5E: mov     ecx, [esi+20h]
0x43DD61: call    sub_5E4DD0
0x43DD66: mov     ecx, esi
0x43DD68: call    sub_43C9B0
0x43DD6D: mov     ecx, dword ptr [esp+24h+var_C]
0x43DD71: mov     large fs:0, ecx
0x43DD78: pop     ecx
0x43DD79: pop     edi
0x43DD7A: pop     esi
0x43DD7B: pop     ebx
0x43DD7C: add     esp, 14h
0x43DD7F: retn
