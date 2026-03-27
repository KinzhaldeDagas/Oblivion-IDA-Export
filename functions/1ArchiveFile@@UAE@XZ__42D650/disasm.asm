0x42D650: push    0FFFFFFFFh
0x42D652: push    offset ??1ArchiveFile@@UAE@XZ_SEH
0x42D657: mov     eax, large fs:0
0x42D65D: push    eax
0x42D65E: push    ecx
0x42D65F: push    ebx
0x42D660: push    esi
0x42D661: mov     eax, ___security_cookie
0x42D666: xor     eax, esp
0x42D668: push    eax
0x42D669: lea     eax, [esp+1Ch+var_C]
0x42D66D: mov     large fs:0, eax
0x42D673: mov     esi, ecx
0x42D675: mov     [esp+1Ch+var_10], esi
0x42D679: mov     dword ptr [esi], offset ??_7ArchiveFile@@6B@; const ArchiveFile::`vftable'
0x42D67F: mov     ecx, [esi+154h]
0x42D685: xor     ebx, ebx
0x42D687: mov     [esp+1Ch+var_4], ebx
0x42D68B: call    Arcghive_CheckDelete
0x42D690: mov     eax, [esi+18h]
0x42D693: cmp     eax, ebx
0x42D695: jz      short loc_42D6A0
0x42D697: push    eax
0x42D698: call    FormHeapFree
0x42D69D: add     esp, 4
0x42D6A0: mov     ecx, esi; this
0x42D6A2: mov     [esi+18h], ebx
0x42D6A5: mov     [esi+1Ch], ebx
0x42D6A8: mov     [esi+24h], bl
0x42D6AB: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x42D6B3: call    ??1BSFile@@UAE@XZ; BSFile::~BSFile(void)
0x42D6B8: mov     ecx, [esp+1Ch+var_C]
0x42D6BC: mov     large fs:0, ecx
0x42D6C3: pop     ecx
0x42D6C4: pop     esi
0x42D6C5: pop     ebx
0x42D6C6: add     esp, 10h
0x42D6C9: retn
