0x46D480: push    esi
0x46D481: mov     esi, ecx
0x46D483: mov     eax, [esi+4]
0x46D486: test    eax, eax
0x46D488: jz      short loc_46D49A
0x46D48A: push    eax
0x46D48B: call    FormHeapFree
0x46D490: add     esp, 4
0x46D493: mov     dword ptr [esi+4], 0
0x46D49A: mov     byte ptr [esi], 0
0x46D49D: pop     esi
0x46D49E: retn
