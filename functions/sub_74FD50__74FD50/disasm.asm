0x74FD50: push    ebx
0x74FD51: mov     ebx, [esp+4+arg_4]
0x74FD55: push    esi
0x74FD56: push    edi
0x74FD57: mov     edi, [esp+0Ch+arg_0]
0x74FD5B: push    ebx
0x74FD5C: push    edi
0x74FD5D: mov     esi, ecx
0x74FD5F: call    sub_75E410
0x74FD64: mov     ecx, [esi+48h]
0x74FD67: test    ecx, ecx
0x74FD69: jz      short loc_74FD7C
0x74FD6B: mov     eax, [ecx]
0x74FD6D: mov     edx, [eax+18h]
0x74FD70: push    ebx
0x74FD71: call    edx
0x74FD73: push    eax; a2
0x74FD74: lea     ecx, [edi+48h]; this
0x74FD77: call    NiSmartPointer_Set??
0x74FD7C: test    byte ptr [edi+8], 6
0x74FD80: jnz     short loc_74FDAA
0x74FD82: fldz
0x74FD84: fcomp   dword ptr [edi+10h]
0x74FD87: fnstsw  ax
0x74FD89: test    ah, 44h
0x74FD8C: jp      short loc_74FDAA
0x74FD8E: call    _rand
0x74FD93: mov     [esp+0Ch+arg_4], eax
0x74FD97: fild    [esp+0Ch+arg_4]
0x74FD9B: fdiv    qword ptr ds:0A3D5A8h
0x74FDA1: fmul    qword ptr ds:0A309F0h
0x74FDA7: fstp    dword ptr [edi+10h]
0x74FDAA: pop     edi
0x74FDAB: pop     esi
0x74FDAC: pop     ebx
0x74FDAD: retn    8
