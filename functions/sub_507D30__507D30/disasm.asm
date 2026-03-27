0x507D30: push    esi
0x507D31: mov     esi, [esp+4+arg_8]
0x507D35: test    esi, esi
0x507D37: jz      short loc_507D87
0x507D39: push    ebx
0x507D3A: mov     ebx, [esi+8]
0x507D3D: shr     ebx, 4
0x507D40: not     bl
0x507D42: and     bl, 1
0x507D45: mov     byte ptr [esp+8+arg_8], bl
0x507D49: mov     eax, [esp+8+arg_8]
0x507D4D: push    eax
0x507D4E: mov     ecx, esi
0x507D50: call    sub_46A9C0
0x507D55: cmp     byte ptr ds:0B361ACh, 0
0x507D5C: jz      short loc_507D82
0x507D5E: test    bl, bl
0x507D60: mov     eax, offset aOff
0x507D65: jnz     short loc_507D6C
0x507D67: mov     eax, offset aOn_0
0x507D6C: push    eax
0x507D6D: mov     ecx, esi; this
0x507D6F: call    TESObjectREFR_GetName
0x507D74: push    eax
0x507D75: push    offset aRefSCollisionS; "Ref '%s' Collision -> %s"
0x507D7A: call    Interface_ConsolePrint
0x507D7F: add     esp, 0Ch
0x507D82: pop     ebx
0x507D83: mov     al, 1
0x507D85: pop     esi
0x507D86: retn
0x507D87: mov     ecx, ds:0B333A0h
0x507D8D: call    ToggleGlobalCollision
0x507D92: cmp     byte ptr ds:0B361ACh, 0
0x507D99: jz      short loc_507D83
0x507D9B: cmp     byte ptr ds:0B33A34h, 0
0x507DA2: mov     eax, offset aOff
0x507DA7: jnz     short loc_507DAE
0x507DA9: mov     eax, offset aOn_0
0x507DAE: push    eax
0x507DAF: push    offset aCollisionS; "Collision -> %s"
0x507DB4: call    Interface_ConsolePrint
0x507DB9: add     esp, 8
0x507DBC: mov     al, 1
0x507DBE: pop     esi
0x507DBF: retn
