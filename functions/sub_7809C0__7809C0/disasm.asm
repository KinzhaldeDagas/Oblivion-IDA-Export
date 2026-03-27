0x7809C0: push    esi
0x7809C1: push    edi
0x7809C2: mov     edi, [esp+8+arg_0]
0x7809C6: mov     esi, ecx
0x7809C8: mov     ecx, [edi+58h]
0x7809CB: test    ecx, ecx
0x7809CD: jnz     short loc_7809F7
0x7809CF: push    48h ; 'H'; Size
0x7809D1: call    FormHeapAlloc
0x7809D6: mov     ecx, eax
0x7809D8: add     esp, 4
0x7809DB: test    ecx, ecx
0x7809DD: jz      short loc_7809EE
0x7809DF: push    edi
0x7809E0: mov     dword ptr [ecx+44h], 0
0x7809E7: call    sub_7808C0
0x7809EC: jmp     short loc_7809F0
0x7809EE: xor     ecx, ecx
0x7809F0: mov     [edi+58h], ecx
0x7809F3: mov     byte ptr [esi+4], 1
0x7809F7: push    edi
0x7809F8: call    sub_7808C0
0x7809FD: test    al, al
0x7809FF: jz      short loc_780A05
0x780A01: mov     byte ptr [esi+4], 1
0x780A05: cmp     ecx, [esi]
0x780A07: jz      short loc_780A0F
0x780A09: mov     byte ptr [esi+4], 1
0x780A0D: mov     [esi], ecx
0x780A0F: pop     edi
0x780A10: pop     esi
0x780A11: retn    4
