0x5A7CD0: sub     esp, 110h
0x5A7CD6: mov     eax, ds:0B30AACh
0x5A7CDB: xor     eax, esp
0x5A7CDD: mov     [esp+110h+var_4], eax
0x5A7CE4: push    ebp
0x5A7CE5: mov     ebp, [esp+114h+arg_0]
0x5A7CEC: test    ebp, ebp
0x5A7CEE: push    edi
0x5A7CEF: mov     edi, ecx
0x5A7CF1: jz      HUDMainMenu_UpdateActiveEffects___Done
0x5A7CF7: fldz
0x5A7CF9: fcomp   dword ptr [ebp+1Ch]
0x5A7CFC: fnstsw  ax
0x5A7CFE: test    ah, 44h
0x5A7D01: jnp     HUDMainMenu_UpdateActiveEffects___Done
0x5A7D07: mov     ecx, ebp
0x5A7D09: call    ActiveEffect_Base_IsBoundObjWearable
0x5A7D0E: test    al, al
0x5A7D10: jnz     HUDMainMenu_UpdateActiveEffects___Done
0x5A7D16: push    ebx
0x5A7D17: push    esi
0x5A7D18: xor     esi, esi
0x5A7D1A: cmp     [edi+84h], esi
0x5A7D20: jbe     short loc_5A7D82
0x5A7D22: mov     eax, [edi+7Ch]
0x5A7D25: mov     [esp+120h+var_110], eax
0x5A7D29: lea     esp, [esp+0]
