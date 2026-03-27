0x70FFC0: mov     eax, [esp+arg_0]
0x70FFC4: push    esi
0x70FFC5: push    edi
0x70FFC6: mov     esi, ecx
0x70FFC8: mov     ecx, 9
0x70FFCD: mov     edi, eax
0x70FFCF: rep movsd
0x70FFD1: fld     dword ptr [eax]
0x70FFD3: mov     ecx, [esp+8+arg_4]
0x70FFD7: pop     edi
0x70FFD8: pop     esi
0x70FFD9: fadd    dword ptr [ecx]
0x70FFDB: fstp    dword ptr [eax]
0x70FFDD: fld     dword ptr [ecx+4]
0x70FFE0: fadd    dword ptr [eax+4]
0x70FFE3: fstp    dword ptr [eax+4]
0x70FFE6: fld     dword ptr [ecx+8]
0x70FFE9: fadd    dword ptr [eax+8]
0x70FFEC: fstp    dword ptr [eax+8]
0x70FFEF: fld     dword ptr [ecx+0Ch]
0x70FFF2: fadd    dword ptr [eax+0Ch]
0x70FFF5: fstp    dword ptr [eax+0Ch]
0x70FFF8: fld     dword ptr [ecx+10h]
0x70FFFB: fadd    dword ptr [eax+10h]
0x70FFFE: fstp    dword ptr [eax+10h]
0x710001: fld     dword ptr [ecx+14h]
0x710004: fadd    dword ptr [eax+14h]
0x710007: fstp    dword ptr [eax+14h]
0x71000A: fld     dword ptr [ecx+18h]
0x71000D: fadd    dword ptr [eax+18h]
0x710010: fstp    dword ptr [eax+18h]
0x710013: fld     dword ptr [ecx+1Ch]
0x710016: fadd    dword ptr [eax+1Ch]
0x710019: fstp    dword ptr [eax+1Ch]
0x71001C: fld     dword ptr [ecx+20h]
0x71001F: fadd    dword ptr [eax+20h]
0x710022: fstp    dword ptr [eax+20h]
0x710025: retn    8
