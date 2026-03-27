0x88FA60: sub     esp, 48h
0x88FA63: mov     eax, ds:0B30AACh
0x88FA68: xor     eax, esp
0x88FA6A: mov     [esp+48h+var_4], eax
0x88FA6E: push    ebx
0x88FA6F: push    esi
0x88FA70: mov     esi, [esp+50h+arg_0]
0x88FA74: push    edi
0x88FA75: push    esi
0x88FA76: mov     edi, ecx
0x88FA78: call    sub_89EEF0
0x88FA7D: mov     eax, ds:0BA7A20h
0x88FA82: push    eax; ArgList
0x88FA83: call    TESOutput_PrintString
0x88FA88: movzx   ebx, word ptr [esi+0Ah]
0x88FA8C: movzx   ecx, word ptr [esi+8]
0x88FA90: add     esp, 4
0x88FA93: cmp     ebx, ecx
0x88FA95: mov     dword ptr [esp+54h+var_48], eax
0x88FA99: jb      short loc_88FAA9
0x88FA9B: movzx   edx, word ptr [esi+0Eh]
0x88FA9F: add     edx, ebx
0x88FAA1: push    edx
0x88FAA2: mov     ecx, esi
0x88FAA4: call    NiTArray_SetSize
0x88FAA9: lea     eax, [esp+54h+var_48]
0x88FAAD: push    eax
0x88FAAE: push    ebx
0x88FAAF: mov     ecx, esi
0x88FAB1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88FAB6: fld     dword ptr [edi+14h]
0x88FAB9: push    ecx
0x88FABA: fstp    [esp+58h+var_58]; float
0x88FABD: push    offset aFheirgain; "fHeirGain"
0x88FAC2: call    TESOutput_PrintLabeledFloat
0x88FAC7: movzx   ebx, word ptr [esi+0Ah]
0x88FACB: movzx   ecx, word ptr [esi+8]
0x88FACF: add     esp, 8
0x88FAD2: cmp     ebx, ecx
0x88FAD4: mov     dword ptr [esp+54h+var_48], eax
0x88FAD8: jb      short loc_88FAE8
0x88FADA: movzx   edx, word ptr [esi+0Eh]
0x88FADE: add     edx, ebx
0x88FAE0: push    edx
0x88FAE1: mov     ecx, esi
0x88FAE3: call    NiTArray_SetSize
0x88FAE8: lea     eax, [esp+54h+var_48]
0x88FAEC: push    eax
0x88FAED: push    ebx
0x88FAEE: mov     ecx, esi
0x88FAF0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88FAF5: fld     dword ptr [edi+18h]
0x88FAF8: push    ecx
0x88FAF9: fstp    [esp+58h+var_58]; float
0x88FAFC: push    offset aFvelgain; "fVelGain"
0x88FB01: call    TESOutput_PrintLabeledFloat
0x88FB06: movzx   ebx, word ptr [esi+0Ah]
0x88FB0A: movzx   ecx, word ptr [esi+8]
0x88FB0E: add     esp, 8
0x88FB11: cmp     ebx, ecx
0x88FB13: mov     dword ptr [esp+54h+var_48], eax
0x88FB17: jb      short loc_88FB27
0x88FB19: movzx   edx, word ptr [esi+0Eh]
0x88FB1D: add     edx, ebx
0x88FB1F: push    edx
0x88FB20: mov     ecx, esi
0x88FB22: call    NiTArray_SetSize
0x88FB27: lea     eax, [esp+54h+var_48]
0x88FB2B: push    eax
0x88FB2C: push    ebx
0x88FB2D: mov     ecx, esi
0x88FB2F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88FB34: mov     cl, [edi+0Dh]
0x88FB37: and     cl, 1
0x88FB3A: mov     [esp+54h+var_48], cl
0x88FB3E: mov     edx, dword ptr [esp+54h+var_48]
0x88FB42: push    edx; char
0x88FB43: push    offset aBblendpos; "bBlendPos"
0x88FB48: call    TESOutput_PrintLabeledBool
0x88FB4D: movzx   ebx, word ptr [esi+0Ah]
0x88FB51: mov     dword ptr [esp+5Ch+var_48], eax
0x88FB55: movzx   eax, word ptr [esi+8]
0x88FB59: add     esp, 8
0x88FB5C: cmp     ebx, eax
0x88FB5E: jb      short loc_88FB6E
0x88FB60: movzx   ecx, word ptr [esi+0Eh]
0x88FB64: add     ecx, ebx
0x88FB66: push    ecx
0x88FB67: mov     ecx, esi
0x88FB69: call    NiTArray_SetSize
0x88FB6E: lea     edx, [esp+54h+var_48]
0x88FB72: push    edx
0x88FB73: push    ebx
0x88FB74: mov     ecx, esi
0x88FB76: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88FB7B: mov     ax, [edi+0Ch]
0x88FB7F: shr     ax, 9
0x88FB83: and     al, 1
0x88FB85: mov     [esp+54h+var_48], al
0x88FB89: mov     ecx, dword ptr [esp+54h+var_48]
0x88FB8D: push    ecx; char
0x88FB8E: push    offset aBalwaysblend; "bAlwaysBlend"
0x88FB93: call    TESOutput_PrintLabeledBool
0x88FB98: movzx   ebx, word ptr [esi+0Ah]
0x88FB9C: movzx   edx, word ptr [esi+8]
0x88FBA0: add     esp, 8
0x88FBA3: cmp     ebx, edx
0x88FBA5: mov     dword ptr [esp+54h+var_48], eax
0x88FBA9: jb      short loc_88FBB9
0x88FBAB: movzx   eax, word ptr [esi+0Eh]
0x88FBAF: add     eax, ebx
0x88FBB1: push    eax
0x88FBB2: mov     ecx, esi
0x88FBB4: call    NiTArray_SetSize
0x88FBB9: lea     ecx, [esp+54h+var_48]
0x88FBBD: push    ecx
0x88FBBE: push    ebx
0x88FBBF: mov     ecx, esi
0x88FBC1: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88FBC6: mov     edx, [edi+20h]
0x88FBC9: push    edx
0x88FBCA: lea     eax, [esp+58h+var_44]
0x88FBCE: push    offset a0x08x; "0x%08X"
0x88FBD3: push    eax
0x88FBD4: call    __sprintf
0x88FBD9: lea     ecx, [esp+60h+var_44]
0x88FBDD: push    ecx; int
0x88FBDE: push    offset aStoredWorld; "Stored World"
0x88FBE3: call    TESOutput_PrintLabeledString
0x88FBE8: movzx   edi, word ptr [esi+0Ah]
0x88FBEC: movzx   edx, word ptr [esi+8]
0x88FBF0: add     esp, 14h
0x88FBF3: cmp     edi, edx
0x88FBF5: mov     dword ptr [esp+54h+var_48], eax
0x88FBF9: jb      short loc_88FC09
0x88FBFB: movzx   eax, word ptr [esi+0Eh]
0x88FBFF: add     eax, edi
0x88FC01: push    eax
0x88FC02: mov     ecx, esi
0x88FC04: call    NiTArray_SetSize
0x88FC09: lea     ecx, [esp+54h+var_48]
0x88FC0D: push    ecx
0x88FC0E: push    edi
0x88FC0F: mov     ecx, esi
0x88FC11: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x88FC16: mov     ecx, [esp+54h+var_4]
0x88FC1A: pop     edi
0x88FC1B: pop     esi
0x88FC1C: pop     ebx
0x88FC1D: xor     ecx, esp
0x88FC1F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x88FC24: add     esp, 48h
0x88FC27: retn    4
