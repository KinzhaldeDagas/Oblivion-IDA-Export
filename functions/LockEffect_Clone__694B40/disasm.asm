0x694B40: push    0FFFFFFFFh; Verified LockEffect clone: allocates 0x38 bytes, copies base ActiveEffect state, restores LockEffect_vftable, invokes the base CopyTo hook, and returns the clone.
0x694B42: push    offset SEH_8C8970
0x694B47: mov     eax, large fs:0
0x694B4D: push    eax
0x694B4E: push    ecx
0x694B4F: push    esi
0x694B50: push    edi
0x694B51: mov     eax, ds:0B30AACh
0x694B56: xor     eax, esp
0x694B58: push    eax
0x694B59: lea     eax, [esp+1Ch+var_C]
0x694B5D: mov     large fs:0, eax
0x694B63: mov     esi, ecx
0x694B65: push    38h ; '8'; Size
0x694B67: call    FormHeapAlloc
0x694B6C: mov     edi, eax
0x694B6E: add     esp, 4
0x694B71: mov     [esp+1Ch+var_10], edi
0x694B75: test    edi, edi
0x694B77: mov     [esp+1Ch+var_4], 0
0x694B7F: jz      short loc_694B9C
0x694B81: mov     eax, [esi+0Ch]
0x694B84: mov     ecx, [esi+8]
0x694B87: mov     edx, [esi+24h]
0x694B8A: push    eax
0x694B8B: push    ecx
0x694B8C: push    edx
0x694B8D: mov     ecx, edi; this
0x694B8F: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x694B94: mov     dword ptr [edi], offset LockEffect_vftable
0x694B9A: jmp     short loc_694B9E
0x694B9C: xor     edi, edi
0x694B9E: mov     eax, [esi]
0x694BA0: mov     edx, [eax+2Ch]
0x694BA3: push    edi
0x694BA4: mov     ecx, esi
0x694BA6: mov     [esp+20h+var_4], 0FFFFFFFFh
0x694BAE: call    edx
0x694BB0: mov     eax, edi
0x694BB2: mov     ecx, dword ptr [esp+1Ch+var_C]
0x694BB6: mov     large fs:0, ecx
0x694BBD: pop     ecx
0x694BBE: pop     edi
0x694BBF: pop     esi
0x694BC0: add     esp, 10h
0x694BC3: retn
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
