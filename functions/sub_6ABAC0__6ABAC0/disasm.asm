0x6ABAC0: push    ecx
0x6ABAC1: cmp     byte ptr ds:0B16178h, 0
0x6ABAC8: jz      short loc_6ABAF4
0x6ABACA: mov     edx, [esp+4+arg_0]
0x6ABACE: mov     ecx, [ecx+300h]
0x6ABAD4: lea     eax, [esp+4+var_4]
0x6ABAD7: push    eax
0x6ABAD8: push    edx
0x6ABAD9: mov     [esp+0Ch+var_4], 0
0x6ABAE1: call    NiTMap_GetAt
0x6ABAE6: mov     eax, [esp+4+var_4]
0x6ABAE9: test    eax, eax
0x6ABAEB: jz      short loc_6ABAF4
0x6ABAED: fld     dword ptr [eax+3Ch]
0x6ABAF0: pop     ecx
0x6ABAF1: retn    4
0x6ABAF4: fldz
0x6ABAF6: pop     ecx
0x6ABAF7: retn    4
