0x716690: push    esi
0x716691: mov     esi, ecx
0x716693: cmp     dword ptr [esi+1Ch], 0
0x716697: jz      short loc_7166AE
0x716699: lea     ecx, [esi+8]
0x71669C: call    NiTMap_Clear
0x7166A1: mov     eax, [esi+1Ch]
0x7166A4: push    esi
0x7166A5: push    eax
0x7166A6: call    sub_7165B0
0x7166AB: add     esp, 8
0x7166AE: pop     esi
0x7166AF: retn
