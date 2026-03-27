0x48AE53: mov     ecx, [edi+4]
0x48AE56: cmp     ecx, ebp
0x48AE58: jz      short ContainerExtraData_AddEntry___GetExistingEntry
0x48AE5A: mov     eax, [ecx]
0x48AE5C: mov     edx, [eax+40h]
0x48AE5F: push    8000000h
0x48AE64: call    edx
