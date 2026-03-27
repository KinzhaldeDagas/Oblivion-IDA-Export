0x493BA0: push    ecx
0x493BA1: mov     eax, [ecx+4]
0x493BA4: test    eax, eax
0x493BA6: jge     short loc_493BBE
0x493BA8: neg     eax
0x493BAA: mov     [esp+4+var_4], eax
0x493BAD: fild    [esp+4+var_4]
0x493BB0: fmul    qword ptr ds:0A3D998h
0x493BB6: fstp    [esp+4+var_4]
0x493BB9: fld     [esp+4+var_4]
0x493BBC: pop     ecx
0x493BBD: retn
0x493BBE: fldz
0x493BC0: fstp    [esp+4+var_4]
0x493BC3: fld     [esp+4+var_4]
0x493BC6: pop     ecx
0x493BC7: retn
