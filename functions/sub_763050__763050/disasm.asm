0x763050: push    esi
0x763051: mov     esi, [esp+4+arg_0]
0x763055: mov     eax, [esi+20h]
0x763058: push    eax
0x763059: call    FormHeapFree
0x76305E: mov     ecx, [esi+28h]
0x763061: push    ecx
0x763062: mov     dword ptr [esi+1Ch], 0
0x763069: mov     dword ptr [esi+24h], 4
0x763070: mov     dword ptr [esi+20h], 0
0x763077: call    FormHeapFree
0x76307C: add     esp, 8
0x76307F: mov     dword ptr [esi+28h], 0
0x763086: pop     esi
0x763087: retn    4
