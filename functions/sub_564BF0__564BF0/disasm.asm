0x564BF0: push    0FFFFFFFFh
0x564BF2: push    offset ??1bhkConvexTransformShape@@UAE@XZ_SEH
0x564BF7: mov     eax, large fs:0
0x564BFD: push    eax
0x564BFE: push    ecx
0x564BFF: push    esi
0x564C00: mov     eax, ds:0B30AACh
0x564C05: xor     eax, esp
0x564C07: push    eax
0x564C08: lea     eax, [esp+18h+var_C]
0x564C0C: mov     large fs:0, eax
0x564C12: mov     esi, ecx
0x564C14: mov     [esp+18h+var_10], esi
0x564C18: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x564C1D: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x564C23: xor     eax, eax
0x564C25: mov     ecx, 1
0x564C2A: mov     [esi+0Ch], eax
0x564C2D: mov     [esi+10h], eax
0x564C30: add     ds:0BA7D70h, ecx
0x564C36: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x564C3C: add     ds:0BA7F44h, ecx
0x564C42: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x564C48: add     ds:0BA7F50h, ecx
0x564C4E: mov     [esp+18h+var_4], eax
0x564C52: mov     eax, [esp+18h+arg_0]
0x564C56: mov     dword ptr [esi], offset ??_7bhkBoxShape@@6B@; const bhkBoxShape::`vftable'
0x564C5C: add     ds:0BA7FF4h, ecx
0x564C62: push    eax
0x564C63: mov     ecx, esi
0x564C65: call    sub_564080
0x564C6A: mov     eax, esi
0x564C6C: mov     ecx, [esp+18h+var_C]
0x564C70: mov     large fs:0, ecx
0x564C77: pop     ecx
0x564C78: pop     esi
0x564C79: add     esp, 10h
0x564C7C: retn    4
