0x43FFF0: push    ebx
0x43FFF1: mov     ebx, [esp+4+arg_4]
0x43FFF5: push    ebp
0x43FFF6: push    esi
0x43FFF7: push    edi
0x43FFF8: xor     ebp, ebp
0x43FFFA: mov     edi, ecx
0x43FFFC: xor     esi, esi
0x43FFFE: mov     edi, edi
0x440000: cmp     esi, ds:0B051DCh
0x440006: jnb     short loc_440076
0x440008: mov     eax, [edi+3Ch]
0x44000B: cmp     dword ptr [eax+esi*4], 0
0x44000F: lea     ecx, [eax+esi*4]
0x440012: jz      short loc_440071; jumptable 0044002D cases 5,6
0x440014: cmp     [esp+10h+arg_0], 0
0x440019: jz      short def_44002D; jumptable 0044002D default case, cases 2-4
0x44001B: mov     eax, [ecx]
0x44001D: test    eax, eax
0x44001F: jz      short def_44002D; jumptable 0044002D default case, cases 2-4
0x440021: movsx   eax, byte ptr [eax+26h]
0x440025: add     eax, 0FFFFFFFEh; switch 5 cases
0x440028: cmp     eax, 4
0x44002B: ja      short def_44002D; jumptable 0044002D default case, cases 2-4
0x44002D: jmp     ds:jpt_44002D[eax*4]; switch jump
0x440034: mov     ecx, [ecx]; jumptable 0044002D default case, cases 2-4
0x440036: call    sub_4CA030
0x44003B: test    eax, eax
0x44003D: jnz     short loc_440071; jumptable 0044002D cases 5,6
0x44003F: test    ebx, ebx
0x440041: jz      short loc_440052
0x440043: mov     ecx, [edi+3Ch]
0x440046: mov     ecx, [ecx+esi*4]; this
0x440049: call    TESObjectCELL_GetWorldSpace
0x44004E: cmp     eax, ebx
0x440050: jnz     short loc_440071; jumptable 0044002D cases 5,6
0x440052: mov     edx, [edi+3Ch]
0x440055: mov     eax, [edx+esi*4]
0x440058: mov     ecx, ds:0B33A98h
0x44005E: push    eax; a1
0x44005F: call    sub_447BA0
0x440064: mov     ecx, [edi+3Ch]
0x440067: mov     dword ptr [ecx+esi*4], 0
0x44006E: add     ebp, 1
0x440071: add     esi, 1; jumptable 0044002D cases 5,6
0x440074: jmp     short loc_440000
0x440076: pop     edi
0x440077: pop     esi
0x440078: mov     eax, ebp
0x44007A: pop     ebp
0x44007B: pop     ebx
0x44007C: retn    8
