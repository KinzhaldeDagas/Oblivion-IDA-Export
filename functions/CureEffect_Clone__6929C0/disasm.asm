0x6929C0: push    0FFFFFFFFh
0x6929C2: push    offset SEH_806210
0x6929C7: mov     eax, large fs:0
0x6929CD: push    eax
0x6929CE: push    ecx
0x6929CF: push    ebx
0x6929D0: push    ebp
0x6929D1: push    esi
0x6929D2: push    edi
0x6929D3: mov     eax, ds:0B30AACh
0x6929D8: xor     eax, esp
0x6929DA: push    eax
0x6929DB: lea     eax, [esp+24h+var_C]
0x6929DF: mov     large fs:0, eax
0x6929E5: mov     esi, ecx
0x6929E7: or      ebp, 0FFFFFFFFh
0x6929EA: cmp     [esi+3Ch], ebp
0x6929ED: push    40h ; '@'; Size
0x6929EF: jnz     short loc_692A2F
0x6929F1: call    FormHeapAlloc
0x6929F6: mov     edi, eax
0x6929F8: add     esp, 4
0x6929FB: mov     [esp+24h+var_10], edi
0x6929FF: test    edi, edi
0x692A01: mov     [esp+24h+var_4], 0
0x692A09: jz      short loc_692A71
0x692A0B: mov     eax, [esi+0Ch]
0x692A0E: mov     ecx, [esi+8]
0x692A11: mov     edx, [esi+24h]
0x692A14: mov     ebx, [esi+38h]
0x692A17: push    eax
0x692A18: push    ecx
0x692A19: push    edx
0x692A1A: mov     ecx, edi; this
0x692A1C: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x692A21: mov     dword ptr [edi], offset ??_7CureEffect@@6B@; const CureEffect::`vftable'
0x692A27: mov     [edi+3Ch], ebp
0x692A2A: mov     [edi+38h], ebx
0x692A2D: jmp     short loc_692A73
0x692A2F: call    FormHeapAlloc
0x692A34: mov     edi, eax
0x692A36: add     esp, 4
0x692A39: mov     [esp+24h+var_10], edi
0x692A3D: test    edi, edi
0x692A3F: mov     [esp+24h+var_4], 1
0x692A47: jz      short loc_692A71
0x692A49: mov     eax, [esi+0Ch]
0x692A4C: mov     ecx, [esi+8]
0x692A4F: mov     edx, [esi+24h]
0x692A52: mov     ebx, [esi+3Ch]
0x692A55: push    eax
0x692A56: push    ecx
0x692A57: push    edx
0x692A58: mov     ecx, edi; this
0x692A5A: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x692A5F: mov     dword ptr [edi], offset ??_7CureEffect@@6B@; const CureEffect::`vftable'
0x692A65: mov     [edi+3Ch], ebx
0x692A68: mov     dword ptr [edi+38h], 0
0x692A6F: jmp     short loc_692A73
0x692A71: xor     edi, edi
0x692A73: mov     eax, [esi]
0x692A75: mov     edx, [eax+2Ch]
0x692A78: push    edi
0x692A79: mov     ecx, esi
0x692A7B: mov     [esp+28h+var_4], ebp
0x692A7F: call    edx
0x692A81: mov     eax, edi
0x692A83: mov     ecx, dword ptr [esp+24h+var_C]
0x692A87: mov     large fs:0, ecx
0x692A8E: pop     ecx
0x692A8F: pop     edi
0x692A90: pop     esi
0x692A91: pop     ebp
0x692A92: pop     ebx
0x692A93: add     esp, 10h
0x692A96: retn
0x9C57A0: mov     eax, [ebp-10h]
0x9C57A3: push    eax
0x9C57A4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C57A9: pop     ecx
0x9C57AA: retn
0x9C57AB: mov     eax, [ebp-10h]
0x9C57AE: push    eax
0x9C57AF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C57B4: pop     ecx
0x9C57B5: retn
0x9C57B6: mov     edx, [esp+arg_4]
0x9C57BA: lea     eax, [edx-14h]
0x9C57BD: mov     ecx, [edx-18h]
0x9C57C0: xor     ecx, eax
0x9C57C2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C57C7: mov     eax, offset stru_AEDF40
0x9C57CC: jmp     ___CxxFrameHandler3
