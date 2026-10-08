0x6A8A00: push    0FFFFFFFFh
0x6A8A02: push    offset SEH_8C8970
0x6A8A07: mov     eax, large fs:0
0x6A8A0D: push    eax
0x6A8A0E: push    ecx
0x6A8A0F: push    esi
0x6A8A10: push    edi
0x6A8A11: mov     eax, ds:0B30AACh
0x6A8A16: xor     eax, esp
0x6A8A18: push    eax
0x6A8A19: lea     eax, [esp+1Ch+var_C]
0x6A8A1D: mov     large fs:0, eax
0x6A8A23: mov     esi, ecx
0x6A8A25: push    38h ; '8'; Size
0x6A8A27: call    FormHeapAlloc
0x6A8A2C: mov     edi, eax
0x6A8A2E: add     esp, 4
0x6A8A31: mov     [esp+1Ch+var_10], edi
0x6A8A35: test    edi, edi
0x6A8A37: mov     [esp+1Ch+var_4], 0
0x6A8A3F: jz      short loc_6A8A5C
0x6A8A41: mov     eax, [esi+0Ch]
0x6A8A44: mov     ecx, [esi+8]
0x6A8A47: mov     edx, [esi+24h]
0x6A8A4A: push    eax
0x6A8A4B: push    ecx
0x6A8A4C: push    edx
0x6A8A4D: mov     ecx, edi; this
0x6A8A4F: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6A8A54: mov     dword ptr [edi], offset ??_7VampirismEffect@@6B@; const VampirismEffect::`vftable'
0x6A8A5A: jmp     short loc_6A8A5E
0x6A8A5C: xor     edi, edi
0x6A8A5E: mov     eax, [esi]
0x6A8A60: mov     edx, [eax+2Ch]
0x6A8A63: push    edi
0x6A8A64: mov     ecx, esi
0x6A8A66: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A8A6E: call    edx
0x6A8A70: mov     eax, edi
0x6A8A72: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A8A76: mov     large fs:0, ecx
0x6A8A7D: pop     ecx
0x6A8A7E: pop     edi
0x6A8A7F: pop     esi
0x6A8A80: add     esp, 10h
0x6A8A83: retn
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
