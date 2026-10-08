0x6F6060: push    esi; File
0x6F6061: mov     esi, ecx
0x6F6063: mov     eax, [esi+3Ch]
0x6F6066: test    eax, eax
0x6F6068: push    edi
0x6F6069: jz      short loc_6F60DE
0x6F606B: mov     edi, dword ptr [esp+8+ElementSize+4]
0x6F606F: mov     ecx, [esp+8+DstBuf]
0x6F6073: push    eax; Count
0x6F6074: mov     eax, dword ptr [esp+0Ch+ElementSize]
0x6F6078: push    edi; Size
0x6F6079: push    eax; ElementSize
0x6F607A: push    ecx; DstBuf
0x6F607B: call    _fread
0x6F6080: add     esp, 10h
0x6F6083: cmp     eax, edi
0x6F6085: jz      short loc_6F60E5
0x6F6087: sub     esp, 1Ch
0x6F608A: mov     ecx, esp; this
0x6F608C: mov     dword ptr [esp+24h+ElementSize+4], esp
0x6F6090: push    0FFFFFFFFh; count
0x6F6092: push    0; offset
0x6F6094: lea     edi, [esi+4]
0x6F6097: mov     dword ptr [ecx+18h], 0Fh
0x6F609E: mov     dword ptr [ecx+14h], 0
0x6F60A5: push    edi; source
0x6F60A6: mov     byte ptr [ecx+4], 0
0x6F60AA: call    OB_stString28_AssignSubstring_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,offset,count). Bounds-checks offset, clamps count to source.size-offset, handles self-assignment by in-place erasure, grows when required, copies the selected bytes, updates size, and writes the terminator.
0x6F60AF: push    1; int
0x6F60B1: call    sub_6F6BF0
0x6F60B6: mov     eax, [esi+3Ch]
0x6F60B9: add     esp, 20h
0x6F60BC: test    eax, eax
0x6F60BE: jz      short loc_6F60C9
0x6F60C0: push    eax; File
0x6F60C1: call    _fclose
0x6F60C6: add     esp, 4
0x6F60C9: push    0; count
0x6F60CB: push    offset EmptyString; source
0x6F60D0: mov     ecx, edi; this
0x6F60D2: call    OB_stString28_AssignBytes_010201A0; Oblivion binary evidence: 28-byte SSO string assign(source,count). Detects source aliasing inside the current buffer and delegates to substring assignment; otherwise grows if needed, copies exactly count bytes, updates size, and terminates.
0x6F60D7: mov     dword ptr [esi+3Ch], 0
0x6F60DE: xor     al, al
0x6F60E0: pop     edi
0x6F60E1: pop     esi
0x6F60E2: retn    0Ch
0x6F60E5: pop     edi
0x6F60E6: mov     al, 1
0x6F60E8: pop     esi
0x6F60E9: retn    0Ch
