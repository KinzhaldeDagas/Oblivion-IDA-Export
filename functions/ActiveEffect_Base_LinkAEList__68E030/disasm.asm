0x68E030: push    esi
0x68E031: mov     esi, [esp+4+arg_0]
0x68E035: test    esi, esi
0x68E037: jz      short loc_68E05D
0x68E039: push    edi
0x68E03A: mov     edi, [esp+8+arg_4]
0x68E03E: mov     edi, edi
0x68E040: cmp     dword ptr [esi+4], 0
0x68E044: jnz     short loc_68E04B
0x68E046: cmp     dword ptr [esi], 0
0x68E049: jz      short loc_68E05C
0x68E04B: mov     ecx, [esi]
0x68E04D: mov     eax, [ecx]
0x68E04F: mov     edx, [eax+18h]
0x68E052: push    edi
0x68E053: call    edx
0x68E055: mov     esi, [esi+4]
0x68E058: test    esi, esi
0x68E05A: jnz     short loc_68E040
0x68E05C: pop     edi
0x68E05D: pop     esi
0x68E05E: retn
