0x6E1DE0: push    0FFFFFFFFh
0x6E1DE2: push    offset ??1NiScreenPolygon@@UAE@XZ_SEH
0x6E1DE7: mov     eax, large fs:0
0x6E1DED: push    eax
0x6E1DEE: push    ecx
0x6E1DEF: push    esi
0x6E1DF0: push    edi
0x6E1DF1: mov     eax, ds:0B30AACh
0x6E1DF6: xor     eax, esp
0x6E1DF8: push    eax
0x6E1DF9: lea     eax, [esp+1Ch+var_C]
0x6E1DFD: mov     large fs:0, eax
0x6E1E03: mov     esi, ecx
0x6E1E05: mov     [esp+1Ch+var_10], esi
0x6E1E09: mov     dword ptr [esi], offset ??_7NiTransformData@@6B@; const NiTransformData::`vftable'
0x6E1E0F: mov     edi, [esi+20h]
0x6E1E12: test    edi, edi
0x6E1E14: mov     eax, [esi+10h]
0x6E1E17: mov     [esp+1Ch+var_4], 0
0x6E1E1F: jz      short loc_6E1E3D
0x6E1E21: cmp     eax, 4
0x6E1E24: jnz     short loc_6E1E2D
0x6E1E26: mov     ecx, edi
0x6E1E28: call    sub_6BE490
0x6E1E2D: mov     eax, [esi+10h]
0x6E1E30: mov     eax, ds:0B3D2F8h[eax*4]
0x6E1E37: push    edi
0x6E1E38: call    eax ; dword_B3D2F8
0x6E1E3A: add     esp, 4
0x6E1E3D: mov     eax, [esi+24h]
0x6E1E40: test    eax, eax
0x6E1E42: jz      short loc_6E1E54
0x6E1E44: mov     ecx, [esi+14h]
0x6E1E47: mov     ecx, ds:0B3D2E0h[ecx*4]
0x6E1E4E: push    eax
0x6E1E4F: call    ecx ; dword_B3D2E0
0x6E1E51: add     esp, 4
0x6E1E54: mov     eax, [esi+28h]
0x6E1E57: test    eax, eax
0x6E1E59: jz      short loc_6E1E6B
0x6E1E5B: mov     edx, [esi+18h]
0x6E1E5E: mov     ecx, ds:0B3D2C8h[edx*4]
0x6E1E65: push    eax
0x6E1E66: call    ecx ; dword_B3D2C8
0x6E1E68: add     esp, 4
0x6E1E6B: mov     ecx, esi
0x6E1E6D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6E1E75: call    NiRefObject_destr
0x6E1E7A: mov     ecx, [esp+1Ch+var_C]
0x6E1E7E: mov     large fs:0, ecx
0x6E1E85: pop     ecx
0x6E1E86: pop     edi
0x6E1E87: pop     esi
0x6E1E88: add     esp, 10h
0x6E1E8B: retn
