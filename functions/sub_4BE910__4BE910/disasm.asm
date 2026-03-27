0x4BE910: mov     ecx, ds:0B35B90h
0x4BE916: test    ecx, ecx
0x4BE918: jz      short locret_4BE936
0x4BE91A: push    esi
0x4BE91B: mov     esi, ecx
0x4BE91D: call    sub_4BE820
0x4BE922: push    esi
0x4BE923: call    FormHeapFree
0x4BE928: add     esp, 4
0x4BE92B: mov     dword ptr ds:0B35B90h, 0
0x4BE935: pop     esi
0x4BE936: retn
