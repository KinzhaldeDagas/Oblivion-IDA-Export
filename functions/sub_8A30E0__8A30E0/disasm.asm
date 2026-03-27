0x8A30E0: push    ebp
0x8A30E1: mov     ebp, esp
0x8A30E3: and     esp, 0FFFFFFF0h
0x8A30E6: sub     esp, 38h
0x8A30E9: mov     eax, ds:0B30AACh
0x8A30EE: xor     eax, esp
0x8A30F0: mov     [esp+38h+var_4], eax
0x8A30F4: mov     eax, [ebp+arg_0]
0x8A30F7: push    esi
0x8A30F8: push    edi; int
0x8A30F9: push    eax
0x8A30FA: mov     edi, ecx
0x8A30FC: call    sub_89F730
0x8A3101: mov     esi, eax
0x8A3103: test    esi, esi
0x8A3105: jz      short loc_8A3165
0x8A3107: mov     eax, [edi]
0x8A3109: mov     edx, [eax+0A4h]
0x8A310F: lea     ecx, [esp+40h+var_20]
0x8A3113: push    ecx
0x8A3114: mov     ecx, edi
0x8A3116: call    edx
0x8A3118: lea     eax, [esp+40h+var_20]
0x8A311C: push    eax
0x8A311D: lea     ecx, [esp+44h+var_2C]
0x8A3121: push    ecx
0x8A3122: call    sub_43F3E0
0x8A3127: fld     dword ptr ds:0A5977Ch
0x8A312D: add     esp, 4
0x8A3130: fstp    [esp+44h+var_44]; float
0x8A3133: call    sub_6FD1D0
0x8A3138: add     esp, 4
0x8A313B: test    eax, eax
0x8A313D: jz      short loc_8A3163
0x8A313F: mov     edx, [esp+40h+var_2C]
0x8A3143: mov     ecx, [esp+40h+var_28]
0x8A3147: mov     [eax+54h], edx
0x8A314A: mov     edx, [esp+40h+var_24]
0x8A314E: mov     [eax+58h], ecx
0x8A3151: mov     [eax+5Ch], edx
0x8A3154: mov     edx, [esi]
0x8A3156: push    0
0x8A3158: push    eax
0x8A3159: mov     eax, [edx+84h]
0x8A315F: mov     ecx, esi
0x8A3161: call    eax
0x8A3163: mov     eax, esi
0x8A3165: mov     ecx, [esp+40h+var_4]
0x8A3169: pop     edi
0x8A316A: pop     esi
0x8A316B: xor     ecx, esp
0x8A316D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8A3172: mov     esp, ebp
0x8A3174: pop     ebp
0x8A3175: retn    4
