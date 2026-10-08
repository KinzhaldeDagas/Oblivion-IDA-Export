0x4146B0: push    esi
0x4146B1: mov     esi, [esp+4+Src]
0x4146B5: mov     eax, esi
0x4146B7: push    edi
0x4146B8: lea     edi, [eax+1]
0x4146BB: jmp     short loc_4146C0
0x4146C0: mov     dl, [eax]
0x4146C2: add     eax, 1
0x4146C5: test    dl, dl
0x4146C7: jnz     short loc_4146C0
0x4146C9: sub     eax, edi
0x4146CB: push    eax; count
0x4146CC: push    esi; source
0x4146CD: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x4146D2: pop     edi
0x4146D3: pop     esi
0x4146D4: retn    4
