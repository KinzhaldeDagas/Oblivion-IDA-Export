0x4F5370: fldz
0x4F5372: push    esi
0x4F5373: mov     esi, [esp+4+arg_0]
0x4F5377: test    esi, esi
0x4F5379: push    edi
0x4F537A: mov     edi, [esp+8+arg_C]
0x4F537E: fstp    qword ptr [edi]
0x4F5380: jz      short loc_4F53A6
0x4F5382: mov     eax, [esi]
0x4F5384: mov     edx, [eax+190h]
0x4F538A: mov     ecx, esi
0x4F538C: call    edx
0x4F538E: test    al, al
0x4F5390: jz      short loc_4F53A6
0x4F5392: mov     eax, [esi]
0x4F5394: mov     edx, [eax+354h]
0x4F539A: mov     ecx, esi
0x4F539C: call    edx
0x4F539E: test    al, al
0x4F53A0: jz      short loc_4F53A6
0x4F53A2: fld1
0x4F53A4: fstp    qword ptr [edi]
0x4F53A6: cmp     byte ptr ds:0B361ACh, 0
0x4F53AD: jz      short loc_4F53C4
0x4F53AF: fld     qword ptr [edi]
0x4F53B1: sub     esp, 8
0x4F53B4: fstp    [esp+10h+var_10]
0x4F53B7: push    offset aIsTrespassingV; "Is Trespassing Value %0.2f"
0x4F53BC: call    Interface_ConsolePrint
0x4F53C1: add     esp, 0Ch
0x4F53C4: pop     edi
0x4F53C5: mov     al, 1
0x4F53C7: pop     esi
0x4F53C8: retn
