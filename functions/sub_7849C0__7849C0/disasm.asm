0x7849C0: push    ecx; Oblivion 1.2.0.416: stdcall adapter to the shared 0x18-byte uninitialized-copy primitive.
0x7849C1: mov     edx, [esp+4+destination]
0x7849C5: mov     byte ptr [esp+4+var_4], 0
0x7849C9: mov     eax, [esp+4+var_4]
0x7849CC: push    eax
0x7849CD: mov     eax, [esp+8+destination]
0x7849D1: push    edx
0x7849D2: mov     edx, [esp+0Ch+first]
0x7849D6: push    ecx
0x7849D7: mov     ecx, [esp+10h+last]
0x7849DB: push    eax; destination
0x7849DC: push    ecx; last
0x7849DD: push    edx; first
0x7849DE: call    OB_stVector24_UninitializedCopyRange_010201A0; Oblivion 1.2.0.416: placement/uninitialized copy of six-dword records; shared by stVec and branch-flare vector paths.
0x7849E3: add     esp, 1Ch
0x7849E6: retn    0Ch
