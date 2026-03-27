0x479450: push    0FFFFFFFFh
0x479452: push    offset SEH_479450
0x479457: mov     eax, large fs:0
0x47945D: push    eax
0x47945E: sub     esp, 20h
0x479461: push    ebx
0x479462: push    ebp
0x479463: push    esi
0x479464: push    edi
0x479465: mov     eax, ds:0B30AACh
0x47946A: xor     eax, esp
0x47946C: push    eax
0x47946D: lea     eax, [esp+40h+var_C]
0x479471: mov     large fs:0, eax
0x479477: mov     ecx, [esp+40h+a1]
0x47947B: xor     esi, esi
0x47947D: cmp     ecx, esi
0x47947F: jz      loc_4796CC
0x479485: mov     edi, [esp+40h+arg_8]
0x479489: cmp     edi, esi
0x47948B: jz      loc_4796CC
0x479491: mov     eax, [esp+40h+arg_C]
0x479495: cmp     eax, esi
0x479497: mov     [esp+40h+a1], eax
0x47949B: jnz     short loc_4794AC
0x47949D: mov     eax, [edi+3Ch]
0x4794A0: cmp     eax, esi
0x4794A2: mov     [esp+40h+a1], eax
0x4794A6: jz      loc_4796CC
0x4794AC: push    1
0x4794AE: push    3
0x4794B0: push    1
0x4794B2: push    ecx
0x4794B3: mov     ecx, ds:0B33A1Ch
0x4794B9: call    sub_439EB0
0x4794BE: lea     ecx, [esp+40h+var_28]
0x4794C2: mov     ebx, eax
0x4794C4: call    sub_478B90
0x4794C9: fld1
0x4794CB: fst     [esp+40h+var_10]
0x4794CF: fst     [esp+40h+var_14]
0x4794D3: fstp    [esp+40h+var_18]
0x4794D7: mov     [esp+40h+var_4], esi
0x4794DB: mov     [esp+40h+var_2C], esi
0x4794DF: push    ebx
0x4794E0: mov     byte ptr [esp+44h+var_4], 1
0x4794E5: call    sub_480820
0x4794EA: add     esp, 4
0x4794ED: test    al, al
0x4794EF: jz      short loc_479514
0x4794F1: mov     ecx, ds:0B333A0h
0x4794F7: lea     eax, [esp+40h+var_28]
0x4794FB: push    eax
0x4794FC: push    ebx
0x4794FD: call    sub_4430C0
0x479502: push    eax; a2
0x479503: lea     ecx, [esp+44h+var_2C]; this
0x479507: call    NiSmartPointer_Set??
0x47950C: mov     ebp, [esp+40h+var_2C]
0x479510: mov     esi, ebp
0x479512: jmp     short loc_479522
0x479514: lea     ecx, [esp+40h+var_28]
0x479518: push    ecx
0x479519: mov     ecx, ebx
0x47951B: call    sub_700610
0x479520: mov     ebp, eax
0x479522: mov     edx, [esp+40h+arg_4]
0x479526: push    edi
0x479527: push    edx
0x479528: push    ebp
0x479529: push    ebx
0x47952A: call    sub_478220
0x47952F: add     esp, 10h
0x479532: mov     ecx, ebp
0x479534: call    sub_6FFC60
0x479539: test    ebp, ebp
0x47953B: jz      loc_47966D
0x479541: push    ebp
0x479542: push    offset dword_B35288
0x479547: call    NiRTTI__IsObjectOfRTTIType
0x47954C: add     esp, 8
0x47954F: test    al, al
0x479551: jz      short loc_47955C
0x479553: push    7
0x479555: mov     ecx, ebp
0x479557: call    sub_4A01B0
0x47955C: mov     eax, ds:0B3F9A8h
0x479561: mov     [ebp+54h], eax
0x479564: mov     ecx, ds:0B3F9ACh
0x47956A: mov     [ebp+58h], ecx
0x47956D: mov     edx, ds:0B3F9B0h
0x479573: mov     [ebp+5Ch], edx
0x479576: lea     edi, [ebp+30h]
0x479579: mov     ecx, 9
0x47957E: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x479583: push    ebp
0x479584: rep movsd
0x479586: call    sub_471B80
0x47958B: add     esp, 4
0x47958E: test    al, al
0x479590: jz      short loc_4795A8
0x479592: mov     eax, [ebp+8]
0x479595: push    eax; ArgList
0x479596: push    offset aTyringToAddSki; "Tyring to add skinned object '%s' as an"...
0x47959B: call    PrintError
0x4795A0: add     esp, 8
0x4795A3: jmp     loc_47965B
0x4795A8: mov     eax, [esp+40h+a1]
0x4795AC: push    0
0x4795AE: push    0FFFFFFFFh
0x4795B0: push    0
0x4795B2: push    ebx
0x4795B3: push    ebp
0x4795B4: push    eax
0x4795B5: call    sub_479140
0x4795BA: mov     edx, [ebp+0]
0x4795BD: mov     eax, [edx+8]
0x4795C0: add     esp, 18h
0x4795C3: mov     ecx, ebp
0x4795C5: call    eax
0x4795C7: test    eax, eax
0x4795C9: jz      loc_47965B
0x4795CF: mov     ebx, [ebp+1Ch]
0x4795D2: mov     edi, [esp+40h+arg_4]
0x4795D6: xor     esi, esi
0x4795D8: test    ebx, ebx
0x4795DA: jz      short loc_4795E6
0x4795DC: cmp     edi, 7
0x4795DF: jz      short loc_4795E6
0x4795E1: cmp     edi, 6
0x4795E4: jnz     short loc_47960E
0x4795E6: cmp     edi, 0FFFFFFFFh
0x4795E9: jz      short loc_47960E
0x4795EB: mov     eax, ds:0B065C8h[edi*4]
0x4795F2: cmp     eax, 0FFFFFFFFh
0x4795F5: jz      short loc_47960E
0x4795F7: mov     ecx, ds:0B06550h[eax*4]
0x4795FE: mov     edx, [esp+40h+a1]
0x479602: push    ecx; a2
0x479603: push    edx; a1
0x479604: call    NiObjectNET_LookupObjectByName
0x479609: add     esp, 8
0x47960C: mov     esi, eax
0x47960E: test    ebx, ebx
0x479610: jz      short loc_479640
0x479612: cmp     edi, 7
0x479615: jz      short loc_47961C
0x479617: cmp     edi, 6
0x47961A: jnz     short loc_47965B
0x47961C: mov     ecx, [esp+40h+arg_8]
0x479620: mov     eax, [ecx]
0x479622: mov     edx, [eax+168h]
0x479628: call    edx
0x47962A: test    eax, eax
0x47962C: jz      short loc_479636
0x47962E: mov     ecx, [ebp+1Ch]
0x479631: cmp     ecx, [eax+20h]
0x479634: jz      short loc_47965B
0x479636: test    esi, esi
0x479638: jz      short loc_47965B
0x47963A: mov     eax, [esi]
0x47963C: mov     ecx, esi
0x47963E: jmp     short loc_479650
0x479640: test    esi, esi
0x479642: jz      short loc_47964A
0x479644: mov     eax, [esi]
0x479646: mov     ecx, esi
0x479648: jmp     short loc_479650
0x47964A: mov     ecx, [esp+40h+a1]
0x47964E: mov     eax, [ecx]
0x479650: mov     edx, [eax+84h]
0x479656: push    1
0x479658: push    ebp
0x479659: call    edx
0x47965B: mov     ecx, ebp
0x47965D: call    NiNode_UpdateDynamicEffectState
0x479662: mov     ecx, ebp; this
0x479664: call    NiAVObject_InitializePropertyState
0x479669: mov     esi, [esp+40h+var_2C]
0x47966D: test    esi, esi
0x47966F: mov     byte ptr [esp+40h+var_4], 0
0x479674: jz      short loc_47968E
0x479676: lea     eax, [esi+4]
0x479679: push    eax; lpAddend
0x47967A: call    dword ptr ds:0A2807Ch
0x479680: test    eax, eax
0x479682: jnz     short loc_47968E
0x479684: mov     edx, [esi]
0x479686: mov     eax, [edx]
0x479688: push    1
0x47968A: mov     ecx, esi
0x47968C: call    eax
0x47968E: mov     ecx, [esp+40h+var_28]
0x479692: test    ecx, ecx
0x479694: mov     [esp+40h+var_4], 0FFFFFFFFh
0x47969C: jz      short loc_4796A6
0x47969E: mov     edx, [ecx]
0x4796A0: mov     eax, [edx]
0x4796A2: push    1
0x4796A4: call    eax
0x4796A6: mov     ecx, [esp+40h+var_24]
0x4796AA: test    ecx, ecx
0x4796AC: jz      short loc_4796B6
0x4796AE: mov     edx, [ecx]
0x4796B0: mov     eax, [edx]
0x4796B2: push    1
0x4796B4: call    eax
0x4796B6: mov     eax, ebp
0x4796B8: mov     ecx, [esp+40h+var_C]
0x4796BC: mov     large fs:0, ecx
0x4796C3: pop     ecx
0x4796C4: pop     edi
0x4796C5: pop     esi
0x4796C6: pop     ebp
0x4796C7: pop     ebx
0x4796C8: add     esp, 2Ch
0x4796CB: retn
0x4796CC: xor     eax, eax
0x4796CE: mov     ecx, [esp+40h+var_C]
0x4796D2: mov     large fs:0, ecx
0x4796D9: pop     ecx
0x4796DA: pop     edi
0x4796DB: pop     esi
0x4796DC: pop     ebp
0x4796DD: pop     ebx
0x4796DE: add     esp, 2Ch
0x4796E1: retn
