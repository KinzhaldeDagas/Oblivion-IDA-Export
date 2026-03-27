0x46D450: push    esi
0x46D451: mov     esi, ecx
0x46D453: mov     ecx, [esi+4]
0x46D456: xor     al, al
0x46D458: test    ecx, ecx
0x46D45A: jz      short loc_46D46E
0x46D45C: push    ecx
0x46D45D: call    FormHeapFree
0x46D462: add     esp, 4
0x46D465: mov     dword ptr [esi+4], 0
0x46D46C: mov     al, 1
0x46D46E: mov     byte ptr [esi], 0
0x46D471: pop     esi
0x46D472: retn
