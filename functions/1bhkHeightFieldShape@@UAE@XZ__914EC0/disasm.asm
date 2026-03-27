0x914EC0: push    0FFFFFFFFh
0x914EC2: push    offset ??1bhkShapeCollection@@UAE@XZ_SEH
0x914EC7: mov     eax, large fs:0
0x914ECD: push    eax
0x914ECE: push    ecx
0x914ECF: push    esi
0x914ED0: mov     eax, ds:0B30AACh
0x914ED5: xor     eax, esp
0x914ED7: push    eax
0x914ED8: lea     eax, [esp+18h+var_C]
0x914EDC: mov     large fs:0, eax
0x914EE2: mov     esi, ecx
0x914EE4: mov     [esp+18h+var_10], esi
0x914EE8: mov     dword ptr [esi], offset ??_7bhkHeightFieldShape@@6B@; const bhkHeightFieldShape::`vftable'
0x914EEE: mov     [esp+18h+var_4], 0
0x914EF6: call    sub_89D700
0x914EFB: sub     dword ptr ds:0BA8400h, 1
0x914F02: mov     ecx, esi; this
0x914F04: mov     [esp+18h+var_4], 0FFFFFFFFh
0x914F0C: call    ??1bhkShape@@UAE@XZ; bhkShape::~bhkShape(void)
0x914F11: mov     ecx, [esp+18h+var_C]
0x914F15: mov     large fs:0, ecx
0x914F1C: pop     ecx
0x914F1D: pop     esi
0x914F1E: add     esp, 10h
0x914F21: retn
