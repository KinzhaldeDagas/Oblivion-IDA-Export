0x4316E0: push    0FFFFFFFFh
0x4316E2: push    offset SEH_4316E0
0x4316E7: mov     eax, large fs:0
0x4316ED: push    eax
0x4316EE: push    ecx
0x4316EF: push    esi
0x4316F0: mov     eax, ___security_cookie
0x4316F5: xor     eax, esp
0x4316F7: push    eax
0x4316F8: lea     eax, [esp+18h+var_C]
0x4316FC: mov     large fs:0, eax
0x431702: mov     esi, ecx
0x431704: mov     [esp+18h+var_10], esi
0x431708: mov     dword ptr [esi], offset ??_7FileFinder@@6B@; const FileFinder::`vftable'
0x43170E: xor     eax, eax
0x431710: mov     dword ptr [esi+4], offset ??_7?$NiTArray@PBD@@6B@; const NiTArray<char const *>::`vftable'
0x431717: mov     [esi+0Ch], ax
0x43171B: mov     word ptr [esi+12h], 1
0x431721: mov     [esi+0Eh], ax
0x431725: mov     [esi+10h], ax
0x431729: mov     [esi+8], eax
0x43172C: cmp     OBSE_g_FileFinder, eax
0x431732: mov     [esp+18h+var_4], eax
0x431736: jnz     short loc_43173E
0x431738: mov     OBSE_g_FileFinder, esi
0x43173E: push    offset sub_431440
0x431743: call    NiFile_SetGetNiFileFunc
0x431748: push    offset sub_431370
0x43174D: call    NiFile_SetCanOpenFileWithModeFunc
0x431752: add     esp, 8
0x431755: mov     eax, esi
0x431757: mov     ecx, [esp+18h+var_C]
0x43175B: mov     large fs:0, ecx
0x431762: pop     ecx
0x431763: pop     esi
0x431764: add     esp, 10h
0x431767: retn
