0x763620: sub     esp, 8
0x763623: push    ebx
0x763624: mov     ebx, ecx
0x763626: mov     ecx, [esp+0Ch+arg_0]
0x76362A: test    ecx, ecx
0x76362C: push    ebp
0x76362D: mov     ebp, [esp+10h+arg_4]
0x763631: mov     dword ptr [ebp+0], 0
0x763638: jnz     short loc_763644
0x76363A: pop     ebp
0x76363B: xor     eax, eax
0x76363D: pop     ebx
0x76363E: add     esp, 8
0x763641: retn    8
0x763644: mov     eax, [ecx]
0x763646: mov     edx, [eax+20h]
0x763649: push    esi
0x76364A: call    edx
0x76364C: mov     esi, eax
0x76364E: test    esi, esi
0x763650: jz      short loc_76365F
0x763652: mov     eax, [esi]
0x763654: mov     edx, [eax+2Ch]
0x763657: mov     ecx, esi
0x763659: call    edx
0x76365B: test    al, al
0x76365D: jz      short loc_76366A
0x76365F: pop     esi
0x763660: pop     ebp
0x763661: xor     eax, eax
0x763663: pop     ebx
0x763664: add     esp, 8
0x763667: retn    8
0x76366A: mov     eax, [esi]
0x76366C: push    edi
0x76366D: xor     edi, edi
0x76366F: cmp     byte ptr [ebx+6E9h], 0
0x763676: mov     ecx, esi
0x763678: jz      short loc_763686
0x76367A: mov     edx, [eax+14h]
0x76367D: call    edx
0x76367F: mov     edi, 2000h
0x763684: jmp     short loc_76368B
0x763686: mov     edx, [eax+28h]
0x763689: call    edx
0x76368B: test    eax, eax
0x76368D: jz      short loc_7636B9
0x76368F: mov     ecx, [eax]
0x763691: push    edi
0x763692: push    0
0x763694: lea     edx, [esp+20h+var_8]
0x763698: push    edx
0x763699: push    0
0x76369B: push    eax
0x76369C: mov     eax, [ecx+4Ch]
0x76369F: call    eax
0x7636A1: test    eax, eax
0x7636A3: jge     short loc_7636C5
0x7636A5: push    eax
0x7636A6: call    sub_7736F0
0x7636AB: push    eax
0x7636AC: push    offset aNidx9rendererL; "NiDX9Renderer::LockDynamicTexture Faile"...
0x7636B1: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7636B6: add     esp, 0Ch
0x7636B9: pop     edi
0x7636BA: pop     esi
0x7636BB: pop     ebp
0x7636BC: xor     eax, eax
0x7636BE: pop     ebx
0x7636BF: add     esp, 8
0x7636C2: retn    8
0x7636C5: mov     ecx, dword ptr [esp+18h+var_8]
0x7636C9: mov     edi, [esp+18h+var_4]
0x7636CD: mov     [ebp+0], ecx
0x7636D0: mov     edx, [esi]
0x7636D2: mov     eax, [edx+30h]
0x7636D5: push    1
0x7636D7: mov     ecx, esi
0x7636D9: call    eax
0x7636DB: mov     eax, edi
0x7636DD: pop     edi
0x7636DE: pop     esi
0x7636DF: pop     ebp
0x7636E0: pop     ebx
0x7636E1: add     esp, 8
0x7636E4: retn    8
