0x8A0E80: push    0FFFFFFFFh
0x8A0E82: push    offset ??1bhkPackedNiTriStripsShape@@UAE@XZ_SEH
0x8A0E87: mov     eax, large fs:0
0x8A0E8D: push    eax
0x8A0E8E: push    ecx
0x8A0E8F: push    esi
0x8A0E90: mov     eax, ds:0B30AACh
0x8A0E95: xor     eax, esp
0x8A0E97: push    eax
0x8A0E98: lea     eax, [esp+18h+var_C]
0x8A0E9C: mov     large fs:0, eax
0x8A0EA2: mov     esi, ecx
0x8A0EA4: mov     [esp+18h+var_10], esi
0x8A0EA8: mov     dword ptr [esi], offset ??_7bhkListShape@@6B@; const bhkListShape::`vftable'
0x8A0EAE: mov     [esp+18h+var_4], 0
0x8A0EB6: call    sub_89D700
0x8A0EBB: sub     dword ptr ds:0BA7D58h, 1
0x8A0EC2: mov     ecx, esi; this
0x8A0EC4: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8A0ECC: call    ??1bhkShapeCollection@@UAE@XZ; bhkShapeCollection::~bhkShapeCollection(void)
0x8A0ED1: mov     ecx, [esp+18h+var_C]
0x8A0ED5: mov     large fs:0, ecx
0x8A0EDC: pop     ecx
0x8A0EDD: pop     esi
0x8A0EDE: add     esp, 10h
0x8A0EE1: retn
