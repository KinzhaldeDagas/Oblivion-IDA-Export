0x6E0EF0: push    0FFFFFFFFh
0x6E0EF2: push    offset SEH_6E0EF0
0x6E0EF7: mov     eax, large fs:0
0x6E0EFD: push    eax
0x6E0EFE: push    ecx
0x6E0EFF: mov     eax, ds:0B30AACh
0x6E0F04: xor     eax, esp
0x6E0F06: push    eax
0x6E0F07: lea     eax, [esp+14h+var_C]
0x6E0F0B: mov     large fs:0, eax
0x6E0F11: mov     eax, ecx
0x6E0F13: xor     ecx, ecx
0x6E0F15: mov     edx, 1
0x6E0F1A: mov     dword ptr [eax], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x6E0F20: mov     [eax+8], cx
0x6E0F24: mov     [eax+0Eh], dx
0x6E0F28: mov     [eax+0Ah], cx
0x6E0F2C: mov     [eax+0Ch], cx
0x6E0F30: mov     [eax+4], ecx
0x6E0F33: mov     dword ptr [eax+10h], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x6E0F3A: mov     [eax+18h], cx
0x6E0F3E: mov     [eax+1Eh], dx
0x6E0F42: mov     [eax+1Ah], cx
0x6E0F46: mov     [eax+1Ch], cx
0x6E0F4A: mov     [eax+14h], ecx
0x6E0F4D: mov     dword ptr [eax+20h], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x6E0F54: mov     [eax+28h], cx
0x6E0F58: mov     [eax+2Eh], dx
0x6E0F5C: mov     [eax+2Ah], cx
0x6E0F60: mov     [eax+2Ch], cx
0x6E0F64: mov     [eax+24h], ecx
0x6E0F67: mov     dword ptr [eax+30h], offset ??_7?$NiTArray@PAD@@6B@; const NiTArray<char *>::`vftable'
0x6E0F6E: mov     [eax+38h], cx
0x6E0F72: mov     [eax+3Eh], dx
0x6E0F76: mov     [eax+3Ah], cx
0x6E0F7A: mov     [eax+3Ch], cx
0x6E0F7E: mov     [eax+34h], ecx
0x6E0F81: mov     ecx, [esp+14h+var_C]
0x6E0F85: mov     large fs:0, ecx
0x6E0F8C: pop     ecx
0x6E0F8D: add     esp, 10h
0x6E0F90: retn
