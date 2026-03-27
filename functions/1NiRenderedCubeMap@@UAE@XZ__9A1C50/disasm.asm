0x9A1C50: push    0FFFFFFFFh
0x9A1C52: push    offset ??1NiRenderedCubeMap@@UAE@XZ_SEH
0x9A1C57: mov     eax, large fs:0
0x9A1C5D: push    eax
0x9A1C5E: push    ecx
0x9A1C5F: push    esi
0x9A1C60: mov     eax, ___security_cookie
0x9A1C65: xor     eax, esp
0x9A1C67: push    eax
0x9A1C68: lea     eax, [esp+18h+var_C]
0x9A1C6C: mov     large fs:0, eax
0x9A1C72: mov     esi, ecx
0x9A1C74: mov     [esp+18h+var_10], esi
0x9A1C78: push    offset sub_7016A0; void (__thiscall *)(void *)
0x9A1C7D: push    6; int
0x9A1C7F: push    4; unsigned int
0x9A1C81: lea     eax, [esi+44h]
0x9A1C84: push    eax; void *
0x9A1C85: mov     [esp+28h+var_4], 0
0x9A1C8D: call    $LN21
0x9A1C92: mov     ecx, esi; this
0x9A1C94: mov     [esp+18h+var_4], 0FFFFFFFFh
0x9A1C9C: call    ??1NiRenderedTexture@@UAE@XZ; NiRenderedTexture::~NiRenderedTexture(void)
0x9A1CA1: mov     ecx, [esp+18h+var_C]
0x9A1CA5: mov     large fs:0, ecx
0x9A1CAC: pop     ecx
0x9A1CAD: pop     esi
0x9A1CAE: add     esp, 10h
0x9A1CB1: retn
