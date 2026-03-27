0x4B6925: rol     byte ptr [ebp+6A0B74C0h], 1
0x4B692B: add     [edx+1], ch
0x4B692E: mov     ecx, eax
0x4B6930: call    sub_475440
0x4B6935: mov     ecx, ds:0B35EC8h
0x4B693B: push    ecx
0x4B693C: call    sub_520F00
0x4B6941: push    1
0x4B6943: call    sub_520F40
0x4B6948: push    1
0x4B694A: call    sub_520F20
0x4B694F: mov     ecx, [esi+58h]
0x4B6952: mov     edx, [ecx]
0x4B6954: mov     eax, [edx+48h]
0x4B6957: add     esp, 0Ch
0x4B695A: push    esi
0x4B695B: call    eax
0x4B695D: push    0
0x4B695F: call    sub_520F00
0x4B6964: push    0
0x4B6966: call    sub_520F40
0x4B696B: push    0FFFFFFFFh
0x4B696D: call    sub_520F20
0x4B6972: add     esp, 0Ch
0x4B6975: mov     ecx, edi
0x4B6977: call    sub_4D77D0
0x4B697C: test    eax, eax
0x4B697E: jz      short loc_4B698E
0x4B6980: mov     ecx, eax
0x4B6982: call    sub_428E90
0x4B6987: mov     ecx, edi
0x4B6989: call    sub_4D9070
0x4B698E: pop     edi
0x4B698F: pop     ebp
0x4B6990: pop     ebx
0x4B6991: xor     al, al
0x4B6993: pop     esi
0x4B6994: add     esp, 10h
0x4B6997: retn    14h
