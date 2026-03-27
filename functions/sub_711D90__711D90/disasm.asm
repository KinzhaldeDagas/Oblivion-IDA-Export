0x711D90: push    0FFFFFFFFh
0x711D92: push    offset SEH_7F1810
0x711D97: mov     eax, large fs:0
0x711D9D: push    eax
0x711D9E: push    ecx
0x711D9F: push    esi
0x711DA0: mov     eax, ds:0B30AACh
0x711DA5: xor     eax, esp
0x711DA7: push    eax
0x711DA8: lea     eax, [esp+18h+var_C]
0x711DAC: mov     large fs:0, eax
0x711DB2: mov     esi, ecx
0x711DB4: mov     [esp+18h+var_10], esi
0x711DB8: call    NiObject_constr
0x711DBD: mov     ecx, [esp+18h+arg_0]
0x711DC1: test    ecx, ecx
0x711DC3: mov     [esp+18h+var_4], 0
0x711DCB: mov     dword ptr [esi], offset ??_7NiCollisionObject@@6B@; const NiCollisionObject::`vftable'
0x711DD1: mov     [esi+8], ecx
0x711DD4: jz      short loc_711DE4
0x711DD6: cmp     [ecx+0A8h], esi
0x711DDC: jz      short loc_711DE4
0x711DDE: push    esi
0x711DDF: call    sub_435CE0
0x711DE4: mov     eax, esi
0x711DE6: mov     ecx, [esp+18h+var_C]
0x711DEA: mov     large fs:0, ecx
0x711DF1: pop     ecx
0x711DF2: pop     esi
0x711DF3: add     esp, 10h
0x711DF6: retn    4
