0x4147FC: push    18h; Size
0x4147FE: fstp    st
0x414800: call    FormHeapAlloc
0x414805: add     esp, 4
0x414808: cmp     eax, ebx
0x41480A: jz      short loc_414819
0x41480C: mov     [eax+8], ebx
0x41480F: mov     [eax+0Ch], bx
0x414813: mov     [eax+0Eh], bx
0x414817: jmp     short loc_41481B
0x414819: xor     eax, eax
0x41481B: mov     ecx, [esi+1Ch]
0x41481E: sub     esp, 8
0x414821: mov     edx, esp
0x414823: mov     [esp+8+arg_5C], esp
0x414827: push    edx
0x414828: mov     [esi+18h], eax
0x41482B: call    EffectSetting_GetName
0x414830: mov     ecx, esi
0x414832: call    EffectItem_SetSCITName
