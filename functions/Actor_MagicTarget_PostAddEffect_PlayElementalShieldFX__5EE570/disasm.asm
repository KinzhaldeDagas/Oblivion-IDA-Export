0x5EE570: mov     ecx, [esi+0Ch]
0x5EE573: mov     edx, [ecx+1Ch]
0x5EE576: mov     eax, [edx+98h]
0x5EE57C: push    eax
0x5EE57D: call    Magic_GetDamageShieldType
0x5EE582: mov     ebx, eax
0x5EE584: add     esp, 4
0x5EE587: test    ebx, ebx
0x5EE589: jz      short Actor_MagicTarget_PostAddEffect___PlayPainFX
0x5EE58B: mov     eax, [edi-10h]
0x5EE58E: mov     edx, [edi]
0x5EE590: push    ebp
0x5EE591: mov     ebp, [eax]
0x5EE593: mov     eax, [edx+8]
0x5EE596: push    ebx
0x5EE597: mov     ecx, edi
0x5EE599: call    eax
0x5EE59B: mov     ecx, [edi-10h]
0x5EE59E: mov     edx, [ebp+44Ch]
0x5EE5A4: push    eax
0x5EE5A5: call    edx
0x5EE5A7: test    al, al
0x5EE5A9: pop     ebp
0x5EE5AA: jz      short Actor_MagicTarget_PostAddEffect___PlayPainFX
0x5EE5AC: push    ebx
0x5EE5AD: lea     eax, [edi-68h]
0x5EE5B0: push    eax
0x5EE5B1: mov     ecx, offset ActorProcessManager_ptr
0x5EE5B6: call    TemporaryObjects_PlayMagicShieldShader
0x5EE5BB: test    al, al
0x5EE5BD: jz      short Actor_MagicTarget_PostAddEffect___PlayPainFX
0x5EE5BF: or      dword ptr [esi+14h], 6
