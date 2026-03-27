0x980E52: push    ebp
0x980E53: mov     ebp, esp
0x980E55: push    ecx
0x980E56: push    ecx
0x980E57: push    ebx
0x980E58: push    esi
0x980E59: push    edi
0x980E5A: mov     esi, large fs:0
0x980E61: mov     [ebp+var_4], esi
0x980E64: mov     [ebp+TargetIp], offset unknown_libname_8___unknown_libname_9
0x980E6B: push    0; ReturnValue
0x980E6D: push    [ebp+ExceptionRecord]; ExceptionRecord
0x980E70: push    [ebp+TargetIp]; TargetIp
0x980E73: push    [ebp+TargetFrame]; TargetFrame
0x980E76: call    RtlUnwind_0
