0x503270: push    ecx
0x503271: mov     ecx, [esp+4+l]
0x503275: mov     edx, [esp+4+arg_10]
0x503279: push    esi
0x50327A: mov     esi, [esp+8+a4]
0x50327E: lea     eax, [esp+8+var_4]
0x503282: push    eax; UInt16
0x503283: mov     eax, [esp+0Ch+arg_C]
0x503287: push    ecx; l
0x503288: mov     ecx, [esp+10h+a3]
0x50328C: push    edx; a6
0x50328D: mov     edx, [esp+14h+arg_4]
0x503291: push    eax; a5
0x503292: mov     eax, [esp+18h+a1]
0x503296: push    esi; a4
0x503297: push    ecx; a3
0x503298: push    edx; a2
0x503299: push    eax; a1
0x50329A: mov     dword ptr [esp+28h+var_4], 0
0x5032A2: call    Script_ExtractArgs; TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
0x5032A7: add     esp, 20h
0x5032AA: test    al, al
0x5032AC: jnz     short loc_5032B1
0x5032AE: pop     esi
0x5032AF: pop     ecx
0x5032B0: retn
0x5032B1: mov     ecx, [esp+8+arg_18]
0x5032B5: mov     edx, dword ptr [esp+8+var_4]
0x5032B9: push    ecx
0x5032BA: push    0
0x5032BC: push    edx
0x5032BD: push    esi
0x5032BE: call    GetIsClass_Eval; GetIsClass_Eval (index 68 / opcode 0x1044): requires the subject BaseForm to be TESNPC (form type 0x23), then pointer-compares NPC class at +0x104 with the Class parameter (typeID 0x10). Result is numeric 1 or 0.
0x5032C3: add     esp, 10h
0x5032C6: pop     esi
0x5032C7: pop     ecx
0x5032C8: retn
