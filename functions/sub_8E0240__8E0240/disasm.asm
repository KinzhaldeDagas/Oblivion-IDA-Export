0x8E0240: push    ebx
0x8E0241: push    ebp
0x8E0242: push    esi
0x8E0243: mov     esi, ecx
0x8E0245: push    edi
0x8E0246: mov     edi, ds:0A28068h
0x8E024C: lea     eax, [esi+1C0h]
0x8E0252: push    eax; lpCriticalSection
0x8E0253: mov     dword ptr [esi], offset off_A9A5A8
0x8E0259: call    edi ; DeleteCriticalSection
0x8E025B: lea     ecx, [esi+180h]
0x8E0261: push    ecx; lpCriticalSection
0x8E0262: call    edi ; DeleteCriticalSection
0x8E0264: lea     edx, [esi+140h]
0x8E026A: push    edx; lpCriticalSection
0x8E026B: call    edi ; DeleteCriticalSection
0x8E026D: lea     ecx, [esi+0C0h]; lpCriticalSection
0x8E0273: call    sub_8E01F0
0x8E0278: lea     eax, [esi+78h]
0x8E027B: push    eax; lpCriticalSection
0x8E027C: call    edi ; DeleteCriticalSection
0x8E027E: mov     eax, [esi+74h]
0x8E0281: test    eax, eax
0x8E0283: mov     ebx, ds:0BA9DE4h
0x8E0289: mov     ebp, large fs:2Ch
0x8E0290: js      short loc_8E02B0
0x8E0292: mov     ecx, [esi+6Ch]
0x8E0295: mov     edx, [ebp+ebx*4+0]
0x8E0299: and     eax, 3FFFFFFFh
0x8E029E: push    14h
0x8E02A0: shl     eax, 3
0x8E02A3: push    eax
0x8E02A4: push    ecx
0x8E02A5: mov     ecx, [edx+19Ch]
0x8E02AB: call    sub_8A75D0
0x8E02B0: lea     eax, [esi+54h]
0x8E02B3: push    eax; lpCriticalSection
0x8E02B4: call    edi ; DeleteCriticalSection
0x8E02B6: mov     eax, [esi+50h]
0x8E02B9: test    eax, eax
0x8E02BB: js      short loc_8E02DB
0x8E02BD: mov     ecx, [esi+48h]
0x8E02C0: mov     edx, [ebp+ebx*4+0]
0x8E02C4: and     eax, 3FFFFFFFh
0x8E02C9: push    14h
0x8E02CB: shl     eax, 3
0x8E02CE: push    eax
0x8E02CF: push    ecx
0x8E02D0: mov     ecx, [edx+19Ch]
0x8E02D6: call    sub_8A75D0
0x8E02DB: mov     eax, offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x8E02E0: pop     edi
0x8E02E1: mov     [esi+38h], eax
0x8E02E4: mov     [esi+2Ch], eax
0x8E02E7: mov     ecx, esi
0x8E02E9: pop     esi
0x8E02EA: pop     ebp
0x8E02EB: pop     ebx
0x8E02EC: jmp     sub_8D3390
