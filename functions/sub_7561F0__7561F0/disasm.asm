0x7561F0: mov     eax, [esp+arg_C]
0x7561F4: fld     [esp+arg_0]
0x7561F8: mov     edx, dword ptr [esp+arg_4]
0x7561FC: push    ebx
0x7561FD: push    esi
0x7561FE: push    edi
0x7561FF: mov     ebx, ecx
0x756201: mov     ecx, dword ptr [esp+0Ch+arg_8]
0x756205: push    eax; int
0x756206: push    ecx; char
0x756207: push    edx; char
0x756208: push    ecx
0x756209: mov     ecx, ebx
0x75620B: fstp    [esp+1Ch+var_1C]; float
0x75620E: call    sub_75ECB0
0x756213: fld     [esp+0Ch+arg_14]
0x756217: mov     ecx, [esp+0Ch+arg_1C]
0x75621B: fstp    dword ptr [ebx+30h]
0x75621E: fld     [esp+0Ch+arg_18]
0x756222: mov     eax, [esp+0Ch+arg_10]
0x756226: mov     edx, [esp+0Ch+arg_20]
0x75622A: fstp    dword ptr [ebx+34h]
0x75622D: fld     dword ptr ds:0A3D65Ch
0x756233: mov     [ebx+38h], ecx
0x756236: mov     ecx, [esp+0Ch+arg_28]
0x75623A: fst     dword ptr [ebx+50h]
0x75623D: fstp    dword ptr [ebx+54h]
0x756240: mov     [ebx+2Ch], eax
0x756243: mov     eax, [esp+0Ch+arg_24]
0x756247: fldz
0x756249: push    ecx
0x75624A: fstp    [esp+10h+var_10]; float
0x75624D: mov     [ebx+3Ch], edx
0x756250: mov     edx, [esp+10h+arg_2C]
0x756254: mov     [ebx+44h], ecx
0x756257: mov     [ebx+40h], eax
0x75625A: mov     eax, [esp+10h+arg_30]
0x75625E: mov     [ebx+48h], edx
0x756261: push    offset Vector3_InitValue?; int
0x756266: lea     ecx, [ebx+58h]
0x756269: mov     dword ptr [ebx], offset ??_7NiPSysPlanarCollider@@6B@; const NiPSysPlanarCollider::`vftable'
0x75626F: mov     [ebx+4Ch], eax
0x756272: call    sub_716DE0
0x756277: mov     ecx, ds:0B3F9A8h
0x75627D: mov     [ebx+68h], ecx
0x756280: mov     edx, ds:0B3F9ACh
0x756286: mov     [ebx+6Ch], edx
0x756289: mov     eax, ds:0B3F9B0h
0x75628E: mov     [ebx+70h], eax
0x756291: lea     edi, [ebx+74h]
0x756294: mov     ecx, 9
0x756299: mov     esi, (offset stru_B26AF0.unk2C+2A8h)
0x75629E: rep movsd
0x7562A0: lea     ecx, [ebx+98h]
0x7562A6: call    sub_718A50
0x7562AB: lea     ecx, [ebx+0CCh]
0x7562B1: call    sub_718A50
0x7562B6: pop     edi
0x7562B7: pop     esi
0x7562B8: mov     eax, ebx
0x7562BA: pop     ebx
0x7562BB: retn    34h ; '4'
