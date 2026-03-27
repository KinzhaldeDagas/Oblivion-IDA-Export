0x4F5230: fldz
0x4F5232: push    esi
0x4F5233: mov     esi, [esp+4+arg_0]
0x4F5237: test    esi, esi
0x4F5239: push    edi
0x4F523A: mov     edi, [esp+8+arg_C]
0x4F523E: fstp    qword ptr [edi]
0x4F5240: jz      short loc_4F5260
0x4F5242: mov     eax, [esi]
0x4F5244: mov     edx, [eax+190h]
0x4F524A: mov     ecx, esi
0x4F524C: call    edx
0x4F524E: test    al, al
0x4F5250: jz      short loc_4F5260
0x4F5252: mov     eax, [esi]
0x4F5254: mov     edx, [eax+250h]
0x4F525A: mov     ecx, esi
0x4F525C: call    edx
0x4F525E: fstp    qword ptr [edi]
0x4F5260: cmp     byte ptr ds:0B361ACh, 0
0x4F5267: jz      short loc_4F527E
0x4F5269: fld     qword ptr [edi]
0x4F526B: sub     esp, 8
0x4F526E: fstp    [esp+10h+var_10]
0x4F5271: push    offset aActorCrimeGold; "Actor Crime Gold is %.02f "
0x4F5276: call    Interface_ConsolePrint
0x4F527B: add     esp, 0Ch
0x4F527E: pop     edi
0x4F527F: mov     al, 1
0x4F5281: pop     esi
0x4F5282: retn
