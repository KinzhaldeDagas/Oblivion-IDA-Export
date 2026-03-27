0x6D2D50: mov     eax, [esp+arg_4]
0x6D2D54: push    ebx
0x6D2D55: push    esi
0x6D2D56: push    edi
0x6D2D57: mov     edi, [esp+0Ch+arg_0]
0x6D2D5B: push    eax
0x6D2D5C: push    edi
0x6D2D5D: mov     esi, ecx
0x6D2D5F: call    sub_6EC2A0
0x6D2D64: fld     dword ptr [esi+0Ch]
0x6D2D67: fstp    dword ptr [edi+0Ch]
0x6D2D6A: mov     ebx, [edi+10h]
0x6D2D6D: cmp     ebx, [esi+10h]
0x6D2D70: jz      short loc_6D2DBE
0x6D2D72: test    ebx, ebx
0x6D2D74: jz      short loc_6D2D92
0x6D2D76: lea     ecx, [ebx+4]
0x6D2D79: push    ecx; lpAddend
0x6D2D7A: call    dword ptr ds:0A2807Ch
0x6D2D80: test    eax, eax
0x6D2D82: jnz     short loc_6D2D92
0x6D2D84: test    ebx, ebx
0x6D2D86: jz      short loc_6D2D92
0x6D2D88: mov     edx, [ebx]
0x6D2D8A: mov     eax, [edx]
0x6D2D8C: push    1
0x6D2D8E: mov     ecx, ebx
0x6D2D90: call    eax
0x6D2D92: mov     eax, [esi+10h]
0x6D2D95: test    eax, eax
0x6D2D97: mov     [edi+10h], eax
0x6D2D9A: jz      short loc_6D2DB2
0x6D2D9C: add     eax, 4
0x6D2D9F: push    eax; lpAddend
0x6D2DA0: call    dword ptr ds:0A28078h
0x6D2DA6: mov     ecx, [esi+14h]
0x6D2DA9: mov     [edi+14h], ecx
0x6D2DAC: pop     edi
0x6D2DAD: pop     esi
0x6D2DAE: pop     ebx
0x6D2DAF: retn    8
0x6D2DB2: mov     edx, [esi+14h]
0x6D2DB5: mov     [edi+14h], edx
0x6D2DB8: pop     edi
0x6D2DB9: pop     esi
0x6D2DBA: pop     ebx
0x6D2DBB: retn    8
0x6D2DBE: mov     eax, [esi+14h]
0x6D2DC1: mov     [edi+14h], eax
0x6D2DC4: pop     edi
0x6D2DC5: pop     esi
0x6D2DC6: pop     ebx
0x6D2DC7: retn    8
