0x4F6578: cmp     byte ptr ds:0B361ACh, 0; jumptable 004F6559 default case
0x4F657F: jz      short loc_4F6596
0x4F6581: fld     qword ptr [edi]
0x4F6583: sub     esp, 8
0x4F6586: fstp    [esp+8+var_8]
0x4F6589: push    offset aGetsitting0_2f; "GetSitting >> %0.2f"
0x4F658E: call    Interface_ConsolePrint
0x4F6593: add     esp, 0Ch
0x4F6596: pop     edi
0x4F6597: mov     al, 1
0x4F6599: pop     esi
0x4F659A: retn
