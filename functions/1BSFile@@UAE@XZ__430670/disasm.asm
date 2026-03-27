0x430670: push    0FFFFFFFFh
0x430672: push    offset ??1BSFile@@UAE@XZ_SEH
0x430677: mov     eax, large fs:0
0x43067D: push    eax
0x43067E: push    ecx
0x43067F: push    esi
0x430680: mov     eax, ___security_cookie
0x430685: xor     eax, esp
0x430687: push    eax
0x430688: lea     eax, [esp+18h+var_C]
0x43068C: mov     large fs:0, eax
0x430692: mov     esi, ecx
0x430694: mov     [esp+18h+var_10], esi
0x430698: mov     dword ptr [esi], offset ??_7BSFile@@6B@; const BSFile::`vftable'
0x43069E: cmp     byte ptr [esi+24h], 0
0x4306A2: mov     [esp+18h+var_4], 0
0x4306AA: jz      short loc_4306C3
0x4306AC: cmp     dword ptr [esi+1Ch], 0
0x4306B0: jz      short loc_4306C3
0x4306B2: call    NiFile_Flush
0x4306B7: mov     eax, [esi+1Ch]
0x4306BA: push    eax; File
0x4306BB: call    _fclose
0x4306C0: add     esp, 4
0x4306C3: mov     eax, [esi+18h]
0x4306C6: push    eax
0x4306C7: call    FormHeapFree
0x4306CC: add     esp, 4
0x4306CF: mov     ecx, esi; this
0x4306D1: mov     dword ptr [esi+18h], 0
0x4306D8: mov     dword ptr [esi+1Ch], 0
0x4306DF: mov     [esp+18h+var_4], 0FFFFFFFFh
0x4306E7: call    ??1NiFile@@UAE@XZ; NiFile::~NiFile(void)
0x4306EC: mov     ecx, [esp+18h+var_C]
0x4306F0: mov     large fs:0, ecx
0x4306F7: pop     ecx
0x4306F8: pop     esi
0x4306F9: add     esp, 10h
0x4306FC: retn
