0x6DE110: sub     esp, 18h
0x6DE113: push    ebx
0x6DE114: mov     ebx, [esp+1Ch+arg_4]
0x6DE118: push    ebp
0x6DE119: mov     ebp, [esp+20h+arg_0]
0x6DE11D: push    esi
0x6DE11E: xor     esi, esi
0x6DE120: test    ebx, ebx
0x6DE122: push    edi
0x6DE123: jbe     short loc_6DE198
0x6DE125: mov     edx, [ecx]
0x6DE127: mov     edi, [ebp+0]
0x6DE12A: sub     edi, edx
0x6DE12C: lea     esp, [esp+0]
0x6DE130: mov     eax, [edi+edx]
0x6DE133: mov     [esp+28h+var_C], eax
0x6DE137: mov     eax, [edi+edx+4]
0x6DE13B: mov     [esp+28h+var_8], eax
0x6DE13F: mov     eax, [edi+edx+8]
0x6DE143: mov     [esp+28h+var_4], eax
0x6DE147: mov     eax, [edx]
0x6DE149: mov     [esp+28h+var_18], eax
0x6DE14D: fld     [esp+28h+var_18]
0x6DE151: mov     eax, [edx+4]
0x6DE154: fld     [esp+28h+var_C]
0x6DE158: mov     [esp+28h+var_14], eax
0x6DE15C: fucompp
0x6DE15E: mov     eax, [edx+8]
0x6DE161: mov     [esp+28h+var_10], eax
0x6DE165: fnstsw  ax
0x6DE167: test    ah, 44h
0x6DE16A: jp      short loc_6DE1CA
0x6DE16C: fld     [esp+28h+var_14]
0x6DE170: fld     [esp+28h+var_8]
0x6DE174: fucompp
0x6DE176: fnstsw  ax
0x6DE178: test    ah, 44h
0x6DE17B: jp      short loc_6DE1CA
0x6DE17D: fld     [esp+28h+var_10]
0x6DE181: fld     [esp+28h+var_4]
0x6DE185: fucompp
0x6DE187: fnstsw  ax
0x6DE189: test    ah, 44h
0x6DE18C: jp      short loc_6DE1CA
0x6DE18E: add     esi, 1
0x6DE191: add     edx, 0Ch
0x6DE194: cmp     esi, ebx
0x6DE196: jb      short loc_6DE130
0x6DE198: mov     eax, [ecx+4]
0x6DE19B: test    eax, eax
0x6DE19D: jnz     short loc_6DE1A8
0x6DE19F: cmp     [ebp+4], eax
0x6DE1A2: jnz     short loc_6DE1CA
0x6DE1A4: test    eax, eax
0x6DE1A6: jz      short loc_6DE1AE
0x6DE1A8: cmp     dword ptr [ebp+4], 0
0x6DE1AC: jz      short loc_6DE1CA
0x6DE1AE: mov     ecx, [ebp+4]
0x6DE1B1: push    ecx
0x6DE1B2: push    eax
0x6DE1B3: call    j_CRT_strcmp
0x6DE1B8: add     esp, 8
0x6DE1BB: pop     edi
0x6DE1BC: pop     esi
0x6DE1BD: test    eax, eax
0x6DE1BF: pop     ebp
0x6DE1C0: setz    al
0x6DE1C3: pop     ebx
0x6DE1C4: add     esp, 18h
0x6DE1C7: retn    8
0x6DE1CA: pop     edi
0x6DE1CB: pop     esi
0x6DE1CC: pop     ebp
0x6DE1CD: xor     al, al
0x6DE1CF: pop     ebx
0x6DE1D0: add     esp, 18h
0x6DE1D3: retn    8
