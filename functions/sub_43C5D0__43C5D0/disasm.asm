0x43C5D0: mov     eax, [esp+arg_4]
0x43C5D4: push    ebx
0x43C5D5: push    esi
0x43C5D6: mov     esi, ecx
0x43C5D8: mov     ecx, [esp+8+Comperand]
0x43C5DC: push    eax; int
0x43C5DD: push    ecx; Comperand
0x43C5DE: mov     ecx, esi
0x43C5E0: call    sub_43C070
0x43C5E5: mov     bl, al
0x43C5E7: test    bl, bl
0x43C5E9: jz      short loc_43C60D
0x43C5EB: mov     edx, [esi+14h]
0x43C5EE: mov     ecx, [esp+8+arg_8]
0x43C5F2: and     edx, 0FFFFFFFEh
0x43C5F5: add     edx, 4
0x43C5F8: push    edx
0x43C5F9: call    sub_4348B0
0x43C5FE: mov     eax, [esi+14h]
0x43C601: and     eax, 0FFFFFFFEh
0x43C604: mov     eax, [eax+8]
0x43C607: test    al, 1
0x43C609: jz      short loc_43C60D
0x43C60B: xor     bl, bl
0x43C60D: mov     ecx, [esi+4]
0x43C610: mov     dword ptr [ecx], 0
0x43C616: mov     edx, [esi+8]
0x43C619: mov     dword ptr [edx], 0
0x43C61F: mov     eax, [esi+0Ch]
0x43C622: mov     dword ptr [eax], 0
0x43C628: pop     esi
0x43C629: mov     al, bl
0x43C62B: pop     ebx
0x43C62C: retn    0Ch
