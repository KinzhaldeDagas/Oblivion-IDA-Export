0x4303F0: push    ebx
0x4303F1: push    esi
0x4303F2: push    edi
0x4303F3: mov     edi, [esp+0Ch+arg_0]
0x4303F7: mov     esi, ecx
0x4303F9: cmp     edi, [esi+0Ch]
0x4303FC: mov     bl, 1
0x4303FE: jnz     short loc_430408
0x430400: pop     edi
0x430401: pop     esi
0x430402: mov     al, bl
0x430404: pop     ebx
0x430405: retn    4
0x430408: mov     eax, ds:BSFile_FilePos_Beg
0x43040D: push    eax; Origin
0x43040E: push    0; Offset
0x430410: call    NiFile_Seek
0x430415: mov     ecx, esi
0x430417: call    NiFile_Flush
0x43041C: mov     ecx, [esi+18h]
0x43041F: push    ecx
0x430420: call    FormHeapFree
0x430425: add     esp, 4
0x430428: push    edi; HINSTANCE
0x430429: mov     ecx, offset FormHeap
0x43042E: mov     [esi+0Ch], edi
0x430431: call    _Ctl3dAutoSubclass@4; Ctl3dAutoSubclass(x)
0x430436: test    eax, eax
0x430438: mov     [esi+18h], eax
0x43043B: jnz     short loc_430456
0x43043D: mov     edx, dword_B045D0
0x430443: mov     eax, edx
0x430445: push    eax; Size
0x430446: mov     [esi+0Ch], edx
0x430449: call    FormHeapAlloc
0x43044E: add     esp, 4
0x430451: mov     [esi+18h], eax
0x430454: xor     bl, bl
0x430456: pop     edi
0x430457: mov     dword ptr [esi+148h], 0
0x430461: mov     dword ptr [esi+14Ch], 0
0x43046B: pop     esi
0x43046C: mov     al, bl
0x43046E: pop     ebx
0x43046F: retn    4
