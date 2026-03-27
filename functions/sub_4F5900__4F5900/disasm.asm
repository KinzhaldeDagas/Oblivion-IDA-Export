0x4F5900: fldz
0x4F5902: push    esi
0x4F5903: mov     esi, [esp+4+arg_0]
0x4F5907: test    esi, esi
0x4F5909: push    edi
0x4F590A: mov     edi, [esp+8+arg_C]
0x4F590E: fstp    qword ptr [edi]
0x4F5910: jz      short loc_4F5931
0x4F5912: mov     eax, [esi]
0x4F5914: mov     edx, [eax+190h]
0x4F591A: mov     ecx, esi
0x4F591C: call    edx
0x4F591E: test    al, al
0x4F5920: jz      short loc_4F5931
0x4F5922: mov     ecx, esi; this
0x4F5924: call    Actor_IsGhost
0x4F5929: test    al, al
0x4F592B: jz      short loc_4F5931
0x4F592D: fld1
0x4F592F: fstp    qword ptr [edi]
0x4F5931: cmp     byte ptr ds:0B361ACh, 0
0x4F5938: jz      short loc_4F594F
0x4F593A: fld     qword ptr [edi]
0x4F593C: sub     esp, 8
0x4F593F: fstp    [esp+10h+var_10]
0x4F5942: push    offset aGetghost0_2f; "GetGhost >> %0.2f"
0x4F5947: call    Interface_ConsolePrint
0x4F594C: add     esp, 0Ch
0x4F594F: pop     edi
0x4F5950: mov     al, 1
0x4F5952: pop     esi
0x4F5953: retn
