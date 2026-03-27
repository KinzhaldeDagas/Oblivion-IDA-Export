0x6E0D90: push    0FFFFFFFFh
0x6E0D92: push    offset SEH_8C8970
0x6E0D97: mov     eax, large fs:0
0x6E0D9D: push    eax
0x6E0D9E: push    ecx
0x6E0D9F: push    esi
0x6E0DA0: push    edi
0x6E0DA1: mov     eax, ds:0B30AACh
0x6E0DA6: xor     eax, esp
0x6E0DA8: push    eax
0x6E0DA9: lea     eax, [esp+1Ch+var_C]
0x6E0DAD: mov     large fs:0, eax
0x6E0DB3: mov     edi, ecx
0x6E0DB5: push    44h ; 'D'; Size
0x6E0DB7: call    FormHeapAlloc
0x6E0DBC: mov     esi, eax
0x6E0DBE: add     esp, 4
0x6E0DC1: mov     [esp+1Ch+var_10], esi
0x6E0DC5: test    esi, esi
0x6E0DC7: mov     [esp+1Ch+var_4], 0
0x6E0DCF: jz      short loc_6E0DE6
0x6E0DD1: mov     ecx, esi
0x6E0DD3: call    sub_6ECC00
0x6E0DD8: mov     dword ptr [esi], offset ??_7NiLightColorController@@6B@; const NiLightColorController::`vftable'
0x6E0DDE: mov     word ptr [esi+40h], 0
0x6E0DE4: jmp     short loc_6E0DE8
0x6E0DE6: xor     esi, esi
0x6E0DE8: mov     eax, [esp+1Ch+arg_0]
0x6E0DEC: push    eax
0x6E0DED: push    esi
0x6E0DEE: mov     ecx, edi
0x6E0DF0: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E0DF8: call    sub_6ECB60
0x6E0DFD: mov     cx, [edi+40h]
0x6E0E01: mov     [esi+40h], cx
0x6E0E05: mov     eax, esi
0x6E0E07: mov     ecx, [esp+1Ch+var_C]
0x6E0E0B: mov     large fs:0, ecx
0x6E0E12: pop     ecx
0x6E0E13: pop     edi
0x6E0E14: pop     esi
0x6E0E15: add     esp, 10h
0x6E0E18: retn    4
