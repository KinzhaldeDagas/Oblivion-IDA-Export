0x7DB1B0: sub     esp, 1Ch
0x7DB1B3: mov     eax, [esp+1Ch+arg_18]
0x7DB1B7: mov     ecx, [ecx+14h]
0x7DB1BA: push    0
0x7DB1BC: push    eax
0x7DB1BD: call    sub_765480
0x7DB1C2: mov     ecx, ds:0B46658h
0x7DB1C8: mov     edx, ds:0B4665Ch
0x7DB1CE: mov     eax, ds:0B46660h
0x7DB1D3: mov     [esp+1Ch+var_10], ecx
0x7DB1D7: fld     [esp+1Ch+var_10]
0x7DB1DB: fsub    dword ptr ds:0B3F92Ch
0x7DB1E1: mov     ecx, ds:0B46664h
0x7DB1E7: mov     [esp+1Ch+var_C], edx
0x7DB1EB: mov     [esp+1Ch+var_8], eax
0x7DB1EF: fstp    [esp+1Ch+var_1C]
0x7DB1F2: mov     [esp+1Ch+var_4], ecx
0x7DB1F6: fld     [esp+1Ch+var_C]
0x7DB1FA: fsub    dword ptr ds:0B3F930h
0x7DB200: fstp    [esp+1Ch+var_18]
0x7DB204: fld     [esp+1Ch+var_8]
0x7DB208: fsub    dword ptr ds:0B3F934h
0x7DB20E: fstp    [esp+1Ch+var_14]
0x7DB212: fld     [esp+1Ch+var_1C]
0x7DB215: fstp    [esp+1Ch+var_10]
0x7DB219: mov     edx, [esp+1Ch+var_10]
0x7DB21D: fld     [esp+1Ch+var_18]
0x7DB221: mov     ds:0B45DD4h, edx
0x7DB227: fstp    [esp+1Ch+var_C]
0x7DB22B: mov     eax, [esp+1Ch+var_C]
0x7DB22F: fld     [esp+1Ch+var_14]
0x7DB233: mov     ds:0B45DD8h, eax
0x7DB238: fstp    [esp+1Ch+var_8]
0x7DB23C: mov     ecx, [esp+1Ch+var_8]
0x7DB240: fldz
0x7DB242: mov     ds:0B45DDCh, ecx
0x7DB248: fstp    [esp+1Ch+var_4]
0x7DB24C: xor     eax, eax
0x7DB24E: mov     edx, [esp+1Ch+var_4]
0x7DB252: mov     ds:0B45DE0h, edx
0x7DB258: add     esp, 1Ch
0x7DB25B: retn    20h ; ' '
