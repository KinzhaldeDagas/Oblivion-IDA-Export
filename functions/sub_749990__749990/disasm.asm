0x749990: push    ebp
0x749991: push    esi
0x749992: mov     esi, [esp+8+arg_0]
0x749996: mov     ebp, ecx
0x749998: push    edi
0x749999: mov     edi, [ebp+0C8h]
0x74999F: test    edi, edi
0x7499A1: jnz     short loc_7499E3
0x7499A3: test    esi, esi
0x7499A5: mov     [esp+0Ch+arg_0], esi
0x7499A9: jz      short loc_7499B5
0x7499AB: lea     eax, [esi+4]
0x7499AE: push    eax; lpAddend
0x7499AF: call    dword ptr ds:0A28078h
0x7499B5: lea     ecx, [esp+0Ch+arg_0]
0x7499B9: push    ecx
0x7499BA: lea     ecx, [ebp+0C4h]
0x7499C0: call    sub_749800
0x7499C5: test    esi, esi
0x7499C7: jz      short loc_749A27
0x7499C9: lea     edx, [esi+4]
0x7499CC: push    edx; lpAddend
0x7499CD: call    dword ptr ds:0A2807Ch
0x7499D3: test    eax, eax
0x7499D5: jnz     short loc_749A27
0x7499D7: mov     eax, [esi]
0x7499D9: mov     edx, [eax]
0x7499DB: push    1
0x7499DD: mov     ecx, esi
0x7499DF: call    edx
0x7499E1: jmp     short loc_749A27
0x7499E3: mov     eax, [esi+0Ch]
0x7499E6: mov     ecx, [edi+8]
0x7499E9: cmp     [ecx+0Ch], eax
0x7499EC: ja      short loc_749A40
0x7499EE: mov     edi, [edi]
0x7499F0: test    edi, edi
0x7499F2: jnz     short loc_7499E6
0x7499F4: lea     edi, [esi+4]
0x7499F7: push    edi; lpAddend
0x7499F8: mov     [esp+10h+arg_0], esi
0x7499FC: call    dword ptr ds:0A28078h
0x749A02: lea     eax, [esp+0Ch+arg_0]
0x749A06: push    eax
0x749A07: lea     ecx, [ebp+0C4h]
0x749A0D: call    sub_7C16B0
0x749A12: push    edi; lpAddend
0x749A13: call    dword ptr ds:0A2807Ch
0x749A19: test    eax, eax
0x749A1B: jnz     short loc_749A27
0x749A1D: mov     edx, [esi]
0x749A1F: mov     eax, [edx]
0x749A21: push    1
0x749A23: mov     ecx, esi
0x749A25: call    eax
0x749A27: mov     ecx, [esi+8]
0x749A2A: push    esi
0x749A2B: push    ecx
0x749A2C: lea     ecx, [ebp+0D4h]
0x749A32: call    sub_412D30
0x749A37: pop     edi
0x749A38: mov     [esi+10h], ebp
0x749A3B: pop     esi
0x749A3C: pop     ebp
0x749A3D: retn    4
0x749A40: push    ebx
0x749A41: lea     ebx, [esi+4]
0x749A44: push    ebx; lpAddend
0x749A45: mov     [esp+14h+arg_0], esi
0x749A49: call    dword ptr ds:0A28078h
0x749A4F: lea     edx, [esp+10h+arg_0]
0x749A53: push    edx
0x749A54: push    edi
0x749A55: lea     ecx, [ebp+0C4h]
0x749A5B: call    sub_7C6A20
0x749A60: push    ebx; lpAddend
0x749A61: call    dword ptr ds:0A2807Ch
0x749A67: pop     ebx
0x749A68: jmp     loc_7499D3
