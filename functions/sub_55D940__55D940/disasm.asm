0x55D940: push    ebp
0x55D941: push    esi
0x55D942: mov     esi, [esp+8+arg_0]
0x55D946: push    edi
0x55D947: push    esi
0x55D948: mov     ebp, ecx
0x55D94A: call    sub_70BAE0
0x55D94F: mov     eax, ds:0B39DB8h
0x55D954: push    eax; ArgList
0x55D955: call    TESOutput_PrintString
0x55D95A: movzx   edi, word ptr [esi+0Ah]
0x55D95E: movzx   ecx, word ptr [esi+8]
0x55D962: add     esp, 4
0x55D965: cmp     edi, ecx
0x55D967: mov     [esp+0Ch+arg_0], eax
0x55D96B: jb      short loc_55D97B
0x55D96D: movzx   edx, word ptr [esi+0Eh]
0x55D971: add     edx, edi
0x55D973: push    edx
0x55D974: mov     ecx, esi
0x55D976: call    NiTArray_SetSize
0x55D97B: lea     eax, [esp+0Ch+arg_0]
0x55D97F: push    eax
0x55D980: push    edi
0x55D981: mov     ecx, esi
0x55D983: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55D988: push    20h ; ' '; Size
0x55D98A: call    FormHeapAlloc
0x55D98F: add     esp, 4
0x55D992: cmp     byte ptr [ebp+104h], 0
0x55D999: mov     [esp+0Ch+arg_0], eax
0x55D99D: mov     ecx, offset aTrue; "true"
0x55D9A2: jnz     short loc_55D9A9
0x55D9A4: mov     ecx, offset aFalse; "false"
0x55D9A9: push    ecx
0x55D9AA: push    offset aBforcebasemorp; "bForceBaseMorph = %s"
0x55D9AF: push    eax
0x55D9B0: call    __sprintf
0x55D9B5: movzx   edi, word ptr [esi+0Ah]
0x55D9B9: movzx   ecx, word ptr [esi+8]
0x55D9BD: add     esp, 0Ch
0x55D9C0: cmp     edi, ecx
0x55D9C2: jb      short loc_55D9D2
0x55D9C4: movzx   edx, word ptr [esi+0Eh]
0x55D9C8: add     edx, edi
0x55D9CA: push    edx
0x55D9CB: mov     ecx, esi
0x55D9CD: call    NiTArray_SetSize
0x55D9D2: lea     eax, [esp+0Ch+arg_0]
0x55D9D6: push    eax
0x55D9D7: push    edi
0x55D9D8: mov     ecx, esi
0x55D9DA: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55D9DF: push    20h ; ' '; Size
0x55D9E1: call    FormHeapAlloc
0x55D9E6: add     esp, 4
0x55D9E9: cmp     byte ptr [ebp+105h], 0
0x55D9F0: mov     [esp+0Ch+arg_0], eax
0x55D9F4: mov     ecx, offset aTrue; "true"
0x55D9F9: jnz     short loc_55DA00
0x55D9FB: mov     ecx, offset aFalse; "false"
0x55DA00: push    ecx
0x55DA01: push    offset aBfixednormalsS; "bFixedNormals = %s"
0x55DA06: push    eax
0x55DA07: call    __sprintf
0x55DA0C: movzx   edi, word ptr [esi+0Ah]
0x55DA10: movzx   ecx, word ptr [esi+8]
0x55DA14: add     esp, 0Ch
0x55DA17: cmp     edi, ecx
0x55DA19: jb      short loc_55DA29
0x55DA1B: movzx   edx, word ptr [esi+0Eh]
0x55DA1F: add     edx, edi
0x55DA21: push    edx
0x55DA22: mov     ecx, esi
0x55DA24: call    NiTArray_SetSize
0x55DA29: lea     eax, [esp+0Ch+arg_0]
0x55DA2D: push    eax
0x55DA2E: push    edi
0x55DA2F: mov     ecx, esi
0x55DA31: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DA36: push    20h ; ' '; Size
0x55DA38: call    FormHeapAlloc
0x55DA3D: add     esp, 4
0x55DA40: cmp     byte ptr [ebp+106h], 0
0x55DA47: mov     [esp+0Ch+arg_0], eax
0x55DA4B: mov     ecx, offset aTrue; "true"
0x55DA50: jnz     short loc_55DA57
0x55DA52: mov     ecx, offset aFalse; "false"
0x55DA57: push    ecx
0x55DA58: push    offset aBanimationupda; "bAnimationUpdate = %s"
0x55DA5D: push    eax
0x55DA5E: call    __sprintf
0x55DA63: movzx   edi, word ptr [esi+0Ah]
0x55DA67: movzx   ecx, word ptr [esi+8]
0x55DA6B: add     esp, 0Ch
0x55DA6E: cmp     edi, ecx
0x55DA70: jb      short loc_55DA80
0x55DA72: movzx   edx, word ptr [esi+0Eh]
0x55DA76: add     edx, edi
0x55DA78: push    edx
0x55DA79: mov     ecx, esi
0x55DA7B: call    NiTArray_SetSize
0x55DA80: lea     eax, [esp+0Ch+arg_0]
0x55DA84: push    eax
0x55DA85: push    edi
0x55DA86: mov     ecx, esi
0x55DA88: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DA8D: push    20h ; ' '; Size
0x55DA8F: call    FormHeapAlloc
0x55DA94: add     esp, 4
0x55DA97: cmp     byte ptr [ebp+107h], 0
0x55DA9E: mov     [esp+0Ch+arg_0], eax
0x55DAA2: mov     ecx, offset aTrue; "true"
0x55DAA7: jnz     short loc_55DAAE
0x55DAA9: mov     ecx, offset aFalse; "false"
0x55DAAE: push    ecx
0x55DAAF: push    offset aBrotatedlastup; "bRotatedLastUpdate = %s"
0x55DAB4: push    eax
0x55DAB5: call    __sprintf
0x55DABA: movzx   edi, word ptr [esi+0Ah]
0x55DABE: movzx   ecx, word ptr [esi+8]
0x55DAC2: add     esp, 0Ch
0x55DAC5: cmp     edi, ecx
0x55DAC7: jb      short loc_55DAD7
0x55DAC9: movzx   edx, word ptr [esi+0Eh]
0x55DACD: add     edx, edi
0x55DACF: push    edx
0x55DAD0: mov     ecx, esi
0x55DAD2: call    NiTArray_SetSize
0x55DAD7: lea     eax, [esp+0Ch+arg_0]
0x55DADB: push    eax
0x55DADC: push    edi
0x55DADD: mov     ecx, esi
0x55DADF: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DAE4: push    20h ; ' '; Size
0x55DAE6: call    FormHeapAlloc
0x55DAEB: add     esp, 4
0x55DAEE: cmp     byte ptr [ebp+108h], 0
0x55DAF5: mov     [esp+0Ch+arg_0], eax
0x55DAF9: mov     ecx, offset aTrue; "true"
0x55DAFE: jnz     short loc_55DB05
0x55DB00: mov     ecx, offset aFalse; "false"
0x55DB05: push    ecx
0x55DB06: push    offset aBapplyrotation; "bApplyRotationToParent = %s"
0x55DB0B: push    eax
0x55DB0C: call    __sprintf
0x55DB11: movzx   edi, word ptr [esi+0Ah]
0x55DB15: movzx   ecx, word ptr [esi+8]
0x55DB19: add     esp, 0Ch
0x55DB1C: cmp     edi, ecx
0x55DB1E: jb      short loc_55DB2E
0x55DB20: movzx   edx, word ptr [esi+0Eh]
0x55DB24: add     edx, edi
0x55DB26: push    edx
0x55DB27: mov     ecx, esi
0x55DB29: call    NiTArray_SetSize
0x55DB2E: lea     eax, [esp+0Ch+arg_0]
0x55DB32: push    eax
0x55DB33: push    edi
0x55DB34: mov     ecx, esi
0x55DB36: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DB3B: push    20h ; ' '; Size
0x55DB3D: call    FormHeapAlloc
0x55DB42: add     esp, 4
0x55DB45: cmp     byte ptr [ebp+110h], 0
0x55DB4C: mov     [esp+0Ch+arg_0], eax
0x55DB50: mov     ecx, offset aTrue; "true"
0x55DB55: jnz     short loc_55DB5C
0x55DB57: mov     ecx, offset aFalse; "false"
0x55DB5C: push    ecx
0x55DB5D: push    offset aBusingloreshea; "bUsingLoResHead = %s"
0x55DB62: push    eax
0x55DB63: call    __sprintf
0x55DB68: movzx   edi, word ptr [esi+0Ah]
0x55DB6C: movzx   ecx, word ptr [esi+8]
0x55DB70: add     esp, 0Ch
0x55DB73: cmp     edi, ecx
0x55DB75: jb      short loc_55DB85
0x55DB77: movzx   edx, word ptr [esi+0Eh]
0x55DB7B: add     edx, edi
0x55DB7D: push    edx
0x55DB7E: mov     ecx, esi
0x55DB80: call    NiTArray_SetSize
0x55DB85: lea     eax, [esp+0Ch+arg_0]
0x55DB89: push    eax
0x55DB8A: push    edi
0x55DB8B: mov     ecx, esi
0x55DB8D: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DB92: push    20h ; ' '; Size
0x55DB94: call    FormHeapAlloc
0x55DB99: add     esp, 4
0x55DB9C: cmp     byte ptr [ebp+111h], 0
0x55DBA3: mov     [esp+0Ch+arg_0], eax
0x55DBA7: mov     ecx, offset aTrue; "true"
0x55DBAC: jnz     short loc_55DBB3
0x55DBAE: mov     ecx, offset aFalse; "false"
0x55DBB3: push    ecx
0x55DBB4: push    offset aBiamplayerchar; "bIAmPlayerCharacter = %s"
0x55DBB9: push    eax
0x55DBBA: call    __sprintf
0x55DBBF: movzx   edi, word ptr [esi+0Ah]
0x55DBC3: movzx   ecx, word ptr [esi+8]
0x55DBC7: add     esp, 0Ch
0x55DBCA: cmp     edi, ecx
0x55DBCC: jb      short loc_55DBDC
0x55DBCE: movzx   edx, word ptr [esi+0Eh]
0x55DBD2: add     edx, edi
0x55DBD4: push    edx
0x55DBD5: mov     ecx, esi
0x55DBD7: call    NiTArray_SetSize
0x55DBDC: lea     eax, [esp+0Ch+arg_0]
0x55DBE0: push    eax
0x55DBE1: push    edi
0x55DBE2: mov     ecx, esi
0x55DBE4: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DBE9: push    20h ; ' '; Size
0x55DBEB: call    FormHeapAlloc
0x55DBF0: add     esp, 4
0x55DBF3: cmp     byte ptr [ebp+112h], 0
0x55DBFA: mov     [esp+0Ch+arg_0], eax
0x55DBFE: mov     ecx, offset aTrue; "true"
0x55DC03: jnz     short loc_55DC0A
0x55DC05: mov     ecx, offset aFalse; "false"
0x55DC0A: push    ecx
0x55DC0B: push    offset aBiamindialouge; "bIAmInDialouge = %s"
0x55DC10: push    eax
0x55DC11: call    __sprintf
0x55DC16: movzx   edi, word ptr [esi+0Ah]
0x55DC1A: movzx   ecx, word ptr [esi+8]
0x55DC1E: add     esp, 0Ch
0x55DC21: cmp     edi, ecx
0x55DC23: jb      short loc_55DC33
0x55DC25: movzx   edx, word ptr [esi+0Eh]
0x55DC29: add     edx, edi
0x55DC2B: push    edx
0x55DC2C: mov     ecx, esi
0x55DC2E: call    NiTArray_SetSize
0x55DC33: lea     eax, [esp+0Ch+arg_0]
0x55DC37: push    eax
0x55DC38: push    edi
0x55DC39: mov     ecx, esi
0x55DC3B: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DC40: push    20h ; ' '; Size
0x55DC42: call    FormHeapAlloc
0x55DC47: fld     dword ptr [ebp+10Ch]
0x55DC4D: push    ecx
0x55DC4E: fstp    qword ptr [esp+14h+var_14]
0x55DC51: push    offset aFlasttime0_3f; "fLastTime = %0.3f"
0x55DC56: push    eax
0x55DC57: mov     [esp+1Ch+arg_0], eax
0x55DC5B: call    __sprintf
0x55DC60: movzx   edi, word ptr [esi+0Ah]
0x55DC64: movzx   ecx, word ptr [esi+8]
0x55DC68: add     esp, 10h
0x55DC6B: cmp     edi, ecx
0x55DC6D: jb      short loc_55DC7D
0x55DC6F: movzx   edx, word ptr [esi+0Eh]
0x55DC73: add     edx, edi
0x55DC75: push    edx
0x55DC76: mov     ecx, esi
0x55DC78: call    NiTArray_SetSize
0x55DC7D: lea     eax, [esp+0Ch+arg_0]
0x55DC81: push    eax
0x55DC82: push    edi
0x55DC83: mov     ecx, esi
0x55DC85: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DC8A: push    20h ; ' '; Size
0x55DC8C: call    FormHeapAlloc
0x55DC91: mov     ecx, [ebp+114h]
0x55DC97: push    ecx
0x55DC98: push    offset aPactor08x; "pActor = %08X"
0x55DC9D: push    eax
0x55DC9E: mov     [esp+1Ch+arg_0], eax
0x55DCA2: call    __sprintf
0x55DCA7: movzx   edi, word ptr [esi+0Ah]
0x55DCAB: movzx   edx, word ptr [esi+8]
0x55DCAF: add     esp, 10h
0x55DCB2: cmp     edi, edx
0x55DCB4: jb      short loc_55DCC4
0x55DCB6: movzx   eax, word ptr [esi+0Eh]
0x55DCBA: add     eax, edi
0x55DCBC: push    eax
0x55DCBD: mov     ecx, esi
0x55DCBF: call    NiTArray_SetSize
0x55DCC4: lea     ecx, [esp+0Ch+arg_0]
0x55DCC8: push    ecx
0x55DCC9: push    edi
0x55DCCA: mov     ecx, esi
0x55DCCC: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DCD1: cmp     dword ptr [ebp+114h], 0
0x55DCD8: jz      short loc_55DD24
0x55DCDA: push    20h ; ' '; Size
0x55DCDC: call    FormHeapAlloc
0x55DCE1: mov     edx, [ebp+114h]
0x55DCE7: mov     ecx, [edx+0Ch]
0x55DCEA: push    ecx
0x55DCEB: push    offset aPactorIformid0; "pActor->iFormID = %08X"
0x55DCF0: push    eax
0x55DCF1: mov     [esp+1Ch+arg_0], eax
0x55DCF5: call    __sprintf
0x55DCFA: movzx   edi, word ptr [esi+0Ah]
0x55DCFE: movzx   edx, word ptr [esi+8]
0x55DD02: add     esp, 10h
0x55DD05: cmp     edi, edx
0x55DD07: jb      short loc_55DD17
0x55DD09: movzx   eax, word ptr [esi+0Eh]
0x55DD0D: add     eax, edi
0x55DD0F: push    eax
0x55DD10: mov     ecx, esi
0x55DD12: call    NiTArray_SetSize
0x55DD17: lea     ecx, [esp+0Ch+arg_0]
0x55DD1B: push    ecx
0x55DD1C: push    edi
0x55DD1D: mov     ecx, esi
0x55DD1F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DD24: push    20h ; ' '; Size
0x55DD26: call    FormHeapAlloc
0x55DD2B: mov     edx, [ebp+0DCh]
0x55DD31: push    edx
0x55DD32: push    offset aSpanimationdat; "spAnimationData = %08X"
0x55DD37: push    eax
0x55DD38: mov     [esp+1Ch+arg_0], eax
0x55DD3C: call    __sprintf
0x55DD41: movzx   edi, word ptr [esi+0Ah]
0x55DD45: movzx   eax, word ptr [esi+8]
0x55DD49: add     esp, 10h
0x55DD4C: cmp     edi, eax
0x55DD4E: jb      short loc_55DD5E
0x55DD50: movzx   ecx, word ptr [esi+0Eh]
0x55DD54: add     ecx, edi
0x55DD56: push    ecx
0x55DD57: mov     ecx, esi
0x55DD59: call    NiTArray_SetSize
0x55DD5E: lea     edx, [esp+0Ch+arg_0]
0x55DD62: push    edx
0x55DD63: push    edi
0x55DD64: mov     ecx, esi
0x55DD66: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DD6B: cmp     dword ptr [ebp+0DCh], 0
0x55DD72: jz      loc_55DF63
0x55DD78: xor     edi, edi
0x55DD7A: push    ebx
0x55DD7B: jmp     short loc_55DD80
0x55DD7D: align 10h
0x55DD80: mov     ecx, [ebp+0DCh]
0x55DD86: mov     eax, [ecx]
0x55DD88: mov     edx, [eax+54h]
0x55DD8B: push    edi
0x55DD8C: call    edx
0x55DD8E: fcomp   qword ptr ds:0A3A5B0h
0x55DD94: fnstsw  ax
0x55DD96: test    ah, 44h
0x55DD99: jnp     short loc_55DDE8
0x55DD9B: mov     ecx, [ebp+0DCh]
0x55DDA1: mov     eax, [ecx]
0x55DDA3: mov     edx, [eax+54h]
0x55DDA6: mov     ebx, ds:0B11FF0h[edi*4]
0x55DDAD: push    edi
0x55DDAE: call    edx
0x55DDB0: push    ecx
0x55DDB1: fstp    [esp+14h+var_14]; float
0x55DDB4: push    ebx; ArgList
0x55DDB5: call    TESOutput_PrintLabeledFloat
0x55DDBA: movzx   ebx, word ptr [esi+0Ah]
0x55DDBE: mov     [esp+18h+arg_0], eax
0x55DDC2: movzx   eax, word ptr [esi+8]
0x55DDC6: add     esp, 8
0x55DDC9: cmp     ebx, eax
0x55DDCB: jb      short loc_55DDDB
0x55DDCD: movzx   ecx, word ptr [esi+0Eh]
0x55DDD1: add     ecx, ebx
0x55DDD3: push    ecx
0x55DDD4: mov     ecx, esi
0x55DDD6: call    NiTArray_SetSize
0x55DDDB: lea     edx, [esp+10h+arg_0]
0x55DDDF: push    edx
0x55DDE0: push    ebx
0x55DDE1: mov     ecx, esi
0x55DDE3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x55DDE8: add     edi, 1
0x55DDEB: cmp     edi, 0Dh
0x55DDEE: jl      short loc_55DD80
0x55DDF0: xor     ebx, ebx
0x55DDF2: mov     ecx, [ebp+0DCh]
0x55DDF8: mov     eax, [ecx]
0x55DDFA: mov     edx, [eax+5Ch]
0x55DDFD: push    ebx
0x55DDFE: call    edx
0x55DE00: fcomp   qword ptr ds:0A3A5B0h
0x55DE06: fnstsw  ax
0x55DE08: test    ah, 44h
0x55DE0B: jnp     loc_55DE98
0x55DE11: mov     ecx, [ebp+0DCh]
0x55DE17: mov     eax, [ecx]
0x55DE19: mov     edx, [eax+5Ch]
0x55DE1C: mov     edi, ds:0B12028h[ebx*4]
0x55DE23: push    ebx
0x55DE24: call    edx
0x55DE26: push    ecx
0x55DE27: fstp    [esp+14h+var_14]; float
0x55DE2A: push    edi; ArgList
0x55DE2B: call    TESOutput_PrintLabeledFloat
0x55DE30: movzx   edi, word ptr [esi+0Ah]
0x55DE34: movzx   ecx, word ptr [esi+8]
0x55DE38: add     esp, 8
0x55DE3B: cmp     edi, ecx
0x55DE3D: mov     [esp+10h+arg_0], eax
0x55DE41: jb      short loc_55DE55
0x55DE43: movzx   edx, word ptr [esi+0Eh]
0x55DE47: add     edx, edi
0x55DE49: push    edx
0x55DE4A: mov     ecx, esi
0x55DE4C: call    NiTArray_SetSize
0x55DE51: mov     eax, [esp+10h+arg_0]
0x55DE55: movzx   ecx, word ptr [esi+0Ah]
0x55DE59: cmp     edi, ecx
0x55DE5B: jb      short loc_55DE6F
0x55DE5D: test    eax, eax
0x55DE5F: lea     edx, [edi+1]
0x55DE62: mov     [esi+0Ah], dx
0x55DE66: jz      short loc_55DE92
0x55DE68: add     word ptr [esi+0Ch], 1
0x55DE6D: jmp     short loc_55DE92
0x55DE6F: test    eax, eax
0x55DE71: jz      short loc_55DE83
0x55DE73: mov     ecx, [esi+4]
0x55DE76: cmp     dword ptr [ecx+edi*4], 0
0x55DE7A: jnz     short loc_55DE92
0x55DE7C: add     word ptr [esi+0Ch], 1
0x55DE81: jmp     short loc_55DE92
0x55DE83: mov     edx, [esi+4]
0x55DE86: cmp     dword ptr [edx+edi*4], 0
0x55DE8A: jz      short loc_55DE92
0x55DE8C: add     word ptr [esi+0Ch], 0FFFFh
0x55DE92: mov     ecx, [esi+4]
0x55DE95: mov     [ecx+edi*4], eax
0x55DE98: add     ebx, 1
0x55DE9B: cmp     ebx, 11h
0x55DE9E: jl      loc_55DDF2
0x55DEA4: xor     ebx, ebx
0x55DEA6: jmp     short loc_55DEB0
0x55DEA8: align 10h
0x55DEB0: mov     ecx, [ebp+0DCh]
0x55DEB6: mov     edx, [ecx]
0x55DEB8: mov     eax, [edx+68h]
0x55DEBB: push    ebx
0x55DEBC: call    eax
0x55DEBE: fcomp   qword ptr ds:0A3A5B0h
0x55DEC4: fnstsw  ax
0x55DEC6: test    ah, 44h
0x55DEC9: jnp     loc_55DF56
0x55DECF: mov     ecx, [ebp+0DCh]
0x55DED5: mov     edx, [ecx]
0x55DED7: mov     eax, [edx+68h]
0x55DEDA: mov     edi, ds:0B12070h[ebx*4]
0x55DEE1: push    ebx
0x55DEE2: call    eax
0x55DEE4: push    ecx
0x55DEE5: fstp    [esp+14h+var_14]; float
0x55DEE8: push    edi; ArgList
0x55DEE9: call    TESOutput_PrintLabeledFloat
0x55DEEE: movzx   edi, word ptr [esi+0Ah]
0x55DEF2: movzx   ecx, word ptr [esi+8]
0x55DEF6: add     esp, 8
0x55DEF9: cmp     edi, ecx
0x55DEFB: mov     [esp+10h+arg_0], eax
0x55DEFF: jb      short loc_55DF13
0x55DF01: movzx   edx, word ptr [esi+0Eh]
0x55DF05: add     edx, edi
0x55DF07: push    edx
0x55DF08: mov     ecx, esi
0x55DF0A: call    NiTArray_SetSize
0x55DF0F: mov     eax, [esp+10h+arg_0]
0x55DF13: movzx   ecx, word ptr [esi+0Ah]
0x55DF17: cmp     edi, ecx
0x55DF19: jb      short loc_55DF2D
0x55DF1B: test    eax, eax
0x55DF1D: lea     edx, [edi+1]
0x55DF20: mov     [esi+0Ah], dx
0x55DF24: jz      short loc_55DF50
0x55DF26: add     word ptr [esi+0Ch], 1
0x55DF2B: jmp     short loc_55DF50
0x55DF2D: test    eax, eax
0x55DF2F: jz      short loc_55DF41
0x55DF31: mov     ecx, [esi+4]
0x55DF34: cmp     dword ptr [ecx+edi*4], 0
0x55DF38: jnz     short loc_55DF50
0x55DF3A: add     word ptr [esi+0Ch], 1
0x55DF3F: jmp     short loc_55DF50
0x55DF41: mov     edx, [esi+4]
0x55DF44: cmp     dword ptr [edx+edi*4], 0
0x55DF48: jz      short loc_55DF50
0x55DF4A: add     word ptr [esi+0Ch], 0FFFFh
0x55DF50: mov     ecx, [esi+4]
0x55DF53: mov     [ecx+edi*4], eax
0x55DF56: add     ebx, 1
0x55DF59: cmp     ebx, 10h
0x55DF5C: jl      loc_55DEB0
0x55DF62: pop     ebx
0x55DF63: pop     edi
0x55DF64: pop     esi
0x55DF65: pop     ebp
0x55DF66: retn    4
