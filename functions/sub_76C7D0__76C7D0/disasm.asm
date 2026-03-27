0x76C7D0: push    esi
0x76C7D1: mov     esi, ecx
0x76C7D3: mov     ecx, [esi+18h]
0x76C7D6: mov     edx, [esi+60h]
0x76C7D9: mov     eax, [ecx]
0x76C7DB: mov     eax, [eax+64h]
0x76C7DE: push    0
0x76C7E0: push    edx
0x76C7E1: push    89h ; '‰'
0x76C7E6: call    eax
0x76C7E8: mov     ecx, [esp+4+a8]
0x76C7EC: mov     edx, [esp+4+a7]
0x76C7F0: mov     eax, [esp+4+a6]
0x76C7F4: push    ecx; a8
0x76C7F5: mov     ecx, [esp+8+a5]
0x76C7F9: push    edx; a7
0x76C7FA: mov     edx, [esp+0Ch+a4]
0x76C7FE: push    eax; a6
0x76C7FF: mov     eax, [esp+10h+a3]
0x76C803: push    ecx; a5
0x76C804: mov     ecx, [esp+14h+a2]
0x76C808: push    edx; a4
0x76C809: push    eax; a3
0x76C80A: push    ecx; a2
0x76C80B: mov     ecx, esi; this
0x76C80D: call    sub_779790
0x76C812: pop     esi
0x76C813: retn    1Ch
