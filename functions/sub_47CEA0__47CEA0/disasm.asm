0x47CEA0: push    0FFFFFFFFh
0x47CEA2: push    offset SEH_8C8970
0x47CEA7: mov     eax, large fs:0
0x47CEAD: push    eax
0x47CEAE: push    ecx
0x47CEAF: push    ebx
0x47CEB0: push    esi
0x47CEB1: mov     eax, ds:0B30AACh
0x47CEB6: xor     eax, esp
0x47CEB8: push    eax
0x47CEB9: lea     eax, [esp+1Ch+var_C]
0x47CEBD: mov     large fs:0, eax
0x47CEC3: mov     esi, ecx
0x47CEC5: xor     ebx, ebx
0x47CEC7: push    80h ; '€'; Size
0x47CECC: mov     dword ptr [esi], offset ??_7BSThread@@6B@; const BSThread::`vftable'
0x47CED2: mov     [esi+4], ebx
0x47CED5: mov     [esi+8], ebx
0x47CED8: mov     [esi+0Ch], ebx
0x47CEDB: mov     [esi+10h], ebx
0x47CEDE: mov     [esi+14h], ebx
0x47CEE1: mov     [esi+18h], bl
0x47CEE4: call    FormHeapAlloc
0x47CEE9: add     esp, 4
0x47CEEC: mov     [esp+1Ch+var_10], eax
0x47CEF0: cmp     eax, ebx
0x47CEF2: mov     [esp+1Ch+var_4], ebx
0x47CEF6: jz      short loc_47CF16
0x47CEF8: mov     ecx, eax; lpCriticalSection
0x47CEFA: call    NiInitalizeCriticalSection
0x47CEFF: mov     [esi+4], eax
0x47CF02: mov     eax, esi
0x47CF04: mov     ecx, [esp+1Ch+var_C]
0x47CF08: mov     large fs:0, ecx
0x47CF0F: pop     ecx
0x47CF10: pop     esi
0x47CF11: pop     ebx
0x47CF12: add     esp, 10h
0x47CF15: retn
0x47CF16: mov     [esi+4], ebx
0x47CF19: mov     eax, esi
0x47CF1B: mov     ecx, [esp+1Ch+var_C]
0x47CF1F: mov     large fs:0, ecx
0x47CF26: pop     ecx
0x47CF27: pop     esi
0x47CF28: pop     ebx
0x47CF29: add     esp, 10h
0x47CF2C: retn
