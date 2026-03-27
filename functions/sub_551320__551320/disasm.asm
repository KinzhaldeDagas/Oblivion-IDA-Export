0x551320: push    esi
0x551321: push    edi
0x551322: push    0Ch; Size
0x551324: call    FormHeapAlloc
0x551329: add     esp, 4
0x55132C: test    eax, eax
0x55132E: jz      short loc_55133B
0x551330: mov     dword ptr [eax+8], 0
0x551337: mov     edi, eax
0x551339: jmp     short loc_55133D
0x55133B: xor     edi, edi
0x55133D: mov     esi, [edi+8]
0x551340: test    esi, esi
0x551342: jz      short loc_551367
0x551344: lea     eax, [esi+4]
0x551347: push    eax; lpAddend
0x551348: call    dword ptr ds:0A2807Ch
0x55134E: test    eax, eax
0x551350: jnz     short loc_551360
0x551352: test    esi, esi
0x551354: jz      short loc_551360
0x551356: mov     edx, [esi]
0x551358: mov     eax, [edx]
0x55135A: push    1
0x55135C: mov     ecx, esi
0x55135E: call    eax
0x551360: mov     dword ptr [edi+8], 0
0x551367: mov     eax, edi
0x551369: pop     edi
0x55136A: pop     esi
0x55136B: retn
