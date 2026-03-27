0x723A20: push    esi
0x723A21: push    edi
0x723A22: mov     edi, [esp+8+arg_0]
0x723A26: push    edi
0x723A27: mov     esi, ecx
0x723A29: call    sub_7416F0
0x723A2E: cmp     dword ptr [edi+0D8h], 0A00010Ch
0x723A38: jb      short loc_723A4D
0x723A3A: mov     ecx, edi
0x723A3C: call    sub_7124A0
0x723A41: push    eax; a2
0x723A42: lea     ecx, [esi+0FCh]; this
0x723A48: call    NiSmartPointer_Set??
0x723A4D: pop     edi
0x723A4E: pop     esi
0x723A4F: retn    4
