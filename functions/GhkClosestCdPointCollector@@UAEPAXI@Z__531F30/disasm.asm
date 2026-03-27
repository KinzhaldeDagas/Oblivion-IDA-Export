0x531F30: test    byte ptr [esp+arg_0], 1
0x531F35: push    esi
0x531F36: mov     esi, ecx
0x531F38: mov     dword ptr [esi], offset ??_7hkCdPointCollector@@6B@; const hkCdPointCollector::`vftable'
0x531F3E: jz      short loc_531F52
0x531F40: mov     ecx, ds:0BA7D98h
0x531F46: mov     eax, [ecx]
0x531F48: mov     edx, [eax+14h]
0x531F4B: push    1Ch
0x531F4D: push    8
0x531F4F: push    esi
0x531F50: call    edx
0x531F52: mov     eax, esi
0x531F54: pop     esi
0x531F55: retn    4
