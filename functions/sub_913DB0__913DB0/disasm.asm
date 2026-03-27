0x913DB0: push    ebp
0x913DB1: mov     ebp, esp
0x913DB3: and     esp, 0FFFFFFF0h
0x913DB6: sub     esp, 24h
0x913DB9: mov     eax, ds:0B30AACh
0x913DBE: xor     eax, esp
0x913DC0: mov     [esp+24h+var_4], eax
0x913DC4: push    ebx
0x913DC5: mov     ebx, [ebp+arg_4]
0x913DC8: push    esi
0x913DC9: push    edi
0x913DCA: mov     edi, [ebp+arg_0]
0x913DCD: mov     esi, ecx
0x913DCF: lea     eax, [esp+30h+var_24]
0x913DD3: push    eax
0x913DD4: lea     ecx, [esp+34h+var_20]
0x913DD8: push    ecx
0x913DD9: mov     ecx, esi
0x913DDB: call    sub_913D30
0x913DE0: push    ebx
0x913DE1: push    edi
0x913DE2: mov     ecx, esi
0x913DE4: call    sub_9143A0
0x913DE9: fld1
0x913DEB: fcomp   dword ptr [esi+14h]
0x913DEE: fnstsw  ax
0x913DF0: test    ah, 44h
0x913DF3: jnp     short loc_913E08
0x913DF5: mov     esi, [esi+10h]
0x913DF8: fld     [esp+30h+var_24]
0x913DFC: movaps  xmm0, [esp+30h+var_20]
0x913E01: movaps  xmmword ptr [esi+10h], xmm0
0x913E05: fstp    dword ptr [esi+1Ch]
0x913E08: sub     dword ptr ds:0BA83FCh, 1
0x913E0F: jnz     short loc_913E1B
0x913E11: mov     dword ptr ds:0BA83F8h, 0
0x913E1B: push    offset stru_BA8380; lpCriticalSection
0x913E20: call    dword ptr ds:0A28074h
0x913E26: mov     ecx, [esp+30h+var_4]
0x913E2A: pop     edi
0x913E2B: pop     esi
0x913E2C: pop     ebx
0x913E2D: xor     ecx, esp
0x913E2F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x913E34: mov     esp, ebp
0x913E36: pop     ebp
0x913E37: retn    8
