0x68F2B0: push    0FFFFFFFFh
0x68F2B2: push    offset ??0ScriptEffect@@QAE@XZ_SEH
0x68F2B7: mov     eax, large fs:0
0x68F2BD: push    eax
0x68F2BE: push    ecx
0x68F2BF: push    esi
0x68F2C0: push    edi
0x68F2C1: mov     eax, ds:0B30AACh
0x68F2C6: xor     eax, esp
0x68F2C8: push    eax
0x68F2C9: lea     eax, [esp+1Ch+var_C]
0x68F2CD: mov     large fs:0, eax
0x68F2D3: mov     esi, ecx
0x68F2D5: mov     [esp+1Ch+var_10], esi
0x68F2D9: mov     edi, [esp+1Ch+arg_8]
0x68F2DD: mov     eax, [esp+1Ch+arg_4]
0x68F2E1: mov     ecx, [esp+1Ch+arg_0]
0x68F2E5: push    edi
0x68F2E6: push    eax
0x68F2E7: push    ecx
0x68F2E8: mov     ecx, esi; this
0x68F2EA: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x68F2EF: mov     dword ptr [esi], offset ??_7AssociatedItemEffect@@6B@; const AssociatedItemEffect::`vftable'
0x68F2F5: mov     edx, [edi+1Ch]
0x68F2F8: mov     eax, [edx+60h]
0x68F2FB: push    eax; a1
0x68F2FC: mov     [esp+20h+var_4], 0
0x68F304: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x68F309: mov     [esi+38h], eax
0x68F30C: add     esp, 4
0x68F30F: mov     eax, esi
0x68F311: mov     ecx, [esp+1Ch+var_C]
0x68F315: mov     large fs:0, ecx
0x68F31C: pop     ecx
0x68F31D: pop     edi
0x68F31E: pop     esi
0x68F31F: add     esp, 10h
0x68F322: retn    0Ch
0x9C57E0: mov     ecx, [ebp-10h]; this
0x9C57E3: jmp     ??1ActiveEffect@@UAE@XZ; Verified ActiveEffect destructor detaches each associated MagicHitEffect by setting bFinished and ownerActiveEffect=null, clears/frees only the HitEffectNode list, and relies on the ActorProcessManager reference added during PostLink to own the BSTempEffect object's later update/removal.
0x9C57E8: mov     edx, [esp+arg_4]
0x9C57EC: lea     eax, [edx-0Ch]
0x9C57EF: mov     ecx, [edx-10h]
0x9C57F2: xor     ecx, eax
0x9C57F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C57F9: mov     eax, offset stru_AEDF6C
0x9C57FE: jmp     ___CxxFrameHandler3
