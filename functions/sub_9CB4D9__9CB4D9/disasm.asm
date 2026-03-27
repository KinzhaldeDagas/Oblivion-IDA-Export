0x9CB4D9: mov     edx, [esp+arg_4]
0x9CB4DD: lea     eax, [edx-0D8h]
0x9CB4E3: mov     ecx, [edx-0DCh]
0x9CB4E9: xor     ecx, eax
0x9CB4EB: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB4F0: add     eax, 10h
0x9CB4F3: mov     ecx, [edx-4]
0x9CB4F6: xor     ecx, eax
0x9CB4F8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CB4FD: mov     eax, offset unk_AF3C10
0x9CB502: jmp     ___CxxFrameHandler3
