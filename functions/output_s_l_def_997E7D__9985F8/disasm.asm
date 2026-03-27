0x9985F8: mov     ebx, [ebp-4Ch]; jumptable 00997E7D default case
0x9985FB: mov     al, [ebx]
0x9985FD: test    al, al
0x9985FF: mov     [ebp-19h], al
0x998602: jz      short loc_998625
0x998604: mov     edi, [ebp-2Ch]
0x998607: mov     dl, al
0x998609: jmp     loc_997E2D
0x99860E: call    __errno
0x998613: mov     dword ptr [eax], 16h
0x998619: xor     eax, eax
0x99861B: push    eax
0x99861C: push    eax
0x99861D: push    eax
0x99861E: push    eax
0x99861F: push    eax
0x998620: jmp     loc_997D3E
0x998625: xor     esi, esi
0x998627: cmp     [ebp-48h], esi
0x99862A: jz      short loc_998636
0x99862C: cmp     dword ptr [ebp-48h], 7
0x998630: jnz     loc_997D2E
0x998636: cmp     byte ptr [ebp-50h], 0
0x99863A: jz      short loc_998643
0x99863C: mov     eax, [ebp-54h]
0x99863F: and     dword ptr [eax+70h], 0FFFFFFFDh
0x998643: mov     eax, [ebp-34h]
0x998646: mov     ecx, [ebp+1F4h]
0x99864C: pop     edi
0x99864D: pop     esi
0x99864E: xor     ecx, ebp
0x998650: pop     ebx
0x998651: call    @__security_check_cookie@4; __security_check_cookie(x)
0x998656: add     ebp, 1F8h
0x99865C: leave
0x99865D: retn
