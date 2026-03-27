0x4F6150: push    esi
0x4F6151: mov     esi, [esp+4+arg_0]
0x4F6155: test    esi, esi
0x4F6157: push    edi
0x4F6158: mov     edi, [esp+8+arg_C]
0x4F615C: jz      short loc_4F6179
0x4F615E: mov     eax, [esi]
0x4F6160: mov     edx, [eax+170h]
0x4F6166: mov     ecx, esi
0x4F6168: call    edx
0x4F616A: cmp     byte ptr [eax+4], 23h ; '#'
0x4F616E: jnz     short loc_4F6179
0x4F6170: mov     ecx, esi; int
0x4F6172: call    sub_611FA0
0x4F6177: fstp    qword ptr [edi]
0x4F6179: cmp     byte ptr ds:0B361ACh, 0
0x4F6180: jz      short loc_4F6197
0x4F6182: fld     qword ptr [edi]
0x4F6184: sub     esp, 8
0x4F6187: fstp    [esp+10h+var_10]
0x4F618A: push    offset aGetclothingval; "GetClothingValue >> %0.2f"
0x4F618F: call    Interface_ConsolePrint
0x4F6194: add     esp, 0Ch
0x4F6197: pop     edi
0x4F6198: mov     al, 1
0x4F619A: pop     esi
0x4F619B: retn
