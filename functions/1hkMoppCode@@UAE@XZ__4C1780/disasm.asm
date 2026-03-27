0x4C1780: push    0FFFFFFFFh
0x4C1782: push    offset ??1HavokFileStreambufReader@@UAE@XZ_SEH
0x4C1787: mov     eax, large fs:0
0x4C178D: push    eax
0x4C178E: push    ecx
0x4C178F: push    esi
0x4C1790: mov     eax, ds:0B30AACh
0x4C1795: xor     eax, esp
0x4C1797: push    eax
0x4C1798: lea     eax, [esp+18h+var_C]
0x4C179C: mov     large fs:0, eax
0x4C17A2: mov     esi, ecx
0x4C17A4: mov     [esp+18h+var_10], esi
0x4C17A8: mov     dword ptr [esi], offset ??_7hkMoppCode@@6B@; const hkMoppCode::`vftable'
0x4C17AE: mov     eax, [esi+28h]
0x4C17B1: test    eax, eax
0x4C17B3: mov     [esp+18h+var_4], 0
0x4C17BB: js      short loc_4C17EE
0x4C17BD: mov     ecx, ds:0BA9DE4h
0x4C17C3: mov     edx, large fs:2Ch
0x4C17CA: mov     ecx, [edx+ecx*4]
0x4C17CD: mov     ecx, [ecx+19Ch]
0x4C17D3: test    ecx, ecx
0x4C17D5: jnz     short loc_4C17DD
0x4C17D7: mov     ecx, ds:0BA7D9Ch
0x4C17DD: mov     edx, [esi+20h]
0x4C17E0: push    14h
0x4C17E2: and     eax, 3FFFFFFFh
0x4C17E7: push    eax
0x4C17E8: push    edx
0x4C17E9: call    sub_8A75D0
0x4C17EE: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x4C17F4: mov     ecx, [esp+18h+var_C]
0x4C17F8: mov     large fs:0, ecx
0x4C17FF: pop     ecx
0x4C1800: pop     esi
0x4C1801: add     esp, 10h
0x4C1804: retn
