0x7E3D50: push    0FFFFFFFFh
0x7E3D52: push    offset SEH_801380
0x7E3D57: mov     eax, large fs:0
0x7E3D5D: push    eax
0x7E3D5E: push    ecx
0x7E3D5F: push    esi
0x7E3D60: push    edi
0x7E3D61: mov     eax, ds:0B30AACh
0x7E3D66: xor     eax, esp
0x7E3D68: push    eax
0x7E3D69: lea     eax, [esp+1Ch+var_C]
0x7E3D6D: mov     large fs:0, eax
0x7E3D73: mov     edi, ecx
0x7E3D75: mov     eax, [edi+84h]
0x7E3D7B: test    eax, eax
0x7E3D7D: jnz     short loc_7E3DE2
0x7E3D7F: lea     eax, [esp+1Ch+var_10]
0x7E3D83: push    eax
0x7E3D84: call    sub_7606A0
0x7E3D89: add     esp, 4
0x7E3D8C: mov     esi, eax
0x7E3D8E: mov     ecx, [edi+84h]; this
0x7E3D94: cmp     ecx, [esi]
0x7E3D96: mov     [esp+1Ch+var_4], 0
0x7E3D9E: jz      short loc_7E3DBF
0x7E3DA0: test    ecx, ecx
0x7E3DA2: jz      short loc_7E3DAF
0x7E3DA4: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7E3DA8: jnz     short loc_7E3DAF
0x7E3DAA: call    sub_7604D0
0x7E3DAF: mov     eax, [esi]
0x7E3DB1: test    eax, eax
0x7E3DB3: mov     [edi+84h], eax
0x7E3DB9: jz      short loc_7E3DBF
0x7E3DBB: add     dword ptr [eax+60h], 1
0x7E3DBF: mov     eax, [esp+1Ch+var_10]
0x7E3DC3: test    eax, eax
0x7E3DC5: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x7E3DCD: jz      short loc_7E3DE2
0x7E3DCF: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7E3DD3: mov     ecx, eax; this
0x7E3DD5: add     eax, 60h ; '`'
0x7E3DD8: cmp     dword ptr [eax], 0
0x7E3DDB: jnz     short loc_7E3DE2
0x7E3DDD: call    sub_7604D0
0x7E3DE2: mov     ecx, edi
0x7E3DE4: call    sub_7E3730
0x7E3DE9: mov     al, 1
0x7E3DEB: mov     ecx, [esp+1Ch+var_C]
0x7E3DEF: mov     large fs:0, ecx
0x7E3DF6: pop     ecx
0x7E3DF7: pop     edi
0x7E3DF8: pop     esi
0x7E3DF9: add     esp, 10h
0x7E3DFC: retn
