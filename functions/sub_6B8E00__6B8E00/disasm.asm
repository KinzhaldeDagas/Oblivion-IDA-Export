0x6B8E00: push    0FFFFFFFFh; Oblivion MenuTopic allocation is 0x28 bytes at its native creator. Fallout counterpart FillTopicList allocates 0x2C bytes before MenuTopic constructor (x4y6:0x825E8740); keep these version-specific class layouts separate.
0x6B8E02: push    offset SEH_6B8E00
0x6B8E07: mov     eax, large fs:0
0x6B8E0D: push    eax
0x6B8E0E: push    ecx
0x6B8E0F: push    ebx
0x6B8E10: push    ebp
0x6B8E11: push    esi
0x6B8E12: push    edi
0x6B8E13: mov     eax, ds:0B30AACh
0x6B8E18: xor     eax, esp
0x6B8E1A: push    eax
0x6B8E1B: lea     eax, [esp+24h+var_C]
0x6B8E1F: mov     large fs:0, eax
0x6B8E25: mov     esi, ecx
0x6B8E27: mov     [esp+24h+var_10], esi
0x6B8E2B: xor     ebx, ebx
0x6B8E2D: mov     [esi], ebx
0x6B8E2F: mov     [esi+4], bx
0x6B8E33: mov     [esi+6], bx
0x6B8E37: mov     ebp, [esp+24h+topic]
0x6B8E3B: mov     [esi+0Ch], ebx
0x6B8E3E: mov     [esi+10h], ebx
0x6B8E41: mov     [esi+1Ch], ebx
0x6B8E44: mov     [esi+14h], ebx
0x6B8E47: mov     [esi+24h], ebx
0x6B8E4A: mov     [esi+18h], ebx
0x6B8E4D: cmp     dword ptr [ebp+0Ch], 0D7h ; '×'
0x6B8E54: mov     [esp+24h+var_4], ebx
0x6B8E58: jnz     short loc_6B8E63; Stock FormID 000000D7 marks this MenuTopic as INFOGENERAL / visible label Rumors.
0x6B8E5A: mov     byte ptr [esi+20h], 1
0x6B8E5E: mov     [esi+8], bl
0x6B8E61: jmp     short loc_6B8E66
0x6B8E63: mov     [esi+20h], bl
0x6B8E66: mov     eax, [esp+24h+ownerQuest]
0x6B8E6A: mov     [esp+24h+topic], eax
0x6B8E6E: mov     eax, [esp+24h+info]
0x6B8E72: cmp     eax, ebx
0x6B8E74: mov     edi, ebp
0x6B8E76: mov     [esp+24h+ownerQuest], edi
0x6B8E7A: jz      loc_6B8F24
0x6B8E80: cmp     [eax+22h], bl; Snapshot !originalInfo->spoken into MenuTopic.infoNotSpoken before any low-disposition InfoRefusal substitution.
0x6B8E83: mov     [esi+18h], eax
0x6B8E86: setz    cl
0x6B8E89: cmp     [esp+24h+substituteInfoRefusal], bl
0x6B8E8D: mov     [esi+21h], cl; infoNotSpoken is a presentation/cache byte initialized from !TESTopicInfo.spoken. It is distinct from the authoritative INFO-global spoken byte.
0x6B8E90: jz      short loc_6B8ED4
0x6B8E92: movzx   edx, byte ptr [eax+25h]
0x6B8E96: shr     edx, 4
0x6B8E99: test    dl, 1
0x6B8E9C: jnz     short loc_6B8ED4; Disposition-refusal substitution applies to ordinary TOPIC menu construction only. If selection returned a low-disposition fallback and the original INFO is not itself flagged InfoRefusal, replace its runtime INFO/topic/quest with the stock FormID 118 InfoRefusal match while retaining the original topic's display label.
0x6B8E9E: push    ebx; index
0x6B8E9F: push    6; topicType
0x6B8EA1: call    TESTopic__GetTopic; MenuTopic fallback construction requests Miscellaneous bucket index 0: fixed FormID 00000118 InfoRefusal.
0x6B8EA6: mov     ecx, [esp+2Ch+speaker]
0x6B8EAA: mov     edi, eax
0x6B8EAC: mov     eax, ds:0B333C4h
0x6B8EB1: add     esp, 8
0x6B8EB4: push    eax; target
0x6B8EB5: push    ecx; speaker
0x6B8EB6: mov     ecx, edi; this
0x6B8EB8: call    TESTopic__GetStrictMatchingInfo; Strict InfoRefusal lookup rejects another low-disposition fallback. When a strict stock InfoRefusal INFO exists, its responses, links, result, owner quest, and topic identity drive the MenuTopic; only the visible label came from the requested topic.
0x6B8EBD: cmp     eax, ebx
0x6B8EBF: jz      short loc_6B8ED4
0x6B8EC1: push    eax; info
0x6B8EC2: mov     ecx, edi; this
0x6B8EC4: mov     [esi+18h], eax; Replace runtime INFO/topic/owner quest with stock InfoRefusal, but do not recompute infoNotSpoken. The visible new marker still reflects the originally requested INFO; InfoRefusal RunResult also does not set spoken.
0x6B8EC7: mov     [esp+28h+ownerQuest], edi
0x6B8ECB: call    TESTopic__GetOwnerQuest
0x6B8ED0: mov     [esp+24h+topic], eax
0x6B8ED4: mov     eax, [ebp+1Ch]
0x6B8ED7: cmp     eax, ebx
0x6B8ED9: jnz     short loc_6B8EE0
0x6B8EDB: mov     eax, offset EmptyString
0x6B8EE0: push    ebx; a3
0x6B8EE1: push    eax; a2
0x6B8EE2: mov     ecx, esi; this
0x6B8EE4: call    BSStringT_Set
0x6B8EE9: cmp     [esi+20h], bl
0x6B8EEC: jnz     short loc_6B8F0A
0x6B8EEE: mov     edx, [esi+18h]
0x6B8EF1: mov     eax, [edx+30h]; TESTopicInfo+0x30 points to linked-topic lists; linkedTo is the second list at +0x08 and supplies menu choices/conversation continuations.
0x6B8EF4: cmp     eax, ebx
0x6B8EF6: jz      short loc_6B8F07
0x6B8EF8: cmp     [eax+0Ch], ebx
0x6B8EFB: jnz     short loc_6B8F02
0x6B8EFD: cmp     [eax+8], ebx
0x6B8F00: jz      short loc_6B8F07
0x6B8F02: mov     ebx, 1
0x6B8F07: mov     [esi+8], bl
0x6B8F0A: mov     eax, [esp+24h+speaker]
0x6B8F0E: mov     ecx, [esi+18h]
0x6B8F11: mov     edi, [esp+24h+ownerQuest]
0x6B8F15: mov     edx, [esp+24h+topic]
0x6B8F19: push    eax; speaker
0x6B8F1A: push    ecx; info
0x6B8F1B: push    edi; topic
0x6B8F1C: push    edx; ownerQuest
0x6B8F1D: mov     ecx, esi; this
0x6B8F1F: call    MenuTopic__FillResponseList; Builds runtime DialogueResponses from a cloned TESResponse list. Each TESResponse is reconstructed from the authoritative INFO record's 16-byte TRDT followed by NAM1 text. Empty text is skipped; INFOGENERAL/Rumors keeps only the first non-empty response.
0x6B8F24: mov     eax, [esp+24h+topic]
0x6B8F28: mov     [esi+14h], eax
0x6B8F2B: mov     [esi+24h], edi
0x6B8F2E: mov     eax, esi
0x6B8F30: mov     ecx, [esp+24h+var_C]
0x6B8F34: mov     large fs:0, ecx
0x6B8F3B: pop     ecx
0x6B8F3C: pop     edi
0x6B8F3D: pop     esi
0x6B8F3E: pop     ebp
0x6B8F3F: pop     ebx
0x6B8F40: add     esp, 10h
0x6B8F43: retn    14h
0x9C6F90: mov     ecx, [ebp-10h]; void *
0x9C6F93: jmp     BSStringT_Clear
0x9C6F98: mov     edx, [esp+topic]
0x9C6F9C: lea     eax, [edx-14h]
0x9C6F9F: mov     ecx, [edx-18h]
0x9C6FA2: xor     ecx, eax
0x9C6FA4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C6FA9: mov     eax, offset stru_AEF420
0x9C6FAE: jmp     ___CxxFrameHandler3
