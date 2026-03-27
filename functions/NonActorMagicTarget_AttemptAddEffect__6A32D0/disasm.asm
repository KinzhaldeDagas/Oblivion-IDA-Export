0x6A32D0: mov     eax, [esp+arg_C]
0x6A32D4: mov     edx, [esp+arg_4]
0x6A32D8: push    ebx
0x6A32D9: push    esi
0x6A32DA: push    eax
0x6A32DB: mov     eax, [esp+0Ch+arg_0]
0x6A32DF: mov     esi, ecx
0x6A32E1: mov     ecx, [esp+0Ch+arg_8]
0x6A32E5: push    ecx
0x6A32E6: push    edx
0x6A32E7: push    eax
0x6A32E8: mov     ecx, esi
0x6A32EA: call    MagicTarget_AttemptAddEffect
0x6A32EF: mov     bl, al
0x6A32F1: test    bl, bl
0x6A32F3: jz      short loc_6A3302
0x6A32F5: fld1
0x6A32F7: push    ecx
0x6A32F8: mov     ecx, esi; this
0x6A32FA: fstp    [esp+0Ch+var_C]
0x6A32FD: call    MagicTarget_ProcessEffects
0x6A3302: pop     esi
0x6A3303: mov     al, bl
0x6A3305: pop     ebx
0x6A3306: retn    10h
