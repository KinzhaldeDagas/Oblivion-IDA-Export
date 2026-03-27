0x4F5310: fldz
0x4F5312: push    esi
0x4F5313: mov     esi, [esp+4+arg_0]
0x4F5317: test    esi, esi
0x4F5319: push    edi
0x4F531A: mov     edi, [esp+8+arg_C]
0x4F531E: fstp    qword ptr [edi]
0x4F5320: jz      short loc_4F5341
0x4F5322: mov     eax, [esi]
0x4F5324: mov     edx, [eax+190h]
0x4F532A: mov     ecx, esi
0x4F532C: call    edx
0x4F532E: test    al, al
0x4F5330: jz      short loc_4F5341
0x4F5332: mov     ecx, esi; this
0x4F5334: call    Actor__IsTalking
0x4F5339: test    al, al
0x4F533B: jz      short loc_4F5341
0x4F533D: fld1
0x4F533F: fstp    qword ptr [edi]
0x4F5341: cmp     byte ptr ds:0B361ACh, 0
0x4F5348: jz      short loc_4F535F
0x4F534A: fld     qword ptr [edi]
0x4F534C: sub     esp, 8
0x4F534F: fstp    [esp+10h+var_10]
0x4F5352: push    offset aTalking0_2f; "Talking >> %0.2f"
0x4F5357: call    Interface_ConsolePrint
0x4F535C: add     esp, 0Ch
0x4F535F: pop     edi
0x4F5360: mov     al, 1
0x4F5362: pop     esi
0x4F5363: retn
