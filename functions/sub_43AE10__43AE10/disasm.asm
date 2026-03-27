0x43AE10: sub     esp, 24h
0x43AE13: push    ebx
0x43AE14: mov     ebx, ecx
0x43AE16: mov     ecx, [ebx+20h]
0x43AE19: mov     eax, [ecx]
0x43AE1B: mov     edx, [eax+174h]
0x43AE21: push    ebp
0x43AE22: push    esi
0x43AE23: push    edi
0x43AE24: call    edx
0x43AE26: mov     ecx, [eax]
0x43AE28: mov     ebp, [esp+34h+arg_0]
0x43AE2C: mov     [ebp+54h], ecx
0x43AE2F: mov     edx, [eax+4]
0x43AE32: mov     [ebp+58h], edx
0x43AE35: mov     eax, [eax+8]
0x43AE38: lea     ecx, [esp+34h+var_24]
0x43AE3C: mov     [ebp+5Ch], eax
0x43AE3F: push    ecx
0x43AE40: mov     ecx, [ebx+20h]
0x43AE43: call    sub_4D7AF0
0x43AE48: mov     esi, eax
0x43AE4A: lea     edi, [ebp+30h]
0x43AE4D: mov     ecx, 9
0x43AE52: rep movsd
0x43AE54: mov     ecx, [ebx+20h]
0x43AE57: mov     edx, [ecx]
0x43AE59: mov     eax, [edx+0ECh]
0x43AE5F: call    eax
0x43AE61: fabs
0x43AE63: fstp    [esp+34h+arg_0]
0x43AE67: fld     [esp+34h+arg_0]
0x43AE6B: fstp    dword ptr [ebp+60h]
0x43AE6E: mov     ecx, OSGlobals
0x43AE74: mov     esi, [ecx+10h]
0x43AE77: call    ds:GetCurrentThreadId
0x43AE7D: cmp     esi, eax
0x43AE7F: jnz     short loc_43AEBA
0x43AE81: mov     ecx, [ebx+20h]
0x43AE84: push    ebp
0x43AE85: call    sub_4D7D10
0x43AE8A: mov     ecx, [ebx+20h]; this
0x43AE8D: push    0; a8
0x43AE8F: push    0; a7
0x43AE91: call    TESObjectREFR_GetParentCell
0x43AE96: mov     edx, [ebx+20h]
0x43AE99: mov     ecx, TES; ecx0
0x43AE9F: push    eax; a6
0x43AEA0: push    edx; a1
0x43AEA1: call    sub_441EF0
0x43AEA6: mov     ecx, [ebx+20h]
0x43AEA9: push    1
0x43AEAB: call    sub_4D7010
0x43AEB0: pop     edi
0x43AEB1: pop     esi
0x43AEB2: pop     ebp
0x43AEB3: pop     ebx
0x43AEB4: add     esp, 24h
0x43AEB7: retn    4
0x43AEBA: push    20h ; ' '; Size
0x43AEBC: call    FormHeapAlloc
0x43AEC1: mov     esi, eax
0x43AEC3: add     esp, 4
0x43AEC6: test    esi, esi
0x43AEC8: jz      short loc_43AEEE
0x43AECA: mov     edi, [ebx+20h]
0x43AECD: push    0; a2
0x43AECF: mov     ecx, esi; this
0x43AED1: call    sub_436500
0x43AED6: mov     dword ptr [esi], offset ??_7AttachDistant3DTask@@6B@; const AttachDistant3DTask::`vftable'
0x43AEDC: mov     [esi+18h], edi
0x43AEDF: mov     [esi+1Ch], ebp
0x43AEE2: add     ebp, 4
0x43AEE5: push    ebp; lpAddend
0x43AEE6: call    ds:InterlockedIncrement
0x43AEEC: jmp     short loc_43AEF0
0x43AEEE: xor     esi, esi
0x43AEF0: add     ebx, 30h ; '0'
0x43AEF3: push    esi
0x43AEF4: mov     ecx, ebx
0x43AEF6: call    sub_4BCB70
0x43AEFB: mov     eax, [ebx]
0x43AEFD: test    eax, eax
0x43AEFF: mov     esi, ModelLoaderPtr
0x43AF05: push    ecx
0x43AF06: mov     ecx, esp
0x43AF08: mov     [esp+38h+arg_0], esp
0x43AF0C: mov     [ecx], eax
0x43AF0E: jz      short loc_43AF1A
0x43AF10: add     eax, 8
0x43AF13: push    eax; lpAddend
0x43AF14: call    ds:InterlockedIncrement
0x43AF1A: mov     ecx, [esi+14h]
0x43AF1D: call    sub_43A5F0
0x43AF22: pop     edi
0x43AF23: pop     esi
0x43AF24: pop     ebp
0x43AF25: pop     ebx
0x43AF26: add     esp, 24h
0x43AF29: retn    4
