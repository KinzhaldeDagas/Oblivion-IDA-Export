0x7244C0: test    byte ptr [ecx+0DCh], 1
0x7244C7: jz      short loc_724504
0x7244C9: mov     eax, [ecx+0E0h]
0x7244CF: test    eax, eax
0x7244D1: jl      short loc_7244FE
0x7244D3: mov     edx, [ecx+0B0h]
0x7244D9: mov     eax, [edx+eax*4]
0x7244DC: test    eax, eax
0x7244DE: jz      short loc_7244FE
0x7244E0: mov     edx, [eax+20h]
0x7244E3: add     eax, 20h ; ' '
0x7244E6: add     ecx, 20h ; ' '
0x7244E9: mov     [ecx], edx
0x7244EB: mov     edx, [eax+4]
0x7244EE: mov     [ecx+4], edx
0x7244F1: mov     edx, [eax+8]
0x7244F4: mov     [ecx+8], edx
0x7244F7: mov     eax, [eax+0Ch]
0x7244FA: mov     [ecx+0Ch], eax
0x7244FD: retn
0x7244FE: fldz
0x724500: fstp    dword ptr [ecx+2Ch]
0x724503: retn
0x724504: jmp     sub_70A360
