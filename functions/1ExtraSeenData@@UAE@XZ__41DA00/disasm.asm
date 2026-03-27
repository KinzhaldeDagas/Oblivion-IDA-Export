0x41DA00: push    0FFFFFFFFh
0x41DA02: push    offset SEH_42B090
0x41DA07: mov     eax, large fs:0
0x41DA0D: push    eax
0x41DA0E: push    ecx
0x41DA0F: push    esi
0x41DA10: mov     eax, ___security_cookie
0x41DA15: xor     eax, esp
0x41DA17: push    eax
0x41DA18: lea     eax, [esp+18h+var_C]
0x41DA1C: mov     large fs:0, eax
0x41DA22: mov     esi, ecx
0x41DA24: mov     [esp+18h+var_10], esi
0x41DA28: mov     dword ptr [esi], offset ??_7ExtraSeenData@@6B@; const ExtraSeenData::`vftable'
0x41DA2E: mov     ecx, [esi+0Ch]
0x41DA31: test    ecx, ecx
0x41DA33: mov     [esp+18h+var_4], 0
0x41DA3B: jz      short loc_41DA45
0x41DA3D: mov     eax, [ecx]
0x41DA3F: mov     edx, [eax]
0x41DA41: push    1
0x41DA43: call    edx
0x41DA45: mov     dword ptr [esi], offset ??_7BSExtraData@@6B@; const BSExtraData::`vftable'
0x41DA4B: mov     ecx, dword ptr [esp+18h+var_C]
0x41DA4F: mov     large fs:0, ecx
0x41DA56: pop     ecx
0x41DA57: pop     esi
0x41DA58: add     esp, 10h
0x41DA5B: retn
