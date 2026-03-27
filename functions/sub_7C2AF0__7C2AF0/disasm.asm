0x7C2AF0: push    0FFFFFFFFh
0x7C2AF2: push    offset SEH_7C2AF0
0x7C2AF7: mov     eax, large fs:0
0x7C2AFD: push    eax
0x7C2AFE: push    ecx
0x7C2AFF: push    esi
0x7C2B00: push    edi
0x7C2B01: mov     eax, ds:0B30AACh
0x7C2B06: xor     eax, esp
0x7C2B08: push    eax
0x7C2B09: lea     eax, [esp+1Ch+var_C]
0x7C2B0D: mov     large fs:0, eax
0x7C2B13: mov     esi, ecx
0x7C2B15: mov     [esp+1Ch+var_10], esi
0x7C2B19: push    2
0x7C2B1B: call    sub_436FA0
0x7C2B20: lea     edi, [esi+28h]
0x7C2B23: mov     ecx, edi; this
0x7C2B25: mov     [esp+1Ch+var_4], 0
0x7C2B2D: mov     dword ptr [esi], offset ??_7GrassLoadTask@@6B@; const GrassLoadTask::`vftable'
0x7C2B33: call    ??0NiStream@@QAE@XZ; NiStream::NiStream(void)
0x7C2B38: mov     dword ptr [edi], offset ??_7BSStream@@6B@; const BSStream::`vftable'
0x7C2B3E: mov     dword ptr [edi+48Ch], 0
0x7C2B48: mov     dword ptr [edi+488h], 0
0x7C2B52: mov     eax, [esp+1Ch+arg_0]
0x7C2B56: push    eax
0x7C2B57: mov     ecx, esi
0x7C2B59: mov     byte ptr [esp+20h+var_4], 1
0x7C2B5E: call    sub_434600
0x7C2B63: push    1
0x7C2B65: push    0
0x7C2B67: mov     ecx, esi
0x7C2B69: call    sub_434CB0
0x7C2B6E: mov     eax, esi
0x7C2B70: mov     ecx, [esp+1Ch+var_C]
0x7C2B74: mov     large fs:0, ecx
0x7C2B7B: pop     ecx
0x7C2B7C: pop     edi
0x7C2B7D: pop     esi
0x7C2B7E: add     esp, 10h
0x7C2B81: retn    4
