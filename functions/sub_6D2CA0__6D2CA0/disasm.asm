0x6D2CA0: push    ecx
0x6D2CA1: push    esi
0x6D2CA2: mov     esi, ecx
0x6D2CA4: fld     dword ptr [esi+8]
0x6D2CA7: fld     [esp+8+arg_0]
0x6D2CAB: fld     st
0x6D2CAD: fucomp  st(2)
0x6D2CAF: fnstsw  ax
0x6D2CB1: fstp    st(1)
0x6D2CB3: test    ah, 44h
0x6D2CB6: jp      short loc_6D2CDC
0x6D2CB8: mov     eax, [esp+8+arg_8]
0x6D2CBC: fstp    st
0x6D2CBE: fld     dword ptr [esi+0Ch]
0x6D2CC1: fstp    dword ptr [eax]
0x6D2CC3: fld     dword ptr [esi+0Ch]
0x6D2CC6: fld     dword ptr ds:0A7C6B0h
0x6D2CCC: fucompp
0x6D2CCE: fnstsw  ax
0x6D2CD0: test    ah, 44h
0x6D2CD3: jp      short loc_6D2D3F
0x6D2CD5: xor     al, al
0x6D2CD7: pop     esi
0x6D2CD8: pop     ecx
0x6D2CD9: retn    0Ch
0x6D2CDC: mov     eax, [esi+10h]
0x6D2CDF: test    eax, eax
0x6D2CE1: jz      short loc_6D2D18
0x6D2CE3: mov     ecx, [eax+8]
0x6D2CE6: test    ecx, ecx
0x6D2CE8: mov     dl, [eax+14h]
0x6D2CEB: push    edi
0x6D2CEC: mov     edi, [eax+10h]
0x6D2CEF: mov     eax, [eax+0Ch]
0x6D2CF2: mov     [esp+0Ch+var_4], dl
0x6D2CF6: jbe     short loc_6D2D17
0x6D2CF8: mov     edx, dword ptr [esp+0Ch+var_4]
0x6D2CFC: push    edx; char
0x6D2CFD: lea     edx, [esi+14h]
0x6D2D00: push    edx; int
0x6D2D01: push    ecx; int
0x6D2D02: push    edi; int
0x6D2D03: push    eax; int
0x6D2D04: push    ecx
0x6D2D05: fstp    [esp+24h+var_24]; float
0x6D2D08: call    sub_6BB270
0x6D2D0D: fstp    dword ptr [esi+0Ch]
0x6D2D10: add     esp, 18h
0x6D2D13: fld     [esp+0Ch+arg_0]
0x6D2D17: pop     edi
0x6D2D18: fld     dword ptr [esi+0Ch]
0x6D2D1B: fld     dword ptr ds:0A7C6B0h
0x6D2D21: fucompp
0x6D2D23: fnstsw  ax
0x6D2D25: test    ah, 44h
0x6D2D28: jp      short loc_6D2D33
0x6D2D2A: fstp    st
0x6D2D2C: xor     al, al
0x6D2D2E: pop     esi
0x6D2D2F: pop     ecx
0x6D2D30: retn    0Ch
0x6D2D33: fld     dword ptr [esi+0Ch]
0x6D2D36: mov     eax, [esp+8+arg_8]
0x6D2D3A: fstp    dword ptr [eax]
0x6D2D3C: fstp    dword ptr [esi+8]
0x6D2D3F: mov     al, 1
0x6D2D41: pop     esi
0x6D2D42: pop     ecx
0x6D2D43: retn    0Ch
