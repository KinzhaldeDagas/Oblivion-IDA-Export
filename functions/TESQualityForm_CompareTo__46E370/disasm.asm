0x46E370: push    ecx
0x46E371: mov     eax, [esp+4+arg_0]
0x46E375: push    esi
0x46E376: push    0; int
0x46E378: push    offset ??_R0?AVTESQualityForm@@@8; struct TypeDescriptor *
0x46E37D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46E382: push    0; int
0x46E384: push    eax; void *
0x46E385: mov     esi, ecx
0x46E387: call    OblivionDynamicCast
0x46E38C: add     esp, 14h
0x46E38F: test    eax, eax
0x46E391: jnz     short loc_46E39A
0x46E393: mov     al, 1
0x46E395: pop     esi
0x46E396: pop     ecx
0x46E397: retn    4
0x46E39A: fld     dword ptr [eax+4]
0x46E39D: fnstcw  word ptr [esp+8+arg_0]
0x46E3A1: movzx   eax, word ptr [esp+8+arg_0]
0x46E3A6: or      eax, 0C00h
0x46E3AB: mov     [esp+8+var_4], eax
0x46E3AF: fldcw   word ptr [esp+8+var_4]
0x46E3B3: fistp   [esp+8+var_4]
0x46E3B7: mov     cl, byte ptr [esp+8+var_4]
0x46E3BB: fldcw   word ptr [esp+8+arg_0]
0x46E3BF: fld     dword ptr [esi+4]
0x46E3C2: fnstcw  word ptr [esp+8+arg_0]
0x46E3C6: pop     esi
0x46E3C7: movzx   eax, word ptr [esp+4+arg_0]
0x46E3CC: or      eax, 0C00h
0x46E3D1: mov     [esp+4+var_4], eax
0x46E3D4: fldcw   word ptr [esp+4+var_4]
0x46E3D7: fistp   [esp+4+var_4]
0x46E3DA: mov     dl, byte ptr [esp+4+var_4]
0x46E3DD: cmp     dl, cl
0x46E3DF: setnz   al
0x46E3E2: fldcw   word ptr [esp+4+arg_0]
0x46E3E6: pop     ecx
0x46E3E7: retn    4
