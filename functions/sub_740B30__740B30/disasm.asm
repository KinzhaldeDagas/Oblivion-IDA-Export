0x740B30: push    0FFFFFFFFh
0x740B32: push    offset SEH_8C8970
0x740B37: mov     eax, large fs:0
0x740B3D: push    eax
0x740B3E: push    ecx
0x740B3F: push    ebx
0x740B40: push    esi
0x740B41: mov     eax, ds:0B30AACh
0x740B46: xor     eax, esp
0x740B48: push    eax
0x740B49: lea     eax, [esp+1Ch+var_C]
0x740B4D: mov     large fs:0, eax
0x740B53: mov     ebx, ecx
0x740B55: push    14h; Size
0x740B57: call    FormHeapAlloc
0x740B5C: mov     esi, eax
0x740B5E: add     esp, 4
0x740B61: mov     [esp+1Ch+var_10], esi
0x740B65: test    esi, esi
0x740B67: mov     [esp+1Ch+var_4], 0
0x740B6F: jz      short loc_740B8E
0x740B71: mov     ecx, esi
0x740B73: call    sub_721350
0x740B78: mov     dword ptr [esi], offset ??_7NiIntegersExtraData@@6B@; const NiIntegersExtraData::`vftable'
0x740B7E: mov     dword ptr [esi+10h], 0
0x740B85: mov     dword ptr [esi+0Ch], 0
0x740B8C: jmp     short loc_740B90
0x740B8E: xor     esi, esi
0x740B90: mov     eax, [esp+1Ch+arg_0]
0x740B94: push    eax
0x740B95: push    esi
0x740B96: mov     ecx, ebx
0x740B98: mov     [esp+24h+var_4], 0FFFFFFFFh
0x740BA0: call    sub_740990
0x740BA5: mov     eax, esi
0x740BA7: mov     ecx, [esp+1Ch+var_C]
0x740BAB: mov     large fs:0, ecx
0x740BB2: pop     ecx
0x740BB3: pop     esi
0x740BB4: pop     ebx
0x740BB5: add     esp, 10h
0x740BB8: retn    4
