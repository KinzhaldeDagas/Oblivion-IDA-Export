0x4806E0: mov     ecx, [esp+arg_0]
0x4806E4: push    edi
0x4806E5: xor     edi, edi
0x4806E7: test    ecx, ecx
0x4806E9: jz      short loc_48075C
0x4806EB: mov     dl, [ecx+18h]
0x4806EE: cmp     dl, 1
0x4806F1: push    esi
0x4806F2: jnz     short loc_480709
0x4806F4: mov     eax, [ecx+10h]
0x4806F7: add     eax, ecx
0x4806F9: test    eax, eax
0x4806FB: jnz     short loc_48070D
0x4806FD: cmp     dl, 2
0x480700: jnz     short loc_48070D
0x480702: mov     esi, [ecx+10h]
0x480705: add     esi, ecx
0x480707: jmp     short loc_48070F
0x480709: xor     eax, eax
0x48070B: jmp     short loc_4806FD
0x48070D: xor     esi, esi
0x48070F: test    eax, eax
0x480711: jz      short loc_480729
0x480713: push    eax
0x480714: call    sub_47FA60
0x480719: add     esp, 4
0x48071C: test    eax, eax
0x48071E: jz      short loc_480760
0x480720: pop     esi
0x480721: mov     ecx, eax
0x480723: pop     edi
0x480724: jmp     sub_452A60
0x480729: push    esi
0x48072A: call    sub_47FB10
0x48072F: add     esp, 4
0x480732: test    eax, eax
0x480734: jz      short loc_480743
0x480736: mov     ecx, eax
0x480738: call    sub_452A60
0x48073D: mov     edi, eax
0x48073F: test    edi, edi
0x480741: jnz     short loc_480760
0x480743: test    esi, esi
0x480745: jz      short loc_48074C
0x480747: mov     ecx, [esi+0Ch]
0x48074A: jmp     short loc_48074E
0x48074C: xor     ecx, ecx
0x48074E: test    ecx, ecx
0x480750: jz      short loc_480760
0x480752: push    0
0x480754: call    sub_89F6B0
0x480759: pop     esi
0x48075A: pop     edi
0x48075B: retn
0x48075C: mov     eax, edi
0x48075E: pop     edi
0x48075F: retn
0x480760: pop     esi
0x480761: mov     eax, edi
0x480763: pop     edi
0x480764: retn
