0x6EB7B0: push    0FFFFFFFFh
0x6EB7B2: push    offset SEH_8C8970
0x6EB7B7: mov     eax, large fs:0
0x6EB7BD: push    eax
0x6EB7BE: push    ecx
0x6EB7BF: push    esi
0x6EB7C0: push    edi
0x6EB7C1: mov     eax, ds:0B30AACh
0x6EB7C6: xor     eax, esp
0x6EB7C8: push    eax
0x6EB7C9: lea     eax, [esp+1Ch+var_C]
0x6EB7CD: mov     large fs:0, eax
0x6EB7D3: mov     edi, ecx
0x6EB7D5: push    34h ; '4'; Size
0x6EB7D7: call    FormHeapAlloc
0x6EB7DC: mov     esi, eax
0x6EB7DE: add     esp, 4
0x6EB7E1: mov     [esp+1Ch+var_10], esi
0x6EB7E5: test    esi, esi
0x6EB7E7: mov     [esp+1Ch+var_4], 0
0x6EB7EF: jz      short loc_6EB808
0x6EB7F1: mov     ecx, esi
0x6EB7F3: call    sub_6CC4E0
0x6EB7F8: mov     dword ptr [esi], offset ??_7NiBlendBoolInterpolator@@6B@; const NiBlendBoolInterpolator::`vftable'
0x6EB7FE: mov     al, ds:0A7C6ACh
0x6EB803: mov     [esi+30h], al
0x6EB806: jmp     short loc_6EB80A
0x6EB808: xor     esi, esi
0x6EB80A: mov     ecx, [esp+1Ch+arg_0]
0x6EB80E: push    ecx
0x6EB80F: push    esi
0x6EB810: mov     ecx, edi
0x6EB812: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6EB81A: call    sub_6CD3D0
0x6EB81F: mov     dl, [edi+30h]
0x6EB822: mov     [esi+30h], dl
0x6EB825: mov     eax, esi
0x6EB827: mov     ecx, [esp+1Ch+var_C]
0x6EB82B: mov     large fs:0, ecx
0x6EB832: pop     ecx
0x6EB833: pop     edi
0x6EB834: pop     esi
0x6EB835: add     esp, 10h
0x6EB838: retn    4
