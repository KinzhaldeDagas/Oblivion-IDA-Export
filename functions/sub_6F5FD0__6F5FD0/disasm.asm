0x6F5FD0: push    esi; File
0x6F5FD1: mov     esi, ecx
0x6F5FD3: mov     eax, [esi+3Ch]
0x6F5FD6: test    eax, eax
0x6F5FD8: push    edi
0x6F5FD9: jz      short loc_6F604E
0x6F5FDB: mov     edi, dword ptr [esp+8+Size+4]
0x6F5FDF: mov     ecx, [esp+8+Str]
0x6F5FE3: push    eax; Count
0x6F5FE4: mov     eax, dword ptr [esp+0Ch+Size]
0x6F5FE8: push    edi; Size
0x6F5FE9: push    eax; Size
0x6F5FEA: push    ecx; Str
0x6F5FEB: call    _fwrite
0x6F5FF0: add     esp, 10h
0x6F5FF3: cmp     eax, edi
0x6F5FF5: jz      short loc_6F6055
0x6F5FF7: sub     esp, 1Ch
0x6F5FFA: mov     ecx, esp; this
0x6F5FFC: mov     dword ptr [esp+24h+Size+4], esp
0x6F6000: push    0FFFFFFFFh; count
0x6F6002: push    0; offset
0x6F6004: lea     edi, [esi+4]
0x6F6007: mov     dword ptr [ecx+18h], 0Fh
0x6F600E: mov     dword ptr [ecx+14h], 0
0x6F6015: push    edi; source
0x6F6016: mov     byte ptr [ecx+4], 0
0x6F601A: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F601F: push    6; int
0x6F6021: call    sub_6F6BF0
0x6F6026: mov     eax, [esi+3Ch]
0x6F6029: add     esp, 20h
0x6F602C: test    eax, eax
0x6F602E: jz      short loc_6F6039
0x6F6030: push    eax; File
0x6F6031: call    _fclose
0x6F6036: add     esp, 4
0x6F6039: push    0; count
0x6F603B: push    offset EmptyString; source
0x6F6040: mov     ecx, edi; this
0x6F6042: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x6F6047: mov     dword ptr [esi+3Ch], 0
0x6F604E: xor     al, al
0x6F6050: pop     edi
0x6F6051: pop     esi
0x6F6052: retn    0Ch
0x6F6055: pop     edi
0x6F6056: mov     al, 1
0x6F6058: pop     esi
0x6F6059: retn    0Ch
