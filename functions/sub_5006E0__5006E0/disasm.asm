0x5006E0: mov     ecx, [esp+l]
0x5006E4: fldz
0x5006E6: mov     edx, [esp+arg_10]
0x5006EA: push    esi
0x5006EB: mov     esi, [esp+4+a4]
0x5006EF: push    edi
0x5006F0: mov     edi, dword ptr [esp+8+arg_18]
0x5006F4: lea     eax, [esp+8+arg_18]
0x5006F8: fstp    qword ptr [edi]
0x5006FA: push    eax; UInt16
0x5006FB: mov     eax, [esp+0Ch+arg_C]
0x5006FF: push    ecx; l
0x500700: mov     ecx, [esp+10h+a3]
0x500704: push    edx; a6
0x500705: mov     edx, [esp+14h+arg_4]
0x500709: push    eax; a5
0x50070A: mov     eax, [esp+18h+a1]
0x50070E: push    esi; a4
0x50070F: push    ecx; a3
0x500710: push    edx; a2
0x500711: push    eax; a1
0x500712: mov     dword ptr [esp+28h+arg_18], 0
0x50071A: call    Script_ExtractArgs
0x50071F: add     esp, 20h
0x500722: test    al, al
0x500724: jnz     short loc_500729
0x500726: pop     edi
0x500727: pop     esi
0x500728: retn
0x500729: test    esi, esi
0x50072B: jz      short loc_500745
0x50072D: cmp     dword ptr [esp+8+arg_18], 0
0x500732: jz      short loc_500745
0x500734: mov     ecx, esi; this
0x500736: call    sub_4D8360
0x50073B: cmp     dword ptr [esp+8+arg_18], eax
0x50073F: jnz     short loc_500745
0x500741: fld1
0x500743: fstp    qword ptr [edi]
0x500745: cmp     byte ptr ds:0B361ACh, 0
0x50074C: jz      short loc_500763
0x50074E: fld     qword ptr [edi]
0x500750: sub     esp, 8
0x500753: fstp    [esp+10h+var_10]
0x500756: push    offset aIsactionref0_2; "IsActionRef >> %0.2f"
0x50075B: call    Interface_ConsolePrint
0x500760: add     esp, 0Ch
0x500763: pop     edi
0x500764: mov     al, 1
0x500766: pop     esi
0x500767: retn
