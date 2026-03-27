0x98C5A0: push    offset __except_handler4
0x98C5A5: push    large dword ptr fs:0
0x98C5AC: mov     eax, [esp+8+arg_4]
0x98C5B0: mov     [esp+8+arg_4], ebp
0x98C5B4: lea     ebp, [esp+8+arg_4]
0x98C5B8: sub     esp, eax
0x98C5BA: push    ebx
0x98C5BB: push    esi
0x98C5BC: push    edi
0x98C5BD: mov     eax, ___security_cookie
0x98C5C2: xor     [ebp-4], eax
0x98C5C5: xor     eax, ebp
0x98C5C7: push    eax
0x98C5C8: mov     [ebp-18h], esp
0x98C5CB: push    dword ptr [ebp-8]
0x98C5CE: mov     eax, [ebp-4]
0x98C5D1: mov     dword ptr [ebp-4], 0FFFFFFFEh
0x98C5D8: mov     [ebp-8], eax
0x98C5DB: lea     eax, [ebp-10h]
0x98C5DE: mov     large fs:0, eax
0x98C5E4: retn
