0x8B30D0: push    esi
0x8B30D1: mov     esi, [esp+4+arg_0]
0x8B30D5: push    edi
0x8B30D6: push    esi
0x8B30D7: mov     edi, ecx
0x8B30D9: call    sub_8A0C30
0x8B30DE: mov     edi, [edi+4]
0x8B30E1: mov     eax, [esi+21Ch]
0x8B30E7: mov     edx, [eax+4]
0x8B30EA: push    0
0x8B30EC: push    0
0x8B30EE: push    40h ; '@'
0x8B30F0: lea     ecx, [edi+20h]
0x8B30F3: push    ecx
0x8B30F4: push    eax
0x8B30F5: call    edx
0x8B30F7: mov     eax, [esi+21Ch]
0x8B30FD: mov     edx, [eax+4]
0x8B3100: push    0
0x8B3102: push    0
0x8B3104: push    30h ; '0'
0x8B3106: lea     ecx, [edi+60h]
0x8B3109: push    ecx
0x8B310A: push    eax
0x8B310B: call    edx
0x8B310D: mov     eax, [esi+21Ch]
0x8B3113: push    1
0x8B3115: lea     ecx, [esp+34h+arg_0]
0x8B3119: push    ecx
0x8B311A: push    4
0x8B311C: lea     edx, [edi+0Ch]
0x8B311F: push    edx
0x8B3120: push    eax
0x8B3121: mov     eax, [eax+4]
0x8B3124: mov     [esp+44h+arg_0], 4
0x8B312C: call    eax
0x8B312E: mov     eax, [esi+21Ch]
0x8B3134: push    1
0x8B3136: lea     ecx, [esp+48h+arg_0]
0x8B313A: push    ecx
0x8B313B: push    4
0x8B313D: lea     edx, [edi+10h]
0x8B3140: push    edx
0x8B3141: push    eax
0x8B3142: mov     eax, [eax+4]
0x8B3145: mov     [esp+58h+arg_0], 4
0x8B314D: call    eax
0x8B314F: mov     esi, [esi+21Ch]
0x8B3155: mov     edx, [esi+4]
0x8B3158: add     esp, 50h
0x8B315B: push    1
0x8B315D: lea     ecx, [esp+0Ch+arg_0]
0x8B3161: push    ecx
0x8B3162: push    4
0x8B3164: add     edi, 14h
0x8B3167: push    edi
0x8B3168: push    esi
0x8B3169: mov     [esp+1Ch+arg_0], 4
0x8B3171: call    edx
0x8B3173: add     esp, 14h
0x8B3176: pop     edi
0x8B3177: pop     esi
0x8B3178: retn    4
