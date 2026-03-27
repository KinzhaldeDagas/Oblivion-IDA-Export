0x88C3D0: push    esi
0x88C3D1: mov     esi, ecx
0x88C3D3: test    esi, esi
0x88C3D5: jz      short loc_88C42E
0x88C3D7: mov     eax, [esi]
0x88C3D9: mov     edx, [eax+58h]
0x88C3DC: call    edx
0x88C3DE: test    eax, eax
0x88C3E0: jz      short loc_88C42E
0x88C3E2: cmp     dword ptr [esi+1Ch], 0
0x88C3E6: jbe     short loc_88C432
0x88C3E8: cmp     dword ptr [esi+3Ch], 64h ; 'd'
0x88C3EC: jb      short loc_88C40C
0x88C3EE: push    0
0x88C3F0: mov     ecx, esi
0x88C3F2: call    sub_889F20
0x88C3F7: mov     ecx, esi
0x88C3F9: call    sub_88AD90
0x88C3FE: mov     ecx, esi
0x88C400: call    sub_88A080
0x88C405: mov     ecx, esi
0x88C407: call    sub_88A120
0x88C40C: mov     eax, [esp+4+arg_0]
0x88C410: cmp     word ptr [eax+4], 0
0x88C415: mov     ecx, 1
0x88C41A: jz      short loc_88C420
0x88C41C: add     [eax+6], cx
0x88C420: mov     edx, [esi+3Ch]
0x88C423: push    edi
0x88C424: mov     edi, [esi+38h]
0x88C427: mov     [edi+edx*4], eax
0x88C42A: add     [esi+3Ch], ecx
0x88C42D: pop     edi
0x88C42E: pop     esi
0x88C42F: retn    4
0x88C432: pop     esi
0x88C433: mov     ecx, eax
0x88C435: jmp     sub_89BAE0
