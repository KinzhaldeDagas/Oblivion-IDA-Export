0x91B5E0: push    ebx
0x91B5E1: mov     ebx, ecx
0x91B5E3: mov     eax, [ebx+30h]
0x91B5E6: mov     ecx, [esp+4+arg_0]
0x91B5EA: push    esi
0x91B5EB: push    edi
0x91B5EC: mov     edi, [eax+ecx*4]
0x91B5EF: mov     eax, [edi+8]
0x91B5F2: xor     esi, esi
0x91B5F4: test    eax, eax
0x91B5F6: jle     short loc_91B61D
0x91B5F8: jmp     short loc_91B600
0x91B5FA: align 10h
0x91B600: mov     eax, ds:0BA842Ch
0x91B605: mov     ecx, [ebx+18h]
0x91B608: mov     edx, [ecx]
0x91B60A: push    eax
0x91B60B: mov     eax, [edi+4]
0x91B60E: mov     eax, [eax+esi*4]
0x91B611: push    eax
0x91B612: call    dword ptr [edx+10h]
0x91B615: mov     eax, [edi+8]
0x91B618: inc     esi
0x91B619: cmp     esi, eax
0x91B61B: jl      short loc_91B600
0x91B61D: mov     eax, [edi+0Ch]
0x91B620: and     eax, 3FFFFFFFh
0x91B625: lea     esi, [edi+4]
0x91B628: jge     short loc_91B642
0x91B62A: add     eax, eax
0x91B62C: xor     ecx, ecx
0x91B62E: test    eax, eax
0x91B630: setle   cl
0x91B633: push    4
0x91B635: dec     ecx
0x91B636: and     eax, ecx
0x91B638: push    eax
0x91B639: push    esi
0x91B63A: call    sub_8A6E40
0x91B63F: add     esp, 0Ch
0x91B642: pop     edi
0x91B643: mov     dword ptr [esi+4], 0
0x91B64A: pop     esi
0x91B64B: pop     ebx
0x91B64C: retn    4
