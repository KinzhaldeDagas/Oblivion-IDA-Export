0x651D80: cmp     dword ptr [esi+4], 0
0x651D84: jnz     short loc_651D8B
0x651D86: cmp     dword ptr [esi], 0
0x651D89: jz      short loc_651DAF
0x651D8B: mov     eax, [esi]
0x651D8D: mov     ecx, [eax+0Ch]
0x651D90: mov     edx, [ecx+1Ch]
0x651D93: mov     eax, [edx+98h]
0x651D99: push    eax
0x651D9A: call    Magic_GetShieldType
0x651D9F: or      [edi+164h], eax
0x651DA5: mov     esi, [esi+4]
0x651DA8: add     esp, 4
0x651DAB: test    esi, esi
0x651DAD: jnz     short MiddleHighProc_HasShieldType___EffectLoop
0x651DAF: mov     byte ptr [edi+161h], 0
0x651DB6: pop     esi
