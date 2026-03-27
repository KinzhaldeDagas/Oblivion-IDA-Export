0x6E3D80: push    ebx
0x6E3D81: push    esi
0x6E3D82: push    edi
0x6E3D83: mov     edi, [esp+0Ch+arg_0]
0x6E3D87: push    edi
0x6E3D88: mov     esi, ecx
0x6E3D8A: call    sub_6EC2B0
0x6E3D8F: push    edi
0x6E3D90: lea     ecx, [esi+0Ch]
0x6E3D93: call    sub_715420
0x6E3D98: mov     ecx, edi
0x6E3D9A: call    sub_712A90
0x6E3D9F: mov     edi, [esi+1Ch]
0x6E3DA2: mov     ebx, eax
0x6E3DA4: cmp     edi, ebx
0x6E3DA6: jz      short loc_6E3DD9
0x6E3DA8: test    edi, edi
0x6E3DAA: jz      short loc_6E3DC8
0x6E3DAC: lea     eax, [edi+4]
0x6E3DAF: push    eax; lpAddend
0x6E3DB0: call    dword ptr ds:0A2807Ch
0x6E3DB6: test    eax, eax
0x6E3DB8: jnz     short loc_6E3DC8
0x6E3DBA: test    edi, edi
0x6E3DBC: jz      short loc_6E3DC8
0x6E3DBE: mov     edx, [edi]
0x6E3DC0: mov     eax, [edx]
0x6E3DC2: push    1
0x6E3DC4: mov     ecx, edi
0x6E3DC6: call    eax
0x6E3DC8: test    ebx, ebx
0x6E3DCA: mov     [esi+1Ch], ebx
0x6E3DCD: jz      short loc_6E3DD9
0x6E3DCF: add     ebx, 4
0x6E3DD2: push    ebx; lpAddend
0x6E3DD3: call    dword ptr ds:0A28078h
0x6E3DD9: pop     edi
0x6E3DDA: pop     esi
0x6E3DDB: pop     ebx
0x6E3DDC: retn    4
