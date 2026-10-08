0x6A0700: push    0FFFFFFFFh
0x6A0702: push    offset MagicShaderHitEffect_constr_args_SEH
0x6A0707: mov     eax, large fs:0
0x6A070D: push    eax
0x6A070E: push    ecx
0x6A070F: push    ebx
0x6A0710: push    ebp
0x6A0711: push    esi
0x6A0712: push    edi
0x6A0713: mov     eax, ds:0B30AACh
0x6A0718: xor     eax, esp
0x6A071A: push    eax
0x6A071B: lea     eax, [esp+24h+var_C]
0x6A071F: mov     large fs:0, eax
0x6A0725: mov     esi, ecx
0x6A0727: mov     [esp+24h+var_10], esi
0x6A072B: call    MagicHitEffect_constr; Verified MagicHitEffect constructor starts from the 24-byte BSTempEffect base, nulls ownerActiveEffect (+0x18) and targetReference (+0x1C), zeros elapsedSeconds (+0x20) and bFinished (+0x24), establishing a 40-byte base layout.
0x6A0730: xor     ebx, ebx
0x6A0732: mov     dword ptr [esi], offset ??_7MagicShaderHitEffect@@6B@; Verified (Oblivion): constructor initializes a 0x4C-byte shader hit effect. +0x28 is bWeaponEnchantment_28, set true by Process_UpdateWeaponEnchantmentShader after resolving an equipped enchantment's EffectSetting.enchantEffect. +0x30 TESBoundObject*, +0x34 TESEffectShader*, +0x38 visual elapsed timer, +0x3C ParticleShaderProperty*, +0x40 NiNode*, +0x44 perspective state, and +0x48 TextureEffectData* are supported by field use/construction/destruction.
0x6A0738: mov     [esp+24h+var_4], ebx
0x6A073C: mov     [esi+3Ch], ebx
0x6A073F: mov     [esi+40h], ebx
0x6A0742: mov     [esi+48h], ebx
0x6A0745: mov     ebp, ds:0A2807Ch
0x6A074B: mov     [esi+34h], ebx
0x6A074E: mov     edi, [esi+48h]
0x6A0751: cmp     edi, ebx
0x6A0753: mov     byte ptr [esp+24h+var_4], 3
0x6A0758: jz      short loc_6A0775
0x6A075A: lea     eax, [edi+4]
0x6A075D: push    eax; lpAddend
0x6A075E: call    ebp ; InterlockedDecrement
0x6A0760: test    eax, eax
0x6A0762: jnz     short loc_6A0772
0x6A0764: cmp     edi, ebx
0x6A0766: jz      short loc_6A0772
0x6A0768: mov     edx, [edi]
0x6A076A: mov     eax, [edx]
0x6A076C: push    1
0x6A076E: mov     ecx, edi
0x6A0770: call    eax
0x6A0772: mov     [esi+48h], ebx
0x6A0775: fldz
0x6A0777: fstp    dword ptr [esi+38h]
0x6A077A: mov     edi, [esi+3Ch]
0x6A077D: cmp     edi, ebx
0x6A077F: jz      short loc_6A079C
0x6A0781: lea     ecx, [edi+4]
0x6A0784: push    ecx; lpAddend
0x6A0785: call    ebp ; InterlockedDecrement
0x6A0787: test    eax, eax
0x6A0789: jnz     short loc_6A0799
0x6A078B: cmp     edi, ebx
0x6A078D: jz      short loc_6A0799
0x6A078F: mov     edx, [edi]
0x6A0791: mov     eax, [edx]
0x6A0793: push    1
0x6A0795: mov     ecx, edi
0x6A0797: call    eax
0x6A0799: mov     [esi+3Ch], ebx
0x6A079C: mov     edi, [esi+40h]
0x6A079F: cmp     edi, ebx
0x6A07A1: jz      short loc_6A07BE
0x6A07A3: lea     ecx, [edi+4]
0x6A07A6: push    ecx; lpAddend
0x6A07A7: call    ebp ; InterlockedDecrement
0x6A07A9: test    eax, eax
0x6A07AB: jnz     short loc_6A07BB
0x6A07AD: cmp     edi, ebx
0x6A07AF: jz      short loc_6A07BB
0x6A07B1: mov     edx, [edi]
0x6A07B3: mov     eax, [edx]
0x6A07B5: push    1
0x6A07B7: mov     ecx, edi
0x6A07B9: call    eax
0x6A07BB: mov     [esi+40h], ebx
0x6A07BE: mov     [esi+28h], bl
0x6A07C1: mov     dword ptr [esi+2Ch], 0FFFFFFFFh; Verified (Oblivion): shader field +0x2C is initialized to 0xFFFFFFFF and serialized as a raw dword for save version >= 0x37; semantic meaning remains Unknown.
0x6A07C8: mov     [esi+30h], ebx
0x6A07CB: mov     [esi+44h], bl; Verified (Oblivion): shader byte +0x44 initializes to zero and is later read/written during player perspective restoration; meaning is Probable perspective-state byte.
0x6A07CE: mov     eax, esi
0x6A07D0: mov     ecx, dword ptr [esp+24h+var_C]
0x6A07D4: mov     large fs:0, ecx
0x6A07DB: pop     ecx
0x6A07DC: pop     edi
0x6A07DD: pop     esi
0x6A07DE: pop     ebp
0x6A07DF: pop     ebx
0x6A07E0: add     esp, 10h
0x6A07E3: retn
0x9C5ED0: mov     ecx, [ebp-10h]
0x9C5ED3: jmp     MagicHitEffect_destr
0x9C5ED8: mov     ecx, [ebp-10h]
0x9C5EDB: add     ecx, 3Ch ; '<'; slot
0x9C5EDE: jmp     NiPointerSlot_Release
0x9C5EE3: mov     ecx, [ebp-10h]
0x9C5EE6: add     ecx, 40h ; '@'; slot
0x9C5EE9: jmp     NiPointerSlot_Release
0x9C5EEE: mov     ecx, [ebp-10h]
0x9C5EF1: add     ecx, 48h ; 'H'; slot
0x9C5EF4: jmp     NiPointerSlot_Release
0x9C5EF9: mov     edx, [esp+arg_4]
0x9C5EFD: lea     eax, [edx-14h]
0x9C5F00: mov     ecx, [edx-18h]
0x9C5F03: xor     ecx, eax
0x9C5F05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C5F0A: mov     eax, offset stru_AEE584
0x9C5F0F: jmp     ___CxxFrameHandler3
