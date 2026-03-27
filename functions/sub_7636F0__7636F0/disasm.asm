0x7636F0: push    ebx
0x7636F1: mov     ebx, ecx
0x7636F3: mov     ecx, [esp+4+arg_0]
0x7636F7: test    ecx, ecx
0x7636F9: jnz     short loc_763701
0x7636FB: xor     al, al
0x7636FD: pop     ebx
0x7636FE: retn    4
0x763701: mov     eax, [ecx]
0x763703: mov     edx, [eax+20h]
0x763706: push    esi
0x763707: call    edx
0x763709: mov     esi, eax
0x76370B: test    esi, esi
0x76370D: jz      short loc_76371C
0x76370F: mov     eax, [esi]
0x763711: mov     edx, [eax+2Ch]
0x763714: mov     ecx, esi
0x763716: call    edx
0x763718: test    al, al
0x76371A: jnz     short loc_763723
0x76371C: pop     esi
0x76371D: xor     al, al
0x76371F: pop     ebx
0x763720: retn    4
0x763723: cmp     byte ptr [ebx+6E9h], 0
0x76372A: mov     eax, [esi]
0x76372C: push    edi
0x76372D: mov     ecx, esi
0x76372F: jz      short loc_763736
0x763731: mov     edx, [eax+14h]
0x763734: jmp     short loc_763739
0x763736: mov     edx, [eax+28h]
0x763739: call    edx
0x76373B: mov     edi, eax
0x76373D: test    edi, edi
0x76373F: jz      short loc_7637A9
0x763741: mov     eax, [edi]
0x763743: mov     ecx, [eax+50h]
0x763746: push    0
0x763748: push    edi
0x763749: call    ecx
0x76374B: test    eax, eax
0x76374D: jge     short loc_76376B
0x76374F: push    eax
0x763750: call    sub_7736F0
0x763755: push    eax
0x763756: push    offset aNidx9rendererU; "NiDX9Renderer::UnLockDynamicTexture Fai"...
0x76375B: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x763760: add     esp, 0Ch
0x763763: pop     edi
0x763764: pop     esi
0x763765: xor     al, al
0x763767: pop     ebx
0x763768: retn    4
0x76376B: cmp     byte ptr [ebx+6E9h], 0
0x763772: jnz     short loc_7637B1
0x763774: mov     edx, [esi]
0x763776: mov     eax, [edx+14h]
0x763779: mov     ecx, esi
0x76377B: call    eax
0x76377D: test    eax, eax
0x76377F: jz      short loc_7637A9
0x763781: mov     ecx, [ebx+280h]
0x763787: mov     edx, [ecx]
0x763789: push    eax
0x76378A: mov     eax, [edx+7Ch]
0x76378D: push    edi
0x76378E: push    ecx
0x76378F: call    eax
0x763791: test    eax, eax
0x763793: jge     short loc_7637B1
0x763795: push    eax
0x763796: call    sub_7736F0
0x76379B: push    eax
0x76379C: push    offset aNidx9render_21; "NiDX9Renderer::UnLockDynamicTexture Fai"...
0x7637A1: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7637A6: add     esp, 0Ch
0x7637A9: pop     edi
0x7637AA: pop     esi
0x7637AB: xor     al, al
0x7637AD: pop     ebx
0x7637AE: retn    4
0x7637B1: mov     edx, [esi]
0x7637B3: mov     eax, [edx+30h]
0x7637B6: push    0
0x7637B8: mov     ecx, esi
0x7637BA: call    eax
0x7637BC: pop     edi
0x7637BD: pop     esi
0x7637BE: mov     al, 1
0x7637C0: pop     ebx
0x7637C1: retn    4
