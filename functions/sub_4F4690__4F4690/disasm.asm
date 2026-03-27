0x4F4690: push    esi
0x4F4691: mov     esi, [esp+4+arg_0]
0x4F4695: test    esi, esi
0x4F4697: jz      short loc_4F46D8
0x4F4699: mov     eax, [esi]
0x4F469B: mov     edx, [eax+190h]
0x4F46A1: mov     ecx, esi
0x4F46A3: call    edx
0x4F46A5: test    al, al
0x4F46A7: jz      short loc_4F46D8
0x4F46A9: mov     ecx, esi
0x4F46AB: call    sub_5E3590
0x4F46B0: mov     eax, [esp+4+arg_C]
0x4F46B4: fst     qword ptr [eax]
0x4F46B6: cmp     byte ptr ds:0B361ACh, 0
0x4F46BD: jz      short loc_4F46D6
0x4F46BF: sub     esp, 8
0x4F46C2: fstp    [esp+0Ch+var_C]
0x4F46C5: push    offset aGetwalkspeed0_; "GetWalkSpeed >> %0.2f"
0x4F46CA: call    Interface_ConsolePrint
0x4F46CF: add     esp, 0Ch
0x4F46D2: mov     al, 1
0x4F46D4: pop     esi
0x4F46D5: retn
0x4F46D6: fstp    st
0x4F46D8: mov     al, 1
0x4F46DA: pop     esi
0x4F46DB: retn
