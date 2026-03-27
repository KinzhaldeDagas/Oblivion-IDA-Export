0x91ABA0: push    ebx
0x91ABA1: mov     ebx, ecx
0x91ABA3: mov     eax, [ebx+30h]
0x91ABA6: mov     ecx, [esp+4+arg_0]
0x91ABAA: push    esi
0x91ABAB: push    edi
0x91ABAC: mov     edi, [eax+ecx*4]
0x91ABAF: mov     eax, [edi+8]
0x91ABB2: xor     esi, esi
0x91ABB4: test    eax, eax
0x91ABB6: jle     short loc_91ABDD
0x91ABB8: jmp     short loc_91ABC0
0x91ABBA: align 10h
0x91ABC0: mov     eax, ds:0BA8420h
0x91ABC5: mov     ecx, [ebx+18h]
0x91ABC8: mov     edx, [ecx]
0x91ABCA: push    eax
0x91ABCB: mov     eax, [edi+4]
0x91ABCE: mov     eax, [eax+esi*4]
0x91ABD1: push    eax
0x91ABD2: call    dword ptr [edx+10h]
0x91ABD5: mov     eax, [edi+8]
0x91ABD8: inc     esi
0x91ABD9: cmp     esi, eax
0x91ABDB: jl      short loc_91ABC0
0x91ABDD: mov     eax, [edi+0Ch]
0x91ABE0: and     eax, 3FFFFFFFh
0x91ABE5: lea     esi, [edi+4]
0x91ABE8: jge     short loc_91AC02
0x91ABEA: add     eax, eax
0x91ABEC: xor     ecx, ecx
0x91ABEE: test    eax, eax
0x91ABF0: setle   cl
0x91ABF3: push    4
0x91ABF5: dec     ecx
0x91ABF6: and     eax, ecx
0x91ABF8: push    eax
0x91ABF9: push    esi
0x91ABFA: call    sub_8A6E40
0x91ABFF: add     esp, 0Ch
0x91AC02: pop     edi
0x91AC03: mov     dword ptr [esi+4], 0
0x91AC0A: pop     esi
0x91AC0B: pop     ebx
0x91AC0C: retn    4
