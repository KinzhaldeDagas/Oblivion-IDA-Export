0x694420: push    0FFFFFFFFh
0x694422: push    offset LightEffect_constr_SEH
0x694427: mov     eax, large fs:0
0x69442D: push    eax
0x69442E: push    ecx
0x69442F: push    esi
0x694430: push    edi
0x694431: mov     eax, ds:0B30AACh
0x694436: xor     eax, esp
0x694438: push    eax
0x694439: lea     eax, [esp+1Ch+var_C]
0x69443D: mov     large fs:0, eax
0x694443: mov     esi, ecx
0x694445: mov     [esp+1Ch+var_10], esi
0x694449: mov     eax, [esp+1Ch+effectItem]
0x69444D: mov     ecx, [esp+1Ch+item]
0x694451: mov     edx, [esp+1Ch+caster]
0x694455: push    eax
0x694456: push    ecx
0x694457: push    edx
0x694458: mov     ecx, esi; this
0x69445A: call    ActiveEffect_Ctor; Verified Oblivion ActiveEffect is 0x38 bytes and stores HitEffectNode* at +0x34 after TESBoundObject* at +0x30. Fallout ActiveEffect is 0x48 bytes and stores BSSimpleList<MagicHitEffect*> at +0x40 after a 12-byte PersistentSound handle and pSource at +0x3C; Fallout also has pDisplacementSpell at +0x44. Do not copy Fallout offsets into Oblivion.
0x69445F: mov     dword ptr [esi], offset ??_7LightEffect@@6B@; const LightEffect::`vftable'
0x694465: mov     [esp+1Ch+var_4], 0
0x69446D: mov     dword ptr [esi+38h], 0
0x694474: mov     edi, [esi+38h]
0x694477: test    edi, edi
0x694479: mov     byte ptr [esp+1Ch+var_4], 1
0x69447E: jz      short loc_6944A3
0x694480: lea     eax, [edi+4]
0x694483: push    eax; lpAddend
0x694484: call    dword ptr ds:0A2807Ch
0x69448A: test    eax, eax
0x69448C: jnz     short loc_69449C
0x69448E: test    edi, edi
0x694490: jz      short loc_69449C
0x694492: mov     edx, [edi]
0x694494: mov     eax, [edx]
0x694496: push    1
0x694498: mov     ecx, edi
0x69449A: call    eax
0x69449C: mov     dword ptr [esi+38h], 0
0x6944A3: mov     eax, esi
0x6944A5: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6944A9: mov     large fs:0, ecx
0x6944B0: pop     ecx
0x6944B1: pop     edi
0x6944B2: pop     esi
0x6944B3: add     esp, 10h
0x6944B6: retn    0Ch
0x9C5810: mov     ecx, [ebp-10h]; this
0x9C5813: jmp     ??1ActiveEffect@@UAE@XZ; Verified ActiveEffect destructor detaches each associated MagicHitEffect by setting bFinished and ownerActiveEffect=null, clears/frees only the HitEffectNode list, and relies on the ActorProcessManager reference added during PostLink to own the BSTempEffect object's later update/removal.
0x9C5818: mov     ecx, [ebp-10h]
0x9C581B: add     ecx, 38h ; '8'; slot
0x9C581E: jmp     NiPointerSlot_Release
0x9C5823: mov     edx, [esp+item]
0x9C5827: lea     eax, [edx-0Ch]
0x9C582A: mov     ecx, [edx-10h]
0x9C582D: xor     ecx, eax
0x9C582F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5834: mov     eax, offset stru_AEDFA0
0x9C5839: jmp     ___CxxFrameHandler3
