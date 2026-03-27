0x709640: push    0FFFFFFFFh
0x709642: push    offset ??1NiMaterialProperty@@UAE@XZ_SEH
0x709647: mov     eax, large fs:0
0x70964D: push    eax
0x70964E: push    ecx
0x70964F: push    esi
0x709650: mov     eax, ds:0B30AACh
0x709655: xor     eax, esp
0x709657: push    eax
0x709658: lea     eax, [esp+18h+var_C]
0x70965C: mov     large fs:0, eax
0x709662: mov     esi, ecx
0x709664: mov     [esp+18h+var_10], esi
0x709668: mov     dword ptr [esi], offset ??_7NiMaterialProperty@@6B@; const NiMaterialProperty::`vftable'
0x70966E: push    esi
0x70966F: mov     [esp+1Ch+var_4], 0
0x709677: call    sub_7014C0
0x70967C: add     esp, 4
0x70967F: mov     ecx, esi; this
0x709681: mov     [esp+18h+var_4], 0FFFFFFFFh
0x709689: call    ??1NiDitherProperty@@UAE@XZ; NiDitherProperty::~NiDitherProperty(void)
0x70968E: mov     ecx, [esp+18h+var_C]
0x709692: mov     large fs:0, ecx
0x709699: pop     ecx
0x70969A: pop     esi
0x70969B: add     esp, 10h
0x70969E: retn
