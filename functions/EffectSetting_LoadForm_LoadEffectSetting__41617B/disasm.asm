0x41617B: mov     eax, [ebx+60h]
0x41617E: mov     edi, [ebx+58h]
0x416181: lea     esi, [ebx+58h]
0x416184: mov     [ebp-0Ch], eax
0x416187: mov     al, [esi+3]
0x41618A: push    40h ; '@'
0x41618C: and     al, 1
0x41618E: push    0
0x416190: push    esi
0x416191: mov     [ebp-5], al
0x416194: call    __memset
0x416199: fld1
0x41619B: mov     ecx, [ebp+8]; a1
0x41619E: fstp    dword ptr [ebx+74h]
0x4161A1: add     esp, 0Ch
0x4161A4: push    40h ; '@'; a4
0x4161A6: push    esi; Dst
0x4161A7: call    TESFile_GetChunkData
