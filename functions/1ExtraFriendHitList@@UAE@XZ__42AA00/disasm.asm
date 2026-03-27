0x42AA00: push    ebx
0x42AA01: mov     ebx, ecx
0x42AA03: push    esi
0x42AA04: mov     esi, [ebx+0Ch]
0x42AA07: test    esi, esi
0x42AA09: mov     dword ptr [ebx], offset ??_7ExtraFriendHitList@@6B@; const ExtraFriendHitList::`vftable'
0x42AA0F: jz      short loc_42AA27
0x42AA11: mov     eax, [esi]
0x42AA13: test    eax, eax
0x42AA15: jz      short loc_42AA27
0x42AA17: push    eax
0x42AA18: call    FormHeapFree
0x42AA1D: mov     esi, [esi+4]
0x42AA20: add     esp, 4
0x42AA23: test    esi, esi
0x42AA25: jnz     short loc_42AA11
0x42AA27: mov     esi, [ebx+0Ch]
0x42AA2A: cmp     dword ptr [esi+4], 0
0x42AA2E: jz      short loc_42AA48
0x42AA30: push    edi
0x42AA31: mov     eax, [esi+4]
0x42AA34: mov     edi, [eax+4]
0x42AA37: push    eax
0x42AA38: call    FormHeapFree
0x42AA3D: add     esp, 4
0x42AA40: test    edi, edi
0x42AA42: mov     [esi+4], edi
0x42AA45: jnz     short loc_42AA31
0x42AA47: pop     edi
0x42AA48: mov     dword ptr [esi], 0
0x42AA4E: mov     eax, [ebx+0Ch]
0x42AA51: push    eax
0x42AA52: call    FormHeapFree
0x42AA57: add     esp, 4
0x42AA5A: pop     esi
0x42AA5B: mov     dword ptr [ebx], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x42AA61: pop     ebx
0x42AA62: retn
