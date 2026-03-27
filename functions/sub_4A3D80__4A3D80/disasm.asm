0x4A3D80: push    0FFFFFFFFh
0x4A3D82: push    offset SEH_4A3D80
0x4A3D87: mov     eax, large fs:0
0x4A3D8D: push    eax
0x4A3D8E: push    ecx
0x4A3D8F: push    esi
0x4A3D90: push    edi
0x4A3D91: mov     eax, ds:0B30AACh
0x4A3D96: xor     eax, esp
0x4A3D98: push    eax
0x4A3D99: lea     eax, [esp+1Ch+var_C]
0x4A3D9D: mov     large fs:0, eax
0x4A3DA3: mov     esi, ecx
0x4A3DA5: mov     [esp+1Ch+var_10], esi
0x4A3DA9: mov     edi, [esp+1Ch+arg_0]
0x4A3DAD: push    edi
0x4A3DAE: call    sub_4A34E0
0x4A3DB3: push    0Ch; Size
0x4A3DB5: mov     [esp+20h+var_4], 0
0x4A3DBD: mov     dword ptr [esi], offset ??_7TESRegionDataLandscape@@6B@; const TESRegionDataLandscape::`vftable'
0x4A3DC3: call    FormHeapAlloc
0x4A3DC8: add     esp, 4
0x4A3DCB: mov     [esp+1Ch+arg_0], eax
0x4A3DCF: test    eax, eax
0x4A3DD1: mov     byte ptr [esp+1Ch+var_4], 1
0x4A3DD6: jz      short loc_4A3DE1
0x4A3DD8: mov     ecx, eax
0x4A3DDA: call    TESTexture_constr
0x4A3DDF: jmp     short loc_4A3DE3
0x4A3DE1: xor     eax, eax
0x4A3DE3: mov     [esi+8], eax
0x4A3DE6: mov     ecx, [edi+8]
0x4A3DE9: mov     ecx, [ecx+4]
0x4A3DEC: test    ecx, ecx
0x4A3DEE: mov     byte ptr [esp+1Ch+var_4], 0
0x4A3DF3: jnz     short loc_4A3DFA
0x4A3DF5: mov     ecx, offset EmptyString
0x4A3DFA: push    0; a3
0x4A3DFC: push    ecx; a2
0x4A3DFD: lea     ecx, [eax+4]; this
0x4A3E00: call    BSStringT_Set
0x4A3E05: mov     eax, esi
0x4A3E07: mov     ecx, [esp+1Ch+var_C]
0x4A3E0B: mov     large fs:0, ecx
0x4A3E12: pop     ecx
0x4A3E13: pop     edi
0x4A3E14: pop     esi
0x4A3E15: add     esp, 10h
0x4A3E18: retn    4
