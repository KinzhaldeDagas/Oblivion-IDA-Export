0x8CCB90: sub     esp, 10h
0x8CCB93: mov     ecx, ds:0BA9DE4h
0x8CCB99: mov     edx, large fs:2Ch
0x8CCBA0: push    ebx
0x8CCBA1: mov     ebx, [esp+14h+arg_0]
0x8CCBA5: push    ebp
0x8CCBA6: mov     ebp, [edx+ecx*4]
0x8CCBA9: mov     ecx, [ebp+19Ch]
0x8CCBAF: xor     eax, eax
0x8CCBB1: cmp     ecx, eax
0x8CCBB3: push    esi
0x8CCBB4: mov     esi, [ebx+2A4h]
0x8CCBBA: mov     [esp+1Ch+var_10], eax
0x8CCBBE: mov     [esp+1Ch+var_C], eax
0x8CCBC2: mov     [esp+1Ch+var_8], 80000000h
0x8CCBCA: jnz     short loc_8CCBD2
0x8CCBCC: mov     ecx, ds:0BA7D9Ch
0x8CCBD2: mov     eax, [ecx+20h]
0x8CCBD5: lea     edx, ds:10h[esi*8]
0x8CCBDC: and     edx, 0FFFFFFF0h
0x8CCBDF: push    edi
0x8CCBE0: lea     edi, [eax+edx]
0x8CCBE3: cmp     edi, [ecx+2Ch]
0x8CCBE6: ja      short loc_8CCBED
0x8CCBE8: mov     [ecx+20h], edi
0x8CCBEB: jmp     short loc_8CCBF3
0x8CCBED: mov     eax, [ecx]
0x8CCBEF: push    edx
0x8CCBF0: call    dword ptr [eax+0Ch]
0x8CCBF3: mov     ecx, [ebx+64h]
0x8CCBF6: mov     [esp+20h+var_10], eax
0x8CCBFA: mov     [esp+20h+var_4], eax
0x8CCBFE: lea     eax, [esp+20h+var_10]
0x8CCC02: push    eax
0x8CCC03: mov     eax, [esp+24h+arg_4]
0x8CCC07: or      esi, 80000000h
0x8CCC0D: add     eax, 28h ; '('
0x8CCC10: mov     [esp+24h+var_8], esi
0x8CCC14: mov     edx, [ecx]
0x8CCC16: push    eax
0x8CCC17: call    dword ptr [edx+10h]
0x8CCC1A: mov     eax, [esp+20h+var_C]
0x8CCC1E: test    eax, eax
0x8CCC20: pop     edi
0x8CCC21: jz      short loc_8CCC31
0x8CCC23: mov     ecx, [esp+1Ch+var_10]
0x8CCC27: push    eax
0x8CCC28: push    ecx
0x8CCC29: mov     ecx, [ebx+68h]
0x8CCC2C: call    sub_8D83E0
0x8CCC31: mov     ecx, [ebp+19Ch]
0x8CCC37: test    ecx, ecx
0x8CCC39: mov     eax, [esp+1Ch+var_4]
0x8CCC3D: jnz     short loc_8CCC45
0x8CCC3F: mov     ecx, ds:0BA7D9Ch
0x8CCC45: cmp     eax, [ecx+28h]
0x8CCC48: mov     [ecx+20h], eax
0x8CCC4B: jnz     short loc_8CCC53
0x8CCC4D: mov     edx, [ecx]
0x8CCC4F: push    eax
0x8CCC50: call    dword ptr [edx+10h]
0x8CCC53: mov     edx, [esp+1Ch+var_8]
0x8CCC57: test    edx, edx
0x8CCC59: js      short loc_8CCC82
0x8CCC5B: mov     eax, [ebp+19Ch]
0x8CCC61: test    eax, eax
0x8CCC63: jnz     short loc_8CCC6A
0x8CCC65: mov     eax, ds:0BA7D9Ch
0x8CCC6A: mov     ecx, [esp+1Ch+var_10]
0x8CCC6E: and     edx, 3FFFFFFFh
0x8CCC74: push    14h
0x8CCC76: shl     edx, 3
0x8CCC79: push    edx
0x8CCC7A: push    ecx
0x8CCC7B: mov     ecx, eax
0x8CCC7D: call    sub_8A75D0
0x8CCC82: pop     esi
0x8CCC83: pop     ebp
0x8CCC84: pop     ebx
0x8CCC85: add     esp, 10h
0x8CCC88: retn
