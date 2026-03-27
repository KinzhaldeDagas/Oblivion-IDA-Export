0x4B3030: push    ebp
0x4B3031: mov     ebp, esp
0x4B3033: and     esp, 0FFFFFFC0h
0x4B3036: sub     esp, 134h
0x4B303C: mov     eax, ds:0B30AACh
0x4B3041: xor     eax, esp
0x4B3043: mov     [esp+134h+var_4], eax
0x4B304A: mov     eax, [ebp+arg_1C]
0x4B304D: test    eax, eax
0x4B304F: push    ebx
0x4B3050: push    esi
0x4B3051: mov     esi, ecx
0x4B3053: push    edi
0x4B3054: mov     [esp+140h+var_118], esi
0x4B3058: mov     [esp+140h+a2], eax
0x4B305C: jz      loc_4B31B3
0x4B3062: cmp     [ebp+arg_0], 0
0x4B3066: jz      loc_4B31B3
0x4B306C: mov     ebx, [ebp+arg_4]
0x4B306F: test    ebx, ebx
0x4B3071: jz      loc_4B31B3
0x4B3077: cmp     [ebp+arg_8], 0
0x4B307B: jz      loc_4B31B3
0x4B3081: mov     edi, [ebp+arg_C]
0x4B3084: test    edi, edi
0x4B3086: jz      loc_4B31B3
0x4B308C: lea     eax, [esp+140h+Str]
0x4B3090: push    esi; int
0x4B3091: push    eax; Str
0x4B3092: call    sub_46D540
0x4B3097: add     esp, 8
0x4B309A: cmp     [esp+140h+Str], 0
0x4B309F: jz      loc_4B31B3
0x4B30A5: mov     ecx, esi
0x4B30A7: call    sub_4B2BD0
0x4B30AC: test    edi, edi
0x4B30AE: mov     [esp+140h+var_11C], eax
0x4B30B2: mov     [esp+140h+var_124], 0
0x4B30BA: jbe     loc_4B31A5
0x4B30C0: mov     ecx, [ebp+arg_0]
0x4B30C3: mov     eax, ebx
0x4B30C5: sub     eax, ecx
0x4B30C7: lea     edi, [ecx+8]
0x4B30CA: mov     [esp+140h+var_120], eax
0x4B30CE: push    20h ; ' '; Size
0x4B30D0: call    FormHeapAlloc
0x4B30D5: xor     esi, esi
0x4B30D7: add     esp, 4
0x4B30DA: cmp     eax, esi
0x4B30DC: jz      short loc_4B30E3
0x4B30DE: mov     [eax+1Ch], esi
0x4B30E1: mov     esi, eax
0x4B30E3: mov     ecx, [esp+140h+a2]
0x4B30E7: push    ecx; a2
0x4B30E8: lea     ecx, [esi+1Ch]; this
0x4B30EB: call    NiSmartPointer_Set??
0x4B30F0: mov     edx, [ebp+arg_8]
0x4B30F3: mov     eax, [esp+140h+var_124]
0x4B30F7: fld     dword ptr [edx+eax*4]
0x4B30FA: sub     esp, 8
0x4B30FD: fstp    [esp+148h+var_148]; double
0x4B3100: call    _floor
0x4B3105: fstp    [esp+148h+var_128]
0x4B3109: fld     [esp+148h+var_128]
0x4B310D: fdiv    qword ptr ds:0A309F0h
0x4B3113: fstp    dword ptr [esi+18h]
0x4B3116: fld     dword ptr [edi-8]
0x4B3119: fstp    [esp+148h+var_148]; double
0x4B311C: call    _floor
0x4B3121: fstp    [esp+148h+var_128]
0x4B3125: fld     [esp+148h+var_128]
0x4B3129: fstp    dword ptr [esi]
0x4B312B: fld     dword ptr [edi-4]
0x4B312E: fstp    [esp+148h+var_148]; double
0x4B3131: call    _floor
0x4B3136: fstp    [esp+148h+var_128]
0x4B313A: fld     [esp+148h+var_128]
0x4B313E: fstp    dword ptr [esi+4]
0x4B3141: fld     dword ptr [edi]
0x4B3143: fstp    [esp+148h+var_148]; double
0x4B3146: call    _floor
0x4B314B: fstp    [esp+148h+var_128]
0x4B314F: fld     [esp+148h+var_128]
0x4B3153: mov     edx, [esp+148h+var_11C]
0x4B3157: mov     ecx, [esp+148h+var_120]
0x4B315B: fstp    dword ptr [esi+8]
0x4B315E: fld     dword ptr [ebx]
0x4B3160: add     esp, 8
0x4B3163: fstp    dword ptr [esi+0Ch]
0x4B3166: push    edx
0x4B3167: fld     dword ptr [ebx+4]
0x4B316A: push    esi
0x4B316B: fstp    dword ptr [esi+10h]
0x4B316E: lea     eax, [esp+148h+Str]
0x4B3172: fld     dword ptr [ecx+edi]
0x4B3175: push    eax
0x4B3176: fstp    dword ptr [esi+14h]
0x4B3179: mov     ecx, ds:0B33A1Ch
0x4B317F: call    sub_4385B0
0x4B3184: mov     eax, [esp+140h+var_124]
0x4B3188: add     eax, 1
0x4B318B: add     edi, 0Ch
0x4B318E: add     ebx, 0Ch
0x4B3191: cmp     eax, [ebp+arg_C]
0x4B3194: mov     [esp+140h+var_124], eax
0x4B3198: jb      loc_4B30CE
0x4B319E: mov     edi, [ebp+arg_C]
0x4B31A1: mov     esi, [esp+140h+var_118]
0x4B31A5: mov     ecx, [ebp+arg_14]
0x4B31A8: push    ecx
0x4B31A9: push    edi
0x4B31AA: push    esi
0x4B31AB: call    sub_4B2730
0x4B31B0: add     esp, 0Ch
0x4B31B3: mov     ecx, [esp+140h+var_4]
0x4B31BA: pop     edi
0x4B31BB: pop     esi
0x4B31BC: pop     ebx
0x4B31BD: xor     ecx, esp
0x4B31BF: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B31C4: mov     esp, ebp
0x4B31C6: pop     ebp
0x4B31C7: retn    20h ; ' '
