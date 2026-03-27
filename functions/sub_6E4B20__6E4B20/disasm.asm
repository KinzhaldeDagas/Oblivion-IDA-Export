0x6E4B20: mov     eax, [esp+arg_4]
0x6E4B24: push    ebx
0x6E4B25: push    ebp
0x6E4B26: mov     ebp, [esp+8+arg_0]
0x6E4B2A: push    esi
0x6E4B2B: push    edi
0x6E4B2C: push    eax
0x6E4B2D: push    ebp
0x6E4B2E: mov     ebx, ecx
0x6E4B30: call    sub_6ED2B0
0x6E4B35: lea     esi, [ebx+1Ch]
0x6E4B38: lea     edi, [ebp+1Ch]
0x6E4B3B: mov     ecx, 8
0x6E4B40: rep movsd
0x6E4B42: mov     ecx, [ebx+3Ch]
0x6E4B45: mov     [ebp+3Ch], ecx
0x6E4B48: mov     edx, [ebx+40h]
0x6E4B4B: pop     edi
0x6E4B4C: mov     [ebp+40h], edx
0x6E4B4F: mov     eax, [ebx+44h]
0x6E4B52: pop     esi
0x6E4B53: mov     [ebp+44h], eax
0x6E4B56: pop     ebp
0x6E4B57: pop     ebx
0x6E4B58: retn    8
