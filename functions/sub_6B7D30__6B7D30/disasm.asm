0x6B7D30: sub     esp, 14h; DialogueItem serialization writes UInt8 response count, each DialogueResponse, UInt8 internal current-response index (FF=null), then INFO/topic/ownerQuest/speaker FormIDs.
0x6B7D33: push    ebx
0x6B7D34: push    ebp
0x6B7D35: push    esi
0x6B7D36: push    edi
0x6B7D37: mov     edi, ecx
0x6B7D39: mov     ecx, ds:0B33B00h; self
0x6B7D3F: push    1; byteCount
0x6B7D41: lea     eax, [esp+28h+Src]
0x6B7D45: xor     ebx, ebx
0x6B7D47: mov     [esp+28h+Src], bl
0x6B7D4B: mov     ebp, [ecx+14h]
0x6B7D4E: push    eax; source
0x6B7D4F: call    SaveLoad_SaveData
0x6B7D54: cmp     edi, ebx
0x6B7D56: mov     esi, edi
0x6B7D58: jz      short loc_6B7D7C
0x6B7D5A: lea     ebx, [ebx+0]
0x6B7D60: cmp     [esi+4], ebx
0x6B7D63: jnz     short loc_6B7D69
0x6B7D65: cmp     [esi], ebx
0x6B7D67: jz      short loc_6B7D7C
0x6B7D69: mov     ecx, [esi]; this
0x6B7D6B: call    DialogueResponse__SaveGame; Saves response display text and voice path with UInt8 lengths, then the copied 8-byte TRDT prefix as two UInt32 values.
0x6B7D70: add     [esp+24h+Src], 1
0x6B7D75: mov     esi, [esi+4]
0x6B7D78: cmp     esi, ebx
0x6B7D7A: jnz     short loc_6B7D60
0x6B7D7C: mov     cl, [esp+24h+Src]
0x6B7D80: mov     [ebp+0], cl
0x6B7D83: mov     eax, [edi+8]
0x6B7D86: cmp     eax, ebx
0x6B7D88: mov     [esp+24h+source], 0FFh
0x6B7D8D: jz      short loc_6B7D9D
0x6B7D8F: mov     eax, [eax]
0x6B7D91: push    eax; response
0x6B7D92: mov     ecx, edi; this
0x6B7D94: call    DialogueItem__GetDialogueResponseIndex
0x6B7D99: mov     [esp+24h+source], al
0x6B7D9D: mov     ecx, ds:0B33B00h; self
0x6B7DA3: push    1; byteCount
0x6B7DA5: lea     edx, [esp+28h+source]
0x6B7DA9: push    edx; source
0x6B7DAA: call    SaveLoad_SaveData
0x6B7DAF: mov     eax, [edi+0Ch]
0x6B7DB2: cmp     eax, ebx
0x6B7DB4: mov     [esp+24h+var_10], ebx
0x6B7DB8: jz      short loc_6B7DC1
0x6B7DBA: mov     eax, [eax+0Ch]
0x6B7DBD: mov     [esp+24h+var_10], eax
0x6B7DC1: push    4; byteCount
0x6B7DC3: lea     ecx, [esp+28h+var_10]
0x6B7DC7: push    ecx; source
0x6B7DC8: mov     ecx, ds:0B33B00h; self
0x6B7DCE: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x6B7DD3: mov     eax, [edi+10h]
0x6B7DD6: cmp     eax, ebx
0x6B7DD8: mov     [esp+24h+var_C], ebx
0x6B7DDC: jz      short loc_6B7DE5
0x6B7DDE: mov     edx, [eax+0Ch]
0x6B7DE1: mov     [esp+24h+var_C], edx
0x6B7DE5: mov     ecx, ds:0B33B00h; self
0x6B7DEB: push    4; byteCount
0x6B7DED: lea     eax, [esp+28h+var_C]
0x6B7DF1: push    eax; source
0x6B7DF2: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x6B7DF7: mov     eax, [edi+14h]
0x6B7DFA: cmp     eax, ebx
0x6B7DFC: mov     [esp+24h+var_8], ebx
0x6B7E00: jz      short loc_6B7E09
0x6B7E02: mov     ecx, [eax+0Ch]
0x6B7E05: mov     [esp+24h+var_8], ecx
0x6B7E09: mov     ecx, ds:0B33B00h; self
0x6B7E0F: push    4; byteCount
0x6B7E11: lea     edx, [esp+28h+var_8]
0x6B7E15: push    edx; source
0x6B7E16: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x6B7E1B: mov     edi, [edi+18h]
0x6B7E1E: cmp     edi, ebx
0x6B7E20: mov     [esp+24h+var_4], ebx
0x6B7E24: jz      short loc_6B7E2D
0x6B7E26: mov     eax, [edi+0Ch]
0x6B7E29: mov     [esp+24h+var_4], eax
0x6B7E2D: push    4; byteCount
0x6B7E2F: lea     ecx, [esp+28h+var_4]
0x6B7E33: push    ecx; source
0x6B7E34: mov     ecx, ds:0B33B00h; self
0x6B7E3A: call    SaveLoad_SaveFormID; Writes an array of FormIDs to the save buffer. When IRef encoding is enabled, each full FormID is first converted to a compact IRef via SaveLoad_FormIDToIRef.
0x6B7E3F: pop     edi
0x6B7E40: pop     esi
0x6B7E41: pop     ebp
0x6B7E42: pop     ebx
0x6B7E43: add     esp, 14h
0x6B7E46: retn
