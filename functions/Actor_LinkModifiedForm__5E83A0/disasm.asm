0x5E83A0: push    0FFFFFFFFh
0x5E83A2: push    offset SEH_639EF0
0x5E83A7: mov     eax, large fs:0
0x5E83AD: push    eax
0x5E83AE: sub     esp, 0Ch
0x5E83B1: push    ebx
0x5E83B2: push    ebp
0x5E83B3: push    esi
0x5E83B4: push    edi
0x5E83B5: mov     eax, ds:0B30AACh
0x5E83BA: xor     eax, esp
0x5E83BC: push    eax
0x5E83BD: lea     eax, [esp+2Ch+var_C]
0x5E83C1: mov     large fs:0, eax
0x5E83C7: mov     edi, ecx
0x5E83C9: mov     eax, [esp+2Ch+arg_4]
0x5E83CD: mov     esi, [esp+2Ch+arg_0]
0x5E83D1: push    eax
0x5E83D2: push    esi
0x5E83D3: call    MobileObject_LinkModifierForm
0x5E83D8: test    esi, 8000h
0x5E83DE: jz      loc_5E848C
0x5E83E4: lea     esi, [edi+0A4h]
0x5E83EA: xor     ebx, ebx
0x5E83EC: test    esi, esi
0x5E83EE: jz      loc_5E848C
0x5E83F4: cmp     dword ptr [esi+4], 0
0x5E83F8: jnz     short loc_5E8403
0x5E83FA: cmp     dword ptr [esi], 0
0x5E83FD: jz      loc_5E848C
0x5E8403: mov     ebp, [esi]
0x5E8405: mov     eax, [ebp+4]
0x5E8408: push    0; int
0x5E840A: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5E840F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5E8414: push    0; int
0x5E8416: push    eax; a1
0x5E8417: call    TESForm_LookupByFormID
0x5E841C: add     esp, 4
0x5E841F: push    eax; void *
0x5E8420: call    OblivionDynamicCast
0x5E8425: add     esp, 14h
0x5E8428: test    eax, eax
0x5E842A: mov     [ebp+4], eax
0x5E842D: jnz     short loc_5E847F
0x5E842F: test    ebx, ebx
0x5E8431: jnz     short loc_5E8469
0x5E8433: mov     eax, [esi+4]
0x5E8436: test    eax, eax
0x5E8438: jz      short loc_5E8458
0x5E843A: mov     ecx, [eax+4]
0x5E843D: mov     [esi+4], ecx
0x5E8440: mov     edx, [eax]
0x5E8442: push    eax
0x5E8443: mov     [esi], edx
0x5E8445: call    FormHeapFree
0x5E844A: add     esp, 4
0x5E844D: push    ebp
0x5E844E: call    FormHeapFree
0x5E8453: add     esp, 4
0x5E8456: jmp     short loc_5E8484
0x5E8458: push    ebp
0x5E8459: mov     dword ptr [esi], 0
0x5E845F: call    FormHeapFree
0x5E8464: add     esp, 4
0x5E8467: jmp     short loc_5E8484
0x5E8469: push    ebp
0x5E846A: mov     ecx, ebx
0x5E846C: call    BSSimpleList_Remove
0x5E8471: mov     esi, [ebx+4]
0x5E8474: push    ebp
0x5E8475: call    FormHeapFree
0x5E847A: add     esp, 4
0x5E847D: jmp     short loc_5E8484
0x5E847F: mov     ebx, esi
0x5E8481: mov     esi, [esi+4]
0x5E8484: test    esi, esi
0x5E8486: jnz     loc_5E83F4
0x5E848C: mov     eax, [edi]
0x5E848E: mov     edx, [eax+170h]
0x5E8494: mov     ecx, edi
0x5E8496: call    edx
0x5E8498: cmp     byte ptr [eax+4], 24h ; '$'
0x5E849C: jnz     loc_5E8566
0x5E84A2: mov     eax, [edi]
0x5E84A4: mov     edx, [eax+170h]
0x5E84AA: mov     ecx, edi
0x5E84AC: call    edx
0x5E84AE: xor     ebp, ebp
0x5E84B0: cmp     eax, ebp
0x5E84B2: jz      loc_5E8568
0x5E84B8: cmp     byte ptr [eax+104h], 4
0x5E84BF: jnz     loc_5E8568
0x5E84C5: mov     eax, [edi+0D4h]
0x5E84CB: cmp     eax, ebp
0x5E84CD: jz      loc_5E8568
0x5E84D3: push    ebp; int
0x5E84D4: push    offset ??_R0?AVCharacter@@@8; struct TypeDescriptor *
0x5E84D9: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5E84DE: push    ebp; int
0x5E84DF: push    eax; a1
0x5E84E0: call    TESForm_LookupByFormID
0x5E84E5: add     esp, 4
0x5E84E8: push    eax; void *
0x5E84E9: call    OblivionDynamicCast
0x5E84EE: add     esp, 14h
0x5E84F1: cmp     eax, ebp
0x5E84F3: mov     [edi+0D4h], eax
0x5E84F9: jz      short loc_5E8568
0x5E84FB: mov     ecx, [edi+58h]
0x5E84FE: cmp     ecx, ebp
0x5E8500: jz      short loc_5E8510
0x5E8502: mov     eax, [ecx]
0x5E8504: mov     edx, [eax+8]
0x5E8507: call    edx
0x5E8509: test    eax, eax
0x5E850B: setz    bl
0x5E850E: jmp     short loc_5E8512
0x5E8510: xor     bl, bl
0x5E8512: mov     eax, [edi+0D4h]
0x5E8518: mov     ecx, [eax+58h]
0x5E851B: cmp     ecx, ebp
0x5E851D: jz      short loc_5E852D
0x5E851F: mov     edx, [ecx]
0x5E8521: mov     eax, [edx+8]
0x5E8524: call    eax
0x5E8526: test    eax, eax
0x5E8528: setz    al
0x5E852B: jmp     short loc_5E852F
0x5E852D: xor     al, al
0x5E852F: cmp     bl, al
0x5E8531: jz      short loc_5E8553
0x5E8533: mov     ecx, [edi+0D4h]; this
0x5E8539: call    TESObjectREFR_GetParentCell
0x5E853E: mov     ecx, edi; this
0x5E8540: mov     esi, eax
0x5E8542: call    TESObjectREFR_GetParentCell
0x5E8547: cmp     esi, eax
0x5E8549: jz      short loc_5E8553
0x5E854B: mov     [edi+0D4h], ebp
0x5E8551: jmp     short loc_5E8568
0x5E8553: mov     ecx, [edi+0D4h]
0x5E8559: mov     edx, [ecx]
0x5E855B: mov     eax, [edx+384h]
0x5E8561: push    edi
0x5E8562: call    eax
0x5E8564: jmp     short loc_5E8568
0x5E8566: xor     ebp, ebp
0x5E8568: mov     ecx, ds:0B33B00h
0x5E856E: cmp     byte ptr [ecx+7Ch], 14h
0x5E8572: jb      loc_5E8628
0x5E8578: lea     esi, [edi+9Ch]
0x5E857E: xor     ebx, ebx
0x5E8580: cmp     esi, ebp
0x5E8582: jz      loc_5E8628
0x5E8588: cmp     dword ptr [esi+4], 0
0x5E858C: jnz     short loc_5E8597
0x5E858E: cmp     dword ptr [esi], 0
0x5E8591: jz      loc_5E8626
0x5E8597: mov     ebp, [esi]
0x5E8599: mov     eax, [ebp+0]
0x5E859C: test    eax, eax
0x5E859E: jz      short loc_5E85C3
0x5E85A0: push    0; int
0x5E85A2: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x5E85A7: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5E85AC: push    0; int
0x5E85AE: push    eax; a1
0x5E85AF: call    TESForm_LookupByFormID
0x5E85B4: add     esp, 4
0x5E85B7: push    eax; void *
0x5E85B8: call    OblivionDynamicCast
0x5E85BD: add     esp, 14h
0x5E85C0: mov     [ebp+0], eax
0x5E85C3: cmp     dword ptr [ebp+0], 0
0x5E85C7: jnz     short loc_5E8619
0x5E85C9: test    ebx, ebx
0x5E85CB: jnz     short loc_5E8603
0x5E85CD: mov     eax, [esi+4]
0x5E85D0: test    eax, eax
0x5E85D2: jz      short loc_5E85F2
0x5E85D4: mov     edx, [eax+4]
0x5E85D7: mov     [esi+4], edx
0x5E85DA: mov     ecx, [eax]
0x5E85DC: push    eax
0x5E85DD: mov     [esi], ecx
0x5E85DF: call    FormHeapFree
0x5E85E4: add     esp, 4
0x5E85E7: push    ebp
0x5E85E8: call    FormHeapFree
0x5E85ED: add     esp, 4
0x5E85F0: jmp     short loc_5E861E
0x5E85F2: push    ebp
0x5E85F3: mov     dword ptr [esi], 0
0x5E85F9: call    FormHeapFree
0x5E85FE: add     esp, 4
0x5E8601: jmp     short loc_5E861E
0x5E8603: push    ebp
0x5E8604: mov     ecx, ebx
0x5E8606: call    BSSimpleList_Remove
0x5E860B: mov     esi, [ebx+4]
0x5E860E: push    ebp
0x5E860F: call    FormHeapFree
0x5E8614: add     esp, 4
0x5E8617: jmp     short loc_5E861E
0x5E8619: mov     ebx, esi
0x5E861B: mov     esi, [esi+4]
0x5E861E: test    esi, esi
0x5E8620: jnz     loc_5E8588
0x5E8626: xor     ebp, ebp
0x5E8628: mov     edx, ds:0B33B00h
0x5E862E: cmp     byte ptr [edx+7Ch], 32h ; '2'
0x5E8632: jb      short loc_5E8661
0x5E8634: mov     eax, [edi+7Ch]
0x5E8637: cmp     eax, ebp
0x5E8639: jz      short loc_5E865E
0x5E863B: push    ebp; int
0x5E863C: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5E8641: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5E8646: push    ebp; int
0x5E8647: push    eax; a1
0x5E8648: call    TESForm_LookupByFormID
0x5E864D: add     esp, 4
0x5E8650: push    eax; void *
0x5E8651: call    OblivionDynamicCast
0x5E8656: add     esp, 14h
0x5E8659: mov     [edi+7Ch], eax
0x5E865C: jmp     short loc_5E8661
0x5E865E: mov     [edi+7Ch], ebp
0x5E8661: mov     eax, ds:0B33B00h
0x5E8666: cmp     byte ptr [eax+7Ch], 45h ; 'E'
0x5E866A: jb      short loc_5E86A2
0x5E866C: mov     eax, [edi+0CCh]
0x5E8672: cmp     eax, ebp
0x5E8674: jz      short loc_5E869C
0x5E8676: push    ebp; int
0x5E8677: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x5E867C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5E8681: push    ebp; int
0x5E8682: push    eax; a1
0x5E8683: call    TESForm_LookupByFormID
0x5E8688: add     esp, 4
0x5E868B: push    eax; void *
0x5E868C: call    OblivionDynamicCast
0x5E8691: add     esp, 14h
0x5E8694: mov     [edi+0CCh], eax
0x5E869A: jmp     short loc_5E86A2
0x5E869C: mov     [edi+0CCh], ebp
0x5E86A2: mov     ecx, ds:0B33B00h
0x5E86A8: cmp     byte ptr [ecx+7Ch], 61h ; 'a'
0x5E86AC: jb      short loc_5E86E4
0x5E86AE: mov     eax, [edi+0E4h]
0x5E86B4: cmp     eax, ebp
0x5E86B6: jz      short loc_5E86DE
0x5E86B8: push    ebp; int
0x5E86B9: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5E86BE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5E86C3: push    ebp; int
0x5E86C4: push    eax; a1
0x5E86C5: call    TESForm_LookupByFormID
0x5E86CA: add     esp, 4
0x5E86CD: push    eax; void *
0x5E86CE: call    OblivionDynamicCast
0x5E86D3: add     esp, 14h
0x5E86D6: mov     [edi+0E4h], eax
0x5E86DC: jmp     short loc_5E86E4
0x5E86DE: mov     [edi+0E4h], ebp
0x5E86E4: mov     ecx, [edi+58h]
0x5E86E7: cmp     ecx, ebp
0x5E86E9: jz      loc_5E87DB
0x5E86EF: mov     edx, [ecx]
0x5E86F1: mov     eax, [edx+8]
0x5E86F4: call    eax
0x5E86F6: test    eax, eax
0x5E86F8: jz      loc_5E87DB
0x5E86FE: mov     ecx, edi; this
0x5E8700: call    TESObjectREFR_GetParentCell
0x5E8705: test    eax, eax
0x5E8707: mov     ecx, edi; this
0x5E8709: jz      short loc_5E872B
0x5E870B: call    TESObjectREFR_GetParentCell
0x5E8710: cmp     byte ptr [eax+26h], 6
0x5E8714: jnz     loc_5E87DB
0x5E871A: mov     edx, [edi]
0x5E871C: mov     eax, [edx+1A4h]
0x5E8722: mov     ecx, edi
0x5E8724: call    eax
0x5E8726: jmp     loc_5E87DB
0x5E872B: call    TESObjectREFR_IsPersistent?
0x5E8730: test    al, al
0x5E8732: jz      loc_5E87DB
0x5E8738: mov     ecx, edi; this
0x5E873A: call    TESObjectREFR_GetWorldSpace
0x5E873F: mov     esi, eax
0x5E8741: cmp     esi, ebp
0x5E8743: jz      loc_5E87DB
0x5E8749: mov     edx, [edi]
0x5E874B: mov     eax, [edx+174h]
0x5E8751: mov     ecx, edi
0x5E8753: call    eax
0x5E8755: mov     ecx, [eax]
0x5E8757: mov     edx, [eax+4]
0x5E875A: mov     eax, [eax+8]
0x5E875D: mov     [esp+2Ch+var_18], ecx
0x5E8761: mov     [esp+2Ch+var_14], edx
0x5E8765: mov     [esp+2Ch+var_10], eax
0x5E8769: fld     [esp+2Ch+var_18]
0x5E876D: fistp   [esp+2Ch+arg_4]
0x5E8771: mov     eax, [esp+2Ch+arg_4]
0x5E8775: sar     eax, 0Ch
0x5E8778: fld     [esp+2Ch+var_14]
0x5E877C: fistp   [esp+2Ch+arg_4]
0x5E8780: mov     ecx, [esp+2Ch+arg_4]
0x5E8784: push    ebp
0x5E8785: sar     ecx, 0Ch
0x5E8788: push    esi
0x5E8789: push    ecx
0x5E878A: mov     ecx, ds:0B33A98h
0x5E8790: push    eax
0x5E8791: call    sub_447740
0x5E8796: mov     esi, eax
0x5E8798: cmp     esi, ebp
0x5E879A: jz      short loc_5E87DB
0x5E879C: cmp     byte ptr [esi+26h], 6
0x5E87A0: jnz     short loc_5E87DB
0x5E87A2: mov     edx, [edi]
0x5E87A4: mov     eax, [edx+1A4h]
0x5E87AA: mov     ecx, edi
0x5E87AC: call    eax
0x5E87AE: mov     eax, ds:0B33B00h
0x5E87B3: mov     ecx, [eax+18h]
0x5E87B6: and     dword ptr [eax+18h], 0FFFFFFFDh
0x5E87BA: shr     ecx, 1
0x5E87BC: and     cl, 1
0x5E87BF: mov     byte ptr [esp+2Ch+arg_0], cl
0x5E87C3: push    edi; Concurrency::details::SchedulerBase *
0x5E87C4: mov     ecx, esi
0x5E87C6: call    sub_4D35D0
0x5E87CB: mov     edx, [esp+2Ch+arg_0]
0x5E87CF: mov     ecx, ds:0B33B00h
0x5E87D5: push    edx
0x5E87D6: call    sub_452A70
0x5E87DB: cmp     [edi+58h], ebp
0x5E87DE: jnz     short loc_5E8858
0x5E87E0: mov     eax, [edi+8]
0x5E87E3: mov     ecx, eax
0x5E87E5: shr     ecx, 5
0x5E87E8: test    cl, 1
0x5E87EB: jnz     short loc_5E8858
0x5E87ED: shr     eax, 0Bh
0x5E87F0: test    al, 1
0x5E87F2: jnz     short loc_5E8858
0x5E87F4: push    90h; Size
0x5E87F9: call    FormHeapAlloc
0x5E87FE: add     esp, 4
0x5E8801: mov     [esp+2Ch+arg_0], eax
0x5E8805: cmp     eax, ebp
0x5E8807: mov     [esp+2Ch+var_4], ebp
0x5E880B: jz      short loc_5E8816
0x5E880D: mov     ecx, eax; this
0x5E880F: call    ??0LowProcess@@QAE@XZ; LowProcess::LowProcess(void)
0x5E8814: jmp     short loc_5E8818
0x5E8816: xor     eax, eax
0x5E8818: mov     ecx, edi
0x5E881A: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x5E8822: mov     [edi+58h], eax
0x5E8825: call    MobileObject_GetProcessLevel
0x5E882A: sub     eax, ebp
0x5E882C: jz      short loc_5E884C
0x5E882E: sub     eax, 1
0x5E8831: jz      short loc_5E8842
0x5E8833: sub     eax, 1
0x5E8836: jnz     short loc_5E8858
0x5E8838: mov     edx, [edi]
0x5E883A: mov     eax, [edx+1ACh]
0x5E8840: jmp     short loc_5E8854
0x5E8842: mov     edx, [edi]
0x5E8844: mov     eax, [edx+1B0h]
0x5E884A: jmp     short loc_5E8854
0x5E884C: mov     edx, [edi]
0x5E884E: mov     eax, [edx+1A4h]
0x5E8854: mov     ecx, edi
0x5E8856: call    eax
0x5E8858: mov     ecx, [esp+2Ch+var_C]
0x5E885C: mov     large fs:0, ecx
0x5E8863: pop     ecx
0x5E8864: pop     edi
0x5E8865: pop     esi
0x5E8866: pop     ebp
0x5E8867: pop     ebx
0x5E8868: add     esp, 18h
0x5E886B: retn    8
