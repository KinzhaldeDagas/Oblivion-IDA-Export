0x7309C0: push    0FFFFFFFFh
0x7309C2: push    offset SEH_8C8970
0x7309C7: mov     eax, large fs:0
0x7309CD: push    eax
0x7309CE: push    ecx
0x7309CF: push    esi
0x7309D0: push    edi
0x7309D1: mov     eax, ds:0B30AACh
0x7309D6: xor     eax, esp
0x7309D8: push    eax
0x7309D9: lea     eax, [esp+1Ch+var_C]
0x7309DD: mov     large fs:0, eax
0x7309E3: mov     edi, ecx
0x7309E5: push    10h; Size
0x7309E7: call    FormHeapAlloc
0x7309EC: mov     esi, eax
0x7309EE: add     esp, 4
0x7309F1: mov     [esp+1Ch+var_10], esi
0x7309F5: test    esi, esi
0x7309F7: mov     [esp+1Ch+var_4], 0
0x7309FF: jz      short loc_730A17
0x730A01: mov     ecx, esi
0x730A03: call    sub_721350
0x730A08: mov     dword ptr [esi], offset ??_7NiIntegerExtraData@@6B@; const NiIntegerExtraData::`vftable'
0x730A0E: mov     dword ptr [esi+0Ch], 0
0x730A15: jmp     short loc_730A19
0x730A17: xor     esi, esi
0x730A19: mov     eax, [esp+1Ch+arg_0]
0x730A1D: push    eax
0x730A1E: push    esi
0x730A1F: mov     ecx, edi
0x730A21: mov     [esp+24h+var_4], 0FFFFFFFFh
0x730A29: call    sub_7214A0
0x730A2E: mov     ecx, [edi+0Ch]
0x730A31: mov     [esi+0Ch], ecx
0x730A34: mov     eax, esi
0x730A36: mov     ecx, [esp+1Ch+var_C]
0x730A3A: mov     large fs:0, ecx
0x730A41: pop     ecx
0x730A42: pop     edi
0x730A43: pop     esi
0x730A44: add     esp, 10h
0x730A47: retn    4
