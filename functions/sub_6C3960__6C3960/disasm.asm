0x6C3960: fld     [esp+arg_10]
0x6C3964: sub     esp, 10h
0x6C3967: fld     dword ptr ds:0A7DEB4h
0x6C396D: push    esi
0x6C396E: fchs
0x6C3970: mov     esi, ecx
0x6C3972: fucompp
0x6C3974: fnstsw  ax
0x6C3976: test    ah, 44h
0x6C3979: jnp     short loc_6C39BA
0x6C397B: mov     ecx, [esp+14h+arg_10]
0x6C397F: mov     eax, [esp+14h+arg_C]
0x6C3983: mov     edx, [esp+14h+arg_14]
0x6C3987: mov     [esp+14h+var_C], ecx
0x6C398B: lea     ecx, [esp+14h+var_10]
0x6C398F: mov     [esp+14h+var_10], eax
0x6C3993: mov     eax, [esp+14h+arg_18]
0x6C3997: push    ecx
0x6C3998: lea     ecx, [esi+0Ch]
0x6C399B: mov     [esp+18h+var_8], edx
0x6C399F: mov     [esp+18h+var_4], eax
0x6C39A3: call    sub_471430
0x6C39A8: mov     ecx, [esi+2Ch]
0x6C39AB: test    ecx, ecx
0x6C39AD: jz      short loc_6C39BA
0x6C39AF: push    0
0x6C39B1: push    0
0x6C39B3: push    0
0x6C39B5: call    sub_6E1E90
0x6C39BA: fld     [esp+14h+arg_1C]
0x6C39BE: fld     st
0x6C39C0: fld     dword ptr ds:0A7DEB4h
0x6C39C6: fchs
0x6C39C8: fucompp
0x6C39CA: fnstsw  ax
0x6C39CC: test    ah, 44h
0x6C39CF: jnp     short loc_6C39DE
0x6C39D1: push    ecx
0x6C39D2: mov     ecx, esi
0x6C39D4: fstp    [esp+18h+var_18]; float
0x6C39D7: call    sub_6C3910
0x6C39DC: jmp     short loc_6C39E0
0x6C39DE: fstp    st
0x6C39E0: fld     [esp+14h+arg_0]
0x6C39E4: fld     dword ptr ds:0A7DEB4h
0x6C39EA: fchs
0x6C39EC: fucompp
0x6C39EE: fnstsw  ax
0x6C39F0: test    ah, 44h
0x6C39F3: jnp     short loc_6C3A2C
0x6C39F5: mov     edx, [esp+14h+arg_0]
0x6C39F9: mov     ecx, [esp+14h+arg_8]
0x6C39FD: mov     eax, [esp+14h+arg_4]
0x6C3A01: mov     [esp+14h+var_10], edx
0x6C3A05: lea     edx, [esp+14h+var_10]
0x6C3A09: mov     [esp+14h+var_8], ecx
0x6C3A0D: push    edx
0x6C3A0E: lea     ecx, [esi+0Ch]
0x6C3A11: mov     [esp+18h+var_C], eax
0x6C3A15: call    sub_471390
0x6C3A1A: mov     ecx, [esi+2Ch]
0x6C3A1D: test    ecx, ecx
0x6C3A1F: jz      short loc_6C3A2C
0x6C3A21: push    0
0x6C3A23: push    0
0x6C3A25: push    0
0x6C3A27: call    sub_6E1F00
0x6C3A2C: pop     esi
0x6C3A2D: add     esp, 10h
0x6C3A30: retn    20h ; ' '
