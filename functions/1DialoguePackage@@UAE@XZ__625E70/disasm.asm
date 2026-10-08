0x625E70: push    0FFFFFFFFh; DialoguePackage destructor/cancellation path. Clears PlayerCharacter.dialoguePackage when owned, destroys/frees the generated Conversation, and never calls DialogueItem::RunResult. Deferred INFO results are lost on interruption; ImmediateResult side effects already occurred during construction.
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
0x625E99: mov     dword ptr [esi], offset ??_7DialoguePackage@@6B@; Verified complete TESPackage persistence table extentEC; tail DC/E0/E4/E8 is no-argument size/save/load/init-load virtuals. Derived vtable identity from constructor stores and RTTI names. Prior incompleteDC type corrected.
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
0x625EC1: call    j_Conversation__Destroy; Destroy the owned Conversation directly. No DialogueItem::RunResult call occurs on this cancellation/destruction path.
0x625EC6: push    edi
0x625EC7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
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
0x9C35D0: mov     ecx, [ebp-10h]; this
0x9C35D3: jmp     ??1TESPackage@@UAE@XZ; TESPackage::~TESPackage(void)
0x9C35D8: mov     edx, [esp+arg_4]
0x9C35DC: lea     eax, [edx-0Ch]
0x9C35DF: mov     ecx, [edx-10h]
0x9C35E2: xor     ecx, eax
0x9C35E4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C35E9: mov     eax, offset stru_AEC1B8
0x9C35EE: jmp     ___CxxFrameHandler3
