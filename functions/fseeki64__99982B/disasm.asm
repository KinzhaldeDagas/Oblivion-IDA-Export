0x99982B: push    0Ch
0x99982D: push    offset stru_B00048
0x999832: call    __SEH_prolog4
0x999837: push    [ebp+File]
0x99983A: call    __lock_file
0x99983F: pop     ecx
0x999840: and     [ebp+ms_exc.registration.TryLevel], 0
0x999844: push    [ebp+Origin]; Origin
0x999847: push    dword ptr [ebp+Offset+4]
0x99984A: push    dword ptr [ebp+Offset]; Offset
0x99984D: push    [ebp+File]; File
0x999850: call    __fseeki64_nolock
0x999855: add     esp, 10h
0x999858: mov     [ebp+var_1C], eax
0x99985B: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x999862: call    __fseeki64___$LN7_7
