0x8AEC30: push    0FFFFFFFFh
0x8AEC32: push    offset ??1bhkEntity@@UAE@XZ_SEH
0x8AEC37: mov     eax, large fs:0
0x8AEC3D: push    eax
0x8AEC3E: push    ecx
0x8AEC3F: push    esi
0x8AEC40: mov     eax, ds:0B30AACh
0x8AEC45: xor     eax, esp
0x8AEC47: push    eax
0x8AEC48: lea     eax, [esp+18h+var_C]
0x8AEC4C: mov     large fs:0, eax
0x8AEC52: mov     esi, ecx
0x8AEC54: mov     [esp+18h+var_10], esi
0x8AEC58: mov     dword ptr [esi], offset ??_7bhkPhantom@@6B@; const bhkPhantom::`vftable'
0x8AEC5E: mov     [esp+18h+var_4], 0
0x8AEC66: call    sub_89D700
0x8AEC6B: sub     dword ptr ds:0BA7F5Ch, 1
0x8AEC72: mov     ecx, esi; this
0x8AEC74: mov     [esp+18h+var_4], 0FFFFFFFFh
0x8AEC7C: call    ??1bhkWorldObject@@UAE@XZ; bhkWorldObject::~bhkWorldObject(void)
0x8AEC81: mov     ecx, [esp+18h+var_C]
0x8AEC85: mov     large fs:0, ecx
0x8AEC8C: pop     ecx
0x8AEC8D: pop     esi
0x8AEC8E: add     esp, 10h
0x8AEC91: retn
