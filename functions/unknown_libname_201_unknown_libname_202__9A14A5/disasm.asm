0x9A14A5: push    dword ptr [ebp-20h]; Memory
0x9A14A8: call    __freea
0x9A14AD: mov     eax, [ebp-28h]
0x9A14B0: pop     ecx
0x9A14B1: jmp     loc_9A156B
0x9A14B6: xor     edi, edi
0x9A14B8: xor     ebx, ebx
0x9A14BA: cmp     [ebp+8], edi
0x9A14BD: jnz     short loc_9A14C7
0x9A14BF: mov     eax, [esi]
0x9A14C1: mov     eax, [eax+14h]
0x9A14C4: mov     [ebp+8], eax
0x9A14C7: cmp     [ebp+1Ch], edi
0x9A14CA: jnz     short loc_9A14D4
0x9A14CC: mov     eax, [esi]
0x9A14CE: mov     eax, [eax+4]
0x9A14D1: mov     [ebp+1Ch], eax
0x9A14D4: push    dword ptr [ebp+8]; Locale
0x9A14D7: call    ___ansicp
0x9A14DC: mov     esi, eax
0x9A14DE: cmp     esi, 0FFFFFFFFh
0x9A14E1: pop     ecx
0x9A14E2: jz      loc_9A12A2
0x9A14E8: cmp     esi, [ebp+1Ch]
0x9A14EB: jz      short loc_9A153D
0x9A14ED: push    0; int
0x9A14EF: push    0; int
0x9A14F1: lea     eax, [ebp+10h]
0x9A14F4: push    eax; int
0x9A14F5: push    dword ptr [ebp-24h]; int
0x9A14F8: push    esi; UINT
0x9A14F9: push    dword ptr [ebp+1Ch]; CodePage
0x9A14FC: call    ___convertcp
0x9A1501: mov     ebx, eax
0x9A1503: add     esp, 18h
0x9A1506: test    ebx, ebx
0x9A1508: jz      loc_9A12A2
0x9A150E: push    0; int
0x9A1510: push    0; int
0x9A1512: lea     eax, [ebp+18h]
0x9A1515: push    eax; int
0x9A1516: push    dword ptr [ebp-1Ch]; int
0x9A1519: push    esi; UINT
0x9A151A: push    dword ptr [ebp+1Ch]; CodePage
0x9A151D: call    ___convertcp
0x9A1522: mov     edi, eax
0x9A1524: add     esp, 18h
0x9A1527: test    edi, edi
0x9A1529: jnz     short loc_9A1537
0x9A152B: push    ebx; Memory
0x9A152C: call    _free
0x9A1531: pop     ecx
0x9A1532: jmp     loc_9A12A2
0x9A1537: mov     [ebp-24h], ebx
0x9A153A: mov     [ebp-1Ch], edi
0x9A153D: push    dword ptr [ebp+18h]; cchCount2
0x9A1540: push    dword ptr [ebp-1Ch]; lpString2
0x9A1543: push    dword ptr [ebp+10h]; cchCount1
0x9A1546: push    dword ptr [ebp-24h]; lpString1
0x9A1549: push    dword ptr [ebp+0Ch]; dwCmpFlags
0x9A154C: push    dword ptr [ebp+8]; Locale
0x9A154F: call    ds:CompareStringA
0x9A1555: test    ebx, ebx
0x9A1557: mov     esi, eax
0x9A1559: jz      short loc_9A1569
0x9A155B: push    ebx; Memory
0x9A155C: call    _free
0x9A1561: push    edi; Memory
0x9A1562: call    _free
0x9A1567: pop     ecx
0x9A1568: pop     ecx
0x9A1569: mov     eax, esi
0x9A156B: lea     esp, [ebp-38h]
0x9A156E: pop     edi
0x9A156F: pop     esi
0x9A1570: pop     ebx
0x9A1571: mov     ecx, [ebp-4]
0x9A1574: xor     ecx, ebp
0x9A1576: call    @__security_check_cookie@4
0x9A157B: leave
0x9A157C: retn
