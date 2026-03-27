0x43F490: push    ecx; _DWORD
0x43F491: cmp     dword ptr ds:0B42D78h, 0
0x43F498: jz      short loc_43F4B7
0x43F49A: mov     eax, [esp+4+arg_4]
0x43F49E: mov     ecx, [esp+4+arg_0]
0x43F4A2: push    eax; _DWORD
0x43F4A3: push    ecx; _DWORD
0x43F4A4: call    dword ptr ds:0B42D78h
0x43F4AA: fstp    [esp+0Ch+var_4]
0x43F4AE: fld     [esp+0Ch+var_4]
0x43F4B2: add     esp, 8
0x43F4B5: pop     ecx
0x43F4B6: retn
0x43F4B7: fldz
0x43F4B9: fstp    [esp+4+var_4]
0x43F4BC: fld     [esp+4+var_4]
0x43F4BF: pop     ecx
0x43F4C0: retn
