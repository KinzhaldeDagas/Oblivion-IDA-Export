0x6D18C0: push    esi
0x6D18C1: mov     esi, ecx
0x6D18C3: mov     eax, [esi+58h]
0x6D18C6: test    eax, eax
0x6D18C8: jnz     short loc_6D18EB
0x6D18CA: push    0Fh; Size
0x6D18CC: call    FormHeapAlloc
0x6D18D1: mov     ecx, [esi+54h]
0x6D18D4: push    ecx; ArgList
0x6D18D5: push    offset aD_0; "%d"
0x6D18DA: push    0Fh; SizeInBytes
0x6D18DC: push    eax; DstBuf
0x6D18DD: mov     [esi+58h], eax
0x6D18E0: call    sub_6C5D40
0x6D18E5: mov     eax, [esi+58h]
0x6D18E8: add     esp, 14h
0x6D18EB: pop     esi
0x6D18EC: retn
