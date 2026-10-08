0x4B58C0: push    0FFFFFFFFh
0x4B58C2: push    offset ??1TESObjectBOOK@@UAE@XZ_SEH
0x4B58C7: mov     eax, large fs:0
0x4B58CD: push    eax
0x4B58CE: sub     esp, 18h
0x4B58D1: push    ebx
0x4B58D2: push    ebp
0x4B58D3: push    esi
0x4B58D4: push    edi
0x4B58D5: mov     eax, ds:0B30AACh
0x4B58DA: xor     eax, esp
0x4B58DC: push    eax
0x4B58DD: lea     eax, [esp+38h+var_C]
0x4B58E1: mov     large fs:0, eax
0x4B58E7: mov     esi, ecx
0x4B58E9: mov     [esp+38h+var_10], esi
0x4B58ED: lea     edi, [esi+30h]
0x4B58F0: lea     ebx, [esi+48h]
0x4B58F3: lea     ebp, [esi+70h]
0x4B58F6: mov     dword ptr [esi], offset ??_7TESObjectBOOK@@6BTESObjectBOOK@@@; const TESObjectBOOK::`vftable'{for `TESObjectBOOK'}
0x4B58FC: mov     dword ptr [esi+24h], offset ??_7TESObjectBOOK@@6BTESFullName@@@; const TESObjectBOOK::`vftable'{for `TESFullName'}
0x4B5903: mov     dword ptr [edi], offset ??_7TESObjectBOOK@@6BTESModel@@@; const TESObjectBOOK::`vftable'{for `TESModel'}
0x4B5909: mov     dword ptr [ebx], offset ??_7TESObjectBOOK@@6BTESIcon@@@; const TESObjectBOOK::`vftable'{for `TESIcon'}
0x4B590F: mov     dword ptr [esi+54h], offset ??_7TESObjectBOOK@@6BTESScriptableForm@@@; const TESObjectBOOK::`vftable'{for `TESScriptableForm'}
0x4B5916: mov     dword ptr [esi+60h], offset ??_7TESObjectBOOK@@6BTESEnchantableForm@@@; const TESObjectBOOK::`vftable'{for `TESEnchantableForm'}
0x4B591D: mov     dword ptr [ebp+0], offset ??_7TESObjectBOOK@@6BTESValueForm@@@; const TESObjectBOOK::`vftable'{for `TESValueForm'}
0x4B5924: mov     dword ptr [esi+78h], offset ??_7TESObjectBOOK@@6BTESWeightForm@@@; const TESObjectBOOK::`vftable'{for `TESWeightForm'}
0x4B592B: mov     dword ptr [esi+80h], offset ??_7TESObjectBOOK@@6BTESDescription@@@; const TESObjectBOOK::`vftable'{for `TESDescription'}
0x4B5935: mov     [esp+38h+var_4], 5
0x4B593D: call    j_TESForm_ClearComponentReferences
0x4B5942: lea     ecx, [esi+78h]
0x4B5945: mov     byte ptr [esp+38h+var_4], 4
0x4B594A: call    TESWeightForm_destr
0x4B594F: mov     ecx, ebp
0x4B5951: mov     byte ptr [esp+38h+var_4], 3
0x4B5956: call    TESValueForm_destr
0x4B595B: mov     ecx, ebx; void *
0x4B595D: mov     byte ptr [esp+38h+var_4], 2
0x4B5962: call    TESTexture_destr
0x4B5967: mov     ecx, edi; this
0x4B5969: mov     byte ptr [esp+38h+var_4], 1
0x4B596E: call    ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x4B5973: mov     eax, [esi+28h]
0x4B5976: push    eax
0x4B5977: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4B597C: xor     eax, eax
0x4B597E: add     esp, 4
0x4B5981: mov     ecx, esi
0x4B5983: mov     [esi+28h], eax
0x4B5986: mov     [esi+2Eh], ax
0x4B598A: mov     [esi+2Ch], ax
0x4B598E: mov     [esp+38h+var_4], 0FFFFFFFFh
0x4B5996: call    TESObject_destr
0x4B599B: mov     ecx, [esp+38h+var_C]
0x4B599F: mov     large fs:0, ecx
0x4B59A6: pop     ecx
0x4B59A7: pop     edi
0x4B59A8: pop     esi
0x4B59A9: pop     ebp
0x4B59AA: pop     ebx
0x4B59AB: add     esp, 24h
0x4B59AE: retn
0x9B3820: mov     ecx, [ebp-10h]
0x9B3823: jmp     TESObject_destr
0x9B3828: cmp     dword ptr [ebp-10h], 0
0x9B382C: jz      loc_9B3840
0x9B3832: mov     eax, [ebp-10h]
0x9B3835: add     eax, 24h ; '$'
0x9B3838: mov     [ebp-14h], eax
0x9B383B: jmp     loc_9B3847
0x9B3840: mov     dword ptr [ebp-14h], 0
0x9B3847: mov     ecx, [ebp-14h]
0x9B384A: jmp     TESFullName_Initialize
0x9B384F: cmp     dword ptr [ebp-10h], 0
0x9B3853: jz      loc_9B3867
0x9B3859: mov     eax, [ebp-10h]
0x9B385C: add     eax, 30h ; '0'
0x9B385F: mov     [ebp-18h], eax
0x9B3862: jmp     loc_9B386E
0x9B3867: mov     dword ptr [ebp-18h], 0
0x9B386E: mov     ecx, [ebp-18h]; this
0x9B3871: jmp     ??1TESModel@@UAE@XZ; TESModel::~TESModel(void)
0x9B3876: cmp     dword ptr [ebp-10h], 0
0x9B387A: jz      loc_9B388E
0x9B3880: mov     eax, [ebp-10h]
0x9B3883: add     eax, 48h ; 'H'
0x9B3886: mov     [ebp-1Ch], eax
0x9B3889: jmp     loc_9B3895
0x9B388E: mov     dword ptr [ebp-1Ch], 0
0x9B3895: mov     ecx, [ebp-1Ch]; void *
0x9B3898: jmp     j_TESTexture_destr
0x9B389D: cmp     dword ptr [ebp-10h], 0
0x9B38A1: jz      loc_9B38B5
0x9B38A7: mov     eax, [ebp-10h]
0x9B38AA: add     eax, 70h ; 'p'
0x9B38AD: mov     [ebp-20h], eax
0x9B38B0: jmp     loc_9B38BC
0x9B38B5: mov     dword ptr [ebp-20h], 0
0x9B38BC: mov     ecx, [ebp-20h]
0x9B38BF: jmp     TESValueForm_destr
0x9B38C4: cmp     dword ptr [ebp-10h], 0
0x9B38C8: jz      loc_9B38DC
0x9B38CE: mov     eax, [ebp-10h]
0x9B38D1: add     eax, 78h ; 'x'
0x9B38D4: mov     [ebp-24h], eax
0x9B38D7: jmp     loc_9B38E3
0x9B38DC: mov     dword ptr [ebp-24h], 0
0x9B38E3: mov     ecx, [ebp-24h]
0x9B38E6: jmp     TESWeightForm_destr
0x9B38EB: mov     edx, [esp+arg_4]
0x9B38EF: lea     eax, [edx-28h]
0x9B38F2: mov     ecx, [edx-2Ch]
0x9B38F5: xor     ecx, eax
0x9B38F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B38FC: mov     eax, offset stru_ADF338
0x9B3901: jmp     ___CxxFrameHandler3
