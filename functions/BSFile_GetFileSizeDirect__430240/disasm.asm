0x430240: push    esi
0x430241: mov     esi, ecx
0x430243: cmp     dword ptr [esi+20h], 1
0x430247: mov     dword ptr [esi+150h], 0
0x430251: jnz     short loc_430258
0x430253: call    NiFile_Flush
0x430258: mov     eax, [esi]
0x43025A: mov     edx, [eax+18h]
0x43025D: push    0
0x43025F: push    0
0x430261: mov     ecx, esi
0x430263: call    edx
0x430265: mov     eax, [esi+1Ch]
0x430268: test    eax, eax
0x43026A: jz      short loc_4302A1
0x43026C: push    edi
0x43026D: push    eax; File
0x43026E: call    _ftell
0x430273: push    2; Origin
0x430275: mov     edi, eax
0x430277: mov     eax, [esi+1Ch]
0x43027A: push    0; Offset
0x43027C: push    eax; File
0x43027D: call    _fseek
0x430282: mov     ecx, [esi+1Ch]
0x430285: push    ecx; File
0x430286: call    _ftell
0x43028B: mov     edx, [esi+1Ch]
0x43028E: push    0; Origin
0x430290: push    edi; Offset
0x430291: push    edx; File
0x430292: mov     [esi+150h], eax
0x430298: call    _fseek
0x43029D: add     esp, 20h
0x4302A0: pop     edi
0x4302A1: mov     eax, [esi+150h]
0x4302A7: pop     esi
0x4302A8: retn
