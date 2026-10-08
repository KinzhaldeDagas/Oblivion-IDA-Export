0xA25840: mov     ecx, (offset qword_B3BB2C+20h)
0xA25845: jmp     NiPickContext_dtor; Verified NiPick context destructor: clears/releases hit records, frees the record-pointer array, and releases its retained root object.
