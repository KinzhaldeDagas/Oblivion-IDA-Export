0x4146B0: push    esi
0x4146B1: mov     esi, [esp+4+Src]
0x4146B5: mov     eax, esi
0x4146B7: push    edi
0x4146B8: lea     edi, [eax+1]
0x4146BB: jmp     short loc_4146C0
0x4146BD: align 10h
0x4146C0: mov     dl, [eax]
0x4146C2: add     eax, 1
0x4146C5: test    dl, dl
0x4146C7: jnz     short loc_4146C0
0x4146C9: sub     eax, edi
0x4146CB: push    eax; MaxCount
0x4146CC: push    esi; Src
0x4146CD: call    sub_414500
0x4146D2: pop     edi
0x4146D3: pop     esi
0x4146D4: retn    4
