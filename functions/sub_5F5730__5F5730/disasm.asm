0x5F5730: push    0FFFFFFFFh
0x5F5732: push    offset SEH_8122A0
0x5F5737: mov     eax, large fs:0
0x5F573D: push    eax
0x5F573E: push    ecx
0x5F573F: push    ebx
0x5F5740: push    esi
0x5F5741: push    edi
0x5F5742: mov     eax, ds:0B30AACh
0x5F5747: xor     eax, esp
0x5F5749: push    eax
0x5F574A: lea     eax, [esp+20h+var_C]
0x5F574E: mov     large fs:0, eax
0x5F5754: mov     ebx, ecx
0x5F5756: mov     eax, [ebx]
0x5F5758: mov     edx, [eax+170h]
0x5F575E: call    edx
0x5F5760: cmp     byte ptr [eax+4], 24h ; '$'
0x5F5764: jnz     short loc_5F5793
0x5F5766: mov     eax, [ebx]
0x5F5768: mov     edx, [eax+170h]
0x5F576E: mov     ecx, ebx
0x5F5770: call    edx
0x5F5772: test    eax, eax
0x5F5774: jz      short loc_5F5793
0x5F5776: cmp     byte ptr [eax+104h], 4
0x5F577D: jnz     short loc_5F5793
0x5F577F: mov     eax, [ebx]
0x5F5781: mov     edx, [eax+388h]
0x5F5787: mov     ecx, ebx
0x5F5789: call    edx
0x5F578B: test    eax, eax
0x5F578D: jnz     loc_5F5854
0x5F5793: cmp     ebx, ds:0B333C4h
0x5F5799: jz      loc_5F5854
0x5F579F: push    3Ch ; '<'; Size
0x5F57A1: call    FormHeapAlloc
0x5F57A6: add     esp, 4
0x5F57A9: mov     [esp+20h+var_10], eax
0x5F57AD: xor     edi, edi
0x5F57AF: cmp     eax, edi
0x5F57B1: mov     [esp+20h+var_4], edi
0x5F57B5: jz      short loc_5F57C2
0x5F57B7: mov     ecx, eax; this
0x5F57B9: call    ??0TESPackage@@QAE@XZ; TESPackage::TESPackage(void)
0x5F57BE: mov     esi, eax
0x5F57C0: jmp     short loc_5F57C4
0x5F57C2: xor     esi, esi
0x5F57C4: push    1Ch
0x5F57C6: mov     ecx, esi
0x5F57C8: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F57D0: call    TESPackage_SetType?
0x5F57D5: or      dword ptr [esi+1Ch], 6
0x5F57D9: push    0Ch; Size
0x5F57DB: call    FormHeapAlloc
0x5F57E0: add     esp, 4
0x5F57E3: mov     [esp+20h+var_10], eax
0x5F57E7: cmp     eax, edi
0x5F57E9: mov     [esp+20h+var_4], 1
0x5F57F1: jz      short loc_5F57FC
0x5F57F3: mov     ecx, eax
0x5F57F5: call    TESPackage_LocationData_constr
0x5F57FA: mov     edi, eax
0x5F57FC: push    0
0x5F57FE: mov     ecx, edi
0x5F5800: mov     [esp+24h+var_4], 0FFFFFFFFh
0x5F5808: call    TESPackage_LocationData_SetType
0x5F580D: push    ebx
0x5F580E: mov     ecx, edi
0x5F5810: call    TESPackage_LocationData_SetReference
0x5F5815: push    edi
0x5F5816: mov     ecx, esi
0x5F5818: call    TESPackage_SetLocation; 3DTheft decode: TESPackage_SetLocation allocates package->location when needed and copies a 0x0C LocationData record; null source clears location data.
0x5F581D: test    edi, edi
0x5F581F: jz      short loc_5F5831
0x5F5821: mov     ecx, edi
0x5F5823: call    TESPackage_LocationData_destr
0x5F5828: push    edi
0x5F5829: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5F582E: add     esp, 4
0x5F5831: mov     ecx, esi
0x5F5833: call    sub_5672A0; 3DTheft decode: TESPackage procedure-array resolver is a mutator. It writes TESPackage+0x18/procedureArrayIndex directly; callers should not use EAX as the row result.
0x5F5838: push    1
0x5F583A: push    52424157h
0x5F583F: push    1Dh
0x5F5841: mov     ecx, ebx
0x5F5843: call    sub_5E91E0
0x5F5848: push    1; a4
0x5F584A: push    1; a3
0x5F584C: push    esi; a2
0x5F584D: mov     ecx, ebx; this
0x5F584F: call    Actor_AddPackage?; 3DTheft: xrefs ignore this function's return value; use current package/process state after call, not AL/EAX, as the package assignment result.
0x5F5854: mov     ecx, [esp+20h+var_C]
0x5F5858: mov     large fs:0, ecx
0x5F585F: pop     ecx
0x5F5860: pop     edi
0x5F5861: pop     esi
0x5F5862: pop     ebx
0x5F5863: add     esp, 10h
0x5F5866: retn
0x9D0CA0: mov     eax, [ebp-10h]
0x9D0CA3: push    eax
0x9D0CA4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D0CA9: pop     ecx
0x9D0CAA: retn
0x9D0CAB: mov     eax, [ebp-10h]
0x9D0CAE: push    eax
0x9D0CAF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D0CB4: pop     ecx
0x9D0CB5: retn
0x9D0CB6: mov     edx, [esp+arg_4]
0x9D0CBA: lea     eax, [edx-10h]
0x9D0CBD: mov     ecx, [edx-14h]
0x9D0CC0: xor     ecx, eax
0x9D0CC2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D0CC7: mov     eax, offset stru_AF94E0
0x9D0CCC: jmp     ___CxxFrameHandler3
