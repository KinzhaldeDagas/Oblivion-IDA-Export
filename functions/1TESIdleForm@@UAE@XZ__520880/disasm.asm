0x520880: push    0FFFFFFFFh
0x520882: push    offset ??1TESIdleForm@@UAE@XZ_SEH
0x520887: mov     eax, large fs:0
0x52088D: push    eax
0x52088E: sub     esp, 8
0x520891: push    ebp
0x520892: push    esi
0x520893: push    edi
0x520894: mov     eax, ds:0B30AACh
0x520899: xor     eax, esp
0x52089B: push    eax
0x52089C: lea     eax, [esp+24h+var_C]
0x5208A0: mov     large fs:0, eax
0x5208A6: mov     edi, ecx
0x5208A8: mov     [esp+24h+var_10], edi
0x5208AC: mov     dword ptr [edi], offset ??_7TESIdleForm@@6BTESIdleForm@@@; const TESIdleForm::`vftable'{for `TESIdleForm'}
0x5208B2: mov     dword ptr [edi+18h], offset ??_7TESIdleForm@@6BTESModelAnim@@@; const TESIdleForm::`vftable'{for `TESModelAnim'}
0x5208B9: mov     [esp+24h+var_4], 2
0x5208C1: call    sub_520620
0x5208C6: mov     eax, [edi+3Ch]
0x5208C9: test    eax, eax
0x5208CB: jz      short loc_52092C
0x5208CD: mov     ebp, [eax+0Ch]
0x5208D0: test    ebp, ebp
0x5208D2: jz      short loc_52091D
0x5208D4: xor     esi, esi
0x5208D6: test    ebp, ebp
0x5208D8: jbe     short loc_52091D
0x5208DA: lea     ebx, [ebx+0]
0x5208E0: mov     ecx, [edi+3Ch]
0x5208E3: xor     eax, eax
0x5208E5: test    ecx, ecx
0x5208E7: jz      short loc_520904
0x5208E9: push    eax; int
0x5208EA: push    offset ??_R0?AVTESIdleForm@@@8; struct TypeDescriptor *
0x5208EF: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5208F4: push    eax; int
0x5208F5: push    esi
0x5208F6: call    sub_494ED0
0x5208FB: push    eax; void *
0x5208FC: call    OblivionDynamicCast
0x520901: add     esp, 14h
0x520904: mov     dword ptr [eax+40h], 0
0x52090B: mov     edx, [eax]
0x52090D: mov     ecx, eax
0x52090F: mov     eax, [edx+10h]
0x520912: push    1
0x520914: call    eax
0x520916: add     esi, 1
0x520919: cmp     esi, ebp
0x52091B: jb      short loc_5208E0
0x52091D: mov     ecx, [edi+3Ch]
0x520920: test    ecx, ecx
0x520922: jz      short loc_52092C
0x520924: mov     edx, [ecx]
0x520926: mov     eax, [edx]
0x520928: push    1
0x52092A: call    eax
0x52092C: lea     ecx, [edi+30h]
0x52092F: mov     byte ptr [esp+24h+var_4], 1
0x520934: call    sub_56A7A0
0x520939: lea     ecx, [edi+18h]; this
0x52093C: mov     byte ptr [esp+24h+var_4], 0
0x520941: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x520946: mov     ecx, edi; this
0x520948: mov     [esp+24h+var_4], 0FFFFFFFFh
0x520950: call    TESForm_destr
0x520955: mov     ecx, [esp+24h+var_C]
0x520959: mov     large fs:0, ecx
0x520960: pop     ecx
0x520961: pop     edi
0x520962: pop     esi
0x520963: pop     ebp
0x520964: add     esp, 14h
0x520967: retn
