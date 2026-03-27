0x4DC4B0: mov     ecx, [esp+arg_4]
0x4DC4B4: test    ecx, ecx
0x4DC4B6: jz      short loc_4DC52D
0x4DC4B8: push    offset off_A7D2CC
0x4DC4BD: call    NiObjectNET_GetExtraData
0x4DC4C2: test    eax, eax
0x4DC4C4: jz      short loc_4DC52D
0x4DC4C6: fld     dword ptr [eax+18h]
0x4DC4C9: fstp    dword ptr ds:0B35EF4h
0x4DC4CF: fld     dword ptr [eax+1Ch]
0x4DC4D2: fstp    dword ptr ds:0B35EF8h
0x4DC4D8: fld     dword ptr [eax+20h]
0x4DC4DB: fstp    dword ptr ds:0B35EFCh
0x4DC4E1: fld     dword ptr [eax+0Ch]
0x4DC4E4: fadd    dword ptr ds:0B35EF4h
0x4DC4EA: fstp    dword ptr ds:0B35EF4h
0x4DC4F0: mov     ecx, ds:0B35EF4h
0x4DC4F6: fld     dword ptr [eax+10h]
0x4DC4F9: fadd    dword ptr ds:0B35EF8h
0x4DC4FF: fstp    dword ptr ds:0B35EF8h
0x4DC505: mov     edx, ds:0B35EF8h
0x4DC50B: fld     dword ptr [eax+14h]
0x4DC50E: mov     eax, [esp+arg_0]
0x4DC512: fadd    dword ptr ds:0B35EFCh
0x4DC518: mov     [eax], ecx
0x4DC51A: mov     [eax+4], edx
0x4DC51D: fstp    dword ptr ds:0B35EFCh
0x4DC523: mov     ecx, ds:0B35EFCh
0x4DC529: mov     [eax+8], ecx
0x4DC52C: retn
0x4DC52D: mov     eax, [esp+arg_0]
0x4DC531: mov     edx, ds:0B3F9A8h
0x4DC537: mov     ecx, ds:0B3F9ACh
0x4DC53D: mov     [eax], edx
0x4DC53F: mov     edx, ds:0B3F9B0h
0x4DC545: mov     [eax+4], ecx
0x4DC548: mov     [eax+8], edx
0x4DC54B: retn
