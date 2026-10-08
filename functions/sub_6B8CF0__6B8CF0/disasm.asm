0x6B8CF0: push    0FFFFFFFFh; Builds runtime DialogueResponses from a cloned TESResponse list. Each TESResponse is reconstructed from the authoritative INFO record's 16-byte TRDT followed by NAM1 text. Empty text is skipped; INFOGENERAL/Rumors keeps only the first non-empty response.
0x6B8CF2: push    offset SEH_6B8CF0
0x6B8CF7: mov     eax, large fs:0
0x6B8CFD: push    eax
0x6B8CFE: sub     esp, 10h
0x6B8D01: push    ebx
0x6B8D02: push    ebp
0x6B8D03: push    esi
0x6B8D04: push    edi
0x6B8D05: mov     eax, ds:0B30AACh
0x6B8D0A: xor     eax, esp
0x6B8D0C: push    eax
0x6B8D0D: lea     eax, [esp+30h+var_C]
0x6B8D11: mov     large fs:0, eax
0x6B8D17: mov     ebp, ecx
0x6B8D19: xor     ebx, ebx
0x6B8D1B: mov     [esp+30h+responseList], ebx
0x6B8D1F: mov     [esp+30h+var_10], ebx
0x6B8D23: mov     ecx, [ebp+18h]; this
0x6B8D26: lea     eax, [esp+30h+responseList]
0x6B8D2A: push    eax; outResponses
0x6B8D2B: mov     [esp+34h+var_4], ebx
0x6B8D2F: call    TESTopicInfo__CollectResponses; Clone the INFO's shared cached TESResponse stream into a temporary response list before creating MenuTopic-owned DialogueResponse records; the temporary clones are cleared after the MenuTopic responses have copied their data.
0x6B8D34: lea     edi, [esp+30h+responseList]
0x6B8D38: mov     [esp+30h+var_1C], ebx
0x6B8D3C: lea     esp, [esp+0]
0x6B8D40: mov     esi, [edi]
0x6B8D42: cmp     esi, ebx
0x6B8D44: jz      loc_6B8DD0
0x6B8D4A: movzx   eax, word ptr [esi+14h]
0x6B8D4E: cmp     ax, 0FFFFh
0x6B8D52: mov     edi, [edi+4]
0x6B8D55: jnz     short loc_6B8D6D
0x6B8D57: mov     eax, [esi+10h]
0x6B8D5A: lea     edx, [eax+1]
0x6B8D5D: lea     ecx, [ecx+0]
0x6B8D60: mov     cl, [eax]
0x6B8D62: add     eax, 1
0x6B8D65: cmp     cl, bl
0x6B8D67: jnz     short loc_6B8D60
0x6B8D69: sub     eax, edx
0x6B8D6B: jmp     short loc_6B8D70
0x6B8D6D: movzx   eax, ax
0x6B8D70: cmp     eax, ebx
0x6B8D72: jz      short loc_6B8DC8
0x6B8D74: cmp     [ebp+20h], bl
0x6B8D77: jz      short loc_6B8D7F
0x6B8D79: cmp     [esp+30h+var_1C], ebx
0x6B8D7D: jnz     short loc_6B8DC8; INFOGENERAL specialization: once one non-empty DialogueResponse has been appended, all later TESResponses are ignored. Ordinary GREETING/TOPIC entries retain every non-empty response.
0x6B8D7F: push    18h; Size
0x6B8D81: call    FormHeapAlloc
0x6B8D86: add     esp, 4
0x6B8D89: mov     [esp+30h+var_18], eax
0x6B8D8D: cmp     eax, ebx
0x6B8D8F: mov     byte ptr [esp+30h+var_4], 1
0x6B8D94: jz      short loc_6B8DB4
0x6B8D96: mov     ecx, [esp+30h+a5]
0x6B8D9A: mov     edx, [esp+30h+a4]
0x6B8D9E: push    esi; responseData
0x6B8D9F: push    ecx; speaker
0x6B8DA0: mov     ecx, [esp+38h+a3]
0x6B8DA4: push    edx; info
0x6B8DA5: mov     edx, [esp+3Ch+a2]
0x6B8DA9: push    ecx; topic
0x6B8DAA: push    edx; ownerQuest
0x6B8DAB: mov     ecx, eax; this
0x6B8DAD: call    DialogueResponse__DialogueResponse; DialogueResponse constructor (0x18 bytes): owns copied display text at +0x00, copies only the first 8 bytes of TESResponse.TRDT to +0x08 (not a BSString), and owns the generated voice path at +0x10.
0x6B8DB2: jmp     short loc_6B8DB6
0x6B8DB4: xor     eax, eax
0x6B8DB6: push    eax
0x6B8DB7: lea     ecx, [ebp+0Ch]
0x6B8DBA: mov     byte ptr [esp+34h+var_4], bl
0x6B8DBE: call    BSSimpleList_PushBack
0x6B8DC3: add     [esp+30h+var_1C], 1
0x6B8DC8: cmp     edi, ebx
0x6B8DCA: jnz     loc_6B8D40
0x6B8DD0: lea     ecx, [esp+30h+responseList]; this
0x6B8DD4: mov     [esp+30h+var_4], 0FFFFFFFFh
0x6B8DDC: call    TESResponseList__Clear; Destroy every TESResponse and responseText owned by this list. CollectResponses creates a clone first, so this cleanup releases the caller's temporary snapshot without clearing the shared global cache.
0x6B8DE1: mov     ecx, [esp+30h+var_C]
0x6B8DE5: mov     large fs:0, ecx
0x6B8DEC: pop     ecx
0x6B8DED: pop     edi
0x6B8DEE: pop     esi
0x6B8DEF: pop     ebp
0x6B8DF0: pop     ebx
0x6B8DF1: add     esp, 1Ch
0x6B8DF4: retn    10h
0x9C6F60: lea     ecx, [ebp-14h]; this
0x9C6F63: jmp     j_TESResponseList__Clear
0x9C6F68: mov     eax, [ebp-18h]
0x9C6F6B: push    eax
0x9C6F6C: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C6F71: pop     ecx
0x9C6F72: retn
0x9C6F73: mov     edx, [esp+a3]
0x9C6F77: lea     eax, [edx-20h]
0x9C6F7A: mov     ecx, [edx-24h]
0x9C6F7D: xor     ecx, eax
0x9C6F7F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6F84: mov     eax, offset stru_AEF3F4
0x9C6F89: jmp     ___CxxFrameHandler3
