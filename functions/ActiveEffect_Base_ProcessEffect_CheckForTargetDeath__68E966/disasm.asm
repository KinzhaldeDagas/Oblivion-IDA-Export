0x68E966: mov     ecx, [esi+20h]
0x68E969: mov     edx, [ecx]
0x68E96B: mov     eax, [edx+0Ch]
0x68E96E: call    eax
0x68E970: test    al, al
0x68E972: jz      short ActiveEffect_Base_ProcessEffect___TestTerminate
0x68E974: mov     eax, [esi+20h]
0x68E977: test    eax, eax
0x68E979: jz      short ActiveEffect_Base_ProcessEffect___TestTerminate
0x68E97B: lea     ecx, [eax-68h]
0x68E97E: test    ecx, ecx
0x68E980: jz      short ActiveEffect_Base_ProcessEffect___TestTerminate
0x68E982: mov     edx, [ecx]
0x68E984: mov     eax, [edx+198h]
0x68E98A: push    1
0x68E98C: call    eax
0x68E98E: test    al, al
0x68E990: jz      short ActiveEffect_Base_ProcessEffect___TestTerminate
0x68E992: mov     ecx, [esi+0Ch]
0x68E995: mov     edx, [ecx+1Ch]
0x68E998: mov     eax, [edx+58h]
0x68E99B: shr     eax, 1Ch
0x68E99E: test    al, 1
0x68E9A0: jnz     short ActiveEffect_Base_ProcessEffect___TestTerminate
0x68E9A2: mov     byte ptr [esi+11h], 1
0x68E9A6: jmp     short ActiveEffect_Base_ProcessEffect___TestTerminate
