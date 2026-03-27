0x711B90: push    ecx
0x711B91: push    ebx
0x711B92: mov     ebx, [esp+8+arg_0]
0x711B96: push    ebp
0x711B97: push    esi
0x711B98: push    edi
0x711B99: mov     esi, ecx
0x711B9B: mov     [esp+14h+arg_0], 3
0x711BA3: mov     ebp, 4
0x711BA8: jmp     short loc_711BB0
0x711BAA: align 10h
0x711BB0: mov     edi, 3
0x711BB5: mov     eax, [ebx+21Ch]
0x711BBB: mov     edx, [eax+4]
0x711BBE: push    1
0x711BC0: lea     ecx, [esp+18h+var_4]
0x711BC4: push    ecx
0x711BC5: push    ebp
0x711BC6: push    esi
0x711BC7: push    eax
0x711BC8: mov     [esp+28h+var_4], ebp
0x711BCC: call    edx
0x711BCE: add     esp, 14h
0x711BD1: add     esi, ebp
0x711BD3: sub     edi, 1
0x711BD6: jnz     short loc_711BB5
0x711BD8: sub     [esp+14h+arg_0], 1
0x711BDD: jnz     short loc_711BB0
0x711BDF: pop     edi
0x711BE0: pop     esi
0x711BE1: pop     ebp
0x711BE2: pop     ebx
0x711BE3: pop     ecx
0x711BE4: retn    4
