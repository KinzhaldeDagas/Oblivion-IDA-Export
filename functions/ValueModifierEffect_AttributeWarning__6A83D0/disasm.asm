0x6A83D0: sub     esp, 0CCh
0x6A83D6: mov     eax, ds:0B30AACh
0x6A83DB: xor     eax, esp
0x6A83DD: mov     [esp+0CCh+var_4], eax
0x6A83E4: mov     eax, ds:0B333C4h
0x6A83E9: test    eax, eax
0x6A83EB: push    esi
0x6A83EC: mov     esi, ecx
0x6A83EE: jz      short loc_6A83F5
0x6A83F0: add     eax, 68h ; 'h'
0x6A83F3: jmp     short loc_6A83F7
0x6A83F5: xor     eax, eax
0x6A83F7: cmp     [esi+20h], eax
0x6A83FA: jnz     ValueModifierEffect_AttributeWarning___Wrapup
0x6A8400: mov     ecx, [esi+0Ch]
0x6A8403: mov     eax, [ecx+14h]
0x6A8406: cmp     eax, 7
0x6A8409: jbe     short loc_6A8417
0x6A840B: add     eax, 0FFFFFFF4h
0x6A840E: cmp     eax, 14h
0x6A8411: ja      ValueModifierEffect_AttributeWarning___Wrapup
0x6A8417: call    EffectItem_IsHostile
0x6A841C: test    al, al
0x6A841E: jz      ValueModifierEffect_AttributeWarning___Wrapup
0x6A8424: mov     ecx, [esi+8]
0x6A8427: mov     eax, [ecx]
0x6A8429: mov     edx, [eax+18h]
0x6A842C: call    edx
0x6A842E: cmp     eax, 4
0x6A8431: jz      short ValueModifierEffect_AttributeWarning___Wrapup
0x6A8433: mov     eax, [esi+0Ch]
0x6A8436: mov     ecx, [eax+1Ch]
0x6A8439: mov     edx, [ecx+58h]
0x6A843C: shr     edx, 2
0x6A843F: test    dl, 1
0x6A8442: jz      short ValueModifierEffect_AttributeWarning___Wrapup
0x6A8444: mov     eax, ecx
0x6A8446: mov     ecx, [eax+58h]
0x6A8449: shr     ecx, 1
0x6A844B: test    cl, 1
0x6A844E: jnz     short loc_6A845B
0x6A8450: mov     ecx, esi
0x6A8452: call    ActiveEffect_Base_IsBoundObjWearable
0x6A8457: test    al, al
0x6A8459: jz      short loc_6A8463
0x6A845B: mov     ecx, ds:0B38E08h
0x6A8461: jmp     short loc_6A8469
0x6A8463: mov     ecx, ds:0B38E00h
0x6A8469: mov     edx, [esi+0Ch]
0x6A846C: mov     eax, [edx+14h]
0x6A846F: mov     esi, ds:0B38D28h
0x6A8475: push    ecx
0x6A8476: push    eax
0x6A8477: call    ActorValue_GetName
0x6A847C: add     esp, 4
0x6A847F: push    eax
0x6A8480: push    esi
0x6A8481: lea     eax, [esp+0DCh+string]
0x6A8485: push    offset aSSS_6; "%s %s %s"
0x6A848A: push    eax
0x6A848B: call    __sprintf
0x6A8490: fld     dword ptr ds:0A46C30h
0x6A8496: add     esp, 10h
0x6A8499: fstp    [esp+0D4h+duration]; duration
0x6A849C: push    1; unk2
0x6A849E: lea     ecx, [esp+0D8h+string]
0x6A84A2: push    0; unk1
0x6A84A4: push    ecx; string
0x6A84A5: call    GameUI_QueueMessage
0x6A84AA: add     esp, 10h
