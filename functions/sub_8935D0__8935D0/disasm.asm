0x8935D0: push    0FFFFFFFFh
0x8935D2: push    offset SEH_8935D0
0x8935D7: mov     eax, large fs:0
0x8935DD: push    eax
0x8935DE: sub     esp, 30h
0x8935E1: push    ebx
0x8935E2: push    ebp
0x8935E3: push    esi
0x8935E4: push    edi
0x8935E5: mov     eax, ds:0B30AACh
0x8935EA: xor     eax, esp
0x8935EC: push    eax
0x8935ED: lea     eax, [esp+50h+var_C]
0x8935F1: mov     large fs:0, eax
0x8935F7: mov     ebx, ecx
0x8935F9: mov     [esp+50h+var_34], ebx
0x8935FD: call    sub_891160
0x893602: xor     esi, esi
0x893604: cmp     eax, esi
0x893606: jnz     loc_893939
0x89360C: mov     edi, [esp+50h+arg_0]
0x893610: cmp     edi, esi
0x893612: jnz     short loc_89366C
0x893614: mov     ecx, [ebx+364h]
0x89361A: cmp     ecx, esi
0x89361C: jz      loc_893939
0x893622: push    esi
0x893623: call    sub_89F6B0
0x893628: cmp     eax, esi
0x89362A: jz      loc_893939
0x893630: mov     edx, [eax]
0x893632: mov     ecx, eax
0x893634: mov     eax, [edx+8]
0x893637: call    eax
0x893639: mov     edi, eax
0x89363B: cmp     edi, esi
0x89363D: jz      loc_893939
0x893643: cmp     [edi+0B6h], si
0x89364A: jz      short loc_893664
0x89364C: push    esi
0x89364D: mov     ecx, edi
0x89364F: call    sub_405790
0x893654: push    eax
0x893655: push    offset dword_B3FAB0
0x89365A: call    NiRTTI_Cast
0x89365F: add     esp, 8
0x893662: mov     edi, eax
0x893664: cmp     edi, esi
0x893666: jz      loc_893939
0x89366C: mov     ecx, ebx
0x89366E: call    sub_890BA0
0x893673: test    eax, eax
0x893675: jz      loc_893939
0x89367B: push    0DCh ; 'Ü'; Size
0x893680: call    FormHeapAlloc
0x893685: add     esp, 4
0x893688: mov     [esp+50h+arg_0], eax
0x89368C: cmp     eax, esi
0x89368E: mov     [esp+50h+var_4], esi
0x893692: jz      short loc_89369E
0x893694: push    esi
0x893695: mov     ecx, eax; this
0x893697: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x89369C: mov     esi, eax
0x89369E: mov     edx, [edi]
0x8936A0: mov     eax, [edx+84h]
0x8936A6: push    0
0x8936A8: or      ebp, 0FFFFFFFFh
0x8936AB: push    esi
0x8936AC: mov     ecx, edi
0x8936AE: mov     [esp+58h+var_4], ebp
0x8936B2: call    eax
0x8936B4: push    offset aBhkcoldisp; "bhkColDisp"
0x8936B9: mov     ecx, esi
0x8936BB: call    NiObjectNET_SetName
0x8936C0: fld     dword ptr [edi+94h]
0x8936C6: fstp    [esp+50h+arg_0]
0x8936CA: add     ebx, 340h
0x8936D0: fld     [esp+50h+arg_0]
0x8936D4: lea     ecx, [esp+50h+var_18]
0x8936D8: fld1
0x8936DA: push    ebx
0x8936DB: fdivrp  st(1), st
0x8936DD: push    ecx
0x8936DE: fstp    [esp+58h+arg_0]
0x8936E2: call    sub_43F3E0
0x8936E7: fld     dword ptr [eax]
0x8936E9: fld     [esp+58h+arg_0]
0x8936ED: add     esp, 8
0x8936F0: fld     st
0x8936F2: fmulp   st(2), st
0x8936F4: fxch    st(1)
0x8936F6: fstp    [esp+50h+arg_0]
0x8936FA: fld     dword ptr [eax+4]
0x8936FD: fmul    st, st(1)
0x8936FF: fstp    [esp+50h+var_3C]
0x893703: fmul    dword ptr [eax+8]
0x893706: fstp    [esp+50h+var_38]
0x89370A: fld     [esp+50h+arg_0]
0x89370E: fstp    [esp+50h+var_24]
0x893712: mov     edx, [esp+50h+var_24]
0x893716: fld     [esp+50h+var_3C]
0x89371A: mov     [esi+54h], edx
0x89371D: fstp    [esp+50h+var_20]
0x893721: mov     eax, [esp+50h+var_20]
0x893725: fld     [esp+50h+var_38]
0x893729: mov     [esi+58h], eax
0x89372C: fstp    [esp+50h+var_1C]
0x893730: mov     ecx, [esp+50h+var_1C]
0x893734: mov     [esi+5Ch], ecx
0x893737: fld     dword ptr [edi+94h]
0x89373D: fstp    [esp+50h+arg_0]
0x893741: fldz
0x893743: fcomp   [esp+50h+arg_0]
0x893747: fnstsw  ax
0x893749: test    ah, 44h
0x89374C: jnp     short loc_893775
0x89374E: fld     dword ptr [edi+94h]
0x893754: fstp    [esp+50h+arg_0]
0x893758: fld     [esp+50h+arg_0]
0x89375C: fld1
0x89375E: fdivrp  st(1), st
0x893760: fstp    [esp+50h+arg_0]
0x893764: fld     [esp+50h+arg_0]
0x893768: fabs
0x89376A: fstp    [esp+50h+arg_0]
0x89376E: fld     [esp+50h+arg_0]
0x893772: fstp    dword ptr [esi+60h]
0x893775: push    1Ch; Size
0x893777: call    FormHeapAlloc
0x89377C: mov     edi, eax
0x89377E: add     esp, 4
0x893781: mov     [esp+50h+arg_0], edi
0x893785: test    edi, edi
0x893787: mov     [esp+50h+var_4], 1
0x89378F: jz      short loc_8937A8
0x893791: mov     ecx, edi; this
0x893793: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x893798: mov     dword ptr [edi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x89379E: mov     word ptr [edi+18h], 8
0x8937A4: mov     eax, edi
0x8937A6: jmp     short loc_8937AA
0x8937A8: xor     eax, eax
0x8937AA: and     word ptr [eax+18h], 0FFC7h
0x8937B0: push    eax; a2
0x8937B1: mov     ecx, esi; this
0x8937B3: mov     [esp+54h+var_4], ebp
0x8937B7: call    sub_405680
0x8937BC: push    1Ch; Size
0x8937BE: call    FormHeapAlloc
0x8937C3: mov     edi, eax
0x8937C5: add     esp, 4
0x8937C8: mov     [esp+50h+arg_0], edi
0x8937CC: test    edi, edi
0x8937CE: mov     [esp+50h+var_4], 2
0x8937D6: jz      short loc_8937EF
0x8937D8: mov     ecx, edi; this
0x8937DA: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x8937DF: mov     dword ptr [edi], offset ??_7NiZBufferProperty@@6B@; const NiZBufferProperty::`vftable'
0x8937E5: mov     word ptr [edi+18h], 0Fh
0x8937EB: mov     eax, edi
0x8937ED: jmp     short loc_8937F1
0x8937EF: xor     eax, eax
0x8937F1: mov     ebx, 3
0x8937F6: or      [eax+18h], bx
0x8937FA: push    eax; a2
0x8937FB: mov     ecx, esi; this
0x8937FD: mov     [esp+54h+var_4], ebp
0x893801: call    sub_405680
0x893806: push    1Ch; Size
0x893808: call    FormHeapAlloc
0x89380D: mov     edi, eax
0x89380F: add     esp, 4
0x893812: mov     [esp+50h+arg_0], edi
0x893816: test    edi, edi
0x893818: mov     [esp+50h+var_4], ebx
0x89381C: jz      short loc_893835
0x89381E: mov     ecx, edi; this
0x893820: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x893825: mov     dword ptr [edi], offset ??_7NiWireframeProperty@@6B@; const NiWireframeProperty::`vftable'
0x89382B: mov     word ptr [edi+18h], 0
0x893831: mov     eax, edi
0x893833: jmp     short loc_893837
0x893835: xor     eax, eax
0x893837: mov     ebx, 1
0x89383C: or      [eax+18h], bx
0x893840: push    eax; a2
0x893841: mov     ecx, esi; this
0x893843: mov     [esp+54h+var_4], ebp
0x893847: call    sub_405680
0x89384C: fldz
0x89384E: mov     edi, [esp+50h+var_34]
0x893852: fst     [esp+50h+var_30]
0x893856: lea     edx, [esp+50h+arg_0]
0x89385A: fst     [esp+50h+var_2C]
0x89385E: push    edx
0x89385F: fstp    [esp+54h+var_28]
0x893863: mov     ecx, edi
0x893865: call    sub_57E270
0x89386A: mov     edx, [eax]
0x89386C: lea     ecx, [esp+50h+var_30]
0x893870: push    ecx
0x893871: push    edx
0x893872: call    sub_8A8140
0x893877: push    5Ch ; '\'; Size
0x893879: call    FormHeapAlloc
0x89387E: add     esp, 0Ch
0x893881: mov     [esp+50h+var_34], eax
0x893885: test    eax, eax
0x893887: mov     [esp+50h+var_4], 4
0x89388F: jz      short loc_89389A
0x893891: mov     ecx, eax; this
0x893893: call    ??0NiMaterialProperty@@QAE@XZ; NiMaterialProperty::NiMaterialProperty(void)
0x893898: jmp     short loc_89389C
0x89389A: xor     eax, eax
0x89389C: mov     ecx, ds:0B25AC4h
0x8938A2: mov     [eax+1Ch], ecx
0x8938A5: mov     edx, ds:0B25AC8h
0x8938AB: mov     [eax+20h], edx
0x8938AE: mov     ecx, ds:0B25ACCh
0x8938B4: add     [eax+54h], ebx
0x8938B7: mov     [eax+24h], ecx
0x8938BA: mov     edx, ds:0B25AC4h
0x8938C0: mov     ecx, [eax+54h]
0x8938C3: mov     [eax+28h], edx
0x8938C6: mov     edx, ds:0B25AC8h
0x8938CC: mov     [eax+2Ch], edx
0x8938CF: mov     edx, ds:0B25ACCh
0x8938D5: add     ecx, 1
0x8938D8: mov     [eax+54h], ecx
0x8938DB: mov     [eax+30h], edx
0x8938DE: mov     edx, [esp+50h+var_30]
0x8938E2: mov     [eax+40h], edx
0x8938E5: mov     edx, [esp+50h+var_2C]
0x8938E9: mov     [eax+44h], edx
0x8938EC: mov     edx, [esp+50h+var_28]
0x8938F0: add     ecx, 1
0x8938F3: mov     [eax+54h], ecx
0x8938F6: push    eax; a2
0x8938F7: mov     ecx, esi; this
0x8938F9: mov     [esp+54h+var_4], ebp
0x8938FD: mov     [eax+48h], edx
0x893900: call    sub_405680
0x893905: mov     ecx, edi
0x893907: call    sub_890BA0
0x89390C: mov     edx, [eax]
0x89390E: mov     ecx, eax
0x893910: mov     eax, [edx+90h]
0x893916: push    esi
0x893917: call    eax
0x893919: mov     ecx, esi; this
0x89391B: call    NiAVObject_InitializePropertyState
0x893920: mov     eax, ds:0BA7A84h
0x893925: test    eax, eax
0x893927: jz      short loc_89392F
0x893929: push    esi; _DWORD
0x89392A: call    eax ; dword_BA7A84
0x89392C: add     esp, 4
0x89392F: or      dword ptr [edi+1F4h], 8000h
0x893939: mov     ecx, [esp+50h+var_C]
0x89393D: mov     large fs:0, ecx
0x893944: pop     ecx
0x893945: pop     edi
0x893946: pop     esi
0x893947: pop     ebp
0x893948: pop     ebx
0x893949: add     esp, 3Ch
0x89394C: retn    4
