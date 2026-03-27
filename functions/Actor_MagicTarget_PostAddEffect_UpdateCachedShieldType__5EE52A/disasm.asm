0x5EE52A: mov     eax, [esi+0Ch]
0x5EE52D: mov     ecx, [eax+1Ch]
0x5EE530: mov     eax, [ecx+98h]
0x5EE536: push    ebx
0x5EE537: push    eax
0x5EE538: call    Magic_GetShieldType
0x5EE53D: add     esp, 4
0x5EE540: test    eax, eax
0x5EE542: jz      short Actor_MagicTarget_PostAddEffect___PlayElementalShieldFX
0x5EE544: mov     edx, [edi-10h]
0x5EE547: mov     ebx, [edx]
0x5EE549: push    eax
0x5EE54A: mov     eax, [edi]
0x5EE54C: mov     edx, [eax+8]
0x5EE54F: mov     ecx, edi
0x5EE551: call    edx
0x5EE553: mov     ecx, [edi-10h]
0x5EE556: push    eax
0x5EE557: mov     eax, [ebx+44Ch]
0x5EE55D: call    eax
0x5EE55F: test    al, al
0x5EE561: jnz     short Actor_MagicTarget_PostAddEffect___PlayElementalShieldFX
0x5EE563: mov     ecx, [edi-10h]
0x5EE566: mov     edx, [ecx]
0x5EE568: mov     eax, [edx+450h]
0x5EE56E: call    eax
