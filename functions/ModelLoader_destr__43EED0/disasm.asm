0x43EED0: push    0FFFFFFFFh
0x43EED2: push    offset ModelLoader_destr_SEH
0x43EED7: mov     eax, large fs:0
0x43EEDD: push    eax
0x43EEDE: sub     esp, 4Ch
0x43EEE1: push    ebx
0x43EEE2: push    esi
0x43EEE3: push    edi
0x43EEE4: mov     eax, ds:0B30AACh
0x43EEE9: xor     eax, esp
0x43EEEB: push    eax
0x43EEEC: lea     eax, [esp+68h+var_C]
0x43EEF0: mov     large fs:0, eax
0x43EEF6: mov     esi, ecx
0x43EEF8: call    sub_4B26D0
0x43EEFD: mov     ecx, [esi]
0x43EEFF: mov     eax, [ecx]
0x43EF01: mov     edx, [eax+38h]
0x43EF04: call    edx
0x43EF06: xor     ebx, ebx
0x43EF08: test    eax, eax
0x43EF0A: jz      loc_43EFB2
0x43EF10: mov     ecx, [esi]
0x43EF12: mov     eax, [ecx]
0x43EF14: mov     edx, [eax+38h]
0x43EF17: call    edx
0x43EF19: push    eax; ArgList
0x43EF1A: push    offset aModelloaderSti; "ModelLoader still has %d NIF files.\r\n"
0x43EF1F: call    PrintError
0x43EF24: add     esp, 8
0x43EF27: mov     [esp+68h+var_38], ebx
0x43EF2B: mov     [esp+68h+var_34], ebx
0x43EF2F: mov     byte ptr [esp+68h+var_30], bl
0x43EF33: mov     [esp+68h+var_3C], offset ??_7LockFreeStringMapIterator@?$LockFreeStringMap@PAVModel@@@@6B@; const LockFreeStringMap<Model *>::LockFreeStringMapIterator::`vftable'
0x43EF3B: mov     [esp+68h+var_4], ebx
0x43EF3F: nop
0x43EF40: push    1
0x43EF42: lea     eax, [esp+6Ch+var_58]
0x43EF46: push    eax
0x43EF47: lea     ecx, [esp+70h+var_54]
0x43EF4B: push    ecx
0x43EF4C: mov     ecx, [esi]
0x43EF4E: lea     edx, [esp+74h+var_3C]
0x43EF52: push    edx
0x43EF53: mov     [esp+78h+var_54], ebx
0x43EF57: mov     [esp+78h+var_58], ebx
0x43EF5B: call    sub_43AB80
0x43EF60: test    al, al
0x43EF62: jz      short loc_43EF92
0x43EF64: mov     edi, [esp+68h+var_58]
0x43EF68: movzx   eax, word ptr [edi+4]
0x43EF6C: mov     ecx, [esp+68h+var_54]
0x43EF70: movzx   edx, ax
0x43EF73: push    ecx
0x43EF74: push    edx; ArgList
0x43EF75: push    offset a3dS; "%3d - %s\r\n"
0x43EF7A: call    PrintError
0x43EF7F: add     esp, 0Ch
0x43EF82: mov     ecx, edi
0x43EF84: call    sub_4349B0
0x43EF89: push    edi
0x43EF8A: call    FormHeapFree
0x43EF8F: add     esp, 4
0x43EF92: test    byte ptr [esp+68h+var_30], 2
0x43EF97: jz      short loc_43EF40
0x43EF99: mov     eax, [esp+68h+var_34]
0x43EF9D: push    eax
0x43EF9E: call    FormHeapFree
0x43EFA3: add     esp, 4
0x43EFA6: mov     [esp+68h+var_34], ebx
0x43EFAA: mov     [esp+68h+var_3C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PBDPAVModel@@@@6B@; const LockFreeMap<char const *,Model *>::LockFreeMapIterator::`vftable'
0x43EFB2: mov     [esp+68h+var_18], ebx
0x43EFB6: mov     [esp+68h+var_14], ebx
0x43EFBA: mov     [esp+68h+var_10], bl
0x43EFBE: mov     [esp+68h+var_1C], offset ??_7LockFreeStringMapIterator@?$LockFreeStringMap@PAVKFModel@@@@6B@; const LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable'
0x43EFC6: mov     [esp+68h+var_4], 1
0x43EFCE: push    1
0x43EFD0: lea     ecx, [esp+6Ch+var_50]
0x43EFD4: push    ecx
0x43EFD5: mov     ecx, [esi+4]
0x43EFD8: lea     edx, [esp+70h+var_4C]
0x43EFDC: push    edx
0x43EFDD: lea     eax, [esp+74h+var_1C]
0x43EFE1: push    eax
0x43EFE2: mov     [esp+78h+var_4C], ebx
0x43EFE6: mov     [esp+78h+var_50], ebx
0x43EFEA: call    sub_43AB80
0x43EFEF: test    al, al
0x43EFF1: jz      short loc_43F02A
0x43EFF3: mov     edi, [esp+68h+var_50]
0x43EFF7: cmp     edi, ebx
0x43EFF9: jz      short loc_43F02A
0x43EFFB: mov     ecx, [edi+8]
0x43EFFE: cmp     ecx, ebx
0x43F000: jz      short loc_43F00B
0x43F002: call    TESAnimGroup_IsPowerAttack
0x43F007: test    al, al
0x43F009: jz      short loc_43F02A
0x43F00B: mov     ecx, [esi+4]
0x43F00E: mov     edx, [ecx]
0x43F010: mov     eax, [esp+68h+var_4C]
0x43F014: mov     edx, [edx+10h]
0x43F017: push    eax
0x43F018: call    edx
0x43F01A: mov     ecx, edi
0x43F01C: call    sub_436CB0
0x43F021: push    edi
0x43F022: call    FormHeapFree
0x43F027: add     esp, 4
0x43F02A: test    [esp+68h+var_10], 2
0x43F02F: jz      short loc_43EFCE
0x43F031: mov     ecx, [esi+4]
0x43F034: mov     eax, [ecx]
0x43F036: mov     edx, [eax+38h]
0x43F039: call    edx
0x43F03B: test    eax, eax
0x43F03D: jz      loc_43F0E8
0x43F043: mov     ecx, [esi+4]
0x43F046: mov     eax, [ecx]
0x43F048: mov     edx, [eax+38h]
0x43F04B: call    edx
0x43F04D: push    eax; ArgList
0x43F04E: push    offset aModelloaderS_0; "ModelLoader still has %d KF files.\r\n"
0x43F053: call    PrintError
0x43F058: add     esp, 8
0x43F05B: mov     [esp+68h+var_28], ebx
0x43F05F: mov     [esp+68h+var_24], ebx
0x43F063: mov     [esp+68h+var_20], bl
0x43F067: mov     [esp+68h+var_2C], offset ??_7LockFreeStringMapIterator@?$LockFreeStringMap@PAVKFModel@@@@6B@; const LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable'
0x43F06F: mov     byte ptr [esp+68h+var_4], 2
0x43F074: push    1
0x43F076: lea     eax, [esp+6Ch+var_48]
0x43F07A: push    eax
0x43F07B: lea     ecx, [esp+70h+var_44]
0x43F07F: push    ecx
0x43F080: mov     ecx, [esi+4]
0x43F083: lea     edx, [esp+74h+var_2C]
0x43F087: push    edx
0x43F088: mov     [esp+78h+var_44], ebx
0x43F08C: mov     [esp+78h+var_48], ebx
0x43F090: call    sub_43AB80
0x43F095: test    al, al
0x43F097: jz      short loc_43F0C3
0x43F099: mov     ecx, [esp+68h+var_44]
0x43F09D: mov     edi, [esp+68h+var_48]
0x43F0A1: mov     eax, [edi+0Ch]
0x43F0A4: push    ecx
0x43F0A5: push    eax; ArgList
0x43F0A6: push    offset a3dS; "%3d - %s\r\n"
0x43F0AB: call    PrintError
0x43F0B0: add     esp, 0Ch
0x43F0B3: mov     ecx, edi
0x43F0B5: call    sub_436CB0
0x43F0BA: push    edi
0x43F0BB: call    FormHeapFree
0x43F0C0: add     esp, 4
0x43F0C3: test    [esp+68h+var_20], 2
0x43F0C8: jz      short loc_43F074
0x43F0CA: mov     edx, [esp+68h+var_24]
0x43F0CE: push    edx
0x43F0CF: mov     byte ptr [esp+6Ch+var_4], 1
0x43F0D4: call    FormHeapFree
0x43F0D9: add     esp, 4
0x43F0DC: mov     [esp+68h+var_24], ebx
0x43F0E0: mov     [esp+68h+var_2C], offset ??_7LockFreeMapIterator@?$LockFreeMap@PBDPAVKFModel@@@@6B@; const LockFreeMap<char const *,KFModel *>::LockFreeMapIterator::`vftable'
0x43F0E8: mov     ecx, [esi]
0x43F0EA: cmp     ecx, ebx
0x43F0EC: jz      short loc_43F0F7
0x43F0EE: mov     eax, [ecx]
0x43F0F0: mov     edx, [eax+3Ch]
0x43F0F3: push    1
0x43F0F5: call    edx
0x43F0F7: mov     ecx, [esi+4]
0x43F0FA: cmp     ecx, ebx
0x43F0FC: jz      short loc_43F107
0x43F0FE: mov     eax, [ecx]
0x43F100: mov     edx, [eax+3Ch]
0x43F103: push    1
0x43F105: call    edx
0x43F107: mov     edi, [esi+14h]
0x43F10A: cmp     edi, ebx
0x43F10C: jz      short loc_43F137
0x43F10E: push    1; a2
0x43F110: mov     ecx, edi; this
0x43F112: mov     dword ptr [edi], offset ??_7?$LockFreeQueue@V?$NiPointer@VAttachDistant3DTask@@@@@@6B@; const LockFreeQueue<NiPointer<AttachDistant3DTask>>::`vftable'
0x43F118: call    sub_43D510
0x43F11D: mov     eax, [edi+10h]
0x43F120: mov     [esp+68h+var_40], eax
0x43F124: mov     ecx, [esp+68h+var_40]
0x43F128: push    ecx
0x43F129: call    FormHeapFree
0x43F12E: push    edi
0x43F12F: call    FormHeapFree
0x43F134: add     esp, 8
0x43F137: mov     edi, [esi+10h]
0x43F13A: cmp     edi, ebx
0x43F13C: jz      short loc_43F170
0x43F13E: push    1
0x43F140: mov     ecx, edi
0x43F142: mov     dword ptr [edi], offset ??_7?$LockFreeMap@PAVTESObjectREFR@@V?$NiPointer@VQueuedHelmet@@@@@@6B@; const LockFreeMap<TESObjectREFR *,NiPointer<QueuedHelmet>>::`vftable'
0x43F148: call    sub_642E50
0x43F14D: mov     edx, [edi+0Ch]
0x43F150: push    edx
0x43F151: call    FormHeapFree
0x43F156: mov     eax, [edi+4]
0x43F159: mov     [esp+6Ch+var_40], eax
0x43F15D: mov     ecx, [esp+6Ch+var_40]
0x43F161: push    ecx
0x43F162: call    FormHeapFree
0x43F167: push    edi
0x43F168: call    FormHeapFree
0x43F16D: add     esp, 0Ch
0x43F170: mov     edi, [esi+0Ch]
0x43F173: cmp     edi, ebx
0x43F175: jz      short loc_43F1A9
0x43F177: push    1
0x43F179: mov     ecx, edi
0x43F17B: mov     dword ptr [edi], offset ??_7?$LockFreeMap@PAVAnimIdle@@V?$NiPointer@VQueuedAnimIdle@@@@@@6B@; const LockFreeMap<AnimIdle *,NiPointer<QueuedAnimIdle>>::`vftable'
0x43F181: call    sub_642E50
0x43F186: mov     edx, [edi+0Ch]
0x43F189: push    edx
0x43F18A: call    FormHeapFree
0x43F18F: mov     eax, [edi+4]
0x43F192: mov     [esp+6Ch+var_40], eax
0x43F196: mov     ecx, [esp+6Ch+var_40]
0x43F19A: push    ecx
0x43F19B: call    FormHeapFree
0x43F1A0: push    edi
0x43F1A1: call    FormHeapFree
0x43F1A6: add     esp, 0Ch
0x43F1A9: mov     edi, [esi+8]
0x43F1AC: cmp     edi, ebx
0x43F1AE: jz      short loc_43F1E2
0x43F1B0: push    1
0x43F1B2: mov     ecx, edi
0x43F1B4: mov     dword ptr [edi], offset ??_7?$LockFreeMap@PAVTESObjectREFR@@V?$NiPointer@VQueuedReference@@@@@@6B@; const LockFreeMap<TESObjectREFR *,NiPointer<QueuedReference>>::`vftable'
0x43F1BA: call    sub_642E50
0x43F1BF: mov     edx, [edi+0Ch]
0x43F1C2: push    edx
0x43F1C3: call    FormHeapFree
0x43F1C8: mov     eax, [edi+4]
0x43F1CB: mov     [esp+6Ch+var_40], eax
0x43F1CF: mov     ecx, [esp+6Ch+var_40]
0x43F1D3: push    ecx
0x43F1D4: call    FormHeapFree
0x43F1D9: push    edi
0x43F1DA: call    FormHeapFree
0x43F1DF: add     esp, 0Ch
0x43F1E2: mov     esi, [esi+18h]
0x43F1E5: cmp     esi, ebx
0x43F1E7: jz      short loc_43F1F3
0x43F1E9: mov     edx, [esi]
0x43F1EB: mov     eax, [edx]
0x43F1ED: push    1
0x43F1EF: mov     ecx, esi
0x43F1F1: call    eax
0x43F1F3: mov     ecx, [esp+68h+var_14]
0x43F1F7: push    ecx
0x43F1F8: call    FormHeapFree
0x43F1FD: add     esp, 4
0x43F200: mov     ecx, dword ptr [esp+68h+var_C]
0x43F204: mov     large fs:0, ecx
0x43F20B: pop     ecx
0x43F20C: pop     edi
0x43F20D: pop     esi
0x43F20E: pop     ebx
0x43F20F: add     esp, 58h
0x43F212: retn
