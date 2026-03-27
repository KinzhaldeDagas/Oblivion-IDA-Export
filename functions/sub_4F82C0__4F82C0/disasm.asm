0x4F82C0: fldz
0x4F82C2: mov     eax, [esp+arg_0]
0x4F82C6: test    eax, eax
0x4F82C8: mov     ecx, [esp+arg_C]
0x4F82CC: fstp    qword ptr [ecx]
0x4F82CE: jz      short loc_4F82DE
0x4F82D0: mov     eax, [eax+8]
0x4F82D3: shr     eax, 0Dh
0x4F82D6: test    al, 1
0x4F82D8: jz      short loc_4F82DE
0x4F82DA: fld1
0x4F82DC: fstp    qword ptr [ecx]
0x4F82DE: cmp     byte ptr ds:0B361ACh, 0
0x4F82E5: jz      short loc_4F82FC
0x4F82E7: fld     qword ptr [ecx]
0x4F82E9: sub     esp, 8
0x4F82EC: fstp    [esp+8+var_8]
0x4F82EF: push    offset aGetdestroyed_0f; "GetDestroyed >> %.0f"
0x4F82F4: call    Interface_ConsolePrint
0x4F82F9: add     esp, 0Ch
0x4F82FC: mov     al, 1
0x4F82FE: retn
