0x4F4F50: fldz
0x4F4F52: push    esi
0x4F4F53: mov     esi, [esp+4+arg_0]
0x4F4F57: test    esi, esi
0x4F4F59: push    edi
0x4F4F5A: mov     edi, [esp+8+arg_C]
0x4F4F5E: fstp    qword ptr [edi]
0x4F4F60: jz      short loc_4F4F86
0x4F4F62: mov     eax, [esi]
0x4F4F64: mov     edx, [eax+190h]
0x4F4F6A: mov     ecx, esi
0x4F4F6C: call    edx
0x4F4F6E: test    al, al
0x4F4F70: jz      short loc_4F4F86
0x4F4F72: mov     ecx, esi
0x4F4F74: call    Actor_GetLevel
0x4F4F79: movzx   eax, ax
0x4F4F7C: mov     [esp+8+arg_C], eax
0x4F4F80: fild    [esp+8+arg_C]
0x4F4F84: fstp    qword ptr [edi]
0x4F4F86: cmp     byte ptr ds:0B361ACh, 0
0x4F4F8D: jz      short loc_4F4FA4
0x4F4F8F: fld     qword ptr [edi]
0x4F4F91: sub     esp, 8
0x4F4F94: fstp    [esp+10h+var_10]
0x4F4F97: push    offset aGetlevel0_2f; "GetLevel >> %0.2f"
0x4F4F9C: call    Interface_ConsolePrint
0x4F4FA1: add     esp, 0Ch
0x4F4FA4: pop     edi
0x4F4FA5: mov     al, 1
0x4F4FA7: pop     esi
0x4F4FA8: retn
