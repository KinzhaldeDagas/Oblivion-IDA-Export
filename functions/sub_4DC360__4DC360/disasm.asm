0x4DC360: mov     ecx, [ecx+3Ch]
0x4DC363: test    ecx, ecx
0x4DC365: jz      short loc_4DC3E4
0x4DC367: push    offset off_A7D2CC
0x4DC36C: call    NiObjectNET_GetExtraData
0x4DC371: test    eax, eax
0x4DC373: jz      short loc_4DC3E4
0x4DC375: fld     dword ptr [eax+18h]
0x4DC378: fchs
0x4DC37A: fstp    dword ptr ds:0B35EE8h
0x4DC380: fld     dword ptr [eax+1Ch]
0x4DC383: fchs
0x4DC385: fstp    dword ptr ds:0B35EECh
0x4DC38B: fld     dword ptr [eax+20h]
0x4DC38E: fchs
0x4DC390: fstp    dword ptr ds:0B35EF0h
0x4DC396: fld     dword ptr [eax+0Ch]
0x4DC399: fadd    dword ptr ds:0B35EE8h
0x4DC39F: fstp    dword ptr ds:0B35EE8h
0x4DC3A5: mov     ecx, ds:0B35EE8h
0x4DC3AB: fld     dword ptr [eax+10h]
0x4DC3AE: fadd    dword ptr ds:0B35EECh
0x4DC3B4: fstp    dword ptr ds:0B35EECh
0x4DC3BA: mov     edx, ds:0B35EECh
0x4DC3C0: fld     dword ptr [eax+14h]
0x4DC3C3: mov     eax, [esp+arg_0]
0x4DC3C7: fadd    dword ptr ds:0B35EF0h
0x4DC3CD: mov     [eax], ecx
0x4DC3CF: mov     [eax+4], edx
0x4DC3D2: fstp    dword ptr ds:0B35EF0h
0x4DC3D8: mov     ecx, ds:0B35EF0h
0x4DC3DE: mov     [eax+8], ecx
0x4DC3E1: retn    4
0x4DC3E4: mov     eax, [esp+arg_0]
0x4DC3E8: mov     edx, ds:0B3F9A8h
0x4DC3EE: mov     ecx, ds:0B3F9ACh
0x4DC3F4: mov     [eax], edx
0x4DC3F6: mov     edx, ds:0B3F9B0h
0x4DC3FC: mov     [eax+4], ecx
0x4DC3FF: mov     [eax+8], edx
0x4DC402: retn    4
