0x4F4B10: fldz
0x4F4B12: push    esi
0x4F4B13: mov     esi, [esp+4+arg_0]
0x4F4B17: test    esi, esi
0x4F4B19: push    edi
0x4F4B1A: mov     edi, [esp+8+arg_C]
0x4F4B1E: fstp    qword ptr [edi]
0x4F4B20: jz      short loc_4F4B36
0x4F4B22: mov     eax, [esi]
0x4F4B24: mov     edx, [eax+190h]
0x4F4B2A: mov     ecx, esi
0x4F4B2C: call    edx
0x4F4B2E: test    al, al
0x4F4B30: jz      short loc_4F4B4D
0x4F4B32: mov     ecx, esi
0x4F4B34: jmp     short loc_4F4B3A
0x4F4B36: mov     ecx, [esp+8+arg_4]
0x4F4B3A: test    ecx, ecx
0x4F4B3C: jz      short loc_4F4B4D
0x4F4B3E: mov     eax, [ecx]
0x4F4B40: mov     edx, [eax+7Ch]
0x4F4B43: call    edx
0x4F4B45: test    al, al
0x4F4B47: jz      short loc_4F4B4D
0x4F4B49: fld1
0x4F4B4B: fstp    qword ptr [edi]
0x4F4B4D: cmp     byte ptr ds:0B361ACh, 0
0x4F4B54: jz      short loc_4F4B6B
0x4F4B56: fld     qword ptr [edi]
0x4F4B58: sub     esp, 8
0x4F4B5B: fstp    [esp+10h+var_10]
0x4F4B5E: push    offset aGettalkedtopc0; "GetTalkedToPC >> %0.2f"
0x4F4B63: call    Interface_ConsolePrint
0x4F4B68: add     esp, 0Ch
0x4F4B6B: pop     edi
0x4F4B6C: mov     al, 1
0x4F4B6E: pop     esi
0x4F4B6F: retn
