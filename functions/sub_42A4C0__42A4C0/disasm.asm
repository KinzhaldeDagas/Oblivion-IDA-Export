0x42A4C0: sub     esp, 0Ch; Verified 0x18-byte Oblivion ExtraDistantData: EType byte +4 is 0x18, next pointer +8, and normal_00C occupies +0x0C..+0x17. The constructor's default normal is (0,0,0.97); this matches Fallout's LandNormal offset +0x0C and default vector, while the EType differs (Oblivion 0x18, Fallout 0x13).
0x42A4C3: fldz
0x42A4C5: mov     eax, ecx
0x42A4C7: fst     [esp+0Ch+var_C]
0x42A4CA: mov     byte ptr [eax+4], 18h
0x42A4CE: mov     ecx, [esp+0Ch+var_C]
0x42A4D1: fstp    [esp+0Ch+var_8]
0x42A4D5: fld     ds:kDistantLODNormalLimit_097
0x42A4DB: mov     edx, [esp+0Ch+var_8]
0x42A4DF: mov     [eax+0Ch], ecx
0x42A4E2: fstp    [esp+0Ch+var_4]
0x42A4E6: mov     ecx, [esp+0Ch+var_4]
0x42A4EA: mov     [eax+10h], edx
0x42A4ED: mov     dword ptr [eax+8], 0
0x42A4F4: mov     dword ptr [eax], offset ??_7ExtraDistantData@@6B@; const ExtraDistantData::`vftable'
0x42A4FA: mov     [eax+14h], ecx; Verified initializes ExtraDistantData.normal_00C.z at +0x14 to 0.97; this is the default +Z normal component, not a separate unknown scalar.
0x42A4FD: add     esp, 0Ch
0x42A500: retn
