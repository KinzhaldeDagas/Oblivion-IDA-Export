0x42CA60: push    0FFFFFFFFh
0x42CA62: push    offset ??1Archive@@UAE@XZ_SEH
0x42CA67: mov     eax, large fs:0
0x42CA6D: push    eax
0x42CA6E: push    ecx
0x42CA6F: push    esi
0x42CA70: mov     eax, ___security_cookie
0x42CA75: xor     eax, esp
0x42CA77: push    eax
0x42CA78: lea     eax, [esp+18h+var_C]
0x42CA7C: mov     large fs:0, eax
0x42CA82: mov     esi, ecx
0x42CA84: mov     [esp+18h+var_10], esi
0x42CA88: mov     dword ptr [esi], offset ??_7Archive@@6BArchive@@@; const Archive::`vftable'{for `Archive'}
0x42CA8E: mov     [esp+18h+var_4], 0
0x42CA96: call    sub_42C080
0x42CA9B: push    0
0x42CA9D: mov     ecx, esi
0x42CA9F: call    Archive_DiscardRetainedFilenames
0x42CAA4: mov     ecx, esi
0x42CAA6: call    sub_42C160
0x42CAAB: lea     ecx, [esi+200h]; lpCriticalSection
0x42CAB1: call    NiDeleteCriticalSection
0x42CAB6: mov     ecx, esi; this
0x42CAB8: mov     [esp+18h+var_4], 0FFFFFFFFh
0x42CAC0: call    ??1BSFile@@UAE@XZ; BSFile::~BSFile(void)
0x42CAC5: mov     ecx, [esp+18h+var_C]
0x42CAC9: mov     large fs:0, ecx
0x42CAD0: pop     ecx
0x42CAD1: pop     esi
0x42CAD2: add     esp, 10h
0x42CAD5: retn
