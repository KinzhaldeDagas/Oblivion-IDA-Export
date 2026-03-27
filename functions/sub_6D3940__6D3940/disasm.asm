0x6D3940: mov     eax, [esp+a2]
0x6D3944: test    eax, eax
0x6D3946: push    edi
0x6D3947: mov     edi, ecx
0x6D3949: jz      short loc_6D3958
0x6D394B: push    eax; a2
0x6D394C: lea     ecx, [edi+3Ch]; this
0x6D394F: call    NiSmartPointer_Set??
0x6D3954: pop     edi
0x6D3955: retn    4
0x6D3958: push    esi
0x6D3959: mov     esi, [edi+3Ch]
0x6D395C: test    esi, esi
0x6D395E: jz      short loc_6D3983
0x6D3960: lea     eax, [esi+4]
0x6D3963: push    eax; lpAddend
0x6D3964: call    dword ptr ds:0A2807Ch
0x6D396A: test    eax, eax
0x6D396C: jnz     short loc_6D397C
0x6D396E: test    esi, esi
0x6D3970: jz      short loc_6D397C
0x6D3972: mov     edx, [esi]
0x6D3974: mov     eax, [edx]
0x6D3976: push    1
0x6D3978: mov     ecx, esi
0x6D397A: call    eax
0x6D397C: mov     dword ptr [edi+3Ch], 0
0x6D3983: pop     esi
0x6D3984: pop     edi
0x6D3985: retn    4
