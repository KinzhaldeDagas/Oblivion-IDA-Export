0x913EE0: push    ebp
0x913EE1: mov     ebp, esp
0x913EE3: and     esp, 0FFFFFFF0h
0x913EE6: sub     esp, 24h
0x913EE9: mov     eax, ds:0B30AACh
0x913EEE: xor     eax, esp
0x913EF0: mov     [esp+24h+var_4], eax
0x913EF4: push    ebx
0x913EF5: mov     ebx, [ebp+arg_4]
0x913EF8: push    esi
0x913EF9: push    edi
0x913EFA: mov     edi, [ebp+arg_0]
0x913EFD: mov     esi, ecx
0x913EFF: lea     eax, [esp+30h+var_24]
0x913F03: push    eax
0x913F04: lea     ecx, [esp+34h+var_20]
0x913F08: push    ecx
0x913F09: mov     ecx, esi
0x913F0B: call    sub_913D30
0x913F10: push    ebx
0x913F11: push    edi
0x913F12: mov     ecx, esi
0x913F14: call    sub_9146E0
0x913F19: fld1
0x913F1B: fcomp   dword ptr [esi+14h]
0x913F1E: fnstsw  ax
0x913F20: test    ah, 44h
0x913F23: jnp     short loc_913F38
0x913F25: mov     esi, [esi+10h]
0x913F28: fld     [esp+30h+var_24]
0x913F2C: movaps  xmm0, [esp+30h+var_20]
0x913F31: movaps  xmmword ptr [esi+10h], xmm0
0x913F35: fstp    dword ptr [esi+1Ch]
0x913F38: sub     dword ptr ds:0BA83FCh, 1
0x913F3F: jnz     short loc_913F4B
0x913F41: mov     dword ptr ds:0BA83F8h, 0
0x913F4B: push    offset stru_BA8380; lpCriticalSection
0x913F50: call    dword ptr ds:0A28074h
0x913F56: mov     ecx, [esp+30h+var_4]
0x913F5A: pop     edi
0x913F5B: pop     esi
0x913F5C: pop     ebx
0x913F5D: xor     ecx, esp
0x913F5F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x913F64: mov     esp, ebp
0x913F66: pop     ebp
0x913F67: retn    8
