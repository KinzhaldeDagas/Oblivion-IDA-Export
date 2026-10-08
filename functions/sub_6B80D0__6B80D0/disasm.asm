0x6B80D0: push    0FFFFFFFFh; Ambient DialogueItem constructor. Unlike player MenuTopic::FillResponseList, this path appends every collected TESResponse without filtering empty display text and without INFOGENERAL/D7's first-nonempty-response limit. An ambient RUMOR item can therefore retain all authored responses.
0x6B80D2: push    offset SEH_6B80D0
0x6B80D7: mov     eax, large fs:0
0x6B80DD: push    eax
0x6B80DE: sub     esp, 8
0x6B80E1: push    ebx
0x6B80E2: push    ebp
0x6B80E3: push    esi
0x6B80E4: push    edi
0x6B80E5: mov     eax, ds:0B30AACh
0x6B80EA: xor     eax, esp
0x6B80EC: push    eax
0x6B80ED: lea     eax, [esp+28h+var_C]
0x6B80F1: mov     large fs:0, eax
0x6B80F7: mov     esi, ecx
0x6B80F9: mov     edx, [esp+28h+a3]
0x6B80FD: xor     eax, eax
0x6B80FF: cmp     edx, eax
0x6B8101: mov     [esi], eax
0x6B8103: mov     [esi+4], eax
0x6B8106: mov     [esi+8], eax
0x6B8109: mov     [esi+0Ch], eax
0x6B810C: jz      loc_6B81B4
0x6B8112: mov     ebx, [esp+28h+a4]
0x6B8116: cmp     ebx, eax
0x6B8118: jz      loc_6B81B4
0x6B811E: mov     ecx, [esp+28h+a2]
0x6B8122: cmp     ecx, eax
0x6B8124: jz      loc_6B81B4
0x6B812A: mov     [esi+14h], ecx
0x6B812D: mov     ecx, [esp+28h+a5]
0x6B8131: mov     [esi+0Ch], ebx
0x6B8134: mov     [esi+10h], edx
0x6B8137: mov     [esi+18h], ecx
0x6B813A: mov     [esp+28h+responseList], eax
0x6B813E: mov     [esp+28h+var_10], eax
0x6B8142: lea     edx, [esp+28h+responseList]
0x6B8146: push    edx; outResponses
0x6B8147: mov     ecx, ebx; this
0x6B8149: mov     [esp+2Ch+var_4], eax
0x6B814D: call    TESTopicInfo__CollectResponses; DialogueItem construction also consumes an independent TESResponseList snapshot. Ambient items therefore remain valid after the one-entry shared INFO response cache is switched to a different TESTopicInfo.
0x6B8152: lea     edi, [esp+28h+responseList]
0x6B8156: mov     ebp, [edi]; Ambient response enumeration has no NAM1/text-length test. Each collected TESResponse is converted to a DialogueResponse, including empty-text entries; voice-path generation and normal cursor/result timing still apply.
0x6B8158: test    ebp, ebp
0x6B815A: jz      short loc_6B81A3
0x6B815C: mov     edi, [edi+4]
0x6B815F: push    18h; Size
0x6B8161: call    FormHeapAlloc
0x6B8166: add     esp, 4
0x6B8169: mov     [esp+28h+a4], eax
0x6B816D: test    eax, eax
0x6B816F: mov     byte ptr [esp+28h+var_4], 1
0x6B8174: jz      short loc_6B8190
0x6B8176: mov     ecx, [esp+28h+a5]
0x6B817A: mov     edx, [esp+28h+a3]
0x6B817E: push    ebp; responseData
0x6B817F: push    ecx; speaker
0x6B8180: mov     ecx, [esp+30h+a2]
0x6B8184: push    ebx; info
0x6B8185: push    edx; topic
0x6B8186: push    ecx; ownerQuest
0x6B8187: mov     ecx, eax; this
0x6B8189: call    DialogueResponse__DialogueResponse; MorrowindDialogueText hook site: verified response constructor call to sub_6B83B0. Hook aliases legacy &sUActnQuick1;/2 before DialogMenu tile string assignment.
0x6B818E: jmp     short loc_6B8192
0x6B8190: xor     eax, eax
0x6B8192: push    eax
0x6B8193: mov     ecx, esi
0x6B8195: mov     byte ptr [esp+2Ch+var_4], 0
0x6B819A: call    BSSimpleList_PushBack
0x6B819F: test    edi, edi
0x6B81A1: jnz     short loc_6B8156
0x6B81A3: lea     ecx, [esp+28h+responseList]; this
0x6B81A7: mov     [esp+28h+var_4], 0FFFFFFFFh
0x6B81AF: call    TESResponseList__Clear; Destroy every TESResponse and responseText owned by this list. CollectResponses creates a clone first, so this cleanup releases the caller's temporary snapshot without clearing the shared global cache.
0x6B81B4: mov     eax, esi
0x6B81B6: mov     ecx, [esp+28h+var_C]
0x6B81BA: mov     large fs:0, ecx
0x6B81C1: pop     ecx
0x6B81C2: pop     edi
0x6B81C3: pop     esi
0x6B81C4: pop     ebp
0x6B81C5: pop     ebx
0x6B81C6: add     esp, 14h
0x6B81C9: retn    10h
0x9C6EA0: lea     ecx, [ebp-14h]; this
0x9C6EA3: jmp     j_TESResponseList__Clear
0x9C6EA8: mov     eax, [ebp+0Ch]
0x9C6EAB: push    eax
0x9C6EAC: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C6EB1: pop     ecx
0x9C6EB2: retn
0x9C6EB3: mov     edx, [esp+a3]
0x9C6EB7: lea     eax, [edx-18h]
0x9C6EBA: mov     ecx, [edx-1Ch]
0x9C6EBD: xor     ecx, eax
0x9C6EBF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6EC4: mov     eax, offset stru_AEF334
0x9C6EC9: jmp     ___CxxFrameHandler3
