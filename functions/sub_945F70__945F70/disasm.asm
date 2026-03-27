0x945F70: push    esi
0x945F71: mov     esi, ecx
0x945F73: call    sub_918100
0x945F78: mov     eax, [esp+4+arg_0]
0x945F7C: mov     dword ptr [esi], offset off_AA28FC
0x945F82: mov     [esi+20h], eax
0x945F85: call    sub_945EB0
0x945F8A: cmp     dword ptr [esi+20h], 0FFFFFFFFh
0x945F8E: jnz     short loc_945FA5
0x945F90: mov     edx, [esi]
0x945F92: mov     ecx, esi
0x945F94: call    dword ptr [edx+0Ch]
0x945F97: push    0; protocol
0x945F99: push    1; type
0x945F9B: push    2; af
0x945F9D: call    socket_0
0x945FA2: mov     [esi+20h], eax
0x945FA5: mov     eax, esi
0x945FA7: pop     esi
0x945FA8: retn    4
