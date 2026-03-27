0x52E150: push    0FFFFFFFFh
0x52E152: push    offset SEH_52E150
0x52E157: mov     eax, large fs:0
0x52E15D: push    eax
0x52E15E: push    ecx
0x52E15F: push    ebx
0x52E160: push    esi
0x52E161: mov     eax, ds:0B30AACh
0x52E166: xor     eax, esp
0x52E168: push    eax
0x52E169: lea     eax, [esp+1Ch+var_C]
0x52E16D: mov     large fs:0, eax
0x52E173: mov     esi, ecx
0x52E175: xor     ebx, ebx
0x52E177: mov     [esi], ebx
0x52E179: mov     dword ptr [esi+4], 32h ; '2'
0x52E180: mov     [esi+8], ebx
0x52E183: mov     [esi+0Ch], bl
0x52E186: mov     [esi+10h], ebx
0x52E189: mov     [esi+14h], bx
0x52E18D: mov     [esi+16h], bx
0x52E191: mov     eax, ebx
0x52E193: push    eax
0x52E194: call    FormHeapFree
0x52E199: add     esp, 4
0x52E19C: mov     [esi+10h], ebx
0x52E19F: mov     [esi+16h], bx
0x52E1A3: mov     [esi+14h], bx
0x52E1A7: mov     eax, esi
0x52E1A9: mov     ecx, [esp+1Ch+var_C]
0x52E1AD: mov     large fs:0, ecx
0x52E1B4: pop     ecx
0x52E1B5: pop     esi
0x52E1B6: pop     ebx
0x52E1B7: add     esp, 10h
0x52E1BA: retn
