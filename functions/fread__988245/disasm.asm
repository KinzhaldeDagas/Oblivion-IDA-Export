0x988245: push    [esp+File]; File
0x988249: push    [esp+4+Count]; ElementSize
0x98824D: push    [esp+8+ElementSize]; ElementSize
0x988251: push    0FFFFFFFFh; DstSize
0x988253: push    [esp+10h+DstBuf]; DstBuf
0x988257: call    _fread_s
0x98825C: add     esp, 14h
0x98825F: retn
