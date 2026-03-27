0x4F4C10: fldz
0x4F4C12: push    esi
0x4F4C13: mov     esi, [esp+4+arg_0]
0x4F4C17: test    esi, esi
0x4F4C19: push    edi
0x4F4C1A: mov     edi, [esp+8+arg_C]
0x4F4C1E: fstp    qword ptr [edi]
0x4F4C20: jz      short loc_4F4C4F
0x4F4C22: mov     eax, [esi]
0x4F4C24: mov     edx, [eax+190h]
0x4F4C2A: mov     ecx, esi
0x4F4C2C: call    edx
0x4F4C2E: test    al, al
0x4F4C30: jz      short loc_4F4C4F
0x4F4C32: push    offset aAlarm; "Alarm"
0x4F4C37: mov     ecx, esi
0x4F4C39: call    sub_5E4080
0x4F4C3E: push    eax; Str1
0x4F4C3F: call    __strcmp
0x4F4C44: add     esp, 8
0x4F4C47: test    eax, eax
0x4F4C49: jnz     short loc_4F4C4F
0x4F4C4B: fld1
0x4F4C4D: fstp    qword ptr [edi]
0x4F4C4F: cmp     byte ptr ds:0B361ACh, 0
0x4F4C56: jz      short loc_4F4C6D
0x4F4C58: fld     qword ptr [edi]
0x4F4C5A: sub     esp, 8
0x4F4C5D: fstp    [esp+10h+var_10]
0x4F4C60: push    offset aGetalarmed0_2f; "GetAlarmed >> %0.2f"
0x4F4C65: call    Interface_ConsolePrint
0x4F4C6A: add     esp, 0Ch
0x4F4C6D: pop     edi
0x4F4C6E: mov     al, 1
0x4F4C70: pop     esi
0x4F4C71: retn
