0x4AD630: sub     esp, 40h
0x4AD633: push    ebx
0x4AD634: push    ebp
0x4AD635: mov     ebp, [esp+48h+arg_4]
0x4AD639: push    esi
0x4AD63A: mov     esi, [esp+4Ch+arg_0]
0x4AD63E: mov     ebx, [esi+10Ch]
0x4AD644: cmp     ebx, ebp
0x4AD646: push    edi
0x4AD647: mov     edi, ecx
0x4AD649: jz      short loc_4AD67F
0x4AD64B: test    ebx, ebx
0x4AD64D: jz      short loc_4AD66B
0x4AD64F: lea     eax, [ebx+4]
0x4AD652: push    eax; lpAddend
0x4AD653: call    dword ptr ds:0A2807Ch
0x4AD659: test    eax, eax
0x4AD65B: jnz     short loc_4AD66B
0x4AD65D: test    ebx, ebx
0x4AD65F: jz      short loc_4AD66B
0x4AD661: mov     edx, [ebx]
0x4AD663: mov     eax, [edx]
0x4AD665: push    1
0x4AD667: mov     ecx, ebx
0x4AD669: call    eax
0x4AD66B: test    ebp, ebp
0x4AD66D: mov     [esi+10Ch], ebp
0x4AD673: jz      short loc_4AD67F
0x4AD675: add     ebp, 4
0x4AD678: push    ebp; lpAddend
0x4AD679: call    dword ptr ds:0A28078h
0x4AD67F: fld     dword ptr [edi+9Ch]
0x4AD685: fstp    dword ptr [esi+84h]
0x4AD68B: fld     dword ptr [edi+0A0h]
0x4AD691: fstp    dword ptr [esi+88h]
0x4AD697: fld     dword ptr [edi+0A4h]
0x4AD69D: fstp    dword ptr [esi+8Ch]
0x4AD6A3: fld     dword ptr [edi+0A8h]
0x4AD6A9: fstp    dword ptr [esi+90h]
0x4AD6AF: mov     eax, [edi+0ACh]
0x4AD6B5: mov     ecx, [edi+0B0h]
0x4AD6BB: mov     edx, [edi+0B4h]
0x4AD6C1: mov     [esi+94h], eax
0x4AD6C7: mov     [esi+98h], ecx
0x4AD6CD: mov     [esi+9Ch], edx
0x4AD6D3: mov     eax, [edi+0B8h]
0x4AD6D9: mov     ecx, [edi+0BCh]
0x4AD6DF: mov     edx, [edi+0C0h]
0x4AD6E5: mov     [esi+0A0h], eax
0x4AD6EB: mov     [esi+0A4h], ecx
0x4AD6F1: mov     [esi+0A8h], edx
0x4AD6F7: movzx   ecx, byte ptr [edi+0D4h]
0x4AD6FE: movzx   edx, byte ptr [edi+0D5h]
0x4AD705: movzx   eax, byte ptr [edi+0D6h]
0x4AD70C: mov     [esp+50h+arg_0], ecx
0x4AD710: fild    [esp+50h+arg_0]
0x4AD714: mov     [esp+50h+arg_0], edx
0x4AD718: fstp    [esp+50h+var_20]
0x4AD71C: mov     ecx, [esp+50h+var_20]
0x4AD720: fild    [esp+50h+arg_0]
0x4AD724: mov     [esp+50h+arg_0], eax
0x4AD728: mov     [esp+50h+var_40], ecx
0x4AD72C: fstp    [esp+50h+var_1C]
0x4AD730: mov     edx, [esp+50h+var_1C]
0x4AD734: fild    [esp+50h+arg_0]
0x4AD738: mov     [esp+50h+var_3C], edx
0x4AD73C: movzx   edx, byte ptr [edi+0D8h]
0x4AD743: mov     [esp+50h+arg_0], edx
0x4AD747: fstp    [esp+50h+var_18]
0x4AD74B: mov     eax, [esp+50h+var_18]
0x4AD74F: fldz
0x4AD751: mov     [esp+50h+var_38], eax
0x4AD755: fst     [esp+50h+var_14]
0x4AD759: movzx   eax, byte ptr [edi+0D9h]
0x4AD760: fld     [esp+50h+var_20]
0x4AD764: fld     qword ptr ds:0A3DDD8h
0x4AD76A: fdiv    st(1), st
0x4AD76C: mov     ecx, [esp+50h+var_14]
0x4AD770: mov     [esp+50h+var_34], ecx
0x4AD774: movzx   ecx, byte ptr [edi+0DAh]
0x4AD77B: fxch    st(1)
0x4AD77D: fstp    [esp+50h+var_40]
0x4AD781: fld     [esp+50h+var_3C]
0x4AD785: fdiv    st, st(1)
0x4AD787: fstp    [esp+50h+var_3C]
0x4AD78B: fld     [esp+50h+var_38]
0x4AD78F: fdiv    st, st(1)
0x4AD791: fstp    [esp+50h+var_38]
0x4AD795: fild    [esp+50h+arg_0]
0x4AD799: mov     [esp+50h+arg_0], eax
0x4AD79D: fstp    [esp+50h+var_20]
0x4AD7A1: mov     edx, [esp+50h+var_20]
0x4AD7A5: fild    [esp+50h+arg_0]
0x4AD7A9: mov     [esp+50h+arg_0], ecx
0x4AD7AD: mov     [esp+50h+var_30], edx
0x4AD7B1: fstp    [esp+50h+var_1C]
0x4AD7B5: mov     eax, [esp+50h+var_1C]
0x4AD7B9: fild    [esp+50h+arg_0]
0x4AD7BD: mov     [esp+50h+var_2C], eax
0x4AD7C1: fstp    [esp+50h+var_18]
0x4AD7C5: mov     ecx, [esp+50h+var_18]
0x4AD7C9: fxch    st(1)
0x4AD7CB: mov     [esp+50h+var_28], ecx
0x4AD7CF: fst     [esp+50h+var_14]
0x4AD7D3: mov     edx, [esp+50h+var_14]
0x4AD7D7: fld     [esp+50h+var_20]
0x4AD7DB: mov     [esp+50h+var_24], edx
0x4AD7DF: fdiv    st, st(2)
0x4AD7E1: fstp    [esp+50h+var_30]
0x4AD7E5: fld     [esp+50h+var_2C]
0x4AD7E9: fdiv    st, st(2)
0x4AD7EB: fstp    [esp+50h+var_2C]
0x4AD7EF: fld     [esp+50h+var_28]
0x4AD7F3: movzx   eax, byte ptr [edi+0DCh]
0x4AD7FA: fdiv    st, st(2)
0x4AD7FC: movzx   ecx, byte ptr [edi+0DDh]
0x4AD803: movzx   edx, byte ptr [edi+0DEh]
0x4AD80A: mov     [esp+50h+arg_0], eax
0x4AD80E: fstp    [esp+50h+var_28]
0x4AD812: fild    [esp+50h+arg_0]
0x4AD816: mov     [esp+50h+arg_0], ecx
0x4AD81A: fstp    [esp+50h+var_10]
0x4AD81E: mov     eax, [esp+50h+var_10]
0x4AD822: fild    [esp+50h+arg_0]
0x4AD826: mov     [esp+50h+arg_0], edx
0x4AD82A: mov     [esp+50h+var_20], eax
0x4AD82E: fstp    [esp+50h+var_C]
0x4AD832: mov     ecx, [esp+50h+var_C]
0x4AD836: fild    [esp+50h+arg_0]
0x4AD83A: mov     [esp+50h+var_1C], ecx
0x4AD83E: mov     ecx, [esp+50h+var_40]
0x4AD842: fstp    [esp+50h+var_8]
0x4AD846: mov     edx, [esp+50h+var_8]
0x4AD84A: mov     [esp+50h+var_18], edx
0x4AD84E: fstp    [esp+50h+var_4]
0x4AD852: mov     eax, [esp+50h+var_4]
0x4AD856: fld     [esp+50h+var_10]
0x4AD85A: mov     edx, [esp+50h+var_3C]
0x4AD85E: fdiv    st, st(1)
0x4AD860: mov     [esp+50h+var_14], eax
0x4AD864: mov     eax, [esp+50h+var_38]
0x4AD868: fstp    [esp+50h+var_20]
0x4AD86C: fld     [esp+50h+var_1C]
0x4AD870: fdiv    st, st(1)
0x4AD872: fstp    [esp+50h+var_1C]
0x4AD876: fdivr   [esp+50h+var_18]
0x4AD87A: fstp    [esp+50h+var_18]
0x4AD87E: fld     dword ptr [edi+0E0h]
0x4AD884: fstp    [esp+50h+var_34]
0x4AD888: fld     dword ptr [edi+0E4h]
0x4AD88E: fstp    [esp+50h+var_24]
0x4AD892: fld     dword ptr [edi+0E8h]
0x4AD898: fstp    [esp+50h+var_14]
0x4AD89C: mov     [esi+0B8h], ecx
0x4AD8A2: mov     ecx, [esp+50h+var_34]
0x4AD8A6: mov     [esi+0BCh], edx
0x4AD8AC: mov     edx, [esp+50h+var_30]
0x4AD8B0: mov     [esi+0C0h], eax
0x4AD8B6: mov     eax, [esp+50h+var_2C]
0x4AD8BA: mov     [esi+0C8h], edx
0x4AD8C0: mov     edx, [esp+50h+var_24]
0x4AD8C4: mov     [esi+0C4h], ecx
0x4AD8CA: mov     ecx, [esp+50h+var_28]
0x4AD8CE: mov     [esi+0CCh], eax
0x4AD8D4: mov     eax, [esp+50h+var_20]
0x4AD8D8: mov     [esi+0D0h], ecx
0x4AD8DE: mov     ecx, [esp+50h+var_1C]
0x4AD8E2: mov     [esi+0D8h], eax
0x4AD8E8: mov     eax, [esp+50h+var_14]
0x4AD8EC: mov     [esi+0D4h], edx
0x4AD8F2: mov     edx, [esp+50h+var_18]
0x4AD8F6: mov     [esi+0DCh], ecx
0x4AD8FC: mov     [esi+0E0h], edx
0x4AD902: mov     [esi+0E4h], eax
0x4AD908: fld     dword ptr [edi+0ECh]
0x4AD90E: fstp    dword ptr [esi+0ACh]
0x4AD914: fld     dword ptr [edi+0F0h]
0x4AD91A: fstp    dword ptr [esi+0B0h]
0x4AD920: fld     dword ptr [edi+0F4h]
0x4AD926: fstp    dword ptr [esi+0B4h]
0x4AD92C: fld     dword ptr [edi+0C4h]
0x4AD932: fstp    dword ptr [esi+0E8h]
0x4AD938: fld     dword ptr [edi+0C8h]
0x4AD93E: fstp    dword ptr [esi+0ECh]
0x4AD944: fld     dword ptr [edi+0CCh]
0x4AD94A: fstp    dword ptr [esi+0F0h]
0x4AD950: fld     dword ptr [edi+0D0h]
0x4AD956: fstp    dword ptr [esi+0F4h]
0x4AD95C: mov     ecx, [edi+78h]
0x4AD95F: mov     [esi+0FCh], ecx
0x4AD965: mov     edx, [edi+84h]
0x4AD96B: mov     [esi+100h], edx
0x4AD971: mov     eax, [edi+7Ch]
0x4AD974: mov     [esi+104h], eax
0x4AD97A: mov     ecx, [edi+80h]
0x4AD980: pop     edi
0x4AD981: mov     [esi+108h], ecx
0x4AD987: pop     esi
0x4AD988: pop     ebp
0x4AD989: pop     ebx
0x4AD98A: add     esp, 40h
0x4AD98D: retn    8
