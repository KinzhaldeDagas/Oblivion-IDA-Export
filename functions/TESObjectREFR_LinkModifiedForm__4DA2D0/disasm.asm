0x4DA2D0: push    ebx; Verified enable-state linking: reads ExtraEnableStateParent's bit 0x800, applies inverse mode when configured, and propagates the resulting disabled state to the reference through TESForm_SetDisabledFlag. It removes 3D when either disabled bit 0x800 or deleted bit 0x20 is set.
0x4DA2D1: push    ebp
0x4DA2D2: push    esi
0x4DA2D3: mov     esi, ecx
0x4DA2D5: lea     ebp, [esi+44h]
0x4DA2D8: push    edi
0x4DA2D9: mov     ecx, ebp
0x4DA2DB: call    ExtraDataList_GetEnableStateParent; Returns the parent TESObjectREFR stored in ExtraEnableStateParent type 0x3F.
0x4DA2E0: mov     edi, eax
0x4DA2E2: test    edi, edi
0x4DA2E4: jz      short loc_4DA315
0x4DA2E6: mov     ecx, ebp
0x4DA2E8: call    ExtraDataList_IsEnableStateInverse; Tests flag bit 0 of ExtraEnableStateParent, the inverse-enable-state flag.
0x4DA2ED: test    al, al
0x4DA2EF: jz      short loc_4DA301
0x4DA2F1: mov     eax, [edi+8]
0x4DA2F4: shr     eax, 0Bh
0x4DA2F7: not     al
0x4DA2F9: and     eax, 0FFFFFF01h
0x4DA2FE: push    eax
0x4DA2FF: jmp     short loc_4DA30E
0x4DA301: mov     ecx, [edi+8]
0x4DA304: shr     ecx, 0Bh
0x4DA307: and     ecx, 0FFFFFF01h
0x4DA30D: push    ecx; disabled
0x4DA30E: mov     ecx, esi; this
0x4DA310: call    TESForm_SetDisabledFlag; Verified Oblivion setter: the bool parameter sets or clears TESFormMembr.flags bit 0x800. TESObjectREFR_LinkModifiedForm propagates this bit through ExtraEnableStateParent and the enable-state activation routine clears it. CalcLowPathToPoint independently appends '-Disabled' when this bit is set. Fallout's mangled TESForm::SetDisabled directly writes the same 0x800 mask; this is a cross-check, not the basis of the Oblivion interpretation.
0x4DA315: mov     ebx, [esp+10h+arg_0]
0x4DA319: test    bl, 1
0x4DA31C: jnz     short loc_4DA322
0x4DA31E: test    edi, edi
0x4DA320: jz      short loc_4DA344
0x4DA322: mov     eax, [esi+8]
0x4DA325: mov     edx, eax
0x4DA327: shr     edx, 0Bh
0x4DA32A: test    dl, 1
0x4DA32D: jnz     short loc_4DA336
0x4DA32F: shr     eax, 5
0x4DA332: test    al, 1
0x4DA334: jz      short loc_4DA344
0x4DA336: mov     eax, [esi]
0x4DA338: mov     edx, [eax+150h]
0x4DA33E: push    0
0x4DA340: mov     ecx, esi
0x4DA342: call    edx
0x4DA344: test    ebx, 8000000h
0x4DA34A: jz      short loc_4DA368
0x4DA34C: mov     ecx, esi; this
0x4DA34E: call    TESObjectREFR_GetContainer
0x4DA353: test    eax, eax
0x4DA355: jz      short loc_4DA368
0x4DA357: push    eax
0x4DA358: push    esi; a1
0x4DA359: call    ContainerExtraData_GetContainerExtraDataForRef
0x4DA35E: add     esp, 8
0x4DA361: mov     ecx, eax
0x4DA363: call    sub_4887C0
0x4DA368: mov     eax, [esi]
0x4DA36A: mov     edx, [eax+188h]
0x4DA370: mov     ecx, esi
0x4DA372: call    edx
0x4DA374: test    al, al
0x4DA376: mov     edi, [esp+10h+arg_4]
0x4DA37A: jnz     short loc_4DA3AE
0x4DA37C: test    ebx, 40000000h
0x4DA382: jnz     short loc_4DA38C
0x4DA384: test    edi, 40000000h
0x4DA38A: jz      short loc_4DA3AE
0x4DA38C: mov     eax, [esi+8]
0x4DA38F: mov     ecx, eax
0x4DA391: shr     ecx, 0Bh
0x4DA394: test    cl, 1
0x4DA397: jnz     short loc_4DA3A0
0x4DA399: shr     eax, 5
0x4DA39C: test    al, 1
0x4DA39E: jz      short loc_4DA3AE
0x4DA3A0: mov     edx, [esi]
0x4DA3A2: mov     eax, [edx+150h]
0x4DA3A8: push    0
0x4DA3AA: mov     ecx, esi
0x4DA3AC: call    eax
0x4DA3AE: test    ebx, 177577E0h
0x4DA3B4: jnz     short loc_4DA3C6
0x4DA3B6: mov     edx, [esi]
0x4DA3B8: mov     eax, [edx+190h]
0x4DA3BE: mov     ecx, esi
0x4DA3C0: call    eax
0x4DA3C2: test    al, al
0x4DA3C4: jz      short loc_4DA3D4
0x4DA3C6: mov     ecx, [esi+1Ch]
0x4DA3C9: push    ecx
0x4DA3CA: push    esi
0x4DA3CB: push    edi
0x4DA3CC: push    ebx
0x4DA3CD: mov     ecx, ebp
0x4DA3CF: call    sub_425040
0x4DA3D4: pop     edi
0x4DA3D5: pop     esi
0x4DA3D6: pop     ebp
0x4DA3D7: pop     ebx
0x4DA3D8: retn    8
