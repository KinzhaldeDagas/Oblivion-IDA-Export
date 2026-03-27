0x4F66A0: fldz
0x4F66A2: push    esi
0x4F66A3: mov     esi, [esp+4+arg_0]
0x4F66A7: test    esi, esi
0x4F66A9: push    edi
0x4F66AA: mov     edi, [esp+8+arg_C]
0x4F66AE: fstp    qword ptr [edi]
0x4F66B0: jz      short loc_4F66E9
0x4F66B2: mov     eax, [esi]
0x4F66B4: mov     edx, [eax+190h]
0x4F66BA: mov     ecx, esi
0x4F66BC: call    edx
0x4F66BE: test    al, al
0x4F66C0: jz      short loc_4F66E9
0x4F66C2: mov     ecx, [esi+58h]
0x4F66C5: mov     eax, [ecx]
0x4F66C7: mov     edx, [eax+378h]
0x4F66CD: call    edx
0x4F66CF: test    eax, eax
0x4F66D1: jz      short loc_4F66E9
0x4F66D3: mov     edx, [eax]
0x4F66D5: mov     ecx, eax
0x4F66D7: mov     eax, [edx+170h]
0x4F66DD: call    eax
0x4F66DF: cmp     eax, [esp+8+arg_4]
0x4F66E3: jnz     short loc_4F66E9
0x4F66E5: fld1
0x4F66E7: fstp    qword ptr [edi]
0x4F66E9: cmp     byte ptr ds:0B361ACh, 0
0x4F66F0: jz      short loc_4F6707
0x4F66F2: fld     qword ptr [edi]
0x4F66F4: sub     esp, 8
0x4F66F7: fstp    [esp+10h+var_10]
0x4F66FA: push    offset aIscurrentfur_0; "IsCurrentFurnitureObj>> %0.2f"
0x4F66FF: call    Interface_ConsolePrint
0x4F6704: add     esp, 0Ch
0x4F6707: pop     edi
0x4F6708: mov     al, 1
0x4F670A: pop     esi
0x4F670B: retn
