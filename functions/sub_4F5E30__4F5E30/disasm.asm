0x4F5E30: mov     ecx, [esp+arg_0]
0x4F5E34: fldz
0x4F5E36: mov     eax, [ecx]
0x4F5E38: mov     edx, [eax+190h]
0x4F5E3E: push    esi
0x4F5E3F: mov     esi, [esp+4+arg_C]
0x4F5E43: fstp    qword ptr [esi]
0x4F5E45: call    edx
0x4F5E47: test    al, al
0x4F5E49: mov     al, 1
0x4F5E4B: jz      short loc_4F5E51
0x4F5E4D: fld1
0x4F5E4F: fstp    qword ptr [esi]
0x4F5E51: pop     esi
0x4F5E52: retn
