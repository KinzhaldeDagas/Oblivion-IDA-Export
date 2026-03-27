0x98477A: push    ebp
0x98477B: mov     ebp, esp
0x98477D: push    esi
0x98477E: mov     esi, [ebp+File]
0x984781: mov     eax, [esi+0Ch]
0x984784: test    al, 83h
0x984786: jnz     short loc_984798
0x984788: call    __errno
0x98478D: mov     dword ptr [eax], 16h
0x984793: or      eax, 0FFFFFFFFh
0x984796: jmp     short loc_9847FE
0x984798: and     eax, 0FFFFFFEFh
0x98479B: cmp     [ebp+Origin], 1
0x98479F: mov     [esi+0Ch], eax
0x9847A2: jnz     short loc_9847B2
0x9847A4: push    esi; File
0x9847A5: call    __ftell_nolock
0x9847AA: add     [ebp+Offset], eax
0x9847AD: and     [ebp+Origin], 0
0x9847B1: pop     ecx
0x9847B2: push    esi; File
0x9847B3: call    __flush
0x9847B8: mov     eax, [esi+0Ch]
0x9847BB: test    al, al
0x9847BD: pop     ecx
0x9847BE: jns     short loc_9847C8
0x9847C0: and     eax, 0FFFFFFFCh
0x9847C3: mov     [esi+0Ch], eax
0x9847C6: jmp     short loc_9847DD
0x9847C8: test    al, 1
0x9847CA: jz      short loc_9847DD
0x9847CC: test    al, 8
0x9847CE: jz      short loc_9847DD
0x9847D0: test    ax, 400h
0x9847D4: jnz     short loc_9847DD
0x9847D6: mov     dword ptr [esi+18h], 200h
0x9847DD: push    [ebp+Origin]; int
0x9847E0: push    [ebp+Offset]; int
0x9847E3: push    esi; File
0x9847E4: call    __fileno
0x9847E9: pop     ecx
0x9847EA: push    eax; int
0x9847EB: call    __lseek
0x9847F0: xor     ecx, ecx
0x9847F2: add     esp, 0Ch
0x9847F5: cmp     eax, 0FFFFFFFFh
0x9847F8: setnz   cl
0x9847FB: dec     ecx
0x9847FC: mov     eax, ecx
0x9847FE: pop     esi
0x9847FF: pop     ebp
0x984800: retn
