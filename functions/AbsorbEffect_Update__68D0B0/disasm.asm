0x68D0B0: fld     [esp+arg_0]
0x68D0B4: sub     esp, 8
0x68D0B7: push    ebp
0x68D0B8: push    esi
0x68D0B9: push    edi
0x68D0BA: push    ecx
0x68D0BB: fstp    [esp+18h+var_18]
0x68D0BE: mov     esi, ecx
0x68D0C0: call    ValueModifierEffect_UpdateEffect
0x68D0C5: mov     ecx, [esi+24h]; this
0x68D0C8: test    ecx, ecx
0x68D0CA: jz      short loc_68D0D5
0x68D0CC: call    MagicCaster_GetParentActor
0x68D0D1: mov     ebp, eax
0x68D0D3: jmp     short loc_68D0D7
0x68D0D5: xor     ebp, ebp
0x68D0D7: mov     ecx, [esi+20h]; this
0x68D0DA: test    ecx, ecx
0x68D0DC: jz      short loc_68D0E7
0x68D0DE: call    MagicTarget_GetParentActor
0x68D0E3: mov     edi, eax
0x68D0E5: jmp     short loc_68D0E9
0x68D0E7: xor     edi, edi
0x68D0E9: mov     eax, [esi+0Ch]
0x68D0EC: mov     ecx, [eax+1Ch]
0x68D0EF: mov     edx, [ecx+58h]
0x68D0F2: shr     edx, 1
0x68D0F4: test    dl, 1
0x68D0F7: jnz     AbsorbEffect_Update___UpdateVFX
0x68D0FD: fldz
0x68D0FF: fcomp   dword ptr [esi+1Ch]
0x68D102: fnstsw  ax
0x68D104: test    ah, 5
0x68D107: jp      AbsorbEffect_Update___UpdateVFX
0x68D10D: mov     eax, [esi]
0x68D10F: mov     edx, [eax+44h]
0x68D112: push    ebx
0x68D113: mov     ecx, esi
0x68D115: call    edx
0x68D117: cmp     eax, 0Ah
0x68D11A: jnz     short loc_68D15D
0x68D11C: test    edi, edi
0x68D11E: jz      short AbsorbEffect_Update___ApplyToCaster
0x68D120: mov     eax, [esi]
0x68D122: mov     edx, [eax+44h]
0x68D125: mov     ebx, [edi]
0x68D127: mov     ecx, esi
0x68D129: call    edx
0x68D12B: push    eax
0x68D12C: mov     eax, [ebx+284h]
0x68D132: mov     ecx, edi
0x68D134: call    eax
0x68D136: mov     [esp+arg_C], eax
0x68D13A: fild    [esp+arg_C]
0x68D13E: fcomp   dword ptr ds:0A2FAA8h
0x68D144: fnstsw  ax
0x68D146: test    ah, 5
0x68D149: jp      short AbsorbEffect_Update___ApplyToCaster
0x68D14B: mov     edx, [edi]
0x68D14D: mov     eax, [edx+19Ch]
0x68D153: mov     ecx, edi
0x68D155: call    eax
0x68D157: test    al, al
0x68D159: jz      short AbsorbEffect_Update___ApplyToCaster
0x68D15B: jmp     short loc_68D18C
0x68D15D: test    edi, edi
0x68D15F: jz      short AbsorbEffect_Update___ApplyToCaster
0x68D161: mov     edx, [esi]
0x68D163: mov     eax, [edx+44h]
0x68D166: mov     ebx, [edi]
0x68D168: mov     ecx, esi
0x68D16A: call    eax
0x68D16C: mov     edx, [ebx+284h]
0x68D172: push    eax
0x68D173: mov     ecx, edi
0x68D175: call    edx
0x68D177: mov     [esp+arg_C], eax
0x68D17B: fild    [esp+arg_C]
0x68D17F: fcomp   dword ptr ds:0A2FAA8h
0x68D185: fnstsw  ax
0x68D187: test    ah, 41h
0x68D18A: jp      short AbsorbEffect_Update___ApplyToCaster
0x68D18C: push    0
0x68D18E: mov     ecx, esi
0x68D190: call    ActiveEffect_Base_Remove
