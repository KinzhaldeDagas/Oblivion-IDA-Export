0x4F6AB0: fldz
0x4F6AB2: mov     eax, [esp+arg_4]
0x4F6AB6: push    esi
0x4F6AB7: push    edi
0x4F6AB8: mov     edi, [esp+8+arg_C]
0x4F6ABC: xor     esi, esi
0x4F6ABE: fstp    qword ptr [edi]
0x4F6AC0: test    eax, eax
0x4F6AC2: jz      short loc_4F6ACC
0x4F6AC4: cmp     byte ptr [eax+4], 2Dh ; '-'
0x4F6AC8: jnz     short loc_4F6ACC
0x4F6ACA: mov     esi, eax
0x4F6ACC: call    Sky_CreateOrGetGlobalObject
0x4F6AD1: cmp     esi, [eax+10h]
0x4F6AD4: jnz     short loc_4F6ADA
0x4F6AD6: fld1
0x4F6AD8: fstp    qword ptr [edi]
0x4F6ADA: cmp     byte ptr ds:0B361ACh, 0
0x4F6AE1: jz      short loc_4F6AF8
0x4F6AE3: fld     qword ptr [edi]
0x4F6AE5: sub     esp, 8
0x4F6AE8: fstp    [esp+10h+var_10]
0x4F6AEB: push    offset aGetiscurrentwe; "GetIsCurrentWeather >> %0.2f"
0x4F6AF0: call    Interface_ConsolePrint
0x4F6AF5: add     esp, 0Ch
0x4F6AF8: pop     edi
0x4F6AF9: mov     al, 1
0x4F6AFB: pop     esi
0x4F6AFC: retn
