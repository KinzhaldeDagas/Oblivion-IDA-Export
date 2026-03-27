0x4F4410: mov     ecx, [esp+arg_0]
0x4F4414: sub     esp, 0Ch
0x4F4417: test    ecx, ecx
0x4F4419: jz      short loc_4F4482
0x4F441B: mov     eax, [ecx]
0x4F441D: mov     edx, [eax+174h]
0x4F4423: call    edx
0x4F4425: mov     ecx, [eax]
0x4F4427: mov     edx, [eax+4]
0x4F442A: mov     eax, [eax+8]
0x4F442D: mov     [esp+0Ch+var_C], ecx
0x4F4430: movsx   ecx, [esp+0Ch+arg_4]
0x4F4435: mov     [esp+0Ch+var_4], eax
0x4F4439: mov     eax, ecx
0x4F443B: sub     eax, 58h ; 'X'
0x4F443E: mov     [esp+0Ch+var_8], edx
0x4F4442: mov     edx, [esp+0Ch+arg_C]
0x4F4446: jz      short loc_4F445E
0x4F4448: sub     eax, 1
0x4F444B: jz      short loc_4F4458
0x4F444D: sub     eax, 1
0x4F4450: jnz     short loc_4F4463
0x4F4452: fld     [esp+0Ch+var_4]
0x4F4456: jmp     short loc_4F4461
0x4F4458: fld     [esp+0Ch+var_8]
0x4F445C: jmp     short loc_4F4461
0x4F445E: fld     [esp+0Ch+var_C]
0x4F4461: fstp    qword ptr [edx]
0x4F4463: cmp     byte ptr ds:0B361ACh, 0
0x4F446A: jz      short loc_4F4482
0x4F446C: fld     qword ptr [edx]
0x4F446E: sub     esp, 8
0x4F4471: fstp    [esp+14h+var_14]
0x4F4474: push    ecx
0x4F4475: push    offset aGetposC0_2f; "GetPos: %c >> %0.2f"
0x4F447A: call    Interface_ConsolePrint
0x4F447F: add     esp, 10h
0x4F4482: mov     al, 1
0x4F4484: add     esp, 0Ch
0x4F4487: retn
