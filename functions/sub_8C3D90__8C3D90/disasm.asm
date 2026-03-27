0x8C3D90: push    0FFFFFFFFh
0x8C3D92: push    offset SEH_8C8970
0x8C3D97: mov     eax, large fs:0
0x8C3D9D: push    eax
0x8C3D9E: push    ecx
0x8C3D9F: push    esi
0x8C3DA0: push    edi
0x8C3DA1: mov     eax, ds:0B30AACh
0x8C3DA6: xor     eax, esp
0x8C3DA8: push    eax
0x8C3DA9: lea     eax, [esp+1Ch+var_C]
0x8C3DAD: mov     large fs:0, eax
0x8C3DB3: mov     esi, ecx
0x8C3DB5: push    offset stru_BA7C80; lpCriticalSection
0x8C3DBA: call    dword ptr ds:0A2806Ch
0x8C3DC0: call    dword ptr ds:0A2808Ch
0x8C3DC6: add     dword ptr ds:0BA7CFCh, 1
0x8C3DCD: push    14h; Size
0x8C3DCF: mov     ds:0BA7CF8h, eax
0x8C3DD4: call    FormHeapAlloc
0x8C3DD9: add     esp, 4
0x8C3DDC: mov     [esp+1Ch+var_10], eax
0x8C3DE0: test    eax, eax
0x8C3DE2: mov     [esp+1Ch+var_4], 0
0x8C3DEA: jz      short loc_8C3DF7
0x8C3DEC: mov     ecx, eax; this
0x8C3DEE: call    ??0bhkTriangleShape@@QAE@XZ; bhkTriangleShape::bhkTriangleShape(void)
0x8C3DF3: mov     edi, eax
0x8C3DF5: jmp     short loc_8C3DF9
0x8C3DF7: xor     edi, edi
0x8C3DF9: mov     ecx, [esp+1Ch+arg_0]
0x8C3DFD: mov     eax, [esi]
0x8C3DFF: mov     edx, [eax+80h]
0x8C3E05: push    ecx
0x8C3E06: push    edi
0x8C3E07: mov     ecx, esi
0x8C3E09: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8C3E11: call    edx
0x8C3E13: sub     dword ptr ds:0BA7CFCh, 1
0x8C3E1A: jnz     short loc_8C3E26
0x8C3E1C: mov     dword ptr ds:0BA7CF8h, 0
0x8C3E26: push    offset stru_BA7C80; lpCriticalSection
0x8C3E2B: call    dword ptr ds:0A28074h
0x8C3E31: mov     eax, edi
0x8C3E33: mov     ecx, dword ptr [esp+1Ch+var_C]
0x8C3E37: mov     large fs:0, ecx
0x8C3E3E: pop     ecx
0x8C3E3F: pop     edi
0x8C3E40: pop     esi
0x8C3E41: add     esp, 10h
0x8C3E44: retn    4
