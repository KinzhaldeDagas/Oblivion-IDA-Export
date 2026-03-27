0x898ED0: push    ebp
0x898ED1: mov     ebp, esp
0x898ED3: and     esp, 0FFFFFFF0h
0x898ED6: sub     esp, 40h
0x898ED9: mov     edx, [ebp+a6]
0x898EDC: xor     eax, eax
0x898EDE: push    edx; a6
0x898EDF: mov     edx, [ebp+a3]
0x898EE2: push    eax; a5
0x898EE3: mov     [esp+48h+var_10], eax
0x898EE7: mov     [esp+48h+var_C], eax
0x898EEB: mov     eax, [ecx+78h]
0x898EEE: push    eax; a4
0x898EEF: mov     eax, [ecx+64h]
0x898EF2: push    edx; a3
0x898EF3: push    eax; a2
0x898EF4: lea     ecx, [esp+54h+var_40]; this
0x898EF8: mov     [esp+54h+var_40], offset off_A96AD4
0x898F00: call    sub_8D95A0
0x898F05: mov     esp, ebp
0x898F07: pop     ebp
0x898F08: retn    8
