0x6C6870: push    ebx
0x6C6871: mov     ebx, [esp+4+arg_0]
0x6C6875: push    ebp
0x6C6876: mov     ebp, ds:0A2807Ch
0x6C687C: push    esi
0x6C687D: push    edi
0x6C687E: mov     edi, ecx
0x6C6880: mov     esi, [edi]
0x6C6882: cmp     esi, [ebx]
0x6C6884: jz      short loc_6C68B4
0x6C6886: test    esi, esi
0x6C6888: jz      short loc_6C68A2
0x6C688A: lea     eax, [esi+4]
0x6C688D: push    eax; lpAddend
0x6C688E: call    ebp ; InterlockedDecrement
0x6C6890: test    eax, eax
0x6C6892: jnz     short loc_6C68A2
0x6C6894: test    esi, esi
0x6C6896: jz      short loc_6C68A2
0x6C6898: mov     edx, [esi]
0x6C689A: mov     eax, [edx]
0x6C689C: push    1
0x6C689E: mov     ecx, esi
0x6C68A0: call    eax
0x6C68A2: mov     eax, [ebx]
0x6C68A4: test    eax, eax
0x6C68A6: mov     [edi], eax
0x6C68A8: jz      short loc_6C68B4
0x6C68AA: add     eax, 4
0x6C68AD: push    eax; lpAddend
0x6C68AE: call    dword ptr ds:0A28078h
0x6C68B4: mov     esi, [edi+4]
0x6C68B7: cmp     esi, [ebx+4]
0x6C68BA: jz      short loc_6C68EC
0x6C68BC: test    esi, esi
0x6C68BE: jz      short loc_6C68D8
0x6C68C0: lea     ecx, [esi+4]
0x6C68C3: push    ecx; lpAddend
0x6C68C4: call    ebp ; InterlockedDecrement
0x6C68C6: test    eax, eax
0x6C68C8: jnz     short loc_6C68D8
0x6C68CA: test    esi, esi
0x6C68CC: jz      short loc_6C68D8
0x6C68CE: mov     edx, [esi]
0x6C68D0: mov     eax, [edx]
0x6C68D2: push    1
0x6C68D4: mov     ecx, esi
0x6C68D6: call    eax
0x6C68D8: mov     eax, [ebx+4]
0x6C68DB: test    eax, eax
0x6C68DD: mov     [edi+4], eax
0x6C68E0: jz      short loc_6C68EC
0x6C68E2: add     eax, 4
0x6C68E5: push    eax; lpAddend
0x6C68E6: call    dword ptr ds:0A28078h
0x6C68EC: mov     ecx, [ebx+8]
0x6C68EF: mov     [edi+8], ecx
0x6C68F2: mov     dl, [ebx+0Ch]
0x6C68F5: mov     [edi+0Ch], dl
0x6C68F8: mov     al, [ebx+0Dh]
0x6C68FB: mov     [edi+0Dh], al
0x6C68FE: mov     eax, edi
0x6C6900: pop     edi
0x6C6901: pop     esi
0x6C6902: pop     ebp
0x6C6903: pop     ebx
0x6C6904: retn    4
