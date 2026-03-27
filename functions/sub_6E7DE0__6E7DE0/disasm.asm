0x6E7DE0: push    0FFFFFFFFh
0x6E7DE2: push    offset SEH_8C8970
0x6E7DE7: mov     eax, large fs:0
0x6E7DED: push    eax
0x6E7DEE: push    ecx
0x6E7DEF: push    esi
0x6E7DF0: push    edi
0x6E7DF1: mov     eax, ds:0B30AACh
0x6E7DF6: xor     eax, esp
0x6E7DF8: push    eax
0x6E7DF9: lea     eax, [esp+1Ch+var_C]
0x6E7DFD: mov     large fs:0, eax
0x6E7E03: mov     edi, ecx
0x6E7E05: push    20h ; ' '; Size
0x6E7E07: call    FormHeapAlloc
0x6E7E0C: mov     esi, eax
0x6E7E0E: add     esp, 4
0x6E7E11: mov     [esp+1Ch+var_10], esi
0x6E7E15: test    esi, esi
0x6E7E17: mov     [esp+1Ch+var_4], 0
0x6E7E1F: jz      short loc_6E7E3D
0x6E7E21: push    0
0x6E7E23: mov     ecx, esi
0x6E7E25: call    sub_6E7F50
0x6E7E2A: mov     dword ptr [esi], offset ??_7NiBoolTimelineInterpolator@@6B@; const NiBoolTimelineInterpolator::`vftable'
0x6E7E30: mov     dword ptr [esi+18h], 0
0x6E7E37: mov     byte ptr [esi+1Ch], 0
0x6E7E3B: jmp     short loc_6E7E3F
0x6E7E3D: xor     esi, esi
0x6E7E3F: mov     eax, [esp+1Ch+arg_0]
0x6E7E43: push    eax
0x6E7E44: push    esi
0x6E7E45: mov     ecx, edi
0x6E7E47: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E7E4F: call    sub_6E82F0
0x6E7E54: mov     eax, esi
0x6E7E56: mov     ecx, [esp+1Ch+var_C]
0x6E7E5A: mov     large fs:0, ecx
0x6E7E61: pop     ecx
0x6E7E62: pop     edi
0x6E7E63: pop     esi
0x6E7E64: add     esp, 10h
0x6E7E67: retn    4
