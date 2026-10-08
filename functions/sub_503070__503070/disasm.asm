0x503070: push    ecx
0x503071: mov     ecx, [esp+4+l]
0x503075: mov     edx, [esp+4+arg_10]
0x503079: push    esi
0x50307A: mov     esi, [esp+8+a4]
0x50307E: lea     eax, [esp+8+var_4]
0x503082: push    eax; UInt16
0x503083: mov     eax, [esp+0Ch+arg_C]
0x503087: push    ecx; l
0x503088: mov     ecx, [esp+10h+a3]
0x50308C: push    edx; a6
0x50308D: mov     edx, [esp+14h+arg_4]
0x503091: push    eax; a5
0x503092: mov     eax, [esp+18h+a1]
0x503096: push    esi; a4
0x503097: push    ecx; a3
0x503098: push    edx; a2
0x503099: push    eax; a1
0x50309A: mov     dword ptr [esp+28h+var_4], 0
0x5030A2: call    Script_ExtractArgs; TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
0x5030A7: add     esp, 20h
0x5030AA: test    al, al
0x5030AC: jnz     short loc_5030B1
0x5030AE: pop     esi
0x5030AF: pop     ecx
0x5030B1: mov     ecx, [esp+8+arg_18]
0x5030B5: mov     edx, dword ptr [esp+8+var_4]
0x5030B9: push    ecx
0x5030BA: push    0
0x5030BC: push    edx
0x5030BD: push    esi
0x5030BE: call    GetInCell_Eval; Shared GetInCell/GetInCellParam evaluator (553 and 4 vanilla core-root CTDAs, respectively). Param1 must be a Cell form. If param2 is a reference in Oblivion form-type range 0x31..0x33, test that reference; otherwise use the condition subject. Resolve its cell and compare editor-name strings case-insensitively over the requested Cell name length (a prefix comparison), not FormID pointer identity. GetInCellParam can run without a subject because it has an explicit ObjectReferenceID param2. Fallout analogue x4y6:0x823B6270 uses the same name comparison but recognizes reference type range 0x3A..0x40 or 0x69.
0x5030C3: add     esp, 10h
0x5030C6: pop     esi
0x5030C7: pop     ecx
0x5030C8: retn
