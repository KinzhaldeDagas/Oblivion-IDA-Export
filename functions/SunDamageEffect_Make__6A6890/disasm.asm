0x6A6890: push    0FFFFFFFFh
0x6A6892: push    offset SEH_8C62B0
0x6A6897: mov     eax, large fs:0
0x6A689D: push    eax
0x6A689E: push    ecx
0x6A689F: push    esi
0x6A68A0: mov     eax, ds:0B30AACh
0x6A68A5: xor     eax, esp
0x6A68A7: push    eax
0x6A68A8: lea     eax, [esp+18h+var_C]
0x6A68AC: mov     large fs:0, eax
0x6A68B2: push    40h ; '@'; Size
0x6A68B4: call    FormHeapAlloc
0x6A68B9: mov     esi, eax
0x6A68BB: add     esp, 4
0x6A68BE: mov     [esp+18h+var_10], esi
0x6A68C2: test    esi, esi
0x6A68C4: mov     [esp+18h+var_4], 0
0x6A68CC: jz      short loc_6A690A
0x6A68CE: mov     eax, [esp+18h+arg_8]
0x6A68D2: mov     ecx, [esp+18h+arg_4]
0x6A68D6: mov     edx, [esp+18h+arg_0]
0x6A68DA: push    eax
0x6A68DB: push    ecx
0x6A68DC: push    edx
0x6A68DD: mov     ecx, esi; this
0x6A68DF: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x6A68E4: fldz
0x6A68E6: fstp    dword ptr [esi+38h]
0x6A68E9: mov     dword ptr [esi], offset ??_7SunDamageEffect@@6B@; const SunDamageEffect::`vftable'
0x6A68EF: mov     byte ptr [esi+3Dh], 0
0x6A68F3: mov     byte ptr [esi+3Ch], 0
0x6A68F7: mov     eax, esi
0x6A68F9: mov     ecx, [esp+18h+var_C]
0x6A68FD: mov     large fs:0, ecx
0x6A6904: pop     ecx
0x6A6905: pop     esi
0x6A6906: add     esp, 10h
0x6A6909: retn
0x6A690A: xor     eax, eax
0x6A690C: mov     ecx, [esp+18h+var_C]
0x6A6910: mov     large fs:0, ecx
0x6A6917: pop     ecx
0x6A6918: pop     esi
0x6A6919: add     esp, 10h
0x6A691C: retn
