0x4D7940: push    esi
0x4D7941: mov     esi, [esp+4+arg_0]
0x4D7945: test    esi, esi
0x4D7947: push    edi
0x4D7948: mov     edi, ecx
0x4D794A: jz      short loc_4D797D
0x4D794C: cmp     dword ptr [esi+1Ch], 0
0x4D7950: jz      short loc_4D7986
0x4D7952: mov     eax, [esi]
0x4D7954: mov     edx, [eax+170h]
0x4D795A: mov     ecx, esi
0x4D795C: call    edx
0x4D795E: cmp     byte ptr [eax+4], 24h ; '$'
0x4D7962: jnz     short loc_4D7986
0x4D7964: mov     eax, [esi]
0x4D7966: mov     edx, [eax+170h]
0x4D796C: mov     ecx, esi
0x4D796E: call    edx
0x4D7970: test    eax, eax
0x4D7972: jz      short loc_4D7986
0x4D7974: cmp     byte ptr [eax+104h], 4
0x4D797B: jnz     short loc_4D7986
0x4D797D: push    esi
0x4D797E: lea     ecx, [edi+44h]
0x4D7981: call    sub_420860
0x4D7986: pop     edi
0x4D7987: pop     esi
0x4D7988: retn    4
