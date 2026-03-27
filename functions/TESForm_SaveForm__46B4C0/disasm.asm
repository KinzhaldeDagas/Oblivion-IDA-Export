0x46B4C0: mov     eax, [ecx+8]
0x46B4C3: mov     edx, eax
0x46B4C5: shr     edx, 0Eh
0x46B4C8: test    dl, 1
0x46B4CB: jz      short loc_46B4D2
0x46B4CD: xor     al, al
0x46B4CF: retn    4
0x46B4D2: shr     eax, 5
0x46B4D5: test    al, 1
0x46B4D7: jz      short loc_46B4F3
0x46B4D9: push    esi
0x46B4DA: mov     esi, [esp+4+file]
0x46B4DE: push    ecx
0x46B4DF: mov     ecx, esi
0x46B4E1: call    TESFile_WriteEmptyFormRecord
0x46B4E6: mov     ecx, esi
0x46B4E8: call    sub_450A80
0x46B4ED: mov     al, 1
0x46B4EF: pop     esi
0x46B4F0: retn    4
0x46B4F3: mov     eax, [ecx]
0x46B4F5: mov     eax, [eax+20h]
0x46B4F8: jmp     eax
