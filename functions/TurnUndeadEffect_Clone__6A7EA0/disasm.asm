0x6A7EA0: push    0FFFFFFFFh
0x6A7EA2: push    offset SEH_8C8970
0x6A7EA7: mov     eax, large fs:0
0x6A7EAD: push    eax
0x6A7EAE: push    ecx
0x6A7EAF: push    esi
0x6A7EB0: push    edi
0x6A7EB1: mov     eax, ds:0B30AACh
0x6A7EB6: xor     eax, esp
0x6A7EB8: push    eax
0x6A7EB9: lea     eax, [esp+1Ch+var_C]
0x6A7EBD: mov     large fs:0, eax
0x6A7EC3: mov     edi, ecx
0x6A7EC5: push    3Ch ; '<'; Size
0x6A7EC7: call    FormHeapAlloc
0x6A7ECC: mov     esi, eax
0x6A7ECE: add     esp, 4
0x6A7ED1: mov     [esp+1Ch+var_10], esi
0x6A7ED5: test    esi, esi
0x6A7ED7: mov     [esp+1Ch+var_4], 0
0x6A7EDF: jz      short loc_6A7F00
0x6A7EE1: mov     eax, [edi+0Ch]
0x6A7EE4: mov     ecx, [edi+8]
0x6A7EE7: mov     edx, [edi+24h]
0x6A7EEA: push    eax
0x6A7EEB: push    ecx
0x6A7EEC: push    edx
0x6A7EED: mov     ecx, esi; this
0x6A7EEF: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x6A7EF4: mov     dword ptr [esi], offset ??_7TurnUndeadEffect@@6B@; const TurnUndeadEffect::`vftable'
0x6A7EFA: mov     byte ptr [esi+38h], 0
0x6A7EFE: jmp     short loc_6A7F02
0x6A7F00: xor     esi, esi
0x6A7F02: mov     al, [edi+38h]
0x6A7F05: mov     [esi+38h], al
0x6A7F08: mov     edx, [edi]
0x6A7F0A: mov     eax, [edx+2Ch]
0x6A7F0D: push    esi
0x6A7F0E: mov     ecx, edi
0x6A7F10: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6A7F18: call    eax
0x6A7F1A: mov     eax, esi
0x6A7F1C: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6A7F20: mov     large fs:0, ecx
0x6A7F27: pop     ecx
0x6A7F28: pop     edi
0x6A7F29: pop     esi
0x6A7F2A: add     esp, 10h
0x6A7F2D: retn
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
