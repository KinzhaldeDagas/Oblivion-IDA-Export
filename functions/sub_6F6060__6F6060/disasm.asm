0x6F6060: push    esi; File
0x6F6061: mov     esi, ecx
0x6F6063: mov     eax, [esi+3Ch]
0x6F6066: test    eax, eax
0x6F6068: push    edi
0x6F6069: jz      short loc_6F60DE
0x6F606B: mov     edi, [esp+8+Count]
0x6F606F: mov     ecx, [esp+8+DstBuf]
0x6F6073: push    eax; Count
0x6F6074: mov     eax, [esp+0Ch+ElementSize]
0x6F6078: push    edi; Size
0x6F6079: push    eax; ElementSize
0x6F607A: push    ecx; DstBuf
0x6F607B: call    _fread
0x6F6080: add     esp, 10h
0x6F6083: cmp     eax, edi
0x6F6085: jz      short loc_6F60E5
0x6F6087: sub     esp, 1Ch
0x6F608A: mov     ecx, esp
0x6F608C: mov     [esp+24h+Count], esp
0x6F6090: push    0FFFFFFFFh
0x6F6092: push    0
0x6F6094: lea     edi, [esi+4]
0x6F6097: mov     dword ptr [ecx+18h], 0Fh
0x6F609E: mov     dword ptr [ecx+14h], 0
0x6F60A5: push    edi
0x6F60A6: mov     byte ptr [ecx+4], 0
0x6F60AA: call    sub_414420
0x6F60AF: push    1; int
0x6F60B1: call    sub_6F6BF0
0x6F60B6: mov     eax, [esi+3Ch]
0x6F60B9: add     esp, 20h
0x6F60BC: test    eax, eax
0x6F60BE: jz      short loc_6F60C9
0x6F60C0: push    eax; File
0x6F60C1: call    _fclose
0x6F60C6: add     esp, 4
0x6F60C9: push    0; MaxCount
0x6F60CB: push    offset EmptyString; Src
0x6F60D0: mov     ecx, edi
0x6F60D2: call    sub_414500
0x6F60D7: mov     dword ptr [esi+3Ch], 0
0x6F60DE: xor     al, al
0x6F60E0: pop     edi
0x6F60E1: pop     esi
0x6F60E2: retn    0Ch
0x6F60E5: pop     edi
0x6F60E6: mov     al, 1
0x6F60E8: pop     esi
0x6F60E9: retn    0Ch
