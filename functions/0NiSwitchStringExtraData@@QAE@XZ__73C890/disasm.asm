0x73C890: push    0FFFFFFFFh
0x73C892: push    offset SEH_8C8970
0x73C897: mov     eax, large fs:0
0x73C89D: push    eax
0x73C89E: push    ecx
0x73C89F: push    ebx
0x73C8A0: push    esi
0x73C8A1: mov     eax, ds:0B30AACh
0x73C8A6: xor     eax, esp
0x73C8A8: push    eax
0x73C8A9: lea     eax, [esp+1Ch+var_C]
0x73C8AD: mov     large fs:0, eax
0x73C8B3: mov     ebx, ecx
0x73C8B5: push    18h; Size
0x73C8B7: call    FormHeapAlloc
0x73C8BC: mov     esi, eax
0x73C8BE: add     esp, 4
0x73C8C1: mov     [esp+1Ch+var_10], esi
0x73C8C5: test    esi, esi
0x73C8C7: mov     [esp+1Ch+var_4], 0
0x73C8CF: jz      short loc_73C8F5
0x73C8D1: mov     ecx, esi
0x73C8D3: call    sub_721350
0x73C8D8: mov     dword ptr [esi], offset ??_7NiSwitchStringExtraData@@6B@; const NiSwitchStringExtraData::`vftable'
0x73C8DE: mov     dword ptr [esi+10h], 0
0x73C8E5: mov     dword ptr [esi+0Ch], 0
0x73C8EC: mov     dword ptr [esi+14h], 0FFFFFFFFh
0x73C8F3: jmp     short loc_73C8F7
0x73C8F5: xor     esi, esi
0x73C8F7: mov     eax, [esp+1Ch+arg_0]
0x73C8FB: push    eax
0x73C8FC: push    esi
0x73C8FD: mov     ecx, ebx
0x73C8FF: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73C907: call    sub_73C630
0x73C90C: mov     eax, esi
0x73C90E: mov     ecx, [esp+1Ch+var_C]
0x73C912: mov     large fs:0, ecx
0x73C919: pop     ecx
0x73C91A: pop     esi
0x73C91B: pop     ebx
0x73C91C: add     esp, 10h
0x73C91F: retn    4
