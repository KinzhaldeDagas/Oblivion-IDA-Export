0x9892A8: push    0; Alignment
0x9892AA: push    [esp+4+Alignment]; Alignment
0x9892AE: push    [esp+8+Size]; Size
0x9892B2: call    __aligned_offset_malloc
0x9892B7: add     esp, 0Ch
0x9892BA: retn
