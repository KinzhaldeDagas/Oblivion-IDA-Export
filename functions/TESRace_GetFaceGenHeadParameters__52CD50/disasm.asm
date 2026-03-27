0x52CD50: push    0FFFFFFFFh
0x52CD52: push    offset SEH_6C4C20
0x52CD57: mov     eax, large fs:0
0x52CD5D: push    eax
0x52CD5E: sub     esp, 0Ch
0x52CD61: push    ebx
0x52CD62: push    ebp
0x52CD63: push    esi
0x52CD64: push    edi
0x52CD65: mov     eax, ds:0B30AACh
0x52CD6A: xor     eax, esp
0x52CD6C: push    eax
0x52CD6D: lea     eax, [esp+2Ch+var_C]
0x52CD71: mov     large fs:0, eax
0x52CD77: mov     edi, ecx
0x52CD79: mov     [esp+2Ch+var_14], edi
0x52CD7D: mov     esi, [esp+2Ch+arg_0]
0x52CD81: test    esi, esi
0x52CD83: jz      short loc_52CDD7
0x52CD85: mov     ebp, [esp+2Ch+arg_4]
0x52CD89: push    ebp
0x52CD8A: mov     ecx, esi
0x52CD8C: call    sub_5221C0
0x52CD91: mov     eax, [esi+1C8h]
0x52CD97: mov     [ebp+60h], eax
0x52CD9A: fld     dword ptr [esi+1CCh]
0x52CDA0: fstp    [esp+2Ch+var_18]
0x52CDA4: mov     ecx, esi
0x52CDA6: fld     [esp+2Ch+var_18]
0x52CDAA: fstp    dword ptr [ebp+68h]
0x52CDAD: mov     eax, [esi+1E8h]
0x52CDB3: mov     [ebp+64h], eax
0x52CDB6: mov     eax, [esi+1D0h]
0x52CDBC: mov     [ebp+6Ch], eax
0x52CDBF: call    TESActorBase_IsFemale
0x52CDC4: mov     [ebp+70h], eax
0x52CDC7: mov     [esp+2Ch+var_18], 0
0x52CDCF: lea     ebx, [ebp+84h]
0x52CDD5: jmp     short loc_52CE18
0x52CDD7: lea     eax, [edi+29Ch]
0x52CDDD: test    eax, eax
0x52CDDF: jnz     short loc_52CDE6
0x52CDE1: call    sub_5538D0
0x52CDE6: mov     ecx, [esp+2Ch+arg_4]
0x52CDEA: push    ecx
0x52CDEB: push    eax
0x52CDEC: call    sub_5528F0
0x52CDF1: mov     ebp, [esp+34h+arg_4]
0x52CDF5: add     esp, 8
0x52CDF8: mov     [esp+2Ch+var_18], 0
0x52CE00: lea     ebx, [ebp+84h]
0x52CE06: jmp     short loc_52CE18
0x52CE08: jmp     short loc_52CE10
0x52CE0A: align 10h
0x52CE10: mov     ebp, [esp+2Ch+arg_4]
0x52CE14: mov     edi, [esp+2Ch+var_14]
0x52CE18: mov     edx, [esp+2Ch+var_18]
0x52CE1C: push    edx
0x52CE1D: mov     ecx, edi
0x52CE1F: call    sub_52BC50
0x52CE24: movzx   esi, word ptr [ebp+7Eh]
0x52CE28: add     ebp, 74h ; 't'
0x52CE2B: mov     edi, eax
0x52CE2D: movzx   eax, word ptr [ebp+8]
0x52CE31: cmp     esi, eax
0x52CE33: jb      short loc_52CE43
0x52CE35: movzx   ecx, word ptr [ebp+0Eh]
0x52CE39: add     ecx, esi
0x52CE3B: push    ecx
0x52CE3C: mov     ecx, ebp
0x52CE3E: call    NiTArray_SetSize
0x52CE43: movzx   edx, word ptr [ebp+0Ah]
0x52CE47: cmp     esi, edx
0x52CE49: jb      short loc_52CE5D
0x52CE4B: test    edi, edi
0x52CE4D: lea     eax, [esi+1]
0x52CE50: mov     [ebp+0Ah], ax
0x52CE54: jz      short loc_52CE80
0x52CE56: add     word ptr [ebp+0Ch], 1
0x52CE5B: jmp     short loc_52CE80
0x52CE5D: test    edi, edi
0x52CE5F: jz      short loc_52CE71
0x52CE61: mov     ecx, [ebp+4]
0x52CE64: cmp     dword ptr [ecx+esi*4], 0
0x52CE68: jnz     short loc_52CE80
0x52CE6A: add     word ptr [ebp+0Ch], 1
0x52CE6F: jmp     short loc_52CE80
0x52CE71: mov     edx, [ebp+4]
0x52CE74: cmp     dword ptr [edx+esi*4], 0
0x52CE78: jz      short loc_52CE80
0x52CE7A: add     word ptr [ebp+0Ch], 0FFFFh
0x52CE80: mov     eax, [ebp+4]
0x52CE83: mov     ebp, [esp+2Ch+var_18]
0x52CE87: mov     ecx, [esp+2Ch+var_14]
0x52CE8B: push    ebp
0x52CE8C: mov     [eax+esi*4], edi
0x52CE8F: call    sub_52BD00
0x52CE94: movzx   esi, word ptr [ebx+0Ah]
0x52CE98: movzx   ecx, word ptr [ebx+8]
0x52CE9C: cmp     esi, ecx
0x52CE9E: mov     edi, eax
0x52CEA0: jb      short loc_52CEB0
0x52CEA2: movzx   edx, word ptr [ebx+0Eh]
0x52CEA6: add     edx, esi
0x52CEA8: push    edx
0x52CEA9: mov     ecx, ebx
0x52CEAB: call    NiTArray_SetSize
0x52CEB0: movzx   eax, word ptr [ebx+0Ah]
0x52CEB4: cmp     esi, eax
0x52CEB6: jb      short loc_52CECA
0x52CEB8: test    edi, edi
0x52CEBA: lea     ecx, [esi+1]
0x52CEBD: mov     [ebx+0Ah], cx
0x52CEC1: jz      short loc_52CEED
0x52CEC3: add     word ptr [ebx+0Ch], 1
0x52CEC8: jmp     short loc_52CEED
0x52CECA: test    edi, edi
0x52CECC: jz      short loc_52CEDE
0x52CECE: mov     edx, [ebx+4]
0x52CED1: cmp     dword ptr [edx+esi*4], 0
0x52CED5: jnz     short loc_52CEED
0x52CED7: add     word ptr [ebx+0Ch], 1
0x52CEDC: jmp     short loc_52CEED
0x52CEDE: mov     eax, [ebx+4]
0x52CEE1: cmp     dword ptr [eax+esi*4], 0
0x52CEE5: jz      short loc_52CEED
0x52CEE7: add     word ptr [ebx+0Ch], 0FFFFh
0x52CEED: mov     ecx, [ebx+4]
0x52CEF0: mov     [ecx+esi*4], edi
0x52CEF3: mov     edi, [esp+2Ch+arg_4]
0x52CEF7: movzx   esi, word ptr [edi+9Eh]
0x52CEFE: movzx   edx, word ptr [edi+9Ch]
0x52CF05: mov     ebp, ds:0B10CA8h[ebp*4]
0x52CF0C: add     edi, 94h ; '”'
0x52CF12: cmp     esi, edx
0x52CF14: jb      short loc_52CF24
0x52CF16: movzx   eax, word ptr [edi+0Eh]
0x52CF1A: add     eax, esi
0x52CF1C: push    eax
0x52CF1D: mov     ecx, edi
0x52CF1F: call    NiTArray_SetSize
0x52CF24: movzx   ecx, word ptr [edi+0Ah]
0x52CF28: cmp     esi, ecx
0x52CF2A: jb      short loc_52CF3E
0x52CF2C: test    ebp, ebp
0x52CF2E: lea     edx, [esi+1]
0x52CF31: mov     [edi+0Ah], dx
0x52CF35: jz      short loc_52CF61
0x52CF37: add     word ptr [edi+0Ch], 1
0x52CF3C: jmp     short loc_52CF61
0x52CF3E: test    ebp, ebp
0x52CF40: jz      short loc_52CF52
0x52CF42: mov     eax, [edi+4]
0x52CF45: cmp     dword ptr [eax+esi*4], 0
0x52CF49: jnz     short loc_52CF61
0x52CF4B: add     word ptr [edi+0Ch], 1
0x52CF50: jmp     short loc_52CF61
0x52CF52: mov     ecx, [edi+4]
0x52CF55: cmp     dword ptr [ecx+esi*4], 0
0x52CF59: jz      short loc_52CF61
0x52CF5B: add     word ptr [edi+0Ch], 0FFFFh
0x52CF61: mov     ecx, [esp+2Ch+arg_0]
0x52CF65: test    ecx, ecx
0x52CF67: mov     edx, [edi+4]
0x52CF6A: mov     [edx+esi*4], ebp
0x52CF6D: jz      loc_52CFF6
0x52CF73: cmp     byte ptr ds:0B10D3Ch, 0
0x52CF7A: jz      short loc_52CFF6
0x52CF7C: mov     eax, [esp+2Ch+var_18]
0x52CF80: push    eax
0x52CF81: lea     edx, [esp+30h+var_10]
0x52CF85: push    edx
0x52CF86: call    sub_524100
0x52CF8B: mov     ebp, eax
0x52CF8D: mov     esi, [esp+2Ch+arg_4]
0x52CF91: movzx   edi, word ptr [esi+0AEh]
0x52CF98: movzx   eax, word ptr [esi+0ACh]
0x52CF9F: add     esi, 0A4h ; '¤'
0x52CFA5: cmp     edi, eax
0x52CFA7: mov     [esp+2Ch+var_4], 0
0x52CFAF: jb      short loc_52CFBF
0x52CFB1: movzx   ecx, word ptr [esi+0Eh]
0x52CFB5: add     ecx, edi
0x52CFB7: push    ecx
0x52CFB8: mov     ecx, esi
0x52CFBA: call    sub_523B10
0x52CFBF: push    ebp
0x52CFC0: push    edi
0x52CFC1: mov     ecx, esi
0x52CFC3: call    sub_5254D0
0x52CFC8: mov     eax, [esp+2Ch+var_10]
0x52CFCC: test    eax, eax
0x52CFCE: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x52CFD6: jz      short loc_52CFF6
0x52CFD8: mov     esi, eax
0x52CFDA: add     eax, 4
0x52CFDD: push    eax; lpAddend
0x52CFDE: call    dword ptr ds:0A2807Ch
0x52CFE4: test    eax, eax
0x52CFE6: jnz     short loc_52CFF6
0x52CFE8: test    esi, esi
0x52CFEA: jz      short loc_52CFF6
0x52CFEC: mov     edx, [esi]
0x52CFEE: mov     eax, [edx]
0x52CFF0: push    1
0x52CFF2: mov     ecx, esi
0x52CFF4: call    eax
0x52CFF6: mov     eax, [esp+2Ch+var_18]
0x52CFFA: add     eax, 1
0x52CFFD: cmp     eax, 9
0x52D000: mov     [esp+2Ch+var_18], eax
0x52D004: jl      loc_52CE10
0x52D00A: mov     ebx, [esp+2Ch+arg_4]
0x52D00E: cmp     dword ptr [ebx+60h], 0
0x52D012: mov     cl, ds:0B10D3Ch
0x52D018: mov     [ebx+0B4h], cl
0x52D01E: mov     edx, ds:0B120B0h
0x52D024: mov     ecx, [esp+2Ch+var_14]
0x52D028: mov     [ebx+0C0h], edx
0x52D02E: lea     eax, [ecx+188h]
0x52D034: lea     edx, [ecx+1A0h]
0x52D03A: mov     [ebx+0B8h], eax
0x52D040: mov     [ebx+0BCh], edx
0x52D046: jnz     short loc_52D062
0x52D048: lea     eax, [ecx+8Ch]
0x52D04E: test    eax, eax
0x52D050: jz      short loc_52D062
0x52D052: cmp     dword ptr [eax+4], 0
0x52D056: jnz     short loc_52D05D
0x52D058: cmp     dword ptr [eax], 0
0x52D05B: jz      short loc_52D062
0x52D05D: mov     eax, [eax]
0x52D05F: mov     [ebx+60h], eax
0x52D062: cmp     dword ptr [ebx+6Ch], 0
0x52D066: jnz     short loc_52D0C0
0x52D068: lea     eax, [ecx+0A8h]
0x52D06E: test    eax, eax
0x52D070: jz      short loc_52D084
0x52D072: cmp     dword ptr [eax+4], 0
0x52D076: jnz     short loc_52D07D
0x52D078: cmp     dword ptr [eax], 0
0x52D07B: jz      short loc_52D084
0x52D07D: mov     ecx, [eax]
0x52D07F: mov     [ebx+6Ch], ecx
0x52D082: jmp     short loc_52D0C0
0x52D084: mov     esi, ds:0B33A98h
0x52D08A: add     esi, 3Ch ; '<'
0x52D08D: jz      short loc_52D0C0
0x52D08F: nop
0x52D090: mov     edi, [esi]
0x52D092: test    edi, edi
0x52D094: jz      short loc_52D0B4
0x52D096: mov     eax, [edi+28h]
0x52D099: test    eax, eax
0x52D09B: jnz     short loc_52D0A2
0x52D09D: mov     eax, offset EmptyString
0x52D0A2: push    offset aCharactersEyes; "Characters\\Eyes\\EyeDefault.dds"
0x52D0A7: push    eax; Str1
0x52D0A8: call    __strcmp
0x52D0AD: add     esp, 8
0x52D0B0: test    eax, eax
0x52D0B2: jz      short loc_52D0BD
0x52D0B4: mov     esi, [esi+4]
0x52D0B7: test    esi, esi
0x52D0B9: jnz     short loc_52D090
0x52D0BB: jmp     short loc_52D0C0
0x52D0BD: mov     [ebx+6Ch], edi
0x52D0C0: mov     ecx, dword ptr [esp+2Ch+var_C]
0x52D0C4: mov     large fs:0, ecx
0x52D0CB: pop     ecx
0x52D0CC: pop     edi
0x52D0CD: pop     esi
0x52D0CE: pop     ebp
0x52D0CF: pop     ebx
0x52D0D0: add     esp, 18h
0x52D0D3: retn    8
