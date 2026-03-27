0x985CC8: test    ecx, ecx
0x985CCA: jnz     short start_3___one_of_args_is_QNaN
0x985CCC: sub     esp, 74h
0x985CCF: mov     ecx, esp
0x985CD1: push    ecx; int
0x985CD2: sub     esp, 10h
0x985CD5: fstp    [esp+88h+var_88]; double
0x985CD8: fstp    [esp+88h+var_80]; double
0x985CDC: fsave   byte ptr [ecx+8]
0x985CE0: call    __powhlp
0x985CE5: add     esp, 10h
0x985CE8: pop     ecx
0x985CE9: frstor  byte ptr [ecx+8]
0x985CEC: fld     qword ptr [ecx]
0x985CEE: add     esp, 74h
0x985CF1: test    eax, eax
0x985CF3: jz      start_8___unknown_libname_162
0x985CF9: mov     eax, 1
0x985CFE: jmp     start_3____ErrorHandling
