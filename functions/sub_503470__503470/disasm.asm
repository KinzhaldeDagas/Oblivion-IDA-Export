0x503470: push    ecx
0x503471: mov     ecx, [esp+4+l]
0x503475: mov     edx, [esp+4+arg_10]
0x503479: lea     eax, [esp+4+var_4]
0x50347C: push    eax; UInt16
0x50347D: mov     eax, [esp+8+arg_C]
0x503481: push    ecx; l
0x503482: mov     ecx, [esp+0Ch+a4]
0x503486: push    edx; a6
0x503487: mov     edx, [esp+10h+a3]
0x50348B: push    eax; a5
0x50348C: mov     eax, [esp+14h+arg_4]
0x503490: push    ecx; a4
0x503491: mov     ecx, [esp+18h+a1]
0x503495: push    edx; a3
0x503496: push    eax; a2
0x503497: push    ecx; a1
0x503498: mov     dword ptr [esp+24h+var_4], 0
0x5034A0: call    Script_ExtractArgs; TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
0x5034A5: add     esp, 20h
0x5034A8: test    al, al
0x5034AA: jnz     short loc_5034AE
0x5034AC: pop     ecx
0x5034AD: retn
0x5034AE: mov     edx, [esp+4+arg_18]
0x5034B2: mov     eax, dword ptr [esp+4+var_4]
0x5034B5: mov     ecx, ds:0B333C4h
0x5034BB: push    edx
0x5034BC: push    0
0x5034BE: push    eax
0x5034BF: push    ecx
0x5034C0: call    GetIsClass_Eval; GetIsClass_Eval (index 68 / opcode 0x1044): requires the subject BaseForm to be TESNPC (form type 0x23), then pointer-compares NPC class at +0x104 with the Class parameter (typeID 0x10). Result is numeric 1 or 0.
0x5034C5: add     esp, 10h
0x5034C8: pop     ecx
0x5034C9: retn
