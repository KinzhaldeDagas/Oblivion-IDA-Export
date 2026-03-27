0x6A2331: mov     esi, [ebp+0]
0x6A2334: test    esi, esi
0x6A2336: mov     ebx, eax
0x6A2338: jz      short MagicTarget_ProcessEffects___ActvEffLoop_Next
0x6A233A: cmp     [esp+arg_F], 0
0x6A233F: jz      short MagicTarget_ProcessEffects___ProcessEffect
0x6A2341: mov     ecx, [esi+0Ch]
0x6A2344: mov     edx, [ecx+1Ch]
0x6A2347: cmp     dword ptr [edx+98h], 46464553h
0x6A2351: jnz     short MagicTarget_ProcessEffects___ActvEffLoop_Next
