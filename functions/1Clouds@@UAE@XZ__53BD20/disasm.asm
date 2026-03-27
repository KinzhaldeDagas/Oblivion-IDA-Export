0x53BD20: push    0FFFFFFFFh
0x53BD22: push    offset ??1Clouds@@UAE@XZ_SEH
0x53BD27: mov     eax, large fs:0
0x53BD2D: push    eax
0x53BD2E: push    ecx
0x53BD2F: push    esi
0x53BD30: mov     eax, ds:0B30AACh
0x53BD35: xor     eax, esp
0x53BD37: push    eax
0x53BD38: lea     eax, [esp+18h+var_C]
0x53BD3C: mov     large fs:0, eax
0x53BD42: mov     esi, ecx
0x53BD44: mov     [esp+18h+var_10], esi
0x53BD48: mov     dword ptr [esi], offset ??_7Clouds@@6B@; const Clouds::`vftable'
0x53BD4E: mov     [esp+18h+var_4], 2
0x53BD56: call    sub_53B6E0
0x53BD5B: mov     ecx, esi
0x53BD5D: call    sub_53BBC0
0x53BD62: push    offset sub_7016A0; void (__thiscall *)(void *)
0x53BD67: push    2; int
0x53BD69: push    4; unsigned int
0x53BD6B: lea     eax, [esi+10h]
0x53BD6E: push    eax; void *
0x53BD6F: mov     byte ptr [esp+28h+var_4], 1
0x53BD74: call    $LN21
0x53BD79: push    offset sub_7016A0; void (__thiscall *)(void *)
0x53BD7E: push    2; int
0x53BD80: push    4; unsigned int
0x53BD82: lea     ecx, [esi+8]
0x53BD85: push    ecx; void *
0x53BD86: mov     byte ptr [esp+28h+var_4], 0
0x53BD8B: call    $LN21
0x53BD90: mov     ecx, esi; this
0x53BD92: mov     [esp+18h+var_4], 0FFFFFFFFh
0x53BD9A: call    ??1SkyObject@@UAE@XZ; SkyObject::~SkyObject(void)
0x53BD9F: mov     ecx, [esp+18h+var_C]
0x53BDA3: mov     large fs:0, ecx
0x53BDAA: pop     ecx
0x53BDAB: pop     esi
0x53BDAC: add     esp, 10h
0x53BDAF: retn
