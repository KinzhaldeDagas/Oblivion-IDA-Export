0x891440: push    ebp
0x891441: mov     ebp, esp
0x891443: and     esp, 0FFFFFFF0h
0x891446: sub     esp, 68h
0x891449: mov     eax, ds:0B30AACh
0x89144E: xor     eax, esp
0x891450: mov     [esp+68h+var_4], eax
0x891454: push    esi
0x891455: push    edi
0x891456: mov     edi, [ebp+arg_0]
0x891459: mov     esi, ecx
0x89145B: mov     ecx, [esi+364h]
0x891461: lea     eax, [esp+70h+var_50]
0x891465: push    eax
0x891466: call    sub_6848D0
0x89146B: lea     ecx, [esi+340h]
0x891471: push    ecx
0x891472: lea     edx, [esp+74h+var_50]
0x891476: push    edx
0x891477: lea     ecx, [esp+78h+var_60]
0x89147B: call    sub_88FE00
0x891480: mov     ecx, [esi+8]
0x891483: test    ecx, ecx
0x891485: jz      short loc_89148E
0x891487: call    sub_8AC070
0x89148C: jmp     short loc_891493
0x89148E: mov     eax, offset stru_BA7A40
0x891493: movaps  xmm0, xmmword ptr [eax]
0x891496: movaps  xmm1, [esp+70h+var_60]
0x89149B: mov     ecx, [esp+70h+var_4]
0x89149F: subps   xmm0, xmm1
0x8914A2: movaps  xmmword ptr [edi], xmm0
0x8914A5: pop     edi
0x8914A6: pop     esi
0x8914A7: xor     ecx, esp
0x8914A9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8914AE: mov     esp, ebp
0x8914B0: pop     ebp
0x8914B1: retn    4
