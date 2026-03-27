0x42D6D0: push    0FFFFFFFFh
0x42D6D2: push    offset ArchiveFileCompressed_constr_SEH
0x42D6D7: mov     eax, large fs:0
0x42D6DD: push    eax
0x42D6DE: push    ecx
0x42D6DF: push    ebx
0x42D6E0: push    ebp
0x42D6E1: push    esi
0x42D6E2: push    edi
0x42D6E3: mov     eax, ___security_cookie
0x42D6E8: xor     eax, esp
0x42D6EA: push    eax
0x42D6EB: lea     eax, [esp+24h+var_C]
0x42D6EF: mov     large fs:0, eax
0x42D6F5: mov     esi, ecx
0x42D6F7: mov     [esp+24h+var_10], esi
0x42D6FB: mov     eax, [esp+24h+arg_10]
0x42D6FF: mov     ecx, [esp+24h+arg_C]
0x42D703: mov     edx, [esp+24h+arg_8]
0x42D707: mov     ebp, dword ptr [esp+24h+ArgList]
0x42D70B: push    eax
0x42D70C: mov     eax, [esp+28h+arg_4]
0x42D710: push    ecx
0x42D711: push    edx
0x42D712: push    eax
0x42D713: push    ebp
0x42D714: mov     ecx, esi; this
0x42D716: call    ??0ArchiveFile@@QAE@XZ; ArchiveFile::ArchiveFile(void)
0x42D71B: push    4; Size
0x42D71D: lea     ebx, [esi+164h]
0x42D723: push    ebx; Dst
0x42D724: mov     ecx, esi
0x42D726: mov     [esp+2Ch+var_4], 0
0x42D72E: mov     dword ptr [esi], offset ??_7CompressedArchiveFile@@6B@; const CompressedArchiveFile::`vftable'
0x42D734: call    sub_42C4A0
0x42D739: add     [esi+148h], eax
0x42D73F: push    38h ; '8'; Size
0x42D741: call    FormHeapAlloc
0x42D746: mov     edi, eax
0x42D748: mov     [esi+15Ch], edi
0x42D74E: push    38h ; '8'; a3
0x42D750: xor     eax, eax
0x42D752: push    offset a1_2_1; "1.2.1"
0x42D757: push    edi; a1
0x42D758: mov     dword ptr [edi+20h], offset sub_42BA60
0x42D75F: mov     dword ptr [edi+24h], offset sub_42BA80
0x42D766: mov     [edi+28h], eax
0x42D769: mov     [edi+4], eax
0x42D76C: mov     [edi], eax
0x42D76E: call    zlib_InflateInitEx
0x42D773: add     esp, 10h
0x42D776: test    eax, eax
0x42D778: jz      short loc_42D7AC
0x42D77A: push    edi
0x42D77B: call    Zlib_inflateEnd
0x42D780: add     esp, 4
0x42D783: test    ebp, ebp
0x42D785: jnz     short loc_42D78C
0x42D787: mov     ebp, offset aUnknown_1; "<Unknown>"
0x42D78C: push    ebp; ArgList
0x42D78D: push    offset aErrorInitializ; "Error initializing ZLib inflate stream "...
0x42D792: call    PrintError
0x42D797: push    edi
0x42D798: call    FormHeapFree
0x42D79D: add     esp, 0Ch
0x42D7A0: mov     dword ptr [esi+15Ch], 0
0x42D7AA: jmp     short loc_42D7DC
0x42D7AC: mov     ebx, [ebx]
0x42D7AE: mov     eax, Size
0x42D7B3: cmp     ebx, eax
0x42D7B5: jnb     short loc_42D7B9
0x42D7B7: mov     eax, ebx
0x42D7B9: push    eax; Size
0x42D7BA: mov     [esi+168h], eax
0x42D7C0: call    FormHeapAlloc
0x42D7C5: add     esp, 4
0x42D7C8: mov     [esi+160h], eax
0x42D7CE: xor     eax, eax
0x42D7D0: mov     [esi+16Ch], eax
0x42D7D6: mov     [esi+170h], eax
0x42D7DC: mov     eax, esi
0x42D7DE: mov     ecx, [esp+24h+var_C]
0x42D7E2: mov     large fs:0, ecx
0x42D7E9: pop     ecx
0x42D7EA: pop     edi
0x42D7EB: pop     esi
0x42D7EC: pop     ebp
0x42D7ED: pop     ebx
0x42D7EE: add     esp, 10h
0x42D7F1: retn    14h
