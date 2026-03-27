0x73CEA0: push    0FFFFFFFFh
0x73CEA2: push    offset SEH_8C8970
0x73CEA7: mov     eax, large fs:0
0x73CEAD: push    eax
0x73CEAE: push    ecx
0x73CEAF: push    ebx
0x73CEB0: push    esi
0x73CEB1: mov     eax, ds:0B30AACh
0x73CEB6: xor     eax, esp
0x73CEB8: push    eax
0x73CEB9: lea     eax, [esp+1Ch+var_C]
0x73CEBD: mov     large fs:0, eax
0x73CEC3: mov     ebx, ecx
0x73CEC5: push    14h; Size
0x73CEC7: call    FormHeapAlloc
0x73CECC: mov     esi, eax
0x73CECE: add     esp, 4
0x73CED1: mov     [esp+1Ch+var_10], esi
0x73CED5: test    esi, esi
0x73CED7: mov     [esp+1Ch+var_4], 0
0x73CEDF: jz      short loc_73CEFE
0x73CEE1: mov     ecx, esi
0x73CEE3: call    sub_721350
0x73CEE8: mov     dword ptr [esi], offset ??_7NiStringsExtraData@@6B@; const NiStringsExtraData::`vftable'
0x73CEEE: mov     dword ptr [esi+10h], 0
0x73CEF5: mov     dword ptr [esi+0Ch], 0
0x73CEFC: jmp     short loc_73CF00
0x73CEFE: xor     esi, esi
0x73CF00: mov     eax, [esp+1Ch+arg_0]
0x73CF04: push    eax
0x73CF05: push    esi
0x73CF06: mov     ecx, ebx
0x73CF08: mov     [esp+24h+var_4], 0FFFFFFFFh
0x73CF10: call    sub_73CC70
0x73CF15: mov     eax, esi
0x73CF17: mov     ecx, [esp+1Ch+var_C]
0x73CF1B: mov     large fs:0, ecx
0x73CF22: pop     ecx
0x73CF23: pop     esi
0x73CF24: pop     ebx
0x73CF25: add     esp, 10h
0x73CF28: retn    4
