0x9140C0: push    ebp
0x9140C1: mov     ebp, esp
0x9140C3: and     esp, 0FFFFFFF0h
0x9140C6: sub     esp, 34h
0x9140C9: mov     eax, ds:0B30AACh
0x9140CE: xor     eax, esp
0x9140D0: mov     [esp+34h+var_4], eax
0x9140D4: mov     eax, [ebp+arg_8]
0x9140D7: push    ebx
0x9140D8: mov     ebx, [ebp+arg_4]
0x9140DB: push    esi
0x9140DC: push    edi
0x9140DD: mov     edi, [ebp+arg_0]
0x9140E0: mov     esi, ecx
0x9140E2: lea     ecx, [esp+40h+var_28]
0x9140E6: push    ecx
0x9140E7: lea     edx, [esp+44h+var_20]
0x9140EB: push    edx
0x9140EC: mov     ecx, esi
0x9140EE: mov     [esp+48h+var_24], eax
0x9140F2: call    sub_913D30
0x9140F7: mov     eax, [esp+40h+var_24]
0x9140FB: push    eax
0x9140FC: push    ebx
0x9140FD: push    edi
0x9140FE: mov     ecx, esi
0x914100: call    sub_9145A0
0x914105: fld1
0x914107: fcomp   dword ptr [esi+14h]
0x91410A: fnstsw  ax
0x91410C: test    ah, 44h
0x91410F: jnp     short loc_914124
0x914111: mov     esi, [esi+10h]
0x914114: fld     [esp+40h+var_28]
0x914118: movaps  xmm0, [esp+40h+var_20]
0x91411D: movaps  xmmword ptr [esi+10h], xmm0
0x914121: fstp    dword ptr [esi+1Ch]
0x914124: sub     dword ptr ds:0BA83FCh, 1
0x91412B: jnz     short loc_914137
0x91412D: mov     dword ptr ds:0BA83F8h, 0
0x914137: push    offset stru_BA8380; lpCriticalSection
0x91413C: call    dword ptr ds:0A28074h
0x914142: mov     ecx, [esp+40h+var_4]
0x914146: pop     edi
0x914147: pop     esi
0x914148: pop     ebx
0x914149: xor     ecx, esp
0x91414B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x914150: mov     esp, ebp
0x914152: pop     ebp
0x914153: retn    0Ch
