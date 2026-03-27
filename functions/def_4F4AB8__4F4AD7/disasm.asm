0x4F4AD7: cmp     byte ptr ds:0B361ACh, 0; jumptable 004F4AB8 default case
0x4F4ADE: jz      short loc_4F4AF5
0x4F4AE0: fld     qword ptr [esi]
0x4F4AE2: sub     esp, 8
0x4F4AE5: fstp    [esp+8+var_8]
0x4F4AE8: push    offset aGetsleeping0_2; "GetSleeping >> %0.2f"
0x4F4AED: call    Interface_ConsolePrint
0x4F4AF2: add     esp, 0Ch
0x4F4AF5: pop     edi
0x4F4AF6: mov     al, 1
0x4F4AF8: pop     esi
0x4F4AF9: retn
