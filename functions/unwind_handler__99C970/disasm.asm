0x99C970: mov     ecx, [esp+arg_0]
0x99C974: test    dword ptr [ecx+4], 6
0x99C97B: mov     eax, 1
0x99C980: jz      short __unwind_handler____uh_return
0x99C982: mov     eax, [esp+arg_10]
0x99C986: mov     ecx, [eax-4]
0x99C989: xor     ecx, eax
0x99C98B: call    @__security_check_cookie@4
0x99C990: push    ebp
0x99C991: mov     ebp, [eax+10h]
0x99C994: mov     edx, [eax+28h]
0x99C997: push    edx
0x99C998: mov     edx, [eax+24h]
0x99C99B: push    edx
0x99C99C: call    __local_unwind2
0x99C9A1: add     esp, 8
0x99C9A4: pop     ebp
0x99C9A5: mov     eax, [esp+arg_4]
0x99C9A9: mov     edx, [esp+arg_C]
0x99C9AD: mov     [edx], eax
0x99C9AF: mov     eax, 3
