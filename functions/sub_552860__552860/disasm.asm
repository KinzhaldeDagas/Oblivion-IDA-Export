0x552860: push    esi
0x552861: push    offset FaceGenMatrix_Destruct; a5
0x552866: push    offset FaceGenMatrix_Construct; a4
0x55286B: push    2; size
0x55286D: mov     esi, ecx
0x55286F: push    18h; a2
0x552871: push    esi; a1
0x552872: call    ArrayConstructor
0x552877: mov     eax, esi
0x552879: pop     esi
0x55287A: retn
