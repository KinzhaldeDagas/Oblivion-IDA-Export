0x64F140: sub     esp, 8
0x64F143: fld     dword ptr ds:0B36C68h
0x64F149: push    ebx
0x64F14A: push    ebp
0x64F14B: push    esi
0x64F14C: mov     ebp, ecx
0x64F14E: call    Double_To_SInt32
0x64F153: push    0; int
0x64F155: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x64F15A: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x64F15F: mov     [esp+20h+var_4], eax
0x64F163: mov     eax, [ebp+2Ch]
0x64F166: push    0; int
0x64F168: push    eax; void *
0x64F169: call    OblivionDynamicCast
0x64F16E: mov     esi, eax
0x64F170: xor     bl, bl
0x64F172: add     esp, 14h
0x64F175: test    esi, esi
0x64F177: mov     [esp+14h+var_5], bl
0x64F17B: jz      loc_64F2AE
0x64F181: mov     ecx, [esi+8]
0x64F184: shr     ecx, 0Bh
0x64F187: test    cl, 1
0x64F18A: jnz     loc_64F2AE
0x64F190: push    edi
0x64F191: mov     edi, [esp+18h+arg_0]
0x64F195: mov     ecx, edi; this
0x64F197: call    TESObjectREFR_GetParentCell
0x64F19C: test    eax, eax
0x64F19E: jz      short loc_64F1B8
0x64F1A0: mov     ecx, esi; this
0x64F1A2: call    TESObjectREFR_GetParentCell
0x64F1A7: mov     ecx, edi; this
0x64F1A9: mov     ebx, eax
0x64F1AB: call    TESObjectREFR_GetParentCell
0x64F1B0: cmp     eax, ebx
0x64F1B2: mov     bl, [esp+18h+var_5]
0x64F1B6: jz      short loc_64F1D3
0x64F1B8: push    0
0x64F1BA: push    esi
0x64F1BB: mov     ecx, edi
0x64F1BD: call    TesObjectREF_GetDistance
0x64F1C2: fcomp   dword ptr ds:0A34ABCh
0x64F1C8: fnstsw  ax
0x64F1CA: test    ah, 5
0x64F1CD: jp      loc_64F290
0x64F1D3: mov     ecx, [esi+58h]
0x64F1D6: test    ecx, ecx
0x64F1D8: jz      loc_64F290
0x64F1DE: mov     edx, [ecx]
0x64F1E0: mov     eax, [edx+8]
0x64F1E3: call    eax
0x64F1E5: cmp     eax, 1
0x64F1E8: jnz     loc_64F290
0x64F1EE: cmp     [esp+18h+var_4], 0
0x64F1F3: jz      loc_64F286
0x64F1F9: lea     esp, [esp+0]
0x64F200: mov     edx, [edi]
0x64F202: mov     eax, [edx+198h]
0x64F208: push    0
0x64F20A: mov     ecx, edi
0x64F20C: call    eax
0x64F20E: test    al, al
0x64F210: jnz     short loc_64F274
0x64F212: mov     edx, [edi]
0x64F214: mov     eax, [edx+344h]
0x64F21A: mov     ecx, edi
0x64F21C: call    eax
0x64F21E: mov     ecx, [ebp+2Ch]
0x64F221: push    0; int
0x64F223: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x64F228: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x64F22D: push    0; int
0x64F22F: push    ecx; void *
0x64F230: call    OblivionDynamicCast
0x64F235: mov     esi, eax
0x64F237: add     esp, 14h
0x64F23A: test    esi, esi
0x64F23C: jz      short loc_64F26D
0x64F23E: mov     edx, [esi]
0x64F240: mov     eax, [edx+198h]
0x64F246: push    0
0x64F248: mov     ecx, esi
0x64F24A: call    eax
0x64F24C: test    al, al
0x64F24E: jnz     short loc_64F26D
0x64F250: mov     ecx, [esi+58h]
0x64F253: mov     edx, [ecx]
0x64F255: mov     eax, [edx+8]
0x64F258: call    eax
0x64F25A: cmp     eax, 1
0x64F25D: jnz     short loc_64F26D
0x64F25F: mov     edx, [esi]
0x64F261: mov     eax, [edx+344h]
0x64F267: mov     ecx, esi
0x64F269: call    eax
0x64F26B: mov     bl, 1
0x64F26D: sub     [esp+18h+var_4], 1
0x64F272: jnz     short loc_64F200
0x64F274: test    bl, bl
0x64F276: jz      short loc_64F286
0x64F278: test    esi, esi
0x64F27A: jz      short loc_64F286
0x64F27C: mov     ecx, [esi+58h]
0x64F27F: mov     edx, [ecx]
0x64F281: mov     eax, [edx+20h]
0x64F284: call    eax
0x64F286: pop     edi
0x64F287: pop     esi
0x64F288: pop     ebp
0x64F289: pop     ebx
0x64F28A: add     esp, 8
0x64F28D: retn    4
0x64F290: mov     edx, [ebp+0]
0x64F293: mov     eax, [edx+198h]
0x64F299: push    0
0x64F29B: push    0FFFFFFFFh
0x64F29D: push    1
0x64F29F: push    edi
0x64F2A0: mov     ecx, ebp
0x64F2A2: call    eax
0x64F2A4: pop     edi
0x64F2A5: pop     esi
0x64F2A6: pop     ebp
0x64F2A7: pop     ebx
0x64F2A8: add     esp, 8
0x64F2AB: retn    4
0x64F2AE: mov     ecx, [esp+14h+arg_0]
0x64F2B2: mov     edx, [ecx]
0x64F2B4: mov     eax, [edx+340h]
0x64F2BA: push    esi
0x64F2BB: call    eax
0x64F2BD: pop     esi
0x64F2BE: pop     ebp
0x64F2BF: pop     ebx
0x64F2C0: add     esp, 8
0x64F2C3: retn    4
