0x53A130: push    0FFFFFFFFh
0x53A132: push    offset ??0WeaponObject@@QAE@XZ_SEH
0x53A137: mov     eax, large fs:0
0x53A13D: push    eax
0x53A13E: push    ecx
0x53A13F: push    esi
0x53A140: push    edi
0x53A141: mov     eax, ds:0B30AACh
0x53A146: xor     eax, esp
0x53A148: push    eax
0x53A149: lea     eax, [esp+1Ch+var_C]
0x53A14D: mov     large fs:0, eax
0x53A153: mov     esi, ecx
0x53A155: mov     [esp+1Ch+var_10], esi
0x53A159: mov     edi, [esp+1Ch+arg_8]
0x53A15D: push    edi
0x53A15E: call    sub_88EBD0
0x53A163: fld     [esp+1Ch+arg_4]
0x53A167: mov     eax, [esp+1Ch+arg_C]
0x53A16B: push    edi; int
0x53A16C: push    eax; int
0x53A16D: sub     esp, 8
0x53A170: fstp    [esp+2Ch+var_28]; float
0x53A174: mov     ecx, esi
0x53A176: fld     [esp+2Ch+arg_0]
0x53A17A: mov     [esp+2Ch+var_4], 0
0x53A182: fstp    [esp+2Ch+var_2C]; float
0x53A185: mov     dword ptr [esi], offset ??_7WeaponObject@@6B@; const WeaponObject::`vftable'
0x53A18B: call    sub_539E00
0x53A190: mov     eax, esi
0x53A192: mov     ecx, [esp+1Ch+var_C]
0x53A196: mov     large fs:0, ecx
0x53A19D: pop     ecx
0x53A19E: pop     edi
0x53A19F: pop     esi
0x53A1A0: add     esp, 10h
0x53A1A3: retn    10h
