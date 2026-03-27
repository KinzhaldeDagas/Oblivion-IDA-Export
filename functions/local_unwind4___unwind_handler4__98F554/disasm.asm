0x98F554: mov     ecx, [esp+arg_0]
0x98F558: test    dword ptr [ecx+4], 6
0x98F55F: mov     eax, 1
0x98F564: jz      short locret_98F599
0x98F566: mov     eax, [esp+arg_4]
0x98F56A: mov     ecx, [eax+8]
0x98F56D: xor     ecx, eax
0x98F56F: call    @__security_check_cookie@4
0x98F574: push    ebp
0x98F575: mov     ebp, [eax+18h]
0x98F578: push    dword ptr [eax+0Ch]
0x98F57B: push    dword ptr [eax+10h]
0x98F57E: push    dword ptr [eax+14h]
0x98F581: call    __local_unwind4
0x98F586: add     esp, 0Ch
0x98F589: pop     ebp
0x98F58A: mov     eax, [esp+arg_4]
0x98F58E: mov     edx, [esp+arg_C]
0x98F592: mov     [edx], eax
0x98F594: mov     eax, 3
0x98F599: retn
