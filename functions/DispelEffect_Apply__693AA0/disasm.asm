0x693AA0: sub     esp, 0Ch
0x693AA3: push    ebp
0x693AA4: mov     ebp, ecx
0x693AA6: mov     ecx, [ebp+20h]
0x693AA9: mov     eax, [ecx]
0x693AAB: mov     edx, [eax+8]
0x693AAE: push    esi
0x693AAF: call    edx
0x693AB1: mov     ecx, [ebp+24h]; this
0x693AB4: mov     esi, eax
0x693AB6: mov     eax, [ebp+0Ch]
0x693AB9: cmp     dword ptr [eax+10h], 0
0x693ABD: setz    [esp+14h+var_9]
0x693AC2: test    ecx, ecx
0x693AC4: jz      short loc_693AD1
0x693AC6: call    MagicCaster_GetParentActor
0x693ACB: mov     [esp+14h+var_8], eax
0x693ACF: jmp     short loc_693AD9
0x693AD1: mov     [esp+14h+var_8], 0
0x693AD9: test    esi, esi
0x693ADB: jz      short DispelEffect_Apply___Done
0x693ADD: push    ebx
0x693ADE: push    edi
0x693ADF: nop
