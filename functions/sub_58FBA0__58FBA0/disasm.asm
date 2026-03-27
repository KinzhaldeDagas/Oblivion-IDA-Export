0x58FBA0: sub     esp, 8
0x58FBA3: push    edi
0x58FBA4: mov     edi, ecx
0x58FBA6: cmp     byte ptr [edi+5], 0
0x58FBAA: mov     [esp+0Ch+var_4], edi
0x58FBAE: jnz     loc_58FD7D
0x58FBB4: push    ebx
0x58FBB5: push    ebp
0x58FBB6: push    esi
0x58FBB7: mov     esi, [edi+10h]
0x58FBBA: push    1; arg1
0x58FBBC: push    0; canCreate
0x58FBBE: call    InterfaceManager_GetSingleton
0x58FBC3: add     esp, 8
0x58FBC6: cmp     esi, [eax+68h]
0x58FBC9: jnz     short loc_58FC2F
0x58FBCB: push    0FA5h
0x58FBD0: mov     ecx, edi
0x58FBD2: call    Tile_GetFloat
0x58FBD7: fcomp   qword ptr ds:0A69778h
0x58FBDD: push    0FA5h
0x58FBE2: mov     ecx, edi
0x58FBE4: fnstsw  ax
0x58FBE6: test    ah, 44h
0x58FBE9: jp      short loc_58FBFC
0x58FBEB: call    Tile_GetPropertyByCode?
0x58FBF0: test    eax, eax
0x58FBF2: jz      short loc_58FC2F
0x58FBF4: fld     dword ptr ds:0A69770h
0x58FBFA: jmp     short loc_58FC24
0x58FBFC: call    Tile_GetFloat
0x58FC01: fcomp   qword ptr ds:0A69768h
0x58FC07: fnstsw  ax
0x58FC09: test    ah, 44h
0x58FC0C: jp      short loc_58FC2F
0x58FC0E: push    0FA5h
0x58FC13: mov     ecx, edi
0x58FC15: call    Tile_GetPropertyByCode?
0x58FC1A: test    eax, eax
0x58FC1C: jz      short loc_58FC2F
0x58FC1E: fld     dword ptr ds:0A69764h
0x58FC24: push    ecx
0x58FC25: mov     ecx, eax
0x58FC27: fstp    [esp+1Ch+var_1C]; float
0x58FC2A: call    Tile_Property_SetFloatValue?
0x58FC2F: mov     bl, ds:0B3B0A2h
0x58FC35: mov     ecx, edi
0x58FC37: mov     byte ptr ds:0B3B0A2h, 1
0x58FC3E: call    sub_58E870
0x58FC43: mov     ds:0B3B0A2h, bl
0x58FC49: mov     ebp, [edi+34h]
0x58FC4C: test    ebp, ebp
0x58FC4E: mov     bl, byte ptr [esp+18h+arg_0]
0x58FC52: mov     [esp+18h+var_5], al
0x58FC56: jz      loc_58FD5F
0x58FC5C: lea     esp, [esp+0]
0x58FC60: mov     edi, [ebp+8]
0x58FC63: mov     esi, [edi+18h]
0x58FC66: lea     eax, [ebp+8]
0x58FC69: mov     ebp, [ebp+0]
0x58FC6C: mov     eax, esi
0x58FC6E: test    eax, eax
0x58FC70: jz      short loc_58FCA1
0x58FC72: mov     edx, [eax+8]
0x58FC75: lea     ecx, [eax+8]
0x58FC78: movzx   ecx, word ptr [edx+18h]
0x58FC7C: cmp     cx, 0FA1h
0x58FC81: mov     eax, [eax]
0x58FC83: jz      short loc_58FC8D
0x58FC85: ja      short loc_58FCA1
0x58FC87: test    eax, eax
0x58FC89: jnz     short loc_58FC72
0x58FC8B: jmp     short loc_58FCA1
0x58FC8D: fld     dword ptr [edx+4]
0x58FC90: fstp    [esp+18h+arg_0]
0x58FC94: fld1
0x58FC96: fcomp   [esp+18h+arg_0]
0x58FC9A: fnstsw  ax
0x58FC9C: test    ah, 44h
0x58FC9F: jnp     short loc_58FCE3
0x58FCA1: mov     eax, esi
0x58FCA3: test    eax, eax
0x58FCA5: jz      short loc_58FD1A
0x58FCA7: jmp     short loc_58FCB0
0x58FCA9: align 10h
0x58FCB0: mov     edx, [eax+8]
0x58FCB3: lea     ecx, [eax+8]
0x58FCB6: movzx   ecx, word ptr [edx+18h]
0x58FCBA: cmp     cx, 0FA3h
0x58FCBF: mov     eax, [eax]
0x58FCC1: jz      short loc_58FCCB
0x58FCC3: ja      short loc_58FD1A
0x58FCC5: test    eax, eax
0x58FCC7: jnz     short loc_58FCB0
0x58FCC9: jmp     short loc_58FD1A
0x58FCCB: fld     dword ptr [edx+4]
0x58FCCE: fstp    [esp+18h+arg_0]
0x58FCD2: fld     dword ptr ds:0A379B4h
0x58FCD8: fcomp   [esp+18h+arg_0]
0x58FCDC: fnstsw  ax
0x58FCDE: test    ah, 44h
0x58FCE1: jp      short loc_58FD1A
0x58FCE3: mov     eax, [edi+24h]
0x58FCE6: xor     dl, dl
0x58FCE8: test    eax, eax
0x58FCEA: jz      short loc_58FCF2
0x58FCEC: mov     dl, [eax+18h]
0x58FCEF: and     dl, 1
0x58FCF2: mov     eax, [edi+10h]
0x58FCF5: test    eax, eax
0x58FCF7: jz      short loc_58FD16
0x58FCF9: lea     esp, [esp+0]
0x58FD00: mov     ecx, [eax+24h]
0x58FD03: test    ecx, ecx
0x58FD05: jz      short loc_58FD0F
0x58FD07: mov     cl, [ecx+18h]
0x58FD0A: and     cl, 1
0x58FD0D: or      dl, cl
0x58FD0F: mov     eax, [eax+10h]
0x58FD12: test    eax, eax
0x58FD14: jnz     short loc_58FD00
0x58FD16: test    dl, dl
0x58FD18: jnz     short loc_58FD35
0x58FD1A: test    bl, bl
0x58FD1C: jnz     short loc_58FD28
0x58FD1E: cmp     [esp+18h+var_5], bl
0x58FD22: jnz     short loc_58FD28
0x58FD24: xor     al, al
0x58FD26: jmp     short loc_58FD2D
0x58FD28: mov     eax, 1
0x58FD2D: push    eax; float
0x58FD2E: mov     ecx, edi
0x58FD30: call    sub_58FBA0
0x58FD35: mov     edx, [edi]
0x58FD37: mov     eax, [edx+0Ch]
0x58FD3A: mov     ecx, edi
0x58FD3C: call    eax
0x58FD3E: cmp     eax, 388h
0x58FD43: jnz     short loc_58FD53
0x58FD45: fld     dword ptr [edi+58h]
0x58FD48: push    ecx
0x58FD49: mov     ecx, edi
0x58FD4B: fstp    [esp+1Ch+var_1C]; float
0x58FD4E: call    sub_590D20
0x58FD53: test    ebp, ebp
0x58FD55: jnz     loc_58FC60
0x58FD5B: mov     edi, [esp+18h+var_4]
0x58FD5F: pop     esi
0x58FD60: pop     ebp
0x58FD61: test    bl, bl
0x58FD63: pop     ebx
0x58FD64: jnz     short loc_58FD7D
0x58FD66: cmp     [esp+0Ch+var_5], 0
0x58FD6B: jz      short loc_58FD7D
0x58FD6D: fldz
0x58FD6F: push    1; a3
0x58FD71: push    ecx
0x58FD72: fstp    [esp+14h+a2]; a2
0x58FD75: mov     ecx, [edi+24h]; this
0x58FD78: call    NiAVObject_UpdateNiAVObject
0x58FD7D: pop     edi
0x58FD7E: add     esp, 8
0x58FD81: retn    4
