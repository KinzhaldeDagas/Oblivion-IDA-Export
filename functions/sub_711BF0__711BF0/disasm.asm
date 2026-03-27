0x711BF0: push    ecx
0x711BF1: push    ebx
0x711BF2: push    ebp
0x711BF3: push    esi
0x711BF4: push    edi
0x711BF5: mov     esi, ecx
0x711BF7: call    sub_711A00
0x711BFC: mov     ebx, [esp+14h+arg_0]
0x711C00: mov     [esp+14h+arg_0], 3
0x711C08: mov     ebp, 4
0x711C0D: lea     ecx, [ecx+0]
0x711C10: mov     edi, 3
0x711C15: mov     eax, [ebx+220h]
0x711C1B: mov     edx, [eax+8]
0x711C1E: push    1
0x711C20: lea     ecx, [esp+18h+var_4]
0x711C24: push    ecx
0x711C25: push    ebp
0x711C26: push    esi
0x711C27: push    eax
0x711C28: mov     [esp+28h+var_4], ebp
0x711C2C: call    edx
0x711C2E: add     esp, 14h
0x711C31: add     esi, ebp
0x711C33: sub     edi, 1
0x711C36: jnz     short loc_711C15
0x711C38: sub     [esp+14h+arg_0], 1
0x711C3D: jnz     short loc_711C10
0x711C3F: pop     edi
0x711C40: pop     esi
0x711C41: pop     ebp
0x711C42: pop     ebx
0x711C43: pop     ecx
0x711C44: retn    4
