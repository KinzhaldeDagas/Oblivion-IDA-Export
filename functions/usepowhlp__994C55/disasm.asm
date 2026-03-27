0x994C55: push    esi
0x994C56: sub     esp, 74h
0x994C59: mov     esi, esp
0x994C5B: push    esi; int
0x994C5C: sub     esp, 8
0x994C5F: fstp    [esp+84h+var_84]; double
0x994C62: sub     esp, 8
0x994C65: fstp    [esp+8Ch+var_8C]; double
0x994C68: fsave   byte ptr [esi+8]
0x994C6C: call    __powhlp
0x994C71: add     esp, 14h
0x994C74: frstor  byte ptr [esi+8]
0x994C77: fld     qword ptr [esi]
0x994C79: add     esp, 74h
0x994C7C: pop     esi
0x994C7D: test    eax, eax
0x994C7F: jz      short _usepowhlp___noerror
0x994C81: jmp     unknown_libname_131
