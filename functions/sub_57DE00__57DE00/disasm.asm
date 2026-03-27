0x57DE00: sub     esp, 8
0x57DE03: push    esi
0x57DE04: mov     esi, ecx
0x57DE06: call    FontManager_GetSingleton
0x57DE0B: fld     dword ptr ds:0A68D9Ch
0x57DE11: push    0
0x57DE13: push    0
0x57DE15: push    ecx
0x57DE16: fstp    [esp+18h+var_18]
0x57DE19: push    0FFFFFFFFh
0x57DE1B: lea     ecx, [esp+1Ch+var_4]
0x57DE1F: push    ecx
0x57DE20: mov     ecx, [esp+20h+arg_0]
0x57DE24: lea     edx, [esp+20h+var_8]
0x57DE28: push    edx
0x57DE29: mov     edx, [esi+14h]
0x57DE2C: push    ecx
0x57DE2D: mov     ecx, [eax+edx*4]
0x57DE30: call    sub_5739C0
0x57DE35: fld     dword ptr [esp+0Ch+var_8]
0x57DE39: call    Double_To_SInt32
0x57DE3E: xor     ecx, ecx
0x57DE40: cmp     eax, [esi+0Ch]
0x57DE43: pop     esi
0x57DE44: setle   cl
0x57DE47: mov     al, cl
0x57DE49: add     esp, 8
0x57DE4C: retn    4
