0x4B2BD0: push    ecx
0x4B2BD1: mov     ecx, [ecx+0Ch]
0x4B2BD4: lea     eax, [esp+4+var_4]
0x4B2BD7: push    eax
0x4B2BD8: push    ecx
0x4B2BD9: mov     ecx, offset off_B08310
0x4B2BDE: mov     [esp+0Ch+var_4], 0
0x4B2BE6: call    NiTMap_GetAt
0x4B2BEB: neg     al
0x4B2BED: sbb     eax, eax
0x4B2BEF: and     eax, [esp+4+var_4]
0x4B2BF2: pop     ecx
0x4B2BF3: retn
