0x98AE93: push    esi
0x98AE94: push    edi
0x98AE95: mov     edi, [esp+8+arg_0]
0x98AE99: mov     eax, [edi+4]
0x98AE9C: test    eax, eax
0x98AE9E: jz      short loc_98AEE9
0x98AEA0: lea     edx, [eax+8]
0x98AEA3: cmp     byte ptr [edx], 0
0x98AEA6: jz      short loc_98AEE9
0x98AEA8: mov     esi, [esp+8+arg_4]
0x98AEAC: mov     ecx, [esi+4]
0x98AEAF: cmp     eax, ecx
0x98AEB1: jz      short loc_98AEC7
0x98AEB3: add     ecx, 8
0x98AEB6: push    ecx; Str2
0x98AEB7: push    edx; Str1
0x98AEB8: call    _strcmp
0x98AEBD: test    eax, eax
0x98AEBF: pop     ecx
0x98AEC0: pop     ecx
0x98AEC1: jz      short loc_98AEC7
0x98AEC3: xor     eax, eax
0x98AEC5: jmp     short loc_98AEEC
0x98AEC7: test    byte ptr [esi], 2
0x98AECA: jz      short loc_98AED1
0x98AECC: test    byte ptr [edi], 8
0x98AECF: jz      short loc_98AEC3
0x98AED1: mov     eax, [esp+8+arg_8]
0x98AED5: mov     eax, [eax]
0x98AED7: test    al, 1
0x98AED9: jz      short loc_98AEE0
0x98AEDB: test    byte ptr [edi], 1
0x98AEDE: jz      short loc_98AEC3
0x98AEE0: test    al, 2
0x98AEE2: jz      short loc_98AEE9
0x98AEE4: test    byte ptr [edi], 2
0x98AEE7: jz      short loc_98AEC3
0x98AEE9: xor     eax, eax
0x98AEEB: inc     eax
0x98AEEC: pop     edi
0x98AEED: pop     esi
0x98AEEE: retn
