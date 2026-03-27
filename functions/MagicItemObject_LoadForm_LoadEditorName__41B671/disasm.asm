0x41B671: mov     eax, [ebx+254h]
0x41B677: call    __alloca?
0x41B67C: mov     eax, esp
0x41B67E: push    200h; a4
0x41B683: push    eax; Dst
0x41B684: mov     ecx, ebx; a1
0x41B686: mov     [ebp-0Ch], eax
0x41B689: call    TESFile_GetChunkData
0x41B68E: mov     ecx, [ebp-0Ch]
0x41B691: mov     eax, [edi]
0x41B693: mov     edx, [eax+0D8h]
0x41B699: push    ecx
0x41B69A: mov     ecx, edi
0x41B69C: call    edx
