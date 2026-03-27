0x497240: mov     al, [ecx]
0x497242: test    al, al
0x497244: jz      short locret_497268
0x497246: movzx   eax, al
0x497249: lea     edx, ds:0[eax*8]
0x497250: sub     edx, eax
0x497252: mov     eax, [ecx+4]
0x497255: add     edx, edx
0x497257: add     edx, edx
0x497259: push    edx; Size
0x49725A: push    eax; Src
0x49725B: push    44475258h; int
0x497260: call    TESForm_PutFormRecordChunkData
0x497265: add     esp, 0Ch
0x497268: retn
