0x4A0F30: push    0FFFFFFFFh
0x4A0F32: push    offset SEH_741A50
0x4A0F37: mov     eax, large fs:0
0x4A0F3D: push    eax
0x4A0F3E: push    ecx
0x4A0F3F: push    esi
0x4A0F40: mov     eax, ds:0B30AACh
0x4A0F45: xor     eax, esp
0x4A0F47: push    eax
0x4A0F48: lea     eax, [esp+18h+var_C]
0x4A0F4C: mov     large fs:0, eax
0x4A0F52: mov     esi, ecx
0x4A0F54: mov     [esp+18h+var_10], esi
0x4A0F58: push    0
0x4A0F5A: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x4A0F5F: mov     ecx, esi
0x4A0F61: mov     [esp+18h+var_4], 0
0x4A0F69: mov     dword ptr [esi], offset ??_7BSFadeNode@@6B@; const BSFadeNode::`vftable'
0x4A0F6F: call    sub_4A07E0
0x4A0F74: mov     eax, esi
0x4A0F76: mov     ecx, [esp+18h+var_C]
0x4A0F7A: mov     large fs:0, ecx
0x4A0F81: pop     ecx
0x4A0F82: pop     esi
0x4A0F83: add     esp, 10h
0x4A0F86: retn
