0x8BFBA0: push    ebp
0x8BFBA1: push    esi
0x8BFBA2: mov     esi, [esp+8+arg_0]
0x8BFBA6: push    edi
0x8BFBA7: push    esi
0x8BFBA8: mov     ebp, ecx
0x8BFBAA: call    sub_8A0D20
0x8BFBAF: mov     eax, [ebp+4]
0x8BFBB2: test    eax, eax
0x8BFBB4: jz      short loc_8BFBBB
0x8BFBB6: fld     dword ptr [eax+14h]
0x8BFBB9: jmp     short loc_8BFBBD
0x8BFBBB: fldz
0x8BFBBD: fstp    [esp+0Ch+arg_0]
0x8BFBC1: push    ecx
0x8BFBC2: fld     [esp+10h+arg_0]
0x8BFBC6: fstp    [esp+10h+var_10]; float
0x8BFBC9: push    offset aThreshold; "Threshold"
0x8BFBCE: call    TESOutput_PrintLabeledFloat
0x8BFBD3: movzx   edi, word ptr [esi+0Ah]
0x8BFBD7: mov     [esp+14h+arg_0], eax
0x8BFBDB: movzx   eax, word ptr [esi+8]
0x8BFBDF: add     esp, 8
0x8BFBE2: cmp     edi, eax
0x8BFBE4: jb      short loc_8BFBF4
0x8BFBE6: movzx   ecx, word ptr [esi+0Eh]
0x8BFBEA: add     ecx, edi
0x8BFBEC: push    ecx
0x8BFBED: mov     ecx, esi
0x8BFBEF: call    NiTArray_SetSize
0x8BFBF4: lea     edx, [esp+0Ch+arg_0]
0x8BFBF8: push    edx
0x8BFBF9: push    edi
0x8BFBFA: mov     ecx, esi
0x8BFBFC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BFC01: mov     eax, [ebp+4]
0x8BFC04: test    eax, eax
0x8BFC06: jz      short loc_8BFC11
0x8BFC08: mov     al, [eax+19h]
0x8BFC0B: mov     byte ptr [esp+0Ch+arg_0], al
0x8BFC0F: jmp     short loc_8BFC16
0x8BFC11: mov     byte ptr [esp+0Ch+arg_0], 0
0x8BFC16: lea     eax, [esp+0Ch+arg_0]
0x8BFC1A: cmp     byte ptr [eax], 0
0x8BFC1D: setnz   cl
0x8BFC20: push    ecx; char
0x8BFC21: push    offset aRemifbroke; "RemIfBroke"
0x8BFC26: call    TESOutput_PrintLabeledBool
0x8BFC2B: movzx   edi, word ptr [esi+0Ah]
0x8BFC2F: movzx   edx, word ptr [esi+8]
0x8BFC33: add     esp, 8
0x8BFC36: cmp     edi, edx
0x8BFC38: mov     [esp+0Ch+arg_0], eax
0x8BFC3C: jb      short loc_8BFC4C
0x8BFC3E: movzx   eax, word ptr [esi+0Eh]
0x8BFC42: add     eax, edi
0x8BFC44: push    eax
0x8BFC45: mov     ecx, esi
0x8BFC47: call    NiTArray_SetSize
0x8BFC4C: lea     ecx, [esp+0Ch+arg_0]
0x8BFC50: push    ecx
0x8BFC51: push    edi
0x8BFC52: mov     ecx, esi
0x8BFC54: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BFC59: mov     eax, [ebp+4]
0x8BFC5C: test    eax, eax
0x8BFC5E: jz      short loc_8BFC69
0x8BFC60: mov     dl, [eax+18h]
0x8BFC63: mov     byte ptr [esp+0Ch+arg_0], dl
0x8BFC67: jmp     short loc_8BFC6E
0x8BFC69: mov     byte ptr [esp+0Ch+arg_0], 0
0x8BFC6E: lea     eax, [esp+0Ch+arg_0]
0x8BFC72: cmp     byte ptr [eax], 0
0x8BFC75: setnz   al
0x8BFC78: push    eax; char
0x8BFC79: push    offset aBroken; "Broken"
0x8BFC7E: call    TESOutput_PrintLabeledBool
0x8BFC83: movzx   edi, word ptr [esi+0Ah]
0x8BFC87: movzx   ecx, word ptr [esi+8]
0x8BFC8B: add     esp, 8
0x8BFC8E: cmp     edi, ecx
0x8BFC90: mov     [esp+0Ch+arg_0], eax
0x8BFC94: jb      short loc_8BFCA4
0x8BFC96: movzx   edx, word ptr [esi+0Eh]
0x8BFC9A: add     edx, edi
0x8BFC9C: push    edx
0x8BFC9D: mov     ecx, esi
0x8BFC9F: call    NiTArray_SetSize
0x8BFCA4: lea     eax, [esp+0Ch+arg_0]
0x8BFCA8: push    eax
0x8BFCA9: push    edi
0x8BFCAA: mov     ecx, esi
0x8BFCAC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8BFCB1: mov     ebp, [ebp+4]
0x8BFCB4: test    ebp, ebp
0x8BFCB6: jz      short loc_8BFCBD
0x8BFCB8: mov     ebp, [ebp+0Ch]
0x8BFCBB: jmp     short loc_8BFCBF
0x8BFCBD: xor     ebp, ebp
0x8BFCBF: test    ebp, ebp
0x8BFCC1: jz      short loc_8BFD06
0x8BFCC3: mov     edx, [ebp+0]
0x8BFCC6: mov     eax, [edx+0Ch]
0x8BFCC9: mov     ecx, ebp
0x8BFCCB: call    eax
0x8BFCCD: push    eax
0x8BFCCE: call    sub_8E7E60
0x8BFCD3: mov     edi, eax
0x8BFCD5: add     esp, 4
0x8BFCD8: test    edi, edi
0x8BFCDA: jz      short loc_8BFD06
0x8BFCDC: push    ebp
0x8BFCDD: mov     ecx, edi
0x8BFCDF: call    sub_8A0200
0x8BFCE4: mov     edx, [edi]
0x8BFCE6: mov     eax, [edx+14h]
0x8BFCE9: push    esi
0x8BFCEA: mov     ecx, edi
0x8BFCEC: call    eax
0x8BFCEE: push    0
0x8BFCF0: mov     ecx, edi
0x8BFCF2: mov     dword ptr [edi], offset ??_7hkConstraintCinfo@@6B@; const hkConstraintCinfo::`vftable'
0x8BFCF8: call    sub_8A0200
0x8BFCFD: push    edi
0x8BFCFE: call    FormHeapFree
0x8BFD03: add     esp, 4
0x8BFD06: pop     edi
0x8BFD07: pop     esi
0x8BFD08: pop     ebp
0x8BFD09: retn    4
