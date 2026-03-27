0x49E610: sub     esp, 114h
0x49E616: mov     eax, ds:0B30AACh
0x49E61B: xor     eax, esp
0x49E61D: mov     [esp+114h+var_4], eax
0x49E624: fld     [esp+114h+arg_0]
0x49E62B: push    esi
0x49E62C: fdiv    dword ptr ds:0B07040h
0x49E632: mov     esi, ecx
0x49E634: push    edi
0x49E635: mov     edi, [esp+11Ch+arg_4]
0x49E63C: fnstcw  [esp+11Ch+var_112]
0x49E640: movzx   eax, [esp+11Ch+var_112]
0x49E645: or      eax, 0C00h
0x49E64A: mov     dword ptr [esp+11Ch+var_110], eax
0x49E64E: fldcw   word ptr [esp+11Ch+var_110]
0x49E652: fistp   [esp+11Ch+var_110]
0x49E656: mov     eax, dword ptr [esp+11Ch+var_110]
0x49E65A: test    eax, eax
0x49E65C: mov     [esi+18h], eax
0x49E65F: fldcw   [esp+11Ch+var_112]
0x49E663: ja      short loc_49E66C
0x49E665: mov     dword ptr [esi+18h], 1
0x49E66C: fldz
0x49E66E: fcomp   dword ptr ds:0B07048h
0x49E674: fnstsw  ax
0x49E676: test    ah, 1
0x49E679: jnz     short loc_49E683
0x49E67B: fld1
0x49E67D: fstp    dword ptr ds:0B07048h
0x49E683: mov     eax, ds:0B070F0h
0x49E688: push    eax
0x49E689: push    offset aTextures; "Textures"
0x49E68E: lea     ecx, [esp+124h+var_108]
0x49E692: push    offset aSWaterS; "%s\\water\\%s"
0x49E697: push    ecx
0x49E698: call    __sprintf
0x49E69D: lea     eax, [esp+12Ch+var_108]
0x49E6A1: add     esp, 10h
0x49E6A4: lea     edx, [eax+1]
0x49E6A7: mov     cl, [eax]
0x49E6A9: add     eax, 1
0x49E6AC: test    cl, cl
0x49E6AE: jnz     short loc_49E6A7
0x49E6B0: sub     eax, edx
0x49E6B2: add     eax, 1
0x49E6B5: push    eax; Size
0x49E6B6: call    FormHeapAlloc
0x49E6BB: add     esp, 4
0x49E6BE: mov     [esi+0Ch], eax
0x49E6C1: lea     ecx, [esp+11Ch+var_108]
0x49E6C5: mov     edx, eax
0x49E6C7: mov     al, [ecx]
0x49E6C9: mov     [edx], al
0x49E6CB: add     ecx, 1
0x49E6CE: add     edx, 1
0x49E6D1: test    al, al
0x49E6D3: jnz     short loc_49E6C7
0x49E6D5: push    edi
0x49E6D6: mov     ecx, esi
0x49E6D8: call    sub_49B710
0x49E6DD: fld     [esp+11Ch+arg_0]
0x49E6E4: mov     edx, [esi+4]
0x49E6E7: push    ecx
0x49E6E8: fstp    [esp+120h+var_120]; float
0x49E6EB: push    edx; int
0x49E6EC: mov     ecx, esi
0x49E6EE: call    sub_49DD00
0x49E6F3: mov     ecx, ds:0B35230h
0x49E6F9: mov     eax, [ecx]
0x49E6FB: mov     edx, [esi+4]
0x49E6FE: mov     eax, [eax+84h]
0x49E704: push    1
0x49E706: push    edx
0x49E707: call    eax
0x49E709: mov     ecx, ds:0B333A0h
0x49E70F: mov     ecx, [ecx+18h]
0x49E712: test    ecx, ecx
0x49E714: jz      short loc_49E71F
0x49E716: mov     edx, [esi+4]
0x49E719: push    edx
0x49E71A: call    sub_708E40
0x49E71F: mov     ecx, [esi+4]
0x49E722: call    NiNode_UpdateDynamicEffectState
0x49E727: fldz
0x49E729: push    0; a3
0x49E72B: push    ecx
0x49E72C: mov     ecx, [esi+4]; this
0x49E72F: fstp    [esp+124h+a2]; a2
0x49E732: call    NiAVObject_UpdateNiAVObject
0x49E737: mov     ecx, [esp+11Ch+var_4]
0x49E73E: pop     edi
0x49E73F: pop     esi
0x49E740: xor     ecx, esp
0x49E742: call    @__security_check_cookie@4; __security_check_cookie(x)
0x49E747: add     esp, 114h
0x49E74D: retn    8
