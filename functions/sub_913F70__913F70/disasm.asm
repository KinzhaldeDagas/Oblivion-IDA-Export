0x913F70: push    ebp
0x913F71: mov     ebp, esp
0x913F73: and     esp, 0FFFFFFF0h
0x913F76: sub     esp, 24h
0x913F79: mov     eax, ds:0B30AACh
0x913F7E: xor     eax, esp
0x913F80: mov     [esp+24h+var_4], eax
0x913F84: push    ebx
0x913F85: mov     ebx, [ebp+arg_8]
0x913F88: push    esi
0x913F89: push    edi
0x913F8A: mov     edi, [ebp+arg_0]
0x913F8D: mov     esi, ecx
0x913F8F: lea     eax, [esp+30h+var_24]
0x913F93: push    eax
0x913F94: lea     ecx, [esp+34h+var_20]
0x913F98: push    ecx
0x913F99: mov     ecx, esi
0x913F9B: call    sub_913D30
0x913FA0: fld     [ebp+arg_4]
0x913FA3: push    ebx
0x913FA4: push    ecx
0x913FA5: fstp    [esp+38h+var_38]
0x913FA8: push    edi
0x913FA9: mov     ecx, esi
0x913FAB: call    sub_92B1F0
0x913FB0: fld1
0x913FB2: fcomp   dword ptr [esi+14h]
0x913FB5: fnstsw  ax
0x913FB7: test    ah, 44h
0x913FBA: jnp     short loc_913FCF
0x913FBC: mov     esi, [esi+10h]
0x913FBF: fld     dword ptr [esp+30h+var_24]
0x913FC3: movaps  xmm0, [esp+30h+var_20]
0x913FC8: movaps  xmmword ptr [esi+10h], xmm0
0x913FCC: fstp    dword ptr [esi+1Ch]
0x913FCF: sub     dword ptr ds:0BA83FCh, 1
0x913FD6: jnz     short loc_913FE2
0x913FD8: mov     dword ptr ds:0BA83F8h, 0
0x913FE2: push    offset stru_BA8380; lpCriticalSection
0x913FE7: call    dword ptr ds:0A28074h
0x913FED: mov     ecx, [esp+30h+var_4]
0x913FF1: pop     edi
0x913FF2: pop     esi
0x913FF3: pop     ebx
0x913FF4: xor     ecx, esp
0x913FF6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x913FFB: mov     esp, ebp
0x913FFD: pop     ebp
0x913FFE: retn    0Ch
