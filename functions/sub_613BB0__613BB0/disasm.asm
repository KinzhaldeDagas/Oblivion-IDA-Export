0x613BB0: sub     esp, 8
0x613BB3: push    ebx
0x613BB4: push    esi
0x613BB5: mov     esi, [esp+10h+arg_0]
0x613BB9: test    esi, esi
0x613BBB: mov     ebx, ecx
0x613BBD: jz      short sub_613BE7
0x613BBF: cmp     dword ptr [esi], 0
0x613BC2: jz      short sub_613BE7
0x613BC4: call    CombatController_GetCurrentTarget
0x613BC9: test    eax, eax
0x613BCB: jz      short sub_613BE7
0x613BCD: mov     eax, [ebx+3Ch]
0x613BD0: mov     edx, [esi]
0x613BD2: push    0
0x613BD4: lea     ecx, [eax+5Ch]
0x613BD7: mov     eax, [ecx]
0x613BD9: mov     eax, [eax+1Ch]
0x613BDC: push    0
0x613BDE: push    0
0x613BE0: push    edx
0x613BE1: call    eax
0x613BE3: test    al, al
0x613BE5: jnz     short loc_613BF1
0x613BF1: mov     ecx, [esi]
0x613BF3: add     ecx, 0Ch
0x613BF6: call    EffectItemList_HasHostile; Spell viability first accepts non-hostile effects; hostile spells receive target-specific duplicate/control/area/projectile checks.
0x613BFB: test    al, al
0x613BFD: jnz     short loc_613C09
0x613BFF: pop     esi
0x613C00: mov     al, 1
0x613C02: pop     ebx
0x613C03: add     esp, 8
0x613C06: retn    0Ch
0x613C09: mov     ecx, [esi]
0x613C0B: push    48h ; 'H'
0x613C0D: push    41524150h
0x613C12: add     ecx, 0Ch
0x613C15: call    EffectItemList_HasEffect; PARA (0x41524150): reject redundant paralysis when the current target is already paralyzed.
0x613C1A: test    al, al
0x613C1C: jz      short loc_613C35
0x613C1E: mov     ecx, ebx
0x613C20: call    CombatController_GetCurrentTarget
0x613C25: mov     edx, [eax]
0x613C27: mov     ecx, eax
0x613C29: mov     eax, [edx+1A0h]
0x613C2F: call    eax
0x613C31: test    al, al
0x613C33: jnz     short sub_613BE7
0x613C35: mov     ecx, [esi]
0x613C37: push    48h ; 'H'
0x613C39: push    434E4C53h
0x613C3E: add     ecx, 0Ch
0x613C41: call    EffectItemList_HasEffect; SLNC (0x434E4C53): reject redundant silence when target actor value 0x31 is already positive.
0x613C46: test    al, al
0x613C48: jz      short loc_613C63
0x613C4A: mov     ecx, ebx
0x613C4C: call    CombatController_GetCurrentTarget
0x613C51: mov     edx, [eax]
0x613C53: mov     ecx, eax
0x613C55: mov     eax, [edx+284h]
0x613C5B: push    31h ; '1'
0x613C5D: call    eax
0x613C5F: test    eax, eax
0x613C61: jg      short sub_613BE7
0x613C63: mov     ecx, [esi]
0x613C65: push    ecx
0x613C66: mov     ecx, ebx
0x613C68: call    CombatController_GetCurrentTarget
0x613C6D: mov     ecx, eax
0x613C6F: add     ecx, 68h ; 'h'
0x613C72: call    MagicTarget_HasMagicItem
0x613C77: test    al, al
0x613C79: jnz     sub_613BE7
0x613C7F: cmp     [esp+24h+var_C], al
0x613C83: jz      short loc_613C97
0x613C85: mov     ecx, [esi]
0x613C87: add     ecx, 0Ch
0x613C8A: call    EffectItemList_HasAreaEffect; Area-effect presence is a distinct combat spell viability condition, separate from raw magicka cost.
0x613C8F: test    al, al
0x613C91: jnz     sub_613BE7
0x613C97: mov     ecx, [esi]
0x613C99: add     ecx, 0Ch
0x613C9C: call    EffectItemList_HasOnTarget; True iff list has an EffectItem with range==2 (Target) and EffectSetting flag 0x400000 clear. Does not require hostile/detrimental.
0x613CA1: test    al, al
0x613CA3: jz      short loc_613CDA
0x613CA5: cmp     byte ptr [esp+1Ch], 0
0x613CAA: jnz     short loc_613CCA
0x613CAC: fld     dword ptr ds:0B3C0D0h
0x613CB2: fstp    [esp+24h+var_20+4]
0x613CB6: call    GetMagicTrackingLimitForScene
0x613CBB: fcomp   [esp+24h+var_20+4]
0x613CBF: fnstsw  ax
0x613CC1: test    ah, 41h
0x613CC4: jnp     sub_613BE7
0x613CCA: mov     ecx, [ebx+3Ch]; this
0x613CCD: call    Actor_IsSwimming; Return true only when Actor.process exists and its movement-state flags contain 0x800 (Swimming).
0x613CD2: test    al, al
0x613CD4: jnz     sub_613BE7
0x613CDA: mov     esi, [esi]
0x613CDC: test    esi, esi
0x613CDE: push    edi
0x613CDF: jz      short loc_613D3F
0x613CE1: lea     edi, [esi+0Ch]
0x613CE4: test    edi, edi
0x613CE6: jz      short loc_613D3F
