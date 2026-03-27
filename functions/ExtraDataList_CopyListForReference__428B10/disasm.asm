0x428B10: push    0FFFFFFFFh
0x428B12: push    offset ??0bhkNiTriStripsShape@@QAE@XZ_SEH
0x428B17: mov     eax, large fs:0
0x428B1D: push    eax
0x428B1E: push    ecx
0x428B1F: push    ebx
0x428B20: push    ebp
0x428B21: push    esi
0x428B22: push    edi
0x428B23: mov     eax, ___security_cookie
0x428B28: xor     eax, esp
0x428B2A: push    eax
0x428B2B: lea     eax, [esp+24h+var_C]
0x428B2F: mov     large fs:0, eax
0x428B35: mov     ebx, ecx
0x428B37: push    offset aExtradatalis_1; lpCriticalSection
0x428B3C: mov     ecx, offset BSExtraDataCS
0x428B41: call    NiEnterCriticalSection
0x428B46: mov     edi, [esp+24h+arg_0]
0x428B4A: mov     esi, [edi+4]
0x428B4D: test    esi, esi
0x428B4F: jz      loc_428C52
0x428B55: movzx   eax, byte ptr [esi+4]
0x428B59: add     eax, 0FFFFFFEEh; switch 55 cases
0x428B5C: cmp     eax, 36h
0x428B5F: mov     byte ptr [esp+24h+arg_0], 1
0x428B64: ja      ExtraDataList_CopyListForReference___def_428B71; jumptable 00428B71 default case, cases 19-26,28-33,35-38,42,48-53,56-71
0x428B6A: movzx   eax, ds:byte_428C80[eax]
0x428B71: jmp     ds:jpt_428B71[eax*4]; switch jump
0x428B78: push    esi; jumptable 00428B71 cases 27,34,39-41,43-47,54,55,72
0x428B79: mov     ecx, ebx
0x428B7B: call    ExtraDataList_CopyBSExtraData
0x428B80: cmp     byte ptr [esp+24h+arg_4], 0
0x428B85: jz      ExtraDataList_CopyListForReference___def_428B71; jumptable 00428B71 default case, cases 19-26,28-33,35-38,42,48-53,56-71
0x428B8B: push    1
0x428B8D: push    esi
0x428B8E: mov     ecx, edi
0x428B90: call    BaseExtraList_RemoveExtraByPtr
0x428B95: mov     esi, [edi+4]
0x428B98: mov     byte ptr [esp+24h+arg_0], 0
0x428B9D: jmp     ExtraDataList_CopyListForReference___def_428B71; jumptable 00428B71 default case, cases 19-26,28-33,35-38,42,48-53,56-71
0x428BA2: cmp     byte ptr [esp+24h+arg_4], 0; jumptable 00428B71 case 18
0x428BA7: jz      short loc_428BC5
0x428BA9: push    esi
0x428BAA: mov     ecx, ebx
0x428BAC: call    ExtraDataList_CopyBSExtraData
0x428BB1: push    0
0x428BB3: push    esi
0x428BB4: mov     ecx, edi
0x428BB6: call    BaseExtraList_RemoveExtraByPtr
0x428BBB: mov     esi, [edi+4]
0x428BBE: mov     byte ptr [esp+24h+arg_0], 0
0x428BC3: jmp     short ExtraDataList_CopyListForReference___def_428B71; jumptable 00428B71 default case, cases 19-26,28-33,35-38,42,48-53,56-71
0x428BC5: push    12h; a2
0x428BC7: mov     ecx, edi; this
0x428BC9: call    BaseExtraList_GetExtraData
0x428BCE: test    eax, eax
0x428BD0: jz      short loc_428BD7
0x428BD2: mov     ebp, [eax+0Ch]
0x428BD5: jmp     short loc_428BD9
0x428BD7: xor     ebp, ebp
0x428BD9: push    14h; Size
0x428BDB: call    FormHeapAlloc
0x428BE0: add     esp, 4
0x428BE3: mov     [esp+24h+var_10], eax
0x428BE7: test    eax, eax
0x428BE9: mov     [esp+24h+var_4], 0
0x428BF1: jz      short loc_428BFD
0x428BF3: push    ebp
0x428BF4: mov     ecx, eax; this
0x428BF6: call    ??0ExtraScript@@QAE@XZ; ExtraScript::ExtraScript(void)
0x428BFB: jmp     short loc_428BFF
0x428BFD: xor     eax, eax
0x428BFF: push    eax; BSExtraData *
0x428C00: mov     ecx, ebx; ExtraDataList *
0x428C02: mov     [esp+28h+var_4], 0FFFFFFFFh
0x428C0A: call    BaseExtraList_AddExtra
0x428C0F: push    12h; a2
0x428C11: mov     ecx, edi; this
0x428C13: call    BaseExtraList_GetExtraData
0x428C18: test    eax, eax
0x428C1A: jz      short loc_428C21
0x428C1C: mov     eax, [eax+0Ch]
0x428C1F: jmp     short loc_428C23
0x428C21: xor     eax, eax
0x428C23: mov     ecx, eax
0x428C25: call    Script_CreateEventList
0x428C2A: push    12h; a2
0x428C2C: mov     ecx, ebx; this
0x428C2E: mov     ebp, eax
0x428C30: call    BaseExtraList_GetExtraData
0x428C35: test    eax, eax
0x428C37: jz      short ExtraDataList_CopyListForReference___def_428B71; jumptable 00428B71 default case, cases 19-26,28-33,35-38,42,48-53,56-71
0x428C39: mov     [eax+10h], ebp
0x428C3C: test    esi, esi; jumptable 00428B71 default case, cases 19-26,28-33,35-38,42,48-53,56-71
0x428C3E: jz      short loc_428C52
0x428C40: cmp     byte ptr [esp+24h+arg_0], 0
0x428C45: jz      short loc_428C4A
0x428C47: mov     esi, [esi+8]
0x428C4A: test    esi, esi
0x428C4C: jnz     loc_428B55
0x428C52: mov     ecx, offset BSExtraDataCS; lpCriticalSection
0x428C57: call    NiLeaveCriticalSection_0
0x428C5C: mov     ecx, dword ptr [esp+24h+var_C]
0x428C60: mov     large fs:0, ecx
0x428C67: pop     ecx
0x428C68: pop     edi
0x428C69: pop     esi
0x428C6A: pop     ebp
0x428C6B: pop     ebx
0x428C6C: add     esp, 10h
0x428C6F: retn    8
