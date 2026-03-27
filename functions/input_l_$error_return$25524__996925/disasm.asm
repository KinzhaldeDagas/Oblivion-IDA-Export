0x996925: cmp     dword ptr [ebp-44h], 1
0x996929: jnz     short loc_996934
0x99692B: push    dword ptr [ebp-24h]; Memory
0x99692E: call    _free
0x996933: pop     ecx
0x996934: cmp     dword ptr [ebp-4], 0FFFFFFFFh
0x996938: jnz     short loc_996958
0x99693A: mov     eax, [ebp-3Ch]
0x99693D: test    eax, eax
0x99693F: jnz     short loc_996949
0x996941: cmp     [ebp-15h], al
0x996944: jnz     short loc_996949
0x996946: or      eax, 0FFFFFFFFh
0x996949: cmp     byte ptr [ebp-60h], 0
0x99694D: jz      short loc_996968
0x99694F: mov     ecx, [ebp-64h]
0x996952: and     dword ptr [ecx+70h], 0FFFFFFFDh
0x996956: jmp     short loc_996968
0x996958: cmp     byte ptr [ebp-60h], 0
0x99695C: jz      short loc_996965
0x99695E: mov     eax, [ebp-64h]
0x996961: and     dword ptr [eax+70h], 0FFFFFFFDh
0x996965: mov     eax, [ebp-3Ch]
0x996968: mov     ecx, [ebp+188h]
0x99696E: pop     edi
0x99696F: pop     esi
0x996970: xor     ecx, ebp
0x996972: pop     ebx
0x996973: call    @__security_check_cookie@4
0x996978: add     ebp, 18Ch
0x99697E: leave
0x99697F: retn
