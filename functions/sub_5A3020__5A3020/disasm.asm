0x5A3020: push    0FFFFFFFFh
0x5A3022: push    offset SEH_8094D0
0x5A3027: mov     eax, large fs:0
0x5A302D: push    eax
0x5A302E: push    ebx
0x5A302F: push    ebp
0x5A3030: push    esi
0x5A3031: push    edi
0x5A3032: mov     eax, ds:0B30AACh
0x5A3037: xor     eax, esp
0x5A3039: push    eax
0x5A303A: lea     eax, [esp+20h+var_C]
0x5A303E: mov     large fs:0, eax
0x5A3044: mov     ebx, ecx
0x5A3046: mov     ecx, [esp+20h+arg_0]
0x5A304A: mov     esi, [ebx+90h]
0x5A3050: push    0FAEh
0x5A3055: xor     ebp, ebp
0x5A3057: xor     edi, edi
0x5A3059: call    Tile_GetFloat
0x5A305E: call    Double_To_SInt32
0x5A3063: cmp     esi, ebp
0x5A3065: jz      loc_5A3148
0x5A306B: jmp     short loc_5A3070
0x5A306D: align 10h
0x5A3070: cmp     edi, eax
0x5A3072: jz      short loc_5A3083
0x5A3074: mov     esi, [esi+4]
0x5A3077: add     edi, 1
0x5A307A: cmp     esi, ebp
0x5A307C: jnz     short loc_5A3070
0x5A307E: jmp     loc_5A3148
0x5A3083: mov     esi, [esi]
0x5A3085: cmp     esi, ebp
0x5A3087: jz      loc_5A3148
0x5A308D: mov     eax, [esi+98h]
0x5A3093: mov     ecx, [ebx+28h]
0x5A3096: push    48h ; 'H'
0x5A3098: push    eax
0x5A3099: add     ecx, 24h ; '$'
0x5A309C: call    EffectItemList_HasEffect
0x5A30A1: test    al, al
0x5A30A3: jz      short loc_5A30AE
0x5A30A5: test    dword ptr [esi+58h], 180000h
0x5A30AC: jz      short loc_5A3123
0x5A30AE: push    24h ; '$'; Size
0x5A30B0: call    FormHeapAlloc
0x5A30B5: add     esp, 4
0x5A30B8: mov     [esp+20h+arg_0], eax
0x5A30BC: cmp     eax, ebp
0x5A30BE: mov     [esp+20h+var_4], ebp
0x5A30C2: jz      short loc_5A30D0
0x5A30C4: push    esi
0x5A30C5: mov     ecx, eax
0x5A30C7: call    EffectItem_constr
0x5A30CC: mov     edi, eax
0x5A30CE: jmp     short loc_5A30D2
0x5A30D0: xor     edi, edi
0x5A30D2: mov     eax, [esi+58h]
0x5A30D5: mov     ecx, eax
0x5A30D7: shr     ecx, 13h
0x5A30DA: test    cl, 1
0x5A30DD: mov     [esp+20h+var_4], 0FFFFFFFFh
0x5A30E5: jz      short loc_5A30F0
0x5A30E7: mov     dword ptr [edi+14h], 0Ch
0x5A30EE: jmp     short loc_5A30FA
0x5A30F0: shr     eax, 14h
0x5A30F3: test    al, 1
0x5A30F5: jz      short loc_5A30FA
0x5A30F7: mov     [edi+14h], ebp
0x5A30FA: push    esi
0x5A30FB: mov     ecx, edi
0x5A30FD: call    EffectItem_SetEffectSetting
0x5A3102: push    1
0x5A3104: push    edi
0x5A3105: call    EffectSettingsMenu_Create
0x5A310A: add     esp, 8
0x5A310D: cmp     edi, ebp
0x5A310F: jz      short loc_5A3148
0x5A3111: mov     ecx, edi
0x5A3113: call    EffectItem_destr
0x5A3118: push    edi
0x5A3119: call    FormHeapFree
0x5A311E: add     esp, 4
0x5A3121: jmp     short loc_5A3148
0x5A3123: sub     esp, 8
0x5A3126: mov     ecx, esp; this
0x5A3128: mov     [esp+28h+arg_0], esp
0x5A312C: push    ebp; a3
0x5A312D: push    offset aThatEffectHasA; "That effect has already been added.  Ed"...
0x5A3132: mov     [ecx], ebp
0x5A3134: mov     [ecx+4], bp
0x5A3138: mov     [ecx+6], bp
0x5A313C: call    BSStringT_Set
0x5A3141: mov     ecx, ebx
0x5A3143: call    ShowMessageBox??
0x5A3148: mov     ecx, [esp+20h+var_C]
0x5A314C: mov     large fs:0, ecx
0x5A3153: pop     ecx
0x5A3154: pop     edi
0x5A3155: pop     esi
0x5A3156: pop     ebp
0x5A3157: pop     ebx
0x5A3158: add     esp, 0Ch
0x5A315B: retn    4
