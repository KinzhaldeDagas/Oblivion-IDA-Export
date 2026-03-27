0x4F5520: fldz
0x4F5522: mov     ecx, [esp+arg_0]
0x4F5526: test    ecx, ecx
0x4F5528: push    esi
0x4F5529: mov     esi, [esp+4+arg_C]
0x4F552D: fstp    qword ptr [esi]
0x4F552F: jz      short loc_4F5540
0x4F5531: call    sub_4DE660
0x4F5536: mov     [esp+4+arg_C], eax
0x4F553A: fild    [esp+4+arg_C]
0x4F553E: fstp    qword ptr [esi]
0x4F5540: cmp     byte ptr ds:0B361ACh, 0
0x4F5547: jz      short loc_4F555E
0x4F5549: fld     qword ptr [esi]
0x4F554B: sub     esp, 8
0x4F554E: fstp    [esp+0Ch+var_C]
0x4F5551: push    offset aGetopenstate0_; "GetOpenState >> %0.2f"
0x4F5556: call    Interface_ConsolePrint
0x4F555B: add     esp, 0Ch
0x4F555E: mov     al, 1
0x4F5560: pop     esi
0x4F5561: retn
