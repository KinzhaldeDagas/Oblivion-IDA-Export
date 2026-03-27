0x4B4C20: push    esi
0x4B4C21: mov     esi, ecx
0x4B4C23: mov     eax, [esi+8]
0x4B4C26: shr     eax, 3
0x4B4C29: test    al, 1
0x4B4C2B: jnz     short loc_4B4C67
0x4B4C2D: cmp     word ptr [esi+68h], 0
0x4B4C32: jnz     short loc_4B4C4C
0x4B4C34: mov     edx, [esi]
0x4B4C36: mov     eax, [edx+0D4h]
0x4B4C3C: call    eax
0x4B4C3E: push    eax; ArgList
0x4B4C3F: push    offset aArmorSNeedsToH; "Armor '%s' needs to have biped slots se"...
0x4B4C44: call    PrintError
0x4B4C49: add     esp, 8
0x4B4C4C: push    esi
0x4B4C4D: lea     ecx, [esi+30h]
0x4B4C50: call    TESScriptableForm_Link
0x4B4C55: push    esi
0x4B4C56: lea     ecx, [esi+3Ch]
0x4B4C59: call    TESEnchantableForm_LinkComponent
0x4B4C5E: push    1; a2
0x4B4C60: mov     ecx, esi; this
0x4B4C62: call    TESForm_SetIsLinked
0x4B4C67: pop     esi
0x4B4C68: retn
