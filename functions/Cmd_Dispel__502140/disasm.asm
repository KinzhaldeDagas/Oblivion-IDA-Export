0x502140: sub     esp, 8
0x502143: mov     edx, [esp+8+l]
0x502147: push    esi
0x502148: mov     esi, [esp+0Ch+a4]
0x50214C: push    edi
0x50214D: mov     edi, [esp+10h+arg_10]
0x502151: lea     eax, [esp+10h+var_4]
0x502155: push    eax
0x502156: mov     eax, [esp+14h+arg_C]
0x50215A: lea     ecx, [esp+14h+var_8]
0x50215E: push    ecx; UInt16
0x50215F: mov     ecx, [esp+18h+a3]
0x502163: push    edx; l
0x502164: mov     edx, [esp+1Ch+arg_4]
0x502168: push    edi; a6
0x502169: push    eax; a5
0x50216A: mov     eax, [esp+24h+a1]
0x50216E: push    esi; a4
0x50216F: push    ecx; a3
0x502170: push    edx; a2
0x502171: push    eax; a1
0x502172: mov     dword ptr [esp+34h+var_8], 0
0x50217A: mov     [esp+34h+var_4], 0
0x502182: call    Script_ExtractArgs
0x502187: add     esp, 24h
0x50218A: test    al, al
0x50218C: jnz     short loc_502196
0x50218E: pop     edi
0x50218F: xor     al, al
0x502191: pop     esi
0x502192: add     esp, 8
0x502195: retn
0x502196: test    esi, esi
0x502198: jz      short loc_5021D7
0x50219A: push    0; int
0x50219C: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5021A1: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5021A6: push    0; int
0x5021A8: push    esi; void *
0x5021A9: call    OblivionDynamicCast
0x5021AE: add     esp, 14h
0x5021B1: test    eax, eax
0x5021B3: jz      short loc_5021D7
0x5021B5: mov     ecx, dword ptr [esp+10h+var_8]
0x5021B9: push    0
0x5021BB: push    0
0x5021BD: push    ecx
0x5021BE: lea     ecx, [eax+68h]
0x5021C1: call    MagicTarget_RemoveEffects
0x5021C6: mov     ecx, dword ptr [esp+10h+var_8]
0x5021CA: push    edi
0x5021CB: add     ecx, 0Ch
0x5021CE: call    EffectItemList_HasScriptEffect
0x5021D3: test    al, al
0x5021D5: jnz     short loc_50218E
0x5021D7: pop     edi
0x5021D8: mov     al, 1
0x5021DA: pop     esi
0x5021DB: add     esp, 8
0x5021DE: retn
