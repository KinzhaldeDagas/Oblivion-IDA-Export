0x727F20: push    0FFFFFFFFh
0x727F22: push    offset SEH_8C62B0
0x727F27: mov     eax, large fs:0
0x727F2D: push    eax
0x727F2E: push    ecx
0x727F2F: push    esi
0x727F30: mov     eax, ds:0B30AACh
0x727F35: xor     eax, esp
0x727F37: push    eax
0x727F38: lea     eax, [esp+18h+var_C]
0x727F3C: mov     large fs:0, eax
0x727F42: push    14h; Size
0x727F44: call    FormHeapAlloc
0x727F49: mov     esi, eax
0x727F4B: add     esp, 4
0x727F4E: mov     [esp+18h+var_10], esi
0x727F52: test    esi, esi
0x727F54: mov     [esp+18h+var_4], 0
0x727F5C: jz      short loc_727F8C
0x727F5E: mov     ecx, esi
0x727F60: call    sub_721350
0x727F65: mov     dword ptr [esi], offset ??_7NiBinaryExtraData@@6B@; const NiBinaryExtraData::`vftable'
0x727F6B: mov     dword ptr [esi+10h], 0
0x727F72: mov     dword ptr [esi+0Ch], 0
0x727F79: mov     eax, esi
0x727F7B: mov     ecx, [esp+18h+var_C]
0x727F7F: mov     large fs:0, ecx
0x727F86: pop     ecx
0x727F87: pop     esi
0x727F88: add     esp, 10h
0x727F8B: retn
0x727F8C: xor     eax, eax
0x727F8E: mov     ecx, [esp+18h+var_C]
0x727F92: mov     large fs:0, ecx
0x727F99: pop     ecx
0x727F9A: pop     esi
0x727F9B: add     esp, 10h
0x727F9E: retn
