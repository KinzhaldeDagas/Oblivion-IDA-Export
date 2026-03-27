0x555555: push    ebx; char
0x555556: push    1; char
0x555558: push    eax; ArgList
0x555559: lea     eax, [esp+0Ch+arg_64]
0x55555D: push    eax; int
0x55555E: call    sub_442890
0x555563: push    eax
0x555564: lea     ecx, [esp+4+arg_30]
0x555568: mov     [esp+4+arg_90], 9
0x555570: call    sub_55E2A0
0x555575: lea     ecx, [esp+arg_64]; this
0x555579: mov     [esp+arg_90], 7
0x555581: call    sub_7016A0
0x555586: mov     ebp, [esp+arg_30]
0x55558A: cmp     ebp, ebx
0x55558C: mov     edx, [esi]
0x55558E: mov     ecx, esi
0x555590: jz      short loc_5555CE
0x555592: mov     eax, [edx+84h]
0x555598: push    ebp
0x555599: push    ebx
0x55559A: call    eax
0x55559C: mov     ecx, ebp
0x55559E: call    sub_54F7D0
0x5555A3: mov     eax, [eax+4]
0x5555A6: cmp     eax, 5
0x5555A9: jz      short loc_5555B9
0x5555AB: cmp     eax, 6
0x5555AE: jz      short loc_5555B9
0x5555B0: cmp     eax, 1
0x5555B3: mov     byte ptr [esp+8+arg_30], bl
0x5555B7: jnz     short loc_5555BE
0x5555B9: mov     byte ptr [esp+8+arg_30], 1
0x5555BE: mov     ecx, [esp+8+arg_30]
0x5555C2: push    ecx
0x5555C3: push    1
0x5555C5: mov     ecx, esi
0x5555C7: call    sub_434980
0x5555CC: jmp     short loc_5555EE
0x5555CE: mov     eax, [edx+8Ch]
0x5555D4: push    ebx
0x5555D5: call    eax
0x5555D7: test    eax, eax
0x5555D9: jnz     short loc_5555EE
0x5555DB: mov     eax, ds:0B430DCh
0x5555E0: mov     edx, [esi]
0x5555E2: mov     edx, [edx+84h]
0x5555E8: push    eax
0x5555E9: push    ebx
0x5555EA: mov     ecx, esi
0x5555EC: call    edx
0x5555EE: cmp     [edi+0B4h], bl
0x5555F4: jz      loc_5556AE
0x5555FA: cmp     [esp+8+arg_10], 0Eh
0x5555FF: jnz     loc_5556AE
0x555605: mov     ecx, [esp+8+arg_14]
0x555609: mov     eax, [esi]
0x55560B: mov     edx, [eax+80h]
0x555611: push    ecx
0x555612: mov     edi, 1
0x555617: push    edi
0x555618: mov     ecx, esi
0x55561A: call    edx
0x55561C: cmp     [esp+10h+arg_1C], ebx
0x555620: jz      short loc_555628
0x555622: lea     eax, [esp+10h+arg_1C]
0x555626: jmp     short loc_555643
0x555628: call    sub_4783A0
0x55562D: push    eax
0x55562E: lea     ecx, [esp+14h+arg_58]
0x555632: call    sub_405070
0x555637: or      [esp+10h+arg_18], edi
0x55563B: mov     [esp+10h+arg_80], 0Ah
0x555643: mov     eax, [eax]
0x555645: mov     edx, [esi]
0x555647: push    eax
0x555648: mov     eax, [edx+84h]
0x55564E: push    edi
0x55564F: mov     ecx, esi
0x555651: call    eax
0x555653: test    byte ptr [esp+18h+arg_10], 1
0x555658: mov     [esp+18h+arg_78], 7
0x555663: jz      short loc_555673
0x555665: and     [esp+18h+arg_10], 0FFFFFFFEh
0x55566A: lea     ecx, [esp+18h+arg_50]; this
0x55566E: call    sub_7016A0
0x555673: mov     ecx, [esp+18h+arg_24]
0x555677: or      dword ptr [esi+1Ch], 400h
0x55567E: push    2
0x555680: mov     [esi+24h], ebx
0x555683: call    NiNode_GetNiPropertyByID
0x555688: mov     ecx, eax
0x55568A: cmp     ecx, ebx
0x55568C: jz      short loc_5556AE
0x55568E: fld     dword ptr [ecx+4Ch]
0x555691: fstp    [esp+18h+var_4]
0x555695: fld1
0x555697: fcomp   [esp+18h+var_4]
0x55569B: fnstsw  ax
0x55569D: test    ah, 41h
0x5556A0: jnz     short loc_5556AE
0x5556A2: fld     dword ptr ds:0A46B10h
0x5556A8: add     [ecx+54h], edi
0x5556AB: fstp    dword ptr [ecx+4Ch]
0x5556AE: push    ebx; a2
0x5556AF: lea     ecx, [esp+1Ch+arg_14]; this
0x5556B3: call    NiSmartPointer_Set??
0x5556B8: push    eax
0x5556B9: lea     ecx, [esp+1Ch+arg_4]
0x5556BD: call    sub_55E2A0
0x5556C2: push    ebx; a2
0x5556C3: lea     ecx, [esp+1Ch+arg_18]; this
0x5556C7: call    NiSmartPointer_Set??
0x5556CC: mov     ecx, [esp+18h+arg_0]
0x5556D0: mov     edx, [esp+18h+arg_24]
0x5556D4: push    ecx
0x5556D5: push    edx
0x5556D6: call    sub_551140
0x5556DB: add     esp, 8
0x5556DE: mov     ebp, [esp+18h]
0x5556E2: mov     esi, [esp+18h+arg_1C]
0x5556E6: mov     edi, 1
0x5556EB: add     esi, edi
0x5556ED: cmp     esi, 9
0x5556F0: mov     [esp+18h+arg_1C], esi
0x5556F4: jb      loc_5552E0
0x5556FA: mov     edi, [esp+18h+arg_40]
0x5556FE: mov     eax, [edi]
0x555700: mov     edx, [eax+58h]
0x555703: push    offset aFacegeneyeleft; "FaceGenEyeLeft"
0x555708: mov     ecx, edi
0x55570A: call    edx
0x55570C: mov     esi, eax
0x55570E: cmp     esi, ebx
0x555710: jz      short loc_555752
0x555712: push    6
0x555714: mov     ecx, esi
0x555716: call    NiNode_GetNiPropertyByID
0x55571B: cmp     eax, ebx
0x55571D: jz      short loc_555738
0x55571F: cmp     ds:0B120E4h, bl
0x555725: jz      short loc_555738
0x555727: mov     cx, [eax+18h]
0x55572B: and     cx, 0FFF7h
0x555730: or      cx, 6
0x555734: mov     [eax+18h], cx
0x555738: push    1
0x55573A: push    1
0x55573C: push    1
0x55573E: push    esi
0x55573F: call    sub_7B8940
0x555744: mov     edx, [esp+2Ch]
0x555748: push    edx
0x555749: push    esi
0x55574A: call    sub_551140
0x55574F: add     esp, 18h
0x555752: mov     eax, [edi]
0x555754: mov     edx, [eax+58h]
0x555757: push    offset aFacegeneyerigh; "FaceGenEyeRight"
0x55575C: mov     ecx, edi
0x55575E: call    edx
0x555760: mov     esi, eax
0x555762: cmp     esi, ebx
0x555764: jz      short loc_5557A6
0x555766: push    6
0x555768: mov     ecx, esi
0x55576A: call    NiNode_GetNiPropertyByID
0x55576F: cmp     eax, ebx
0x555771: jz      short loc_55578C
0x555773: cmp     ds:0B120E4h, bl
0x555779: jz      short loc_55578C
0x55577B: mov     cx, [eax+18h]
0x55577F: and     cx, 0FFF7h
0x555784: or      cx, 6
0x555788: mov     [eax+18h], cx
0x55578C: push    1
0x55578E: push    1
0x555790: push    1
0x555792: push    esi
0x555793: call    sub_7B8940
0x555798: mov     edx, [esp+30h+var_4]
0x55579C: push    edx
0x55579D: push    esi
0x55579E: call    sub_551140
0x5557A3: add     esp, 18h
0x5557A6: mov     eax, [edi]
0x5557A8: mov     edx, [eax+58h]
0x5557AB: push    offset aFacegenhair; "FaceGenHair"
0x5557B0: mov     ecx, edi
0x5557B2: call    edx
0x5557B4: mov     esi, eax
0x5557B6: cmp     esi, ebx
0x5557B8: jz      loc_555905
0x5557BE: push    1
0x5557C0: push    1
0x5557C2: push    1
0x5557C4: push    esi
0x5557C5: call    sub_7B8940
0x5557CA: add     esp, 10h
0x5557CD: push    4
0x5557CF: mov     ecx, esi
0x5557D1: call    NiNode_GetNiPropertyByID
0x5557D6: mov     esi, eax
0x5557D8: cmp     esi, ebx
0x5557DA: jnz     short loc_5557E0
0x5557DC: xor     eax, eax
0x5557DE: jmp     short loc_5557F3
0x5557E0: mov     eax, [esi]
0x5557E2: mov     edx, [eax+54h]
0x5557E5: mov     ecx, esi
0x5557E7: call    edx
0x5557E9: xor     ecx, ecx
0x5557EB: cmp     eax, 5
0x5557EE: setz    cl
0x5557F1: mov     eax, ecx
0x5557F3: neg     eax
0x5557F5: sbb     eax, eax
0x5557F7: and     eax, esi
0x5557F9: jz      short loc_555871
0x5557FB: mov     edx, [esp+24h+var_C]
0x5557FF: mov     ecx, [edx+64h]
0x555802: movzx   edx, cl
0x555805: mov     [esp+24h+var_10], edx
0x555809: movzx   edx, ch
0x55580C: fild    [esp+24h+var_10]
0x555810: fld     qword ptr ds:0A3DDD8h
0x555816: mov     [esp+24h+var_10], edx
0x55581A: shr     ecx, 10h
0x55581D: fdiv    st(1), st
0x55581F: movzx   ecx, cl
0x555822: fxch    st(1)
0x555824: fstp    [esp+24h+arg_1C]
0x555828: fild    [esp+24h+var_10]
0x55582C: mov     edx, [esp+24h+arg_1C]
0x555830: mov     [esp+24h+var_10], ecx
0x555834: mov     [eax+0A8h], edx
0x55583A: fdiv    st, st(1)
0x55583C: fstp    [esp+24h+arg_20]
0x555840: mov     ecx, [esp+24h+arg_20]
0x555844: mov     [eax+0ACh], ecx
0x55584A: fidivr  [esp+24h+var_10]
0x55584E: fstp    [esp+24h+arg_24]
0x555852: fld1
0x555854: mov     edx, [esp+24h+arg_24]
0x555858: fstp    [esp+24h+arg_28]
0x55585C: mov     [eax+0B0h], edx
0x555862: mov     ecx, [esp+24h+arg_28]
0x555866: mov     [eax+0B4h], ecx
0x55586C: jmp     loc_555905
0x555871: cmp     esi, ebx
0x555873: jnz     short loc_555879
0x555875: xor     eax, eax
0x555877: jmp     short loc_55588C
0x555879: mov     edx, [esi]
0x55587B: mov     eax, [edx+54h]
0x55587E: mov     ecx, esi
0x555880: call    eax
0x555882: xor     ecx, ecx
0x555884: cmp     eax, 0Ah
0x555887: setz    cl
0x55588A: mov     eax, ecx
0x55588C: neg     eax
0x55588E: sbb     eax, eax
0x555890: and     eax, esi
0x555892: jz      short loc_555905
0x555894: mov     edx, [esp+24h+var_C]
0x555898: mov     ecx, [edx+64h]
0x55589B: movzx   edx, cl
0x55589E: mov     [esp+24h+var_10], edx
0x5558A2: movzx   edx, ch
0x5558A5: fild    [esp+24h+var_10]
0x5558A9: fld     qword ptr ds:0A3DDD8h
0x5558AF: mov     [esp+24h+var_10], edx
0x5558B3: shr     ecx, 10h
0x5558B6: fdiv    st(1), st
0x5558B8: movzx   ecx, cl
0x5558BB: fxch    st(1)
0x5558BD: fstp    [esp+24h+arg_1C]
0x5558C1: fild    [esp+24h+var_10]
0x5558C5: mov     edx, [esp+24h+arg_1C]
0x5558C9: mov     [esp+24h+var_10], ecx
0x5558CD: mov     [eax+0F0h], edx
0x5558D3: fdiv    st, st(1)
0x5558D5: fstp    [esp+24h+arg_20]
0x5558D9: mov     ecx, [esp+24h+arg_20]
0x5558DD: mov     [eax+0F4h], ecx
0x5558E3: fidivr  [esp+24h+var_10]
0x5558E7: fstp    [esp+24h+arg_24]
0x5558EB: fld1
0x5558ED: mov     edx, [esp+24h+arg_24]
0x5558F1: fstp    [esp+24h+arg_28]
0x5558F5: mov     [eax+0F8h], edx
0x5558FB: mov     ecx, [esp+24h+arg_28]
0x5558FF: mov     [eax+0FCh], ecx
0x555905: mov     ecx, edi; this
0x555907: call    NiAVObject_InitializePropertyState
0x55590C: fldz
0x55590E: push    ebx; a3
0x55590F: push    ecx
0x555910: mov     ecx, edi; this
0x555912: fstp    [esp+2Ch+a2]; a2
0x555915: call    NiAVObject_UpdateNiAVObject
0x55591A: mov     eax, [esp+24h+arg_8]
0x55591E: cmp     eax, ebx
0x555920: mov     edi, ds:0A2807Ch
0x555926: mov     [esp+24h+arg_6C], 6
0x55592E: jz      short loc_55594A
0x555930: mov     esi, eax
0x555932: add     eax, 4
0x555935: push    eax; lpAddend
0x555936: call    edi ; InterlockedDecrement
0x555938: test    eax, eax
0x55593A: jnz     short loc_55594A
0x55593C: cmp     esi, ebx
0x55593E: jz      short loc_55594A
0x555940: mov     edx, [esi]
0x555942: mov     eax, [edx]
0x555944: push    1
0x555946: mov     ecx, esi
0x555948: call    eax
0x55594A: mov     esi, [esp+28h+var_8]
0x55594E: cmp     esi, ebx
0x555950: mov     [esp+28h+arg_68], 5
0x555958: jz      short loc_555972
0x55595A: lea     ecx, [esi+4]
0x55595D: push    ecx; lpAddend
0x55595E: call    edi ; InterlockedDecrement
0x555960: test    eax, eax
0x555962: jnz     short loc_555972
0x555964: cmp     esi, ebx
0x555966: jz      short loc_555972
0x555968: mov     edx, [esi]
0x55596A: mov     eax, [edx]
0x55596C: push    1
0x55596E: mov     ecx, esi
0x555970: call    eax
0x555972: mov     esi, [esp+2Ch+arg_4]
0x555976: cmp     esi, ebx
0x555978: mov     byte ptr [esp+2Ch+arg_64], 4
0x555980: jz      short loc_555996
0x555982: lea     ecx, [esi+4]
0x555985: push    ecx; lpAddend
0x555986: call    edi ; InterlockedDecrement
0x555988: test    eax, eax
0x55598A: jnz     short loc_555996
0x55598C: mov     edx, [esi]
0x55598E: mov     eax, [edx]
0x555990: push    1
0x555992: mov     ecx, esi
0x555994: call    eax
0x555996: mov     ecx, [esp+30h+var_C]
0x55599A: push    ecx
0x55599B: call    FormHeapFree
0x5559A0: mov     edx, [esp+34h+arg_20]
0x5559A4: push    edx
0x5559A5: jmp     short loc_5559AE
0x5559A7: push    ebx
0x5559A8: call    FormHeapFree
0x5559AD: push    ebx
0x5559AE: mov     [esp+38h+var_C], ebx
0x5559B2: mov     word ptr [esp+38h+var_8+2], bx
0x5559B7: mov     word ptr [esp+38h+var_8], bx
0x5559BC: call    FormHeapFree
0x5559C1: push    ebx
0x5559C2: call    FormHeapFree
0x5559C7: push    ebx
0x5559C8: call    FormHeapFree
0x5559CD: push    ebx
0x5559CE: call    FormHeapFree
0x5559D3: add     esp, 14h
0x5559D6: mov     ecx, [esp+30h+arg_58]
0x5559DD: mov     large fs:0, ecx
0x5559E4: pop     ecx
0x5559E5: pop     edi
0x5559E6: pop     esi
0x5559E7: pop     ebp
0x5559E8: pop     ebx
0x5559E9: mov     ecx, dword ptr [esp+1Ch+arg_54]
0x5559ED: xor     ecx, esp
0x5559EF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5559F4: add     esp, 84h
0x5559FA: retn
