0x4D38F0: push    esi
0x4D38F1: push    edi
0x4D38F2: mov     edi, [esp+8+arg_0]
0x4D38F6: test    edi, edi
0x4D38F8: mov     esi, ecx
0x4D38FA: jz      loc_4D39F8
0x4D3900: mov     eax, [edi]
0x4D3902: mov     edx, [eax+170h]
0x4D3908: mov     ecx, edi
0x4D390A: call    edx
0x4D390C: test    eax, eax
0x4D390E: jz      loc_4D39F8
0x4D3914: test    dword ptr [esi+8], 400h
0x4D391B: jz      short loc_4D3974
0x4D391D: push    esi; a2
0x4D391E: mov     ecx, offset stru_B35C80; this
0x4D3923: call    sub_496EA0
0x4D3928: push    edi
0x4D3929: lea     ecx, [esi+48h]
0x4D392C: call    BSSimpleList_PushFront
0x4D3931: push    esi; a2
0x4D3932: mov     ecx, offset stru_B35C80; this
0x4D3937: call    sub_496F50
0x4D393C: push    esi
0x4D393D: lea     ecx, [edi+44h]
0x4D3940: call    sub_4247B0
0x4D3945: mov     eax, ds:0BA9DE4h
0x4D394A: mov     ecx, large fs:2Ch
0x4D3951: mov     edx, [ecx+eax*4]
0x4D3954: cmp     byte ptr [edx+184h], 0
0x4D395B: jnz     loc_4D39F8
0x4D3961: mov     eax, [esi]
0x4D3963: mov     edx, [eax+90h]
0x4D3969: push    1
0x4D396B: mov     ecx, esi
0x4D396D: call    edx
0x4D396F: pop     edi
0x4D3970: pop     esi
0x4D3971: retn    4
0x4D3974: mov     ecx, edi; this
0x4D3976: call    TESObjectREFR_GetParentCell
0x4D397B: test    eax, eax
0x4D397D: jz      short loc_4D3987
0x4D397F: push    edi
0x4D3980: mov     ecx, eax
0x4D3982: call    sub_4CECD0
0x4D3987: push    esi; a2
0x4D3988: mov     ecx, offset stru_B35C80; this
0x4D398D: call    sub_496EA0
0x4D3992: push    edi
0x4D3993: lea     ecx, [esi+48h]
0x4D3996: call    BSSimpleList_PushFront
0x4D399B: mov     eax, [edi]
0x4D399D: mov     edx, [eax+194h]
0x4D39A3: push    esi
0x4D39A4: mov     ecx, edi
0x4D39A6: call    edx
0x4D39A8: push    esi; a2
0x4D39A9: mov     ecx, offset stru_B35C80; this
0x4D39AE: call    sub_496F50
0x4D39B3: mov     eax, [edi+8]
0x4D39B6: shr     eax, 0Eh
0x4D39B9: test    al, 1
0x4D39BB: jnz     short loc_4D39EF
0x4D39BD: mov     ecx, edi; this
0x4D39BF: call    TESObjectREFR_IsPersistent?
0x4D39C4: test    al, al
0x4D39C6: jnz     short loc_4D39EF
0x4D39C8: mov     ecx, ds:0BA9DE4h
0x4D39CE: mov     edx, large fs:2Ch
0x4D39D5: mov     eax, [edx+ecx*4]
0x4D39D8: cmp     byte ptr [eax+184h], 0
0x4D39DF: jnz     short loc_4D39EF
0x4D39E1: mov     edx, [esi]
0x4D39E3: mov     eax, [edx+90h]
0x4D39E9: push    1
0x4D39EB: mov     ecx, esi
0x4D39ED: call    eax
0x4D39EF: push    0
0x4D39F1: mov     ecx, edi
0x4D39F3: call    sub_4D80C0
0x4D39F8: pop     edi
0x4D39F9: pop     esi
0x4D39FA: retn    4
