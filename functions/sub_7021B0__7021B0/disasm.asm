0x7021B0: push    esi
0x7021B1: push    edi
0x7021B2: mov     edi, ecx
0x7021B4: mov     esi, [edi+3Ch]
0x7021B7: test    esi, esi
0x7021B9: jz      short loc_7021DE
0x7021BB: lea     eax, [esi+4]
0x7021BE: push    eax; lpAddend
0x7021BF: call    dword ptr ds:0A2807Ch
0x7021C5: test    eax, eax
0x7021C7: jnz     short loc_7021D7
0x7021C9: test    esi, esi
0x7021CB: jz      short loc_7021D7
0x7021CD: mov     edx, [esi]
0x7021CF: mov     eax, [edx]
0x7021D1: push    1
0x7021D3: mov     ecx, esi
0x7021D5: call    eax
0x7021D7: mov     dword ptr [edi+3Ch], 0
0x7021DE: pop     edi
0x7021DF: pop     esi
0x7021E0: retn
