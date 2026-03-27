0x7F13B0: push    esi
0x7F13B1: mov     esi, ecx
0x7F13B3: mov     eax, [esi]
0x7F13B5: mov     edx, [eax+80h]
0x7F13BB: call    edx
0x7F13BD: mov     eax, [esp+4+arg_18]
0x7F13C1: mov     ecx, [esp+4+arg_14]
0x7F13C5: mov     edx, [esp+4+arg_10]
0x7F13C9: push    eax; int
0x7F13CA: mov     eax, [esp+8+arg_C]
0x7F13CE: push    ecx; int
0x7F13CF: mov     ecx, [esp+0Ch+arg_8]
0x7F13D3: push    edx; int
0x7F13D4: mov     edx, [esp+10h+arg_4]
0x7F13D8: push    eax; int
0x7F13D9: mov     eax, [esp+14h+arg_0]
0x7F13DD: push    ecx; int
0x7F13DE: push    edx; int
0x7F13DF: push    eax; float
0x7F13E0: mov     ecx, esi
0x7F13E2: call    sub_7F0BC0
0x7F13E7: mov     edx, [esi+38h]
0x7F13EA: lea     ecx, [esi+394h]
0x7F13F0: push    ecx
0x7F13F1: push    edx
0x7F13F2: lea     ecx, [esi+40h]
0x7F13F5: call    sub_76CE40
0x7F13FA: add     dword ptr [esi+38h], 1
0x7F13FE: xor     eax, eax
0x7F1400: pop     esi
0x7F1401: retn    1Ch
