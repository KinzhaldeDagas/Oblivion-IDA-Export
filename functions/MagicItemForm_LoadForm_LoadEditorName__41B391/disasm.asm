0x41B391: mov     eax, [ebx+254h]
0x41B397: call    __alloca?
0x41B39C: mov     eax, esp
0x41B39E: push    200h; a4
0x41B3A3: push    eax; Dst
0x41B3A4: mov     ecx, ebx; a1
0x41B3A6: mov     [ebp-0Ch], eax
0x41B3A9: call    TESFile_GetChunkData
0x41B3AE: mov     ecx, [ebp-0Ch]
0x41B3B1: mov     eax, [edi]
0x41B3B3: mov     edx, [eax+0D8h]
0x41B3B9: push    ecx
0x41B3BA: mov     ecx, edi
0x41B3BC: call    edx
