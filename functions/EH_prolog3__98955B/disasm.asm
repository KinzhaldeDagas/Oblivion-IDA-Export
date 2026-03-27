0x98955B: push    eax
0x98955C: push    large dword ptr fs:0
0x989563: lea     eax, [esp+8+arg_0]
0x989567: sub     esp, [esp+0Ch]
0x98956B: push    ebx
0x98956C: push    esi
0x98956D: push    edi
0x98956E: mov     [eax], ebp
0x989570: mov     ebp, eax
0x989572: mov     eax, ___security_cookie
0x989577: xor     eax, ebp
0x989579: push    eax
0x98957A: push    dword ptr [ebp-4]
0x98957D: mov     dword ptr [ebp-4], 0FFFFFFFFh
0x989584: lea     eax, [ebp-0Ch]
0x989587: mov     large fs:0, eax
0x98958D: retn
