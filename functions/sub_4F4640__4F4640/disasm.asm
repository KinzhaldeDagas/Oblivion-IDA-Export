0x4F4640: push    esi
0x4F4641: mov     esi, [esp+4+arg_0]
0x4F4645: test    esi, esi
0x4F4647: jz      short loc_4F4688
0x4F4649: mov     eax, [esi]
0x4F464B: mov     edx, [eax+190h]
0x4F4651: mov     ecx, esi
0x4F4653: call    edx
0x4F4655: test    al, al
0x4F4657: jz      short loc_4F4688
0x4F4659: mov     ecx, esi; this
0x4F465B: call    Actor_GetFatigueFraction
0x4F4660: mov     eax, [esp+4+arg_C]
0x4F4664: fst     qword ptr [eax]
0x4F4666: cmp     byte ptr ds:0B361ACh, 0
0x4F466D: jz      short loc_4F4686
0x4F466F: sub     esp, 8
0x4F4672: fstp    [esp+0Ch+var_C]
0x4F4675: push    offset aGetfatigueperc; "GetFatiguePercentage >> %0.2f"
0x4F467A: call    Interface_ConsolePrint
0x4F467F: add     esp, 0Ch
0x4F4682: mov     al, 1
0x4F4684: pop     esi
0x4F4685: retn
0x4F4686: fstp    st
0x4F4688: mov     al, 1
0x4F468A: pop     esi
0x4F468B: retn
