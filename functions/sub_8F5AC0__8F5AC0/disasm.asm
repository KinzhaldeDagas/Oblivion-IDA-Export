0x8F5AC0: push    ecx
0x8F5AC1: mov     eax, [ecx+10h]
0x8F5AC4: cmp     eax, [ecx+14h]
0x8F5AC7: jnz     short loc_8F5AE7
0x8F5AC9: mov     ecx, [ecx+8]
0x8F5ACC: mov     edx, [ecx]
0x8F5ACE: lea     eax, [esp+4+var_1]
0x8F5AD2: push    eax
0x8F5AD3: call    dword ptr [edx+8]
0x8F5AD6: cmp     byte ptr [eax], 0
0x8F5AD9: jnz     short loc_8F5AE7
0x8F5ADB: mov     eax, [esp+4+arg_0]
0x8F5ADF: xor     cl, cl
0x8F5AE1: mov     [eax], cl
0x8F5AE3: pop     ecx
0x8F5AE4: retn    4
0x8F5AE7: mov     eax, [esp+4+arg_0]
0x8F5AEB: mov     cl, 1
0x8F5AED: mov     [eax], cl
0x8F5AEF: pop     ecx
0x8F5AF0: retn    4
