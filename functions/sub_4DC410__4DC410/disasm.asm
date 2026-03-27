0x4DC410: mov     ecx, [ecx+3Ch]
0x4DC413: test    ecx, ecx
0x4DC415: jz      short loc_4DC48E
0x4DC417: push    offset off_A7D2CC
0x4DC41C: call    NiObjectNET_GetExtraData
0x4DC421: test    eax, eax
0x4DC423: jz      short loc_4DC48E
0x4DC425: fld     dword ptr [eax+18h]
0x4DC428: fstp    dword ptr ds:0B35EF4h
0x4DC42E: fld     dword ptr [eax+1Ch]
0x4DC431: fstp    dword ptr ds:0B35EF8h
0x4DC437: fld     dword ptr [eax+20h]
0x4DC43A: fstp    dword ptr ds:0B35EFCh
0x4DC440: fld     dword ptr [eax+0Ch]
0x4DC443: fadd    dword ptr ds:0B35EF4h
0x4DC449: fstp    dword ptr ds:0B35EF4h
0x4DC44F: mov     ecx, ds:0B35EF4h
0x4DC455: fld     dword ptr [eax+10h]
0x4DC458: fadd    dword ptr ds:0B35EF8h
0x4DC45E: fstp    dword ptr ds:0B35EF8h
0x4DC464: mov     edx, ds:0B35EF8h
0x4DC46A: fld     dword ptr [eax+14h]
0x4DC46D: mov     eax, [esp+arg_0]
0x4DC471: fadd    dword ptr ds:0B35EFCh
0x4DC477: mov     [eax], ecx
0x4DC479: mov     [eax+4], edx
0x4DC47C: fstp    dword ptr ds:0B35EFCh
0x4DC482: mov     ecx, ds:0B35EFCh
0x4DC488: mov     [eax+8], ecx
0x4DC48B: retn    4
0x4DC48E: mov     eax, [esp+arg_0]
0x4DC492: mov     edx, ds:0B3F9A8h
0x4DC498: mov     ecx, ds:0B3F9ACh
0x4DC49E: mov     [eax], edx
0x4DC4A0: mov     edx, ds:0B3F9B0h
0x4DC4A6: mov     [eax+4], ecx
0x4DC4A9: mov     [eax+8], edx
0x4DC4AC: retn    4
