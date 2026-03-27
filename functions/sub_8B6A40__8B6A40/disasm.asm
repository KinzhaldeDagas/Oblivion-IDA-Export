0x8B6A40: push    ebp
0x8B6A41: mov     ebp, esp
0x8B6A43: and     esp, 0FFFFFFF0h
0x8B6A46: push    0FFFFFFFFh
0x8B6A48: push    offset SEH_8B6A40
0x8B6A4D: mov     eax, large fs:0
0x8B6A53: push    eax
0x8B6A54: sub     esp, 40h
0x8B6A57: mov     eax, ds:0B30AACh
0x8B6A5C: xor     eax, esp
0x8B6A5E: mov     [esp+4Ch+var_14], eax
0x8B6A62: push    esi
0x8B6A63: mov     eax, ds:0B30AACh
0x8B6A68: xor     eax, esp
0x8B6A6A: push    eax
0x8B6A6B: lea     eax, [esp+54h+var_C]
0x8B6A6F: mov     large fs:0, eax
0x8B6A75: mov     esi, ecx
0x8B6A77: mov     [esp+54h+var_44], esi
0x8B6A7B: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x8B6A80: mov     dword ptr [esi], offset ??_7bhkShape@@6B@; const bhkShape::`vftable'
0x8B6A86: xor     eax, eax
0x8B6A88: mov     ecx, 1
0x8B6A8D: mov     [esi+0Ch], eax
0x8B6A90: mov     [esi+10h], eax
0x8B6A93: add     ds:0BA7D70h, ecx
0x8B6A99: mov     dword ptr [esi], offset ??_7bhkSphereRepShape@@6B@; const bhkSphereRepShape::`vftable'
0x8B6A9F: add     ds:0BA7F44h, ecx
0x8B6AA5: mov     dword ptr [esi], offset ??_7bhkConvexShape@@6B@; const bhkConvexShape::`vftable'
0x8B6AAB: add     ds:0BA7F50h, ecx
0x8B6AB1: mov     dword ptr [esi], offset ??_7bhkCapsuleShape@@6B@; const bhkCapsuleShape::`vftable'
0x8B6AB7: mov     [esp+54h+var_4], eax
0x8B6ABB: mov     eax, [ebp+arg_0]
0x8B6ABE: fld     dword ptr [eax]
0x8B6AC0: push    ecx
0x8B6AC1: fld     qword ptr ds:0A39088h
0x8B6AC7: lea     ecx, [esp+58h+var_30]
0x8B6ACB: fmul    st(1), st
0x8B6ACD: fxch    st(1)
0x8B6ACF: fstp    [esp+58h+var_30]
0x8B6AD3: fld     dword ptr [eax+4]
0x8B6AD6: fmul    st, st(1)
0x8B6AD8: fstp    [esp+58h+var_2C]
0x8B6ADC: fld     dword ptr [eax+8]
0x8B6ADF: mov     eax, [ebp+arg_4]
0x8B6AE2: fmul    st, st(1)
0x8B6AE4: fstp    [esp+58h+var_28]
0x8B6AE8: fld     dword ptr [eax]
0x8B6AEA: fmul    st, st(1)
0x8B6AEC: fstp    [esp+58h+var_40]
0x8B6AF0: fld     dword ptr [eax+4]
0x8B6AF3: fmul    st, st(1)
0x8B6AF5: fstp    [esp+58h+var_3C]
0x8B6AF9: fld     dword ptr [eax+8]
0x8B6AFC: lea     eax, [esp+58h+var_40]
0x8B6B00: fmul    st, st(1)
0x8B6B02: fstp    [esp+58h+var_38]
0x8B6B06: fmul    [ebp+arg_8]
0x8B6B09: fstp    [esp+58h+var_48]
0x8B6B0D: fld     [esp+58h+var_48]
0x8B6B11: fstp    [esp+58h+var_58]; float
0x8B6B14: push    eax; int
0x8B6B15: push    ecx; float
0x8B6B16: mov     ecx, esi
0x8B6B18: call    sub_8B6980
0x8B6B1D: mov     eax, esi
0x8B6B1F: mov     ecx, [esp+54h+var_C]
0x8B6B23: mov     large fs:0, ecx
0x8B6B2A: pop     ecx
0x8B6B2B: pop     esi
0x8B6B2C: mov     ecx, [esp+4Ch+var_14]
0x8B6B30: xor     ecx, esp
0x8B6B32: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8B6B37: mov     esp, ebp
0x8B6B39: pop     ebp
0x8B6B3A: retn    0Ch
