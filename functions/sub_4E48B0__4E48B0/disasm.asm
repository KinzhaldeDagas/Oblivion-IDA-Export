0x4E48B0: push    ebx
0x4E48B1: push    esi
0x4E48B2: push    edi
0x4E48B3: mov     edi, ecx
0x4E48B5: mov     eax, [edi]
0x4E48B7: mov     edx, [eax+154h]
0x4E48BD: xor     bl, bl
0x4E48BF: call    edx
0x4E48C1: test    eax, eax
0x4E48C3: jz      short loc_4E48D4
0x4E48C5: push    0
0x4E48C7: push    1
0x4E48C9: push    eax
0x4E48CA: call    sub_88CD50
0x4E48CF: add     esp, 0Ch
0x4E48D2: mov     bl, 1
0x4E48D4: mov     esi, [edi+40h]
0x4E48D7: test    esi, esi
0x4E48D9: jz      short loc_4E4919
0x4E48DB: mov     ecx, esi; this
0x4E48DD: call    TESObjectCELL_IsInterior
0x4E48E2: test    al, al
0x4E48E4: jz      short loc_4E48F0
0x4E48E6: lea     ecx, [esi+28h]
0x4E48E9: call    sub_424180
0x4E48EE: jmp     short loc_4E48F5
0x4E48F0: mov     eax, ds:0B35C24h
0x4E48F5: test    eax, eax
0x4E48F7: jz      short loc_4E4919
0x4E48F9: mov     esi, [eax+24h]
0x4E48FC: test    esi, esi
0x4E48FE: jz      short loc_4E4919
0x4E4900: mov     ecx, [esi+18h]
0x4E4903: push    edi
0x4E4904: call    sub_5369B0
0x4E4909: push    eax
0x4E490A: mov     ecx, esi
0x4E490C: call    sub_536D30
0x4E4911: push    edi
0x4E4912: mov     ecx, esi
0x4E4914: call    sub_5374F0
0x4E4919: pop     edi
0x4E491A: pop     esi
0x4E491B: mov     al, bl
0x4E491D: pop     ebx
0x4E491E: retn
