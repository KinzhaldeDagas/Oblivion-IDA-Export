0x68F08F: movzx   ecx, [esp+arg_C]
0x68F094: add     ebp, 1
0x68F097: cmp     ebp, ecx
0x68F099: jl      short ActiveEffect_Base_LoadAEList?___LoadActiveEffects_Loop
0x68F09B: mov     ecx, ds:0B33B00h
0x68F0A1: call    sub_45A170
0x68F0A6: test    al, al
0x68F0A8: jz      ActiveEffect_Base_LoadAEList?___Done
0x68F0AE: mov     ecx, ds:0B33B00h
0x68F0B4: mov     edi, [ecx+80h]
0x68F0BA: test    edi, edi
0x68F0BC: mov     esi, [ecx+14h]
0x68F0BF: jz      loc_68F167
0x68F0C5: mov     edx, [edi]
0x68F0C7: push    edx; a1
0x68F0C8: call    TESForm_LookupByFormID
0x68F0CD: mov     ebx, [esp+4+arg_14]
0x68F0D1: mov     ecx, eax
0x68F0D3: movzx   eax, [esp+4+arg_10]
0x68F0D8: add     eax, ebx
0x68F0DA: add     esp, 4
0x68F0DD: cmp     esi, eax
0x68F0DF: jbe     short loc_68F121
0x68F0E1: mov     edx, [edi+5]
0x68F0E4: movzx   eax, byte ptr [edi+9]
0x68F0E8: push    edx
0x68F0E9: mov     edx, [ecx]
0x68F0EB: push    eax
0x68F0EC: mov     eax, [edx+0D4h]
0x68F0F2: call    eax
0x68F0F4: mov     ecx, [edi]
0x68F0F6: movzx   edx, [esp+8+arg_10]
0x68F0FB: push    eax
0x68F0FC: push    ecx
0x68F0FD: push    39Fh
0x68F102: sub     esi, edx
0x68F104: push    offset a_MagicActiveef; ".\\Magic\\ActiveEffect.cpp"
0x68F109: sub     esi, ebx
0x68F10B: push    esi; ArgList
0x68F10C: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x68F111: call    PrintError
0x68F116: add     esp, 20h
0x68F119: pop     edi
0x68F11A: pop     esi
0x68F11B: pop     ebp
0x68F11C: pop     ebx
0x68F11D: add     esp, 14h
0x68F120: retn
0x68F121: jnb     ActiveEffect_Base_LoadAEList?___Done
0x68F127: mov     eax, [edi+5]
0x68F12A: movzx   edx, byte ptr [edi+9]
0x68F12E: push    eax
0x68F12F: mov     eax, [ecx]
0x68F131: push    edx
0x68F132: mov     edx, [eax+0D4h]
0x68F138: call    edx
0x68F13A: movzx   ecx, [esp+8+arg_10]
0x68F13F: push    eax
0x68F140: mov     eax, [edi]
0x68F142: push    eax
0x68F143: push    39Fh
0x68F148: sub     ecx, esi
0x68F14A: push    offset a_MagicActiveef; ".\\Magic\\ActiveEffect.cpp"
0x68F14F: add     ecx, ebx
0x68F151: push    ecx; ArgList
0x68F152: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x68F157: call    PrintError
0x68F15C: add     esp, 20h
0x68F15F: pop     edi
0x68F160: pop     esi
0x68F161: pop     ebp
0x68F162: pop     ebx
0x68F163: add     esp, 14h
0x68F166: retn
0x68F167: movzx   eax, [esp+arg_10]
0x68F16C: mov     edi, [esp+arg_14]
0x68F170: lea     edx, [eax+edi]
0x68F173: cmp     esi, edx
0x68F175: jbe     short loc_68F1A0
0x68F177: movzx   edx, byte ptr [ecx+7Ch]
0x68F17B: push    edx
0x68F17C: push    39Fh
0x68F181: sub     esi, eax
0x68F183: push    offset a_MagicActiveef; ".\\Magic\\ActiveEffect.cpp"
0x68F188: sub     esi, edi
0x68F18A: push    esi; ArgList
0x68F18B: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x68F190: call    PrintError
0x68F195: add     esp, 14h
0x68F198: pop     edi
0x68F199: pop     esi
0x68F19A: pop     ebp
0x68F19B: pop     ebx
0x68F19C: add     esp, 14h
0x68F19F: retn
0x68F1A0: jnb     short ActiveEffect_Base_LoadAEList?___Done
0x68F1A2: movzx   ecx, byte ptr [ecx+7Ch]
0x68F1A6: push    ecx
0x68F1A7: push    39Fh
0x68F1AC: sub     eax, esi
0x68F1AE: push    offset a_MagicActiveef; ".\\Magic\\ActiveEffect.cpp"
0x68F1B3: add     eax, edi
0x68F1B5: push    eax; ArgList
0x68F1B6: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x68F1BB: call    PrintError
0x68F1C0: add     esp, 14h
