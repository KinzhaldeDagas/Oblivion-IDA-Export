0x95F6D0: push    esi
0x95F6D1: push    edi
0x95F6D2: push    20h ; ' '; Size
0x95F6D4: mov     edi, ecx
0x95F6D6: call    FormHeapAlloc
0x95F6DB: mov     esi, eax
0x95F6DD: add     esp, 4
0x95F6E0: test    esi, esi
0x95F6E2: jz      short loc_95F717
0x95F6E4: lea     ecx, [esi+4]; this
0x95F6E7: mov     dword ptr [esi], offset ??_7NiHalfSpaceBV@@6B@; const NiHalfSpaceBV::`vftable'
0x95F6ED: call    sub_716DB0
0x95F6F2: lea     eax, [edi+4]
0x95F6F5: push    eax
0x95F6F6: mov     ecx, esi
0x95F6F8: call    sub_95DB70
0x95F6FD: mov     ecx, [edi+14h]
0x95F700: lea     eax, [edi+14h]
0x95F703: mov     [esi+14h], ecx
0x95F706: mov     edx, [eax+4]
0x95F709: mov     [esi+18h], edx
0x95F70C: mov     eax, [eax+8]
0x95F70F: mov     [esi+1Ch], eax
0x95F712: pop     edi
0x95F713: mov     eax, esi
0x95F715: pop     esi
0x95F716: retn
0x95F717: pop     edi
0x95F718: xor     eax, eax
0x95F71A: pop     esi
0x95F71B: retn
