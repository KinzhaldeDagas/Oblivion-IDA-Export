0x579970: push    ebp
0x579971: push    1; arg1
0x579973: xor     ebp, ebp
0x579975: push    ebp; canCreate
0x579976: call    InterfaceManager_GetSingleton
0x57997B: add     esp, 8
0x57997E: test    eax, eax
0x579980: jz      loc_579AD0
0x579986: push    1; arg1
0x579988: push    ebp; canCreate
0x579989: call    InterfaceManager_GetSingleton
0x57998E: add     esp, 8
0x579991: cmp     [eax+1Ch], ebp
0x579994: jz      loc_579AD0
0x57999A: push    ebx
0x57999B: push    esi
0x57999C: push    edi
0x57999D: push    1; arg1
0x57999F: push    ebp; canCreate
0x5799A0: call    InterfaceManager_GetSingleton
0x5799A5: add     esp, 8
0x5799A8: mov     ecx, eax
0x5799AA: call    sub_57E7C0
0x5799AF: mov     eax, ds:0B33398h
0x5799B4: mov     ecx, [eax+20h]; this
0x5799B7: push    2; a3
0x5799B9: push    4; a2
0x5799BB: call    InputGlobals__QueryControlState
0x5799C0: push    ebp
0x5799C1: push    1; arg1
0x5799C3: push    ebp; canCreate
0x5799C4: mov     ebx, eax
0x5799C6: call    InterfaceManager_GetSingleton
0x5799CB: add     esp, 8
0x5799CE: mov     ecx, eax
0x5799D0: call    sub_581390
0x5799D5: mov     esi, eax
0x5799D7: xor     edi, edi
0x5799D9: cmp     esi, ebp
0x5799DB: jz      short loc_5799FB
0x5799DD: push    ebp; int
0x5799DE: push    offset ??_R0?AVMessageMenu@@@8; struct TypeDescriptor *
0x5799E3: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5799E8: push    ebp; int
0x5799E9: mov     ecx, esi
0x5799EB: call    Tile_GetParentMenu
0x5799F0: push    eax; void *
0x5799F1: call    OblivionDynamicCast
0x5799F6: add     esp, 14h
0x5799F9: mov     edi, eax
0x5799FB: cmp     edi, ds:0B3A6DCh
0x579A01: jz      short loc_579A0F
0x579A03: mov     ds:0B3A6DCh, ebp
0x579A09: mov     ds:0B3A6D8h, ebp
0x579A0F: cmp     ebx, ebp
0x579A11: jz      short loc_579A58
0x579A13: cmp     edi, ebp
0x579A15: jz      loc_579ACD
0x579A1B: push    0FA8h
0x579A20: mov     ecx, esi
0x579A22: call    sub_588B50
0x579A27: test    eax, eax
0x579A29: jz      short loc_579A58
0x579A2B: mov     ebx, [edi]
0x579A2D: push    esi
0x579A2E: push    0FA8h
0x579A33: mov     ecx, esi
0x579A35: call    Tile_GetFloat
0x579A3A: call    Double_To_SInt32
0x579A3F: mov     edx, [ebx+0Ch]
0x579A42: push    eax
0x579A43: mov     ecx, edi
0x579A45: call    edx
0x579A47: pop     edi
0x579A48: pop     esi
0x579A49: pop     ebx
0x579A4A: mov     ds:0B3A6D8h, ebp
0x579A50: mov     ds:0B3A6DCh, ebp
0x579A56: pop     ebp
0x579A57: retn
0x579A58: cmp     edi, ebp
0x579A5A: jz      short loc_579ACD
0x579A5C: push    0FA8h
0x579A61: mov     ecx, esi
0x579A63: call    sub_588B50
0x579A68: test    eax, eax
0x579A6A: jz      short loc_579ACD
0x579A6C: mov     ecx, ds:0B3A6D8h
0x579A72: cmp     esi, ecx
0x579A74: jz      short loc_579ACD
0x579A76: cmp     ecx, ebp
0x579A78: jz      short loc_579AA1
0x579A7A: mov     eax, ds:0B3A6DCh
0x579A7F: cmp     eax, ebp
0x579A81: jz      short loc_579AA1
0x579A83: mov     ebx, [eax]
0x579A85: push    ecx
0x579A86: push    0FA8h
0x579A8B: call    Tile_GetFloat
0x579A90: call    Double_To_SInt32
0x579A95: mov     ecx, ds:0B3A6DCh
0x579A9B: push    eax
0x579A9C: mov     eax, [ebx+14h]
0x579A9F: call    eax
0x579AA1: cmp     esi, ebp
0x579AA3: jz      short loc_579AC1
0x579AA5: mov     ebx, [edi]
0x579AA7: push    esi
0x579AA8: push    0FA8h
0x579AAD: mov     ecx, esi
0x579AAF: call    Tile_GetFloat
0x579AB4: call    Double_To_SInt32
0x579AB9: mov     edx, [ebx+10h]
0x579ABC: push    eax
0x579ABD: mov     ecx, edi
0x579ABF: call    edx
0x579AC1: mov     ds:0B3A6D8h, esi
0x579AC7: mov     ds:0B3A6DCh, edi
0x579ACD: pop     edi
0x579ACE: pop     esi
0x579ACF: pop     ebx
0x579AD0: pop     ebp
0x579AD1: retn
