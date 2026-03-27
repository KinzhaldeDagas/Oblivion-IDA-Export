0x8BB120: push    esi
0x8BB121: mov     esi, ecx
0x8BB123: mov     eax, 1
0x8BB128: mov     [esi+6], ax
0x8BB12C: mov     dword ptr [esi+8], 0FFFFFFFFh
0x8BB133: mov     dword ptr [esi], offset off_A98274
0x8BB139: mov     [esi+10h], al
0x8BB13C: mov     eax, [esp+4+Filename]
0x8BB140: push    offset aRb; "rb"
0x8BB145: push    eax; Filename
0x8BB146: call    _fopen
0x8BB14B: add     esp, 8
0x8BB14E: test    eax, eax
0x8BB150: mov     [esi+0Ch], eax
0x8BB153: setnz   cl
0x8BB156: mov     [esi+10h], cl
0x8BB159: mov     eax, esi
0x8BB15B: pop     esi
0x8BB15C: retn    4
