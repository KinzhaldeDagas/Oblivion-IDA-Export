0x98EA04: mov     ebx, [ebp-48h]; jumptable 0098E289 default case
0x98EA07: mov     al, [ebx]
0x98EA09: test    al, al
0x98EA0B: mov     [ebp-19h], al
0x98EA0E: jz      short loc_98EA34
0x98EA10: mov     ecx, [ebp-74h]
0x98EA13: mov     edi, [ebp-2Ch]
0x98EA16: mov     dl, al
0x98EA18: jmp     loc_98E245
0x98EA1D: call    __errno
0x98EA22: mov     dword ptr [eax], 16h
0x98EA28: xor     eax, eax
0x98EA2A: push    eax
0x98EA2B: push    eax
0x98EA2C: push    eax
0x98EA2D: push    eax
0x98EA2E: push    eax
0x98EA2F: jmp     loc_98E157
0x98EA34: cmp     byte ptr [ebp-58h], 0
0x98EA38: jz      short loc_98EA41
0x98EA3A: mov     eax, [ebp-5Ch]
0x98EA3D: and     dword ptr [eax+70h], 0FFFFFFFDh
0x98EA41: mov     eax, [ebp-34h]
0x98EA44: mov     ecx, [ebp+1F4h]
0x98EA4A: pop     edi
0x98EA4B: pop     esi
0x98EA4C: xor     ecx, ebp
0x98EA4E: pop     ebx
0x98EA4F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x98EA54: add     ebp, 1F8h
0x98EA5A: leave
0x98EA5B: retn
