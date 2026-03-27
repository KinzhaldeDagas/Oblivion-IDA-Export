0x4EFE40: sub     esp, 8
0x4EFE43: mov     eax, [esp+8+arg_0]
0x4EFE47: fld     dword ptr [eax]
0x4EFE49: fstp    [esp+8+var_8]
0x4EFE4C: fld     [esp+8+var_8]
0x4EFE4F: fistp   [esp+8+arg_0]
0x4EFE53: fld     dword ptr [eax+4]
0x4EFE56: fstp    [esp+8+var_4]
0x4EFE5A: fld     [esp+8+var_4]
0x4EFE5E: fistp   [esp+8+var_8]
0x4EFE61: mov     eax, [esp+8+arg_0]
0x4EFE65: mov     ecx, [esp+8+var_8]
0x4EFE68: sar     eax, 0Ch
0x4EFE6B: movsx   eax, ax
0x4EFE6E: sar     ecx, 0Ch
0x4EFE71: movzx   edx, cx
0x4EFE74: shl     eax, 10h
0x4EFE77: or      eax, edx
0x4EFE79: add     esp, 8
0x4EFE7C: retn
