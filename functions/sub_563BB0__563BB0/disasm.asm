0x563BB0: push    0FFFFFFFFh
0x563BB2: push    offset SEH_563BB0
0x563BB7: mov     eax, large fs:0
0x563BBD: push    eax
0x563BBE: push    ecx
0x563BBF: push    esi
0x563BC0: push    edi
0x563BC1: mov     eax, ds:0B30AACh
0x563BC6: xor     eax, esp
0x563BC8: push    eax
0x563BC9: lea     eax, [esp+1Ch+var_C]
0x563BCD: mov     large fs:0, eax
0x563BD3: mov     esi, ecx
0x563BD5: mov     [esp+1Ch+var_10], esi
0x563BD9: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x563BDE: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x563BE4: xor     eax, eax
0x563BE6: mov     edi, 1
0x563BEB: mov     [esi+0Ch], eax
0x563BEE: mov     [esi+10h], eax
0x563BF1: add     ds:0BA7D70h, edi
0x563BF7: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x563BFD: add     ds:0BA7F44h, edi
0x563C03: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x563C09: add     ds:0BA7F50h, edi
0x563C0F: mov     [esp+1Ch+var_4], eax
0x563C13: mov     eax, [esp+1Ch+arg_0]
0x563C17: push    eax
0x563C18: mov     ecx, esi
0x563C1A: mov     dword ptr [esi], offset ??_7bhkCapsuleShape@@6B@; const bhkCapsuleShape::`vftable'
0x563C20: call    sub_8B6B90
0x563C25: add     ds:0BA7FD4h, edi
0x563C2B: mov     eax, esi
0x563C2D: mov     ecx, [esp+1Ch+var_C]
0x563C31: mov     large fs:0, ecx
0x563C38: pop     ecx
0x563C39: pop     edi
0x563C3A: pop     esi
0x563C3B: add     esp, 10h
0x563C3E: retn    4
