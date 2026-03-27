0x625E70: push    0FFFFFFFFh
0x625E72: push    offset ??1DialoguePackage@@UAE@XZ_SEH
0x625E77: mov     eax, large fs:0
0x625E7D: push    eax
0x625E7E: push    ecx
0x625E7F: push    esi
0x625E80: push    edi
0x625E81: mov     eax, ds:0B30AACh
0x625E86: xor     eax, esp
0x625E88: push    eax
0x625E89: lea     eax, [esp+1Ch+var_C]
0x625E8D: mov     large fs:0, eax
0x625E93: mov     esi, ecx
0x625E95: mov     [esp+1Ch+var_10], esi
0x625E99: mov     dword ptr [esi], offset ??_7DialoguePackage@@6B@; const DialoguePackage::`vftable'
0x625E9F: mov     eax, ds:0B333C4h
0x625EA4: xor     ecx, ecx
0x625EA6: cmp     esi, [eax+118h]
0x625EAC: mov     [esp+1Ch+var_4], ecx
0x625EB0: jnz     short loc_625EB8
0x625EB2: mov     [eax+118h], ecx
0x625EB8: mov     edi, [esi+50h]
0x625EBB: cmp     edi, ecx
0x625EBD: jz      short loc_625ECF
0x625EBF: mov     ecx, edi
0x625EC1: call    sub_6B7B90
0x625EC6: push    edi
0x625EC7: call    FormHeapFree
0x625ECC: add     esp, 4
0x625ECF: mov     ecx, esi; this
0x625ED1: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x625ED9: call    ??1TESPackage@@UAE@XZ; TESPackage::~TESPackage(void)
0x625EDE: mov     ecx, [esp+1Ch+var_C]
0x625EE2: mov     large fs:0, ecx
0x625EE9: pop     ecx
0x625EEA: pop     edi
0x625EEB: pop     esi
0x625EEC: add     esp, 10h
0x625EEF: retn
