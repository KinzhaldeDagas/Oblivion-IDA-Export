0x68EA50: push    0FFFFFFFFh; Verified (Oblivion): reads EffectItem.setting.effectCode; SEFF creates ScriptEffect directly, otherwise looks up the ActiveEffectFactoryCode map and calls its factory. If no factory is registered, it uses the built-in switch fallback.
0x68EA52: push    offset ActiveEffect_Base_CreateDynamic_SEH
0x68EA57: mov     eax, large fs:0
0x68EA5D: push    eax
0x68EA5E: sub     esp, 44h
0x68EA61: push    esi
0x68EA62: mov     eax, ds:0B30AACh
0x68EA67: xor     eax, esp
0x68EA69: push    eax
0x68EA6A: lea     eax, [esp+58h+var_C]
0x68EA6E: mov     large fs:0, eax
0x68EA74: mov     esi, [esp+58h+effectItem]
0x68EA78: mov     eax, [esi+1Ch]
0x68EA7B: cmp     dword ptr [eax+98h], 46464553h
0x68EA85: jnz     short ActiveEffect_Base_CreateDynamic___NotScriptEffect; CreateDynamic special-cases EffectSetting.effectCode == 'SEFF' from effectItem->setting +0x98 and allocates ScriptEffect before the normal creator-map/switch path.
0x9C54F0: mov     eax, [ebp+0Ch]
0x9C54F3: push    eax
0x9C54F4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C54F9: pop     ecx
0x9C54FA: retn
0x9C54FB: mov     eax, [ebp+0Ch]
0x9C54FE: push    eax
0x9C54FF: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C5504: pop     ecx
0x9C5505: retn
0x9C5506: mov     eax, [ebp+0Ch]
0x9C5509: push    eax
0x9C550A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C550F: pop     ecx
0x9C5510: retn
0x9C5511: mov     eax, [ebp+0Ch]
0x9C5514: push    eax
0x9C5515: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C551A: pop     ecx
0x9C551B: retn
0x9C551C: mov     eax, [ebp+0Ch]
0x9C551F: push    eax
0x9C5520: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C5525: pop     ecx
0x9C5526: retn
0x9C5527: mov     eax, [ebp+0Ch]
0x9C552A: push    eax
0x9C552B: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C5530: pop     ecx
0x9C5531: retn
0x9C5532: mov     eax, [ebp+0Ch]
0x9C5535: push    eax
0x9C5536: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C553B: pop     ecx
0x9C553C: retn
0x9C553D: lea     ecx, [ebp-50h]; this
0x9C5540: jmp     OB_stString28_Dtor_010201A0; Oblivion binary evidence: destructor/reset for the exact 28-byte SSO string. Frees heap storage when capacity is at least 16, restores capacity 15 and size zero, and terminates the inline buffer. Used for IdvFormatString temporaries and folded string owners across the executable.
0x9C5545: mov     eax, [ebp+0Ch]
0x9C5548: push    eax
0x9C5549: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C554E: pop     ecx
0x9C554F: retn
0x9C5550: mov     eax, [ebp+0Ch]
0x9C5553: push    eax
0x9C5554: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C5559: pop     ecx
0x9C555A: retn
0x9C555B: mov     edx, [esp+magicItem]
0x9C555F: lea     eax, [edx-48h]
0x9C5562: mov     ecx, [edx-4Ch]
0x9C5565: xor     ecx, eax
0x9C5567: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C556C: mov     eax, offset stru_AEDCC4
0x9C5571: jmp     ___CxxFrameHandler3
