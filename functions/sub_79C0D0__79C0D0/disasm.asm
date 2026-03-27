0x79C0D0: push    esi
0x79C0D1: mov     esi, [esp+4+arg_4]
0x79C0D5: fld     dword ptr [esi+24h]
0x79C0D8: push    edi
0x79C0D9: mov     edi, [esp+8+arg_0]
0x79C0DD: fld     dword ptr [edi+24h]
0x79C0E0: fcompp
0x79C0E2: fnstsw  ax
0x79C0E4: test    ah, 5
0x79C0E7: jp      short loc_79C0F3
0x79C0E9: push    edi
0x79C0EA: push    esi
0x79C0EB: call    sub_79B8D0
0x79C0F0: add     esp, 8
0x79C0F3: mov     ecx, [esp+8+arg_8]
0x79C0F7: fld     dword ptr [ecx+24h]
0x79C0FA: fld     dword ptr [esi+24h]
0x79C0FD: fcompp
0x79C0FF: fnstsw  ax
0x79C101: test    ah, 5
0x79C104: jp      short loc_79C110
0x79C106: push    esi
0x79C107: push    ecx
0x79C108: call    sub_79B8D0
0x79C10D: add     esp, 8
0x79C110: fld     dword ptr [esi+24h]
0x79C113: fld     dword ptr [edi+24h]
0x79C116: fcompp
0x79C118: fnstsw  ax
0x79C11A: test    ah, 5
0x79C11D: jp      short loc_79C129
0x79C11F: push    edi
0x79C120: push    esi
0x79C121: call    sub_79B8D0
0x79C126: add     esp, 8
0x79C129: pop     edi
0x79C12A: pop     esi
0x79C12B: retn
