0x6D2EC0: push    0FFFFFFFFh
0x6D2EC2: push    offset SEH_8C8970
0x6D2EC7: mov     eax, large fs:0
0x6D2ECD: push    eax
0x6D2ECE: push    ecx
0x6D2ECF: push    ebx
0x6D2ED0: push    esi
0x6D2ED1: mov     eax, ds:0B30AACh
0x6D2ED6: xor     eax, esp
0x6D2ED8: push    eax
0x6D2ED9: lea     eax, [esp+1Ch+var_C]
0x6D2EDD: mov     large fs:0, eax
0x6D2EE3: mov     ebx, ecx
0x6D2EE5: push    18h; Size
0x6D2EE7: call    FormHeapAlloc
0x6D2EEC: mov     esi, eax
0x6D2EEE: add     esp, 4
0x6D2EF1: mov     [esp+1Ch+var_10], esi
0x6D2EF5: test    esi, esi
0x6D2EF7: mov     [esp+1Ch+var_4], 0
0x6D2EFF: jz      short loc_6D2F27
0x6D2F01: mov     ecx, esi
0x6D2F03: call    sub_6EC220
0x6D2F08: mov     dword ptr [esi], offset ??_7NiFloatInterpolator@@6B@; const NiFloatInterpolator::`vftable'
0x6D2F0E: fld     dword ptr ds:0A7C6B0h
0x6D2F14: fstp    dword ptr [esi+0Ch]
0x6D2F17: mov     dword ptr [esi+10h], 0
0x6D2F1E: mov     dword ptr [esi+14h], 0
0x6D2F25: jmp     short loc_6D2F29
0x6D2F27: xor     esi, esi
0x6D2F29: mov     eax, [esp+1Ch+arg_0]
0x6D2F2D: push    eax
0x6D2F2E: push    esi
0x6D2F2F: mov     ecx, ebx
0x6D2F31: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6D2F39: call    sub_6D2D50
0x6D2F3E: mov     eax, esi
0x6D2F40: mov     ecx, [esp+1Ch+var_C]
0x6D2F44: mov     large fs:0, ecx
0x6D2F4B: pop     ecx
0x6D2F4C: pop     esi
0x6D2F4D: pop     ebx
0x6D2F4E: add     esp, 10h
0x6D2F51: retn    4
