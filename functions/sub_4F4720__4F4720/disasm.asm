0x4F4720: mov     ecx, [esp+arg_0]
0x4F4724: test    ecx, ecx
0x4F4726: jz      short loc_4F4759
0x4F4728: mov     eax, [ecx]
0x4F472A: mov     edx, [eax+0ECh]
0x4F4730: call    edx
0x4F4732: mov     eax, [esp+arg_C]
0x4F4736: fst     qword ptr [eax]
0x4F4738: cmp     byte ptr ds:0B361ACh, 0
0x4F473F: jz      short loc_4F4757
0x4F4741: sub     esp, 8
0x4F4744: fstp    [esp+8+var_8]
0x4F4747: push    offset aGetscale0_2f; "GetScale >> %0.2f"
0x4F474C: call    Interface_ConsolePrint
0x4F4751: add     esp, 0Ch
0x4F4754: mov     al, 1
0x4F4756: retn
0x4F4757: fstp    st
0x4F4759: mov     al, 1
0x4F475B: retn
